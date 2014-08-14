<?php
/**
 * @file
 * Functions that are called only during feeds.
 */
/**
 * Remove faculty from classes that have set values
 * @param $current_assignments
 * @param $new_assignments
 */
function _ilr_sdc_listings_save_videos_no_playlists($current_assignments, $new_assignments) {
  // Remove any video that aren't in assignments but were in current
  $unassigned_nids = array_keys(array_diff_key($current_assignments, $new_assignments));
  if ($unassigned_nids) {
    foreach ($unassigned_nids as $nid) {
      $node_wrapper = entity_metadata_wrapper('node', $nid);
      $node_wrapper->field_faculty->set();
      $node_wrapper->save();
    }
  }
}
/**
 * Connect Faculty to classes from JSON file.
 *
 * This is triggered after all importers for this modules
 * @see ilr_sdc_listings_feeds_after_import().
 */
function _ilr_sdc_listings_set_faculty_for_classes() {
  $new_assignments = _ilr_sdc_listings_new_assignments();
  if ($new_assignments) {
    $current_assignments = _ilr_get_entityreference_relations('field_faculty', 'sdc_class');
    _ilr_sdc_listings_save_new_assignments($new_assignments, $current_assignments);
    _ilr_sdc_listings_save_videos_no_playlists($current_assignments, $new_assignments);
  }
}

/**
 * Returns new class faculty assignments.
 * @return array
 *  An associative array whose keys are the Class nids and values are array of faculty.
 */
function _ilr_sdc_listings_new_assignments() {
  $faculty_class_relationships = _ilr_sdc_listings_retrieve_faculty_class_relationships();
  $new_class_assignments = array();
  $unknown_classes = array();
  $unknown_faculty = array();
  foreach ($faculty_class_relationships as $faculty_class_relationship) {

    $class_nid = _ilr_get_feeds_item_entity_id($faculty_class_relationship['CLASS_OID'], 'sdc_class_importer');
    $faculty_nid = _ilr_get_feeds_item_entity_id($faculty_class_relationship['FACULTY_OID'], 'sdc_faculty_importer');
    // Keep of list of classes and faculty that aren't nodes.
    if (!$class_nid) {
      $unknown_classes[] = $faculty_class_relationship['CLASS_OID'];
    }
    if (!$faculty_nid) {
      $unknown_faculty[] = $faculty_class_relationship['FACULTY_OID'];
    }
    if ($class_nid && $faculty_nid) {
      // Both the class and faculty were found.
      // Check that faculty is not already set(duplicate entries in assignment json).
      if (empty($new_class_assignments[$class_nid]) || !in_array($faculty_nid, $new_class_assignments[$class_nid])) {
        $new_class_assignments[$class_nid][] = $faculty_nid;
      }
    }
  }
  if ($unknown_classes) {
    watchdog('ilr_sdc_listings', 'Unknown classes were found during class assignment. @class_ids', array('@class_ids' => implode(',', $unknown_classes)), WATCHDOG_WARNING);
  }
  if ($unknown_faculty) {
    watchdog('ilr_sdc_listings', 'Unknown faculty were found during class assignment. @faculty_ids', array('@faculty_ids' => implode(',', $unknown_faculty)), WATCHDOG_WARNING);
  }
  return $new_class_assignments;
}

/**
 * Save all class/faculty assignments where assignments that are different from current assignments.
 * @param $new_assignments
 *  An associative array whose keys are the Class nids and values are array of faculty nids.
 * @param $current_assignments
 *  An associative array whose keys are the Class nids and values are array of faculty nids.
 */
function _ilr_sdc_listings_save_new_assignments($new_assignments, $current_assignments) {
  // Loop through new assignments and update only need ones. Saves calls to node_save.
  foreach ($new_assignments as $referencer_nid => $referenced_nids) {
    // If the video is not currently assigned to a playlists needs to be assigned
    $needs_update = !isset($current_assignments[$referencer_nid]);
    if (!$needs_update) {
      sort($referenced_nids);
      sort($current_assignments[$referencer_nid]);
      // Check that array of nids are equal after sort.
      $needs_update = $referenced_nids != $current_assignments[$referencer_nid];
    }
    if ($needs_update) {
      // Update assignment
      $node_wrapper = entity_metadata_wrapper('node', $referencer_nid);
      //$referenced_nids = array_map('intval',$referenced_nids);
      $node_wrapper->field_faculty->set($referenced_nids);
      $node_wrapper->save();
    }
  }
}
/**
 * Retrieve Class/Faculty relationships.
 * @return array();
 *  Indexed array where values are arrays with values:
 *  - class_id
 *  - faculty_id
 */
function _ilr_sdc_listings_retrieve_faculty_class_relationships() {
  $assignments_url = variable_get('ilr_sdc_listings_faculty_class_assignments_url', FALSE);
  if (!$assignments_url) {
    watchdog('ilr_sdc_listings', 'Error ilr_sdc_listings_faculty_class_assignments_url variable not set.', WATCHDOG_ERROR);
    return array();
  }
  $response = drupal_http_request($assignments_url);
  if ($response->error) {
    watchdog('ilr_sdc_listings', 'Error retrieving feed: @msg', array('@msg' => $response->error), WATCHDOG_ERROR);
    return array();
  }
  $relationships = drupal_json_decode($response->data);
  return $relationships;
}
/**
 * Sets the creates a timestamp from the incoming date and time strings
 *
 * @param array $feed_item
 * @param FeedsImporter $importer
 * @param $date_time_target
 *  Feeds mapping target for date field
 * @param $date_target
 *  Feeds mapping target for date.
 * @param $time_target
 *  Feeds mapping target for time
 */
function _ilr_sdc_listings_feeds_set_date_string(array &$feed_item, FeedsImporter $importer, $date_time_target, $date_target, $time_target) {
  $date = $feed_item[_ilr_get_feed_source_for_target($date_target, $importer)];
  $time = $feed_item[_ilr_get_feed_source_for_target($time_target, $importer)];
  $time = str_pad($time, 5, '0', STR_PAD_LEFT);
  $time = substr($time, 0, 2) . ':' . substr($time, -3, 2) . strtoupper(substr($time, -1, 1)) . 'M';
  $start_date_source = _ilr_get_feed_source_for_target($date_time_target, $importer);
  // Have to use Unix timestamp instead of date time string to handle timezone correctly. See - https://www.drupal.org/node/722740
  $feed_item[$start_date_source] = strtotime("$date $time");
}

/**
 * Get feeds importer ids in the order they should be processed.
 * @return array
 */
function _ilr_sdc_listings_get_importer_ids() {
  return array_keys(_ilr_sdc_listings_get_importer_files());
}
/**
 * @param array $item
 * @param FeedsSource $source
 */
function _ilr_sdc_listings_prepare_class_source_item(array &$item, FeedsSource $source) {
  $country_source = _ilr_get_feed_source_for_target('field_address:country', $source->importer);
  if ($country_source) {
    // Hardcode US as country because addressfield needs this.
    $item[$country_source] = 'US';
  }
  _ilr_sdc_listings_feeds_set_date_string($item, $source->importer, 'field_class_dates:start', 'Temporary target 1', 'Temporary target 2');
  _ilr_sdc_listings_feeds_set_date_string($item, $source->importer, 'field_class_dates:end', 'Temporary target 3', 'Temporary target 4');

}
/**
 * Prepare source item for import.
 * @param array $item
 *  Feeds source item
 * @param $source
 *  Importer source
 */
function _ilr_sdc_listings_prepare_source_item(array &$item, FeedsSource $source) {
  $importer_id = $source->importer->id;

  $body_source = _ilr_get_feed_source_for_target('body', $source->importer);
  if (isset($item[$body_source])) {
    _ilr_sdc_listings_replace_course_links($item[$body_source]);
  }

  if ($importer_id == 'sdc_class_importer') {
    _ilr_sdc_listings_prepare_class_source_item($item, $source);
  }
}

/**
 * Replace direct links to courses with links to redirect to node page.
 * @param $description
 */
function _ilr_sdc_listings_replace_course_links(&$description) {
  $link_pattern = "/http:\/\/www.ilr.cornell.edu\/(.{1,10})\/catalog\/(.{1,10})\.html/i";
  $replace = '/catalog-course/$2';
  $description = preg_replace($link_pattern, $replace, $description);
}