<?php

/**
 * @file
 * Twitter functionalities.
 */

/**
 * This is the starting point for the tweets.
 *
 * From here we are going to retrieve the posts and render them,
 *
 * @param array $values
 *   The values entered in the field.
 * @param array $field_instance
 *   Field instance array.
 *
 * @return array|bool
 *   The array with items, or FALSE if empty.
 */
function _social_feed_field_twitter(array $values, array $field_instance) {
  $items = _social_feed_field_get_twitter_data($values, $field_instance);
  if (!empty($items)) {
    return $items;
  }

  return FALSE;
}

/**
 * From here we are going to retrieve and render the posts.
 *
 * @param array $values
 *   The values entered in the field.
 * @param array $field_instance
 *   Field instance array.
 *
 * @return array|bool
 *   The array with items, or FALSE if empty.
 */
function _social_feed_field_get_twitter_data(array $values, array $field_instance) {
  $cid = 'social_feed_field::' . $values['social_feed_field_type'] . '::' . $values['social_feed_field_search'] . '::' . $values['social_feed_field_number'];
  $cache = cache_get($cid);

  if (!empty($cache) && $cache->expire > time()) {
    $data = $cache->data;
  }
  else {
    $admin_values = social_feed_field_get_admin_values('twitter');

    $search = $values['social_feed_field_search'];
    $type = drupal_substr($search, 0, 1);

    $data = FALSE;

    switch ($type) {
      case '@':
        // Username search.
        $url = 'https://api.twitter.com/1.1/statuses/user_timeline.json';
        $screenname = drupal_substr($search, 1);
        $url .= _social_feed_field_generate_twitter_auth_url_params($url, $values['social_feed_field_number'], array('screen_name' => $screenname));

        $request = social_feed_field_do_request($url);
        if ($request->code >= 200 && $request->code < 400) {
          $json = json_decode($request->data);
          if (!empty($json)) {
            $data = $json;
          }
        }
        break;

      default:
        // Hashtag/term search.
        $url = 'https://api.twitter.com/1.1/search/tweets.json';
        $url .= _social_feed_field_generate_twitter_auth_url_params($url, $values['social_feed_field_number'], array('q' => $search));

        $request = social_feed_field_do_request($url);
        if ($request->code >= 200 && $request->code < 400) {
          $json = json_decode($request->data);
          if (!empty($json)) {
            $data = $json->statuses;
          }
        }
    }

    cache_set($cid, $data, 'cache', REQUEST_TIME + $admin_values['cache_lifetime']);
  }

  if (!empty($data) && !isset($data->errors)) {
    $tweets = array();
    foreach ($data as $tweet) {
      $tweet_obj = _social_feed_field_build_tweet_obj($tweet);
      $tweets[$tweet_obj->created_at] = theme('social_feed_field_twitter_item', array('tweet' => $tweet_obj, 'field_instance' => $field_instance));
    }

    return $tweets;
  }
  elseif (isset($data->errors)) {
    $message = array('Twitter error');
    foreach ($data->errors as $error) {
      $message[] = t('Code: @code: !message', array(
        '@code' => $error->code,
        '!message' => $error->message,
      ));
    }
    drupal_set_message(implode('<br />', $message), 'error');

    return FALSE;
  }
  else {
    return FALSE;
  }
}

/**
 * This function builds a tweet object we can use.
 */
function _social_feed_field_build_tweet_obj($tweet) {
  $return = new stdClass();
  $return->text = _social_feed_field_twitter_url_converter($tweet->text);
  $return->user_screenname = $tweet->user->screen_name;
  $return->user_name = $tweet->user->name;
  $return->created_at = strtotime($tweet->created_at);
  $return->videos = _social_feed_field_twitter_fetch_video_urls($tweet);
  $return->photos = _social_feed_field_twitter_fetch_photos($tweet);

  return $return;
}

/**
 * Build the parameters we use to make a call to twitter.
 *
 * @param string $base_path
 *   The base path/url.
 * @param string $count
 *   The number of tweets.
 * @param array $other_params
 *   Other parameters we need.
 *
 * @return string
 *   The build url parameters.
 */
function _social_feed_field_generate_twitter_auth_url_params($base_path, $count, $other_params = array()) {
  $admin_values = social_feed_field_get_admin_values('twitter');

  $params = '';
  $params .= 'count=' . $count . '&include_rts=1';
  $params .= '&oauth_consumer_key=' . $admin_values['consumer_key'];
  $params .= '&oauth_nonce=' . _social_feed_field_generate_twitter_nonce();
  $params .= '&oauth_signature_method=HMAC-SHA1';
  $params .= '&oauth_timestamp=' . time();
  $params .= '&oauth_token=' . $admin_values['consumer_oauth_token'];
  $params .= '&oauth_version=1.0';
  if (!empty($other_params)) {
    foreach ($other_params as $name => $value) {
      $params .= '&' . $name . '=' . urlencode($value);
    }
  }

  $signature = _social_feed_field_twitter_build_signature($base_path, $params);
  $params .= '&oauth_signature=' . urlencode($signature);

  return '?' . $params;
}

/**
 * Generate the nonce.
 */
function _social_feed_field_generate_twitter_nonce() {
  $mt = microtime();
  $rand = mt_rand();

  return md5($mt . $rand);
}

/**
 * Encode a string or array.
 */
function _social_feed_field_twitter_urlencode_rfc3986($input) {
  if (is_array($input)) {
    return array_map(array('SFFOAuthUtil', 'urlencodeRfc3986'), $input);
  }
  elseif (is_scalar($input)) {
    return str_replace(
      '+',
      ' ',
      str_replace('%7E', '~', rawurlencode($input))
    );
  }
  else {
    return '';
  }
}

/**
 * Get the basepath signature.
 */
function _social_feed_field_twitter_get_signature_base_string($base_path, $params) {
  $parts = array(
    'GET',
    $base_path,
    $params,
  );

  $parts = _social_feed_field_twitter_urlencode_rfc3986($parts);

  return implode('&', $parts);
}

/**
 * Build the total signature.
 */
function _social_feed_field_twitter_build_signature($base_path, $params) {
  $base_string = _social_feed_field_twitter_get_signature_base_string($base_path, $params);
  $admin_values = social_feed_field_get_admin_values('twitter');

  $key_parts = array(
    $admin_values['consumer_secret'],
    $admin_values['consumer_oauth_token_secret'],
  );

  $key_parts = _social_feed_field_twitter_urlencode_rfc3986($key_parts);
  $key = implode('&', $key_parts);

  return base64_encode(hash_hmac('sha1', $base_string, $key, TRUE));
}

/**
 * Fetch video urls from tweet and store them internaly.
 *
 * Currently we only store youtube.com urls. Note https only!
 */
function _social_feed_field_twitter_fetch_video_urls($tweet) {
  $video_urls = array();
  if (!empty($tweet->entities) && !empty($tweet->entities->urls)) {
    foreach ($tweet->entities->urls as $item) {
      // Get (https) host name from URL.
      preg_match('@^(?:https://)?([^/]+)@i', $item->expanded_url, $matches);
      $host = $matches[1];
      // Get the last two segments of host name.
      preg_match('/[^.]+\.[^.]+$/', $host, $matches);
      // Store youtube urls.
      if (isset($matches[0]) && $matches[0] == "youtube.com") {
        $video_urls[] = $item->expanded_url;
      }
    }
  }

  return $video_urls;
}

/**
 * Fetch photos from tweets.
 */
function _social_feed_field_twitter_fetch_photos($tweet) {
  $media = array();
  if (isset($tweet->entities->media)) {
    foreach ($tweet->entities->media as $item) {
      if ($item->type == "photo") {
        $media[] = $item;
      }
    }
  }

  return $media;
}

/**
 * Convert urls, @ ands # to links.
 */
function _social_feed_field_twitter_url_converter($status, $targetblank = TRUE, $link_max_len = 250) {
  // The target.
  $target = $targetblank ? " target=\"_blank\" " : "";
  // Add anchor tags to urls.
  $regex = '~(?:(https?)://([^\s<]+)|(www\.[^\s<]+?\.[^\s<]+))(?<![\.,:])~i';
  $status = preg_replace($regex, '<a href="$0">$0</a>', $status);
  // Convert @ to follow.
  $status = preg_replace("/((^|\s)@([_a-z0-9\-]+))/i", "<a href=\"http://twitter.com/$3\" title=\"Follow $3\" $target >$1</a>", $status);
  // Convert # to search.
  $status = preg_replace("/((^|\s)#([_a-z0-9\-]+))/i", "<a href=\"https://twitter.com/search?q=%23$3\" title=\"Search $1\" $target >$1</a>", $status);

  // Return the status.
  return $status;
}


/**
 * Class SFFOAuthUtil.
 */
class SFFOAuthUtil {

  /**
   * Urlencode function.
   */
  public static function urlencodeRfc3986($input) {
    if (is_array($input)) {
      return array_map(array('SFFOAuthUtil', 'urlencodeRfc3986'), $input);
    }
    elseif (is_scalar($input)) {
      return str_replace(
        '+',
        ' ',
        str_replace('%7E', '~', rawurlencode($input))
      );
    }
    else {
      return '';
    }
  }

  /**
   * Urldecoding.
   */
  public static function urldecodeRfc3986($string) {
    // This decode function isn't taking into consideration the above
    // modifications to the encoding process. However, this method doesn't
    // seem to be used anywhere so leaving it as is.
    return urldecode($string);
  }

  /**
   * Split header.
   */
  public static function splitHeader($header, $only_allow_oauth_parameters = TRUE) {
    // Utility function for turning the Authorization: header into
    // parameters, has to do some unescaping
    // Can filter out any non-oauth parameters if needed (default behaviour).
    $pattern = '/(([-_a-z]*)=("([^"]*)"|([^,]*)),?)/';
    $offset = 0;
    $params = array();
    while (preg_match($pattern, $header, $matches, PREG_OFFSET_CAPTURE, $offset) > 0) {
      $match = $matches[0];
      $header_name = $matches[2][0];
      $header_content = (isset($matches[5])) ? $matches[5][0] : $matches[4][0];
      if (preg_match('/^oauth_/', $header_name) || !$only_allow_oauth_parameters) {
        $params[$header_name] = SFFOAuthUtil::urldecodeRfc3986($header_content);
      }
      $offset = $match[1] + strlen($match[0]);
    }

    if (isset($params['realm'])) {
      unset($params['realm']);
    }

    return $params;
  }

  /**
   * Helper to try to sort out headers for people who aren't running apache.
   */
  public static function getHeaders() {
    if (function_exists('apache_request_headers')) {
      // We need this to get the actual Authorization: header
      // because apache tends to tell us it doesn't exist.
      $headers = apache_request_headers();

      // Sanitize the output of apache_request_headers because
      // we always want the keys to be Cased-Like-This and arh()
      // returns the headers in the same case as they are in the
      // request.
      $out = array();
      foreach ($headers as $key => $value) {
        $key = str_replace(
          " ",
          "-",
          ucwords(strtolower(str_replace("-", " ", $key)))
        );
        $out[$key] = $value;
      }
    }
    else {
      // Otherwise we don't have apache and are just going to have to hope
      // that $_SERVER actually contains what we need.
      $out = array();
      if (isset($_SERVER['CONTENT_TYPE'])) {
        $out['Content-Type'] = $_SERVER['CONTENT_TYPE'];
      }
      if (isset($_ENV['CONTENT_TYPE'])) {
        $out['Content-Type'] = $_ENV['CONTENT_TYPE'];
      }

      foreach ($_SERVER as $key => $value) {
        if (substr($key, 0, 5) == "HTTP_") {
          // This is chaos, basically it is just there to capitalize the first
          // letter of every word that is not an initial HTTP and strip HTTP
          // code from przemek.
          $key = str_replace(
            " ",
            "-",
            ucwords(strtolower(str_replace("_", " ", substr($key, 5))))
          );
          $out[$key] = $value;
        }
      }
    }

    return $out;
  }

  /**
   * Parse parameters.
   *
   * This function takes a input like a=b&a=c&d=e and returns the parsed
   * parameters like this array('a' => array('b','c'), 'd' => 'e').
   */
  public static function parseParameters($input) {
    if (!isset($input) || !$input) {
      return array();
    }

    $pairs = explode('&', $input);

    $parsed_parameters = array();
    foreach ($pairs as $pair) {
      $split = explode('=', $pair, 2);
      $parameter = SFFOAuthUtil::urldecodeRfc3986($split[0]);
      $value = isset($split[1]) ? SFFOAuthUtil::urldecodeRfc3986($split[1]) : '';

      if (isset($parsed_parameters[$parameter])) {
        // We have already recieved parameter(s) with this name, so add to the
        // list of parameters with this name.
        if (is_scalar($parsed_parameters[$parameter])) {
          // This is the first duplicate, so transform scalar (string) into an
          // array so we can add the duplicates.
          $parsed_parameters[$parameter] = array($parsed_parameters[$parameter]);
        }

        $parsed_parameters[$parameter][] = $value;
      }
      else {
        $parsed_parameters[$parameter] = $value;
      }
    }

    return $parsed_parameters;
  }

  /**
   * Build the http query.
   */
  public static function buildHttpQuery($params) {
    if (!$params) {
      return '';
    }

    // Urlencode both keys and values.
    $keys = SFFOAuthUtil::urlencodeRfc3986(array_keys($params));
    $values = SFFOAuthUtil::urlencodeRfc3986(array_values($params));
    $params = array_combine($keys, $values);

    // Parameters are sorted by name, using lexicographical byte value ordering.
    // Ref: Spec: 9.1.1 (1).
    uksort($params, 'strcmp');

    $pairs = array();
    foreach ($params as $parameter => $value) {
      if (is_array($value)) {
        // If two or more parameters share the same name, they are
        // sorted by their value.
        natsort($value);
        foreach ($value as $duplicate_value) {
          $pairs[] = $parameter . '=' . $duplicate_value;
        }
      }
      else {
        $pairs[] = $parameter . '=' . $value;
      }
    }
    // For each parameter, the name is separated from the corresponding
    // value by an '=' character (ASCII code 61).
    // Each name-value pair is separated by an '&' character (ASCII code 38).
    return implode('&', $pairs);
  }

}
