<?php
/**
 * @file
 * Theme functions for Youtube Playlists module.
 */
function theme_youtube_videos_fancybox($variables) {
  $image_link = array(
    'path' => "http://www.youtube.com/embed/{$variables['video_id']}?autoplay=1&rel=0",
    'options' => array(
      'attributes' => array(
        'class' => 'fancybox',
        'data-fancybox-type' => 'iframe',
      ),
      'html' => TRUE,

    ),
  );
  drupal_add_js('sites/all/libraries/fancybox/source/jquery.fancybox.pack.js');
  module_load_include('inc', 'youtube', 'youtube.theme');
  return theme('youtube_thumbnail',
    array(
      'video_id' => $variables['video_id'],
      'image_style' => 'thumbnail',
      'image_link' => $image_link,
    )
  );
}