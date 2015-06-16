<?php
/**
 * @file
 * ilr_social_sharing.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ilr_social_sharing_image_default_styles() {
  $styles = array();

  // Exported image style: facebook_share.
  $styles['facebook_share'] = array(
    'name' => 'facebook_share',
    'label' => 'Facebook Share',
    'effects' => array(
      1 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 630,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: twitter_share.
  $styles['twitter_share'] = array(
    'name' => 'twitter_share',
    'label' => 'Twitter Share',
    'effects' => array(
      2 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
