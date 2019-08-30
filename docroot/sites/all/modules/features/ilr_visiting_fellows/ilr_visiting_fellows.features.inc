<?php

/**
 * @file
 * ilr_visiting_fellows.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_visiting_fellows_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ilr_visiting_fellows_node_info() {
  $items = array(
    'visiting_fellow' => array(
      'name' => t('Visiting Fellow'),
      'base' => 'node_content',
      'description' => t('Use this for visiting fellows.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
