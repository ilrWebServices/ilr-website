<?php
/**
 * @file
 * Drush integration for the feeds module.
 *
 * Original code from here: https://www.drupal.org/sandbox/enzo/1865202
 * Including patch here: https://www.drupal.org/node/1888356#comment-7661871
 */

/**
 * Implements hook_drush_command().
 */
function ilr_drush_feeds_import_drush_command() {

  $items['feeds-import'] = array(
    'description' => dt('Enable to run a specific feed import'),
    'options' => array(
      'feed-id' => array(
        'description' => dt('Feed ID to import.'),
      ),
      'feed-node-id' => array(
        'description' => dt('Feed Node ID to import.'),
      ),
    ),
    'examples' => array(
      'drush feeds-import --feed-id=feed_importer_1 --feed-node-id=1234' => "Define the feed-id to process in background.\nIf feed is not configured to run in background will be skipped.",
    ),
  );
  /*
   * Comment our out this command because it is not needed now.
  $items['feeds-import-all'] = array(
    'description' => dt('Import all feeds available'),
  );
  */

  $items['feeds-list'] = array(
    'description' => dt('Get a list of all feeds available'),
  );

  return $items;
}

/**
 * Import a individual feed.
 */
function _ilr_drush_feeds_import_feed_import($id, $nid = NULL) {
  $query = db_select('feeds_source', 'fs')
    ->fields('fs', array('id', 'feed_nid'))
    ->condition('fs.id', $id);
  if ($nid) {
    $query->condition('fs.feed_nid', $nid);
  }
  $feeds = $query->execute();
  foreach ($feeds as $feed) {
    $feed_obj = feeds_source($id, $feed->feed_nid);
    $feed_config = $feed_obj->importer->getConfig();
    if (1 || $feed_config['process_in_background']) {
      $feed_obj->startImport();
    }
    else {
      drush_log(dt('Feed @id is not enabled to Run in Background', array('@id' => $id)), 'error');
    }
  }
  if (empty($feeds)) {
    drush_log(dt('Invalid Feed ID: @id, Feed NID: @nid', array(
      '@id' => $id,
      '@nid' => $nid
    )), 'error');
  }
}

/**
 * A command callback.
 */
function drush_ilr_drush_feeds_import_feeds_import_all() {
  $feeds = db_query("SELECT * FROM {feeds_source}");

  foreach ($feeds as $feed) {
    _ilr_drush_feeds_import_feed_import($feed->id);
  }
}

/**
 * A command callback.
 */
function drush_ilr_drush_feeds_import_feeds_import() {
  $id = drush_get_option('feed-id');
  $nid = drush_get_option('feed-node-id');
  if ($id) {
    _ilr_drush_feeds_import_feed_import($id, $nid);
  }
  else {
    drush_log(dt('Feed ID is required. Usage: drush feeds-import #ID.'), 'error');
  }
}

/**
 * A command callback.
 */
function drush_ilr_drush_feeds_import_feeds_list() {
  $rows[] = array(dt('ID'), dt('Feed NID'), dt('Process in Background'));
  $feeds = db_query("SELECT * FROM {feeds_source}");

  foreach ($feeds as $feed) {
    $feed_config = feeds_source($feed->id, $feed->feed_nid)->importer->getConfig();
    $rows[] = array(
      $feed->id,
      $feed->feed_nid,
      ($feed_config['process_in_background']) ? 'TRUE' : 'FALSE',
    );
  }

  drush_print_table($rows, TRUE);
}
