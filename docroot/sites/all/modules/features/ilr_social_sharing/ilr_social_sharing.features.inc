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
    'label' => 'Facebook Share',
    'effects' => array(
      1 => array(
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
    'label' => 'Twitter Share',
    'effects' => array(
      2 => array(
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
