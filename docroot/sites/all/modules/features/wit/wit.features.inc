<?php
/**
 * @file
 * wit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wit_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wit_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function wit_node_info() {
  $items = array(
    'wit_article' => array(
      'name' => t('WIT Article'),
      'base' => 'node_content',
      'description' => t('Articles for Catherwood\'s Workplace Issues Today '),
      'has_title' => '1',
      'title_label' => t('Article Lead (truncated headline)'),
      'help' => '',
    ),
  );
  return $items;
}
