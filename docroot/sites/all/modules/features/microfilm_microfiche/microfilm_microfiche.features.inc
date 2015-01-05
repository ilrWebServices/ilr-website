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
 * Implements hook_views_api().
 */
function microfilm_microfiche_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function microfilm_microfiche_node_info() {
  $items = array(
    'microfiche' => array(
      'name' => t('Microfiche'),
      'base' => 'node_content',
      'description' => t('Microfiche collection item for Catherwood Library'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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
