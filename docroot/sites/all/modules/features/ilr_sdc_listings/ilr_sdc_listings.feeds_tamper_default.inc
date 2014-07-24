<?php
/**
 * @file
 * ilr_sdc_listings.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ilr_sdc_listings_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sdc_class_importer-jsonpath_parser_1-trim';
  $feeds_tamper->importer = 'sdc_class_importer';
  $feeds_tamper->source = 'jsonpath_parser:1';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '"',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['sdc_class_importer-jsonpath_parser_1-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sdc_course-jsonpath_parser_0-trim';
  $feeds_tamper->importer = 'sdc_course';
  $feeds_tamper->source = 'jsonpath_parser:0';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '"',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim Quotes';
  $export['sdc_course-jsonpath_parser_0-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sdc_course-jsonpath_parser_2-trim';
  $feeds_tamper->importer = 'sdc_course';
  $feeds_tamper->source = 'jsonpath_parser:2';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '"',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim Quotes';
  $export['sdc_course-jsonpath_parser_2-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sdc_faculty_importer-jsonpath_parser_1-trim';
  $feeds_tamper->importer = 'sdc_faculty_importer';
  $feeds_tamper->source = 'jsonpath_parser:1';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '"',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['sdc_faculty_importer-jsonpath_parser_1-trim'] = $feeds_tamper;

  return $export;
}
