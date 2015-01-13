<?php
/**
 * @file
 * youtube_playlists.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function youtube_playlists_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'youtube_playlist_tag_importer-xpathparser_0-rewrite';
  $feeds_tamper->importer = 'youtube_playlist_tag_importer';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'YT-[xpathparser:0]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Add YT prefix';
  $export['youtube_playlist_tag_importer-xpathparser_0-rewrite'] = $feeds_tamper;

  return $export;
}
