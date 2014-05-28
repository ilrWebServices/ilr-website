<?php
/**
 * @file
 * microfilm_microfiche.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function microfilm_microfiche_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function microfilm_microfiche_node_info() {
  $items = array(
    'microfilm' => array(
      'name' => t('Microfilm'),
      'base' => 'node_content',
      'description' => t('Microfilm collection item for Catherwood Library'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
