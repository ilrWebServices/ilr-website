<?php

/**
 * @file
 * Facebook functionalities.
 */

/**
 * This is the starting point for the facebook posts.
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
function _social_feed_field_facebook(array $values, array $field_instance) {
  $items = _social_feed_field_get_facebook_data($values, $field_instance);
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
function _social_feed_field_get_facebook_data(array $values, array $field_instance) {
  $items = _social_feed_field_get_fb_posts_from_user($values);
  if (!empty($items)) {
    $ret = array();
    foreach ($items as $item) {
      if (isset($item->status_type)) {
        $media = _social_feed_field_fb_get_post_attachments($item->id);
        $created = strtotime($item->created_time);
        $ret[$created] = theme('social_feed_field_facebook_item', array(
          'media' => $media,
          'message' => $item,
          'field_instance' => $field_instance,
        ));
      }
    }

    return $ret;
  }

  return FALSE;
}

/**
 * Lets actually retrieve the items, either from cache or from the API.
 *
 * @param array $values
 *   The values entered in the field.
 *
 * @return array
 *   The items from cache or API.
 */
function _social_feed_field_get_fb_posts_from_user(array $values) {
  $cid = 'social_feed_field_fb::user::' . $values['social_feed_field_search'] . '::' . $values['social_feed_field_number'];
  $cache = cache_get($cid);

  if (!empty($cache) && $cache->expire > time()) {
    return $cache->data;
  }
  else {
    $user = _social_feed_field_fb_get_userid_from_name($values['social_feed_field_search']);
    if (!empty($user)) {
      $admin_values = social_feed_field_get_admin_values('facebook');
      $url = 'https://graph.facebook.com/' . $user . '/feed?limit=' . $values['social_feed_field_number'] . '&filter=app_2305272732,app_2309869772,app_2392950137,app_2347471856,pp&access_token=' . $admin_values['access_token'];
      $request = social_feed_field_do_request($url);
      $json = json_decode($request->data);
      if ($request->code >= 200 && $request->code < 400) {
        if (!empty($json->data)) {
          cache_set($cid, $json->data, 'cache', REQUEST_TIME + $admin_values['cache_lifetime']);
          return $json->data;
        }
      }
      else {
        social_feed_field_throw_error($json->error, 'facebook');
      }
    }
  }

  return FALSE;
}

/**
 * Retrieve the user id from facebook from a given username.
 *
 * @param string $username
 *   The username.
 *
 * @return bool|string
 *   The user id or FALSE.
 */
function _social_feed_field_fb_get_userid_from_name($username) {
  $cid = 'social_feed_field_fb::user_id::' . $username;
  $cache = cache_get($cid);

  if (!empty($cache) && $cache->expire > time()) {
    return $cache->data;
  }
  else {
    $admin_values = social_feed_field_get_admin_values('facebook');
    $url = 'https://graph.facebook.com/' . $username . '?access_token=' . $admin_values['access_token'];
    $request = social_feed_field_do_request($url);
    $json = json_decode($request->data);
    if ($request->code >= 200 && $request->code < 400) {
      cache_set($cid, $json->id, 'cache', REQUEST_TIME + $admin_values['cache_lifetime']);

      return $json->id;
    }
    else {
      social_feed_field_throw_error($json->error, 'facebook');
    }
  }

  return FALSE;
}

/**
 * Get post attachments.
 *
 * @param string $post_id
 *   The facebook post ID.
 *
 * @return array|bool
 *   The array of media or FALSE.
 */
function _social_feed_field_fb_get_post_attachments($post_id) {
  $cid = 'social_feed_field_fb::attachment::post_id::' . $post_id;
  $cache = cache_get($cid);

  if (!empty($cache) && $cache->expire > time()) {
    return $cache->data;
  }
  else {
    $admin_values = social_feed_field_get_admin_values('facebook');
    $url = 'https://graph.facebook.com/' . $post_id . '/attachments?access_token=' . $admin_values['access_token'];
    $request = social_feed_field_do_request($url);
    $json = json_decode($request->data);
    if ($request->code >= 200 && $request->code < 400) {
      if (!empty($json->data)) {
        $list = array();
        foreach ($json->data as $object) {
          if (isset($object->media) && isset($object->media->image) && $object->media->image->width > 0) {
            $list[] = $object->media->image->src;
          }
        }

        cache_set($cid, $list, 'cache', REQUEST_TIME + $admin_values['cache_lifetime']);
        return $list;
      }
    }
    else {
      social_feed_field_throw_error($json->error, 'facebook');
    }
  }

  return FALSE;
}
