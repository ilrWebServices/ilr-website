<?php
/**
 * @file
 * people_profiles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function people_profiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function people_profiles_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function people_profiles_image_default_styles() {
  $styles = array();

  // Exported image style: people_profile_image.
  $styles['people_profile_image'] = array(
    'name' => 'people_profile_image',
    'label' => 'People Profile Image',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 300,
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
function people_profiles_node_info() {
  $items = array(
    'people_profile' => array(
      'name' => t('People Profile'),
      'base' => 'node_content',
      'description' => t('People profiles replace the ILR directory pages and include support for faculty, staff, students and '),
      'has_title' => '1',
      'title_label' => t('Display Name'),
      'help' => '',
    ),
  );
  return $items;
}
