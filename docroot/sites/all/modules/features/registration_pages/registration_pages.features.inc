<?php
/**
 * @file
 * registration_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function registration_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function registration_pages_node_info() {
  $items = array(
    'registration_page' => array(
      'name' => t('Registration page'),
      'base' => 'node_content',
      'description' => t('A page to contain either a time-sensitive form or a registration form for a free event that includes start and end timestamps, event title, location, deadline (start and end dates for registering), text to display if the form isn\'t currently open.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
