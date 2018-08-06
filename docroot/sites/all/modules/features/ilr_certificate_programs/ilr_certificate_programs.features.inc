<?php
/**
 * @file
 * ilr_certificate_programs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_certificate_programs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
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
function ilr_certificate_programs_node_info() {
  $items = array(
    'certificate_programs' => array(
      'name' => t('Certificate Programs'),
      'base' => 'node_content',
      'description' => t('A content type that contains fields associated with Certificate Programs.'),
      'has_title' => '1',
      'title_label' => t('Certificate title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
