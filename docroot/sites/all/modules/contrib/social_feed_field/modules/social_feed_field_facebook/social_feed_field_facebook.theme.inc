<?php

/**
 * @file
 * Theme functions for the social_feed_field_facebook module.
 */

/**
 * Implements hook_preprocess_HOOK().
 *
 * This function converts a single facebook post to data we can use in our
 * template.
 */
function social_feed_field_preprocess_social_feed_field_facebook_item(&$variables) {
  $message = $variables['message'];
  $media = $variables['media'];

  // Add the photo.
  $variables['photo'] = FALSE;
  $image_url = FALSE;
  if (!empty($media)) {
    // We want to use the first image available.
    $image_url = $media[0];
  }
  elseif (isset($message->picture)) {
    $image_url = $message->picture;
  }

  if (!empty($image_url)) {
    $photo = theme('imagecache_external', array(
      'path' => $image_url,
      'style_name' => $variables['field_instance']['widget']['settings']['image_style'],
      'alt' => t('Photo by @name', array('@name' => $message->from->name)),
    ));
    $variables['photo'] = _social_feed_field_create_external_url($photo, $message->link, array('html' => TRUE));
  }

  // Add the caption.
  $caption = FALSE;
  if (isset($message->message)) {
    $caption = $message->message;
  }
  elseif (isset($message->story)) {
    $caption = $message->story;
  }
  if (!empty($caption)) {
    $variables['caption'] = check_markup($caption, 'filtered_html');
  }

  // Add the username.
  $variables['username'] = _social_feed_field_create_external_url($message->from->name, 'http://www.facebook.com/' . $message->from->id);

  // Add the timestamp.
  $difference = time() - strtotime($message->created_time);
  $interval = format_interval($difference, 2);
  $variables['ts'] = t('@interval ago', array('@interval' => $interval));

  switch ($message->type) {
    case 'link':
      $variables['caption'] .= _social_feed_field_create_external_url($message->name, $message->link);
      break;
  }
}
