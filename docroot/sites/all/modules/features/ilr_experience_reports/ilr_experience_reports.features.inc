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
