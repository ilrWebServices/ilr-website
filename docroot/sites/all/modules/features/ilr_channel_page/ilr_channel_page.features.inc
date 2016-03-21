<?php
/**
 * @file
 * ilr_channel_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_channel_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ilr_channel_page_node_info() {
  $items = array(
    'channel_page' => array(
      'name' => t('Channel page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
