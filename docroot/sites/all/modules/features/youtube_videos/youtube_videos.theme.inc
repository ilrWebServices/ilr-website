<?php
/**
 * @file
 * Theme functions for Youtube Videos module.
 */
/**
 * Theme function for Youtube Fancybox.
 *
 * Hardcoded now to user 'thumbnail' image_style.
 * @param $variables
 * @return string
 */
function theme_youtube_videos_fancybox($variables) {
  $image_link = array(
    'path' => _youtube_videos_embed_url($variables['video_id'], FALSE),
    'options' => array(
      'attributes' => array(
        'class' => 'fancybox',
        'data-fancybox-type' => 'iframe',
      ),
      'html' => TRUE,
      'query' => array('autoplay' => '1', 'rel' => 0),
      'external' => TRUE,
    ),
  );
  drupal_add_js('sites/all/libraries/fancybox/source/jquery.fancybox.pack.js');
  module_load_include('inc', 'youtube', 'youtube.theme');
  return theme('youtube_thumbnail',
    array(
      'video_id' => $variables['video_id'],
      'image_style' => 'focussed_thumbnail',
      'image_link' => $image_link,
    )
  );
}
