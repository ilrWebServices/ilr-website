<?php

/**
 * @file
 * Instagram functionalities.
 */

/**
 * This is the starting point for the instagram posts.
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
function _social_feed_field_instagram(array $values, array $field_instance) {
  $items = _social_feed_field_get_instagram_data($values, $field_instance);
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
function _social_feed_field_get_instagram_data(array $values, array $field_instance) {
  $ret = array();

  $data = _social_feed_field_instagram_get_user_media($values['social_feed_field_search'], $values['social_feed_field_number']);
  if (!empty($data)) {
    foreach ($data as $message) {
      $ret[$message->created_time] = theme('social_feed_field_instagram_item', array('message' => $message, 'field_instance' => $field_instance));
    }
  }

  return $ret;
}

/**
 * Lets actually retrieve the items, either from cache or from the API.
 *
 * @param string $username
 *   The username to retrieve the items from.
 * @param string $count
 *   The number of items to retrieve.
 *
 * @return array
 *   The items from cache or API.
 */
function _social_feed_field_instagram_get_user_media($username, $count) {
  $cid = 'social_feed_field_instagram::user_media::' . $username . '::' . $count;
  $cache = cache_get($cid);

  if (!empty($cache) && $cache->expire > time()) {
    return $cache->data;
  }
  else {
    // We need to convert the username to a user id.
    $user_id = _social_feed_field_instagram_get_user_id($username);
    if (!empty($user_id)) {
      $admin_values = social_feed_field_get_admin_values('instagram');
      $url = 'https://api.instagram.com/v1/users/' . $user_id . '/media/recent?count=' . $count . '&client_id=' . $admin_values['client_id'];
      $request = social_feed_field_do_request($url);

      if ($request->code >= 200 && $request->code < 400) {
        $json = json_decode($request->data);
        if (!empty($json->data)) {
          cache_set($cid, $json->data, 'cache', REQUEST_TIME + $admin_values['cache_lifetime']);
          return $json->data;
        }
      }
    }
  }

  return FALSE;
}

/**
 * The get the user data we first need to know the user id. So get that.
 *
 * @param string $username
 *   The username entered.
 *
 * @return string
 *   The users id from the API or cache.
 */
function _social_feed_field_instagram_get_user_id($username) {
  $cid = 'social_feed_field_instagram::user_id::' . $username;
  $cache = cache_get($cid);
  if (!empty($cache) && $cache->expire > time()) {
    return $cache->data;
  }
  else {
    $admin_values = social_feed_field_get_admin_values('instagram');
    $url = 'https://api.instagram.com/v1/users/search?q=' . $username . '&client_id=' . $admin_values['client_id'];
    $request = social_feed_field_do_request($url);

    if ($request->code >= 200 && $request->code < 400) {
      $json = json_decode($request->data);
      if (!empty($json->data)) {
        cache_set($cid, $json->data[0]->id, 'cache', REQUEST_TIME + $admin_values['cache_lifetime']);
        return $json->data[0]->id;
      }
    }
  }

  return FALSE;
}

/**
 * Convert text to links.
 *
 * @param string $status
 *   The string to check for links.
 * @param bool $targetblank
 *   If to use target _blank.
 * @param int $link_max_len
 *   The length of link texts.
 *
 * @return string
 *   The string with the links added.
 */
function social_feed_field_instagram_url_converter($status, $targetblank = TRUE, $link_max_len = 250) {
  // The target.
  $target = $targetblank ? " target=\"_blank\" " : "";
  // Convert @ to follow.
  $status = preg_replace("/(@([_a-z0-9\-]+))/i", "<a href=\"http://instagram.com/$2\" title=\"Follow $2\" $target >$1</a>", $status);
  // Return the status.
  return $status;
}
