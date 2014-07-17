<?php
/**
 * @file
 * ilr_workspan.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_workspan_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ilr_workspan_node_info() {
  $items = array(
    'workspan' => array(
      'name' => t('Workspan Article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
