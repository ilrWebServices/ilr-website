<?php
/**
 * @file
 * featured_book.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function featured_book_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function featured_book_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function featured_book_node_info() {
  $items = array(
    'featured_book' => array(
      'name' => t('Featured Book'),
      'base' => 'node_content',
      'description' => t('Catherwood Library\'s \'Book of the Month\''),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
