<?php
/**
 * @file
 * youtube_playlists.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function youtube_playlists_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function youtube_playlists_node_info() {
  $items = array(
    'youtube_playlist' => array(
      'name' => t('Youtube Playlist'),
      'base' => 'node_content',
      'description' => t('A Playlist from the ILR Youtube Channel'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
