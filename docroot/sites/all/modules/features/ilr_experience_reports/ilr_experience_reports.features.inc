<?php
/**
 * @file
 * ilr_experience_reports.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_experience_reports_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ilr_experience_reports_image_default_styles() {
  $styles = array();

  // Exported image style: experience_report_image.
  $styles['experience_report_image'] = array(
    'name' => 'experience_report_image',
    'label' => 'experience report image',
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

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ilr_experience_reports_node_info() {
  $items = array(
    'experience_report' => array(
      'name' => t('Experience Report'),
      'base' => 'node_content',
      'description' => t('Use this for an International Programs student experience report.'),
      'has_title' => '1',
      'title_label' => t('Student\'s name'),
      'help' => '',
    ),
  );
  return $items;
}
