<?php
/**
 * @file
 * promo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function promo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function promo_node_info() {
  $items = array(
    'promo' => array(
      'name' => t('Promo'),
      'base' => 'node_content',
      'description' => t('Promos are used to highlight relevant external links or internal content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
