<?php
/**
 * @file
 * youtube_videos.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function youtube_videos_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'youtube_importer';
  $feeds_importer->config = array(
    'name' => 'Youtube Importer',
    'description' => 'Imports Youtube Videos',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'id',
          'xpathparser:1' => 'title',
          'xpathparser:2' => 'media:group/media:description',
          'xpathparser:3' => 'media:group/media:keywords',
          'xpathparser:4' => 'concat(\'http://www.youtube.com/watch?v=\',media:group/yt:videoid)',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '//feed/entry',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:3' => 'xpathparser:3',
            'context' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_youtube_video',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'youtube_video',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['youtube_importer'] = $feeds_importer;

  return $export;
}
