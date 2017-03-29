<?php
/**
 * @file
 * ilr_memory_book.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_memory_book_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ilr_memory_book_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ilr_memory_book_node_info() {
  $items = array(
    'memory_book' => array(
      'name' => t('Memory Book'),
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
