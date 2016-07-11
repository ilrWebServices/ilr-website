<?php
/**
 * @file
 * student_portraits.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function student_portraits_ctools_plugin_api($module = NULL, $api = NULL) {
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
function student_portraits_node_info() {
  $items = array(
    'student_portrait' => array(
      'name' => t('Student Portrait'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
