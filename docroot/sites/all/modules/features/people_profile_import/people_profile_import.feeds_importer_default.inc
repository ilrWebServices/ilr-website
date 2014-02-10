<?php
/**
 * @file
 * people_profile_import.feeds_importer_default.inc
 *
 * Note that the mappings are generated from a dependency in the
 * ilr_profiles_feed_xml_parser, as opposed to the ui interface.
 * This simplifies configuration, but has the side effect of
 * setting the feature status as "overridden"
 *
 */

/**
 * Implements hook_feeds_importer_default().
 */
function people_profile_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'people_profile_xml_import';
  $feeds_importer->config = array(
    'name' => 'People Profile XML Import',
    'description' => 'Imports LDAP and AI data into People Profiles',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'ilr_profiles_feed_xml_parser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => _people_profile_import_generate_mappings(),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'people_profile',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['people_profile_xml_import'] = $feeds_importer;

  return $export;
}

/**
 * Custom function that looks up the fields from the ilr_profiles_feed_xml_parser
 * and returns the mappings that feeds expects
 */
function _people_profile_import_generate_mappings() {
  $fields_to_map = array_values(IlrProfilesFeedXmlParser::getXmlFieldPairs());
  $mappings = array();
  foreach ($fields_to_map as $field) {
    // Configure areas of expertise to autocreate new terms
    if($field == 'field_areas_of_expertise') {
      $mappings[] = array(
        'source' => $field,
        'target' => $field,
        'unique' => FALSE,
        'autocreate' => 1,
      );
    }
    else {
      $mappings[] = array(
        'source' => $field,
        'target' => $field,
        'unique' => FALSE,
      );
    }
  }
  return $mappings;
}
