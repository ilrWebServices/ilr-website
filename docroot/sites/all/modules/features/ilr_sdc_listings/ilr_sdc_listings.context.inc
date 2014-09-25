<?php
/**
 * @file
 * ilr_sdc_listings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ilr_sdc_listings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sdc_course_calendar';
  $context->description = '';
  $context->tag = 'sdc';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'sdc-catalog*' => 'sdc-catalog*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sdc_class_calendar-block_nav' => array(
          'module' => 'views',
          'delta' => 'sdc_class_calendar-block_nav',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('sdc');
  $export['sdc_course_calendar'] = $context;

  return $export;
}
