<?php

/**
 * @file
 * Google plus functionalities.
 */

/**
 * This is the starting point for the google plus posts.
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
function _social_feed_field_gplus(array $values, array $field_instance) {
  $items = _social_feed_field_get_gplus_data($values, $field_instance);
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
function _social_feed_field_get_gplus_data(array $values, array $field_instance) {
  // Based on the value in the field retrieve the user data or just search.
  if (drupal_substr($values['social_feed_field_search'], 0, 1) == '@') {
    $items = _social_feed_field_get_gplus_activities_from_user($values);
  }
  else {
    $items = _social_feed_field_get_gplus_activities_from_search($values);
  }

  if (!empty($items)) {
    $ret = array();
    foreach ($items as $item) {
      $created = strtotime($item->published);
      $ret[$created] = theme('social_feed_field_gplus_item', array('message' => $item, 'field_instance' => $field_instance));
    }
    return $ret;
  }

  return FALSE;
}

/**
 * Get the search posts from the cache or the API.
 *
 * @param array $values
 *   The values entered in the field.
 *
 * @return array
 *   The items from cache or API.
 */
function _social_feed_field_get_gplus_activities_from_search(array $values) {
  $cid = 'social_feed_field_gplus::search::' . $values['social_feed_field_search'] . '::' . $values['social_feed_field_number'];
  $cache = cache_get($cid);

  if (!empty($cache) && $cache->expire > time()) {
    return $cache->data;
  }
  else {
    $admin_values = social_feed_field_get_admin_values('gplus');
    $url = 'https://www.googleapis.com/plus/v1/activities?query=' . $values['social_feed_field_search'] . '&maxResults=' . $values['social_feed_field_number'] . '&key=' . $admin_values['dev_key'];
    $request = drupal_http_request($url);

    if ($request->code >= 200 && $request->code < 400) {
      $json = json_decode($request->data);
      if (!empty($json->items)) {
        cache_set($cid, $json->items, 'cache', REQUEST_TIME + $admin_values['cache_lifetime']);
        return $json->items;
      }
    }
  }
}

/**
 * Get the user posts from the cache or the API.
 *
 * @param array $values
 *   The values entered in the field.
 *
 * @return array
 *   The items from cache or API.
 */
function _social_feed_field_get_gplus_activities_from_user(array $values) {
  // First convert the @ to a =, Google plus wants that.
  $user = str_replace('@', '+', $values['social_feed_field_search']);

  $cid = 'social_feed_field_gplus::user::' . $user . '::' . $values['social_feed_field_number'];
  $cache = cache_get($cid);

  if (!empty($cache) && $cache->expire > time()) {
    return $cache->data;
  }
  else {
    // We need the userid, convert the username to id in this function.
    $user_id = _social_feed_field_gplus_get_user_id($user);

    if (!empty($user_id)) {
      $admin_values = social_feed_field_get_admin_values('gplus');
      $url = 'https://www.googleapis.com/plus/v1/people/' . $user_id . '/activities/public?maxResults=' . $values['social_feed_field_number'] . '&key=' . $admin_values['dev_key'];
      $request = drupal_http_request($url);

      if ($request->code >= 200 && $request->code < 400) {
        $json = json_decode($request->data);
        if (!empty($json->items)) {
          cache_set($cid, $json->items, 'cache', REQUEST_TIME + $admin_values['cache_lifetime']);
          return $json->items;
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
function _social_feed_field_gplus_get_user_id($username) {
  $cid = 'social_feed_field_gplus::user_id::' . $username;
  $cache = cache_get($cid);

  if (!empty($cache) && $cache->expire > time()) {
    return $cache->data;
  }
  else {
    $admin_values = social_feed_field_get_admin_values('gplus');
    $url = 'https://www.googleapis.com/plus/v1/people/' . $username . '?key=' . $admin_values['dev_key'];
    $request = drupal_http_request($url);
    if ($request->code >= 200 && $request->code < 400) {
      $json = json_decode($request->data);
      if (!empty($json->id)) {
        cache_set($cid, $json->id, 'cache', REQUEST_TIME + $admin_values['cache_lifetime']);
        return $json->id;
      }
    }
  }

  return FALSE;
}
