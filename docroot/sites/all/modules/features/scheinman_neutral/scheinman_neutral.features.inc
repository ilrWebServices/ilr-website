<?php
/**
 * @file
 * scheinman_neutral.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function scheinman_neutral_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function scheinman_neutral_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function scheinman_neutral_node_info() {
  $items = array(
    'scheinman_neutral' => array(
      'name' => t('Scheinman Neutral'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => t('Admission to the rosters is restricted to individuals who have successfully completed our professional courses.  The rosters provide opportunities for individuals who have completed our training to work as neutrals and build their credentials in the field.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
