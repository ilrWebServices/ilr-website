<?php

/**
 * @file
 * Theme functions for the social_feed_field_gplus module.
 */

/**
 * Implements hook_preprocess_HOOK().
 *
 * This function converts a single google plus post to data we can use
 * in our template.
 */
function social_feed_field_preprocess_social_feed_field_gplus_item(&$variables) {
  $message = $variables['message'];
  $object = $message->object;

  // Add the photo.
  $variables['photo'] = FALSE;
  $style = $variables['field_instance']['widget']['settings']['image_style'];
  if (!empty($object->attachments)) {
    $attachment = $object->attachments[0];
    $render = TRUE;

    switch ($attachment->objectType) {
      case 'video':
        $variables['photo'] = theme('imagecache_external', array(
          'path' => $attachment->image->url,
          'style_name' => $style,
          'alt' => (!isset($attachment->displayName)) ? '' : t('Photo by @name', array('@name' => $attachment->displayName)),
        ));
        break;

      case 'photo':
        $variables['photo'] = theme('imagecache_external', array(
          'path' => $attachment->fullImage->url,
          'style_name' => $style,
          'alt' => (!isset($attachment->displayName)) ? '' : t('Photo by @name', array('@name' => $attachment->displayName)),
        ));
        break;

      case 'album':
        $variables['photo'] = theme('imagecache_external', array(
          'path' => $attachment->thumbnails[0]->image->url,
          'style_name' => $style,
          'alt' => (!isset($attachment->displayName)) ? '' : t('Photo by @name', array('@name' => $attachment->displayName)),
        ));
        break;

      case 'article':
        // Don't do anything for articles.
        $render = FALSE;
        break;

      default:
        if (isset($attachment->image) && !empty($attachment->image)) {
          $variables['photo'] = theme('imagecache_external', array(
            'path' => $attachment->image->url,
            'style_name' => $style,
            'alt' => (!isset($attachment->displayName)) ? '' : t('Photo by @name', array('@name' => $attachment->displayName)),
          ));
        }
        break;
    }
    if ($render) {
      $variables['photo'] = _social_feed_field_create_external_url($variables['photo'], $attachment->url, array('html' => TRUE));
    }
  }

  // Add the caption.
  $variables['caption'] = check_markup($object->content, 'filtered_html');

  // Add the username.
  $variables['username'] = _social_feed_field_create_external_url($message->actor->displayName, $message->actor->url);

  // Add the timestamp.
  $difference = time() - strtotime($message->published);
  $interval = format_interval($difference, 2);
  $variables['ts'] = t('@interval ago', array('@interval' => $interval));
}
