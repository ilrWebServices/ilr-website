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
function theme_youtube_videos_fancybox_link($variables) {
  $link = _youtube_videos_get_fancybox_link($variables['video_id']);
  drupal_add_js('sites/all/libraries/fancybox/source/jquery.fancybox.pack.js');
  return l($variables['link_text'], $link['path'], $link['options']);

}

function theme_youtube_videos_fancybox($variables) {
  $image_link = _youtube_videos_get_fancybox_link($variables['video_id']);
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

/**
 * @param $video_id
 * @return array
 */
function _youtube_videos_get_fancybox_link($video_id) {
  $link = array(
    'path' => _youtube_videos_embed_url($video_id, FALSE),
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
  return $link;
}
