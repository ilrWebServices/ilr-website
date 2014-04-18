<?php
/**
 * @file
 * spotlight.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function spotlight_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function spotlight_image_default_styles() {
  $styles = array();

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

/**
 * Implements hook_node_info().
 */
function spotlight_node_info() {
  $items = array(
    'spotlight' => array(
      'name' => t('Spotlight'),
      'base' => 'node_content',
      'description' => t('Spotlights are used as special interest stories that highlight the many facets of ILR.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
