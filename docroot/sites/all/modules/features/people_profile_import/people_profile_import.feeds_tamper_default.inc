<?php
/**
 * @file
 * people_profile_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function people_profile_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'people_profile_xml_import-field_areas_of_expertise-explode';
  $feeds_tamper->importer = 'people_profile_xml_import';
  $feeds_tamper->source = 'field_areas_of_expertise';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['people_profile_xml_import-field_areas_of_expertise-explode'] = $feeds_tamper;

  return $export;
}
