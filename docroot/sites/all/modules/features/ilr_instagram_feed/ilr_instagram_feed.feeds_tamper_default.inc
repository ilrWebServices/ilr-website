<?php

/**
 * @file
 * ilr_instagram_feed.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ilr_instagram_feed_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_rss_feed-description-find_replace_regex';
  $feeds_tamper->importer = 'instagram_rss_feed';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/[^[:alnum:][:print:]]/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['instagram_rss_feed-description-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_rss_feed-description-trim';
  $feeds_tamper->importer = 'instagram_rss_feed';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['instagram_rss_feed-description-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_rss_feed-title-find_replace_regex';
  $feeds_tamper->importer = 'instagram_rss_feed';
  $feeds_tamper->source = 'title';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/[^[:alnum:][:print:]]/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['instagram_rss_feed-title-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_rss_feed-title-trim';
  $feeds_tamper->importer = 'instagram_rss_feed';
  $feeds_tamper->source = 'title';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 7;
  $feeds_tamper->description = 'Trim';
  $export['instagram_rss_feed-title-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'instagram_rss_feed-title-truncate_text';
  $feeds_tamper->importer = 'instagram_rss_feed';
  $feeds_tamper->source = 'title';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '100',
    'ellipses' => 1,
    'wordsafe' => 0,
  );
  $feeds_tamper->weight = 8;
  $feeds_tamper->description = 'Truncate';
  $export['instagram_rss_feed-title-truncate_text'] = $feeds_tamper;

  return $export;
}
