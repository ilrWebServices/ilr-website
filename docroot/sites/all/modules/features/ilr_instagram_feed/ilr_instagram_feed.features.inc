<?php

/**
 * @file
 * ilr_instagram_feed.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_instagram_feed_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ilr_instagram_feed_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ilr_instagram_feed_node_info() {
  $items = array(
    'instagram_post' => array(
      'name' => t('Instagram Post'),
      'base' => 'node_content',
      'description' => t('An Instagram post for display in a listing of recent, curated posts. These are generally imported automatically.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
