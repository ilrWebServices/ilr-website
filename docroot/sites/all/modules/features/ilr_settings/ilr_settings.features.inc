<?php
/**
 * @file
 * ilr_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ilr_settings_image_default_styles() {
  $styles = array();

  // Exported image style: main_portrait_image.
  $styles['main_portrait_image'] = array(
    'name' => 'main_portrait_image',
    'label' => 'main portrait image',
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
          'width' => 320,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: focussed_hero.
  $styles['focussed_hero'] = array(
    'name' => 'focussed_hero',
    'label' => 'Focussed Hero',
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
          'width' => 1600,
          'height' => 612,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: focussed_main_image.
  $styles['focussed_main_image'] = array(
    'name' => 'focussed_main_image',
    'label' => 'Focussed Main Image',
    'effects' => array(
      3 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 533,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: focussed_thumbnail.
  $styles['focussed_thumbnail'] = array(
    'name' => 'focussed_thumbnail',
    'label' => 'Focussed thumbnail',
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
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
