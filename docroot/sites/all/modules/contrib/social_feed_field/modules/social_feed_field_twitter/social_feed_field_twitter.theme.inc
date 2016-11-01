<?php

/**
 * @file
 * Theme functions for the social_feed_field_twitter module.
 */

/**
 * Implements hook_preprocess_HOOK().
 *
 * This function converts a single tweet to data we can use in our template.
 */
function social_feed_field_preprocess_social_feed_field_twitter_item(&$variables) {
  $tweet = $variables['tweet'];
  $variables['text'] = check_markup($tweet->text, 'filtered_html');

  // Add video(s) if there are any.
  $variables['videos'] = array();
  if (count($tweet->videos) > 0) {
    foreach ($tweet->videos as $url) {
      $variables['videos'][] = _social_feed_field_generate_youtube_embed($url);
    }
  }

  // Add photo(s) if there are any.
  $variables['photos'] = array();
  if (count($tweet->photos) > 0) {
    foreach ($tweet->photos as $photo) {
      $variables['photos'][] = theme('imagecache_external', array(
        'path' => $photo->media_url_https,
        'style_name' => $variables['field_instance']['widget']['settings']['image_style'],
        'alt' => t('Photo by @name', array('@name' => $tweet->user_name)),
      ));
    }
  }

  // Add the username.
  $variables['username'] = _social_feed_field_create_external_url($tweet->user_name, 'http://twitter.com/' . $tweet->user_screenname);

  // Add the timestamp.
  $difference = time() - $tweet->created_at;
  $interval = format_interval($difference, 2);
  $variables['ts'] = t('@interval ago', array('@interval' => $interval));
}
