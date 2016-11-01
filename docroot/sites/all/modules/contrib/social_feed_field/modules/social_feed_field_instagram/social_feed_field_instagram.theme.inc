<?php

/**
 * @file
 * Theme functions for the social_feed_field_instagram module.
 */

/**
 * Implements hook_preprocess_HOOK().
 *
 * This function converts a single instagram post to data we can use in
 * our template.
 */
function social_feed_field_preprocess_social_feed_field_instagram_item(&$variables) {
  $message = $variables['message'];

  // Add the photo.
  $variables['photo'] = theme('imagecache_external', array(
    'path' => $message->images->low_resolution->url,
    'style_name' => $variables['field_instance']['widget']['settings']['image_style'],
    'alt' => t('Photo by @name', array('@name' => $message->user->username)),
  ));

  // Add the caption.
  $variables['caption'] = check_markup(social_feed_field_instagram_url_converter($message->caption->text), 'filtered_html');

  // Add the username.
  $variables['username'] = _social_feed_field_create_external_url($message->user->username, 'http://instagram.com/' . $message->user->username);

  // Add the timestamp.
  $difference = time() - $message->created_time;
  $interval = format_interval($difference, 2);
  $variables['ts'] = t('@interval ago', array('@interval' => $interval));
}
