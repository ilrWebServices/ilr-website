<?php
/**
 * @file
 * ilr_alumni_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_alumni_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ilr_alumni_events_node_info() {
  $items = array(
    'alumni_event' => array(
      'name' => t('Alumni Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
