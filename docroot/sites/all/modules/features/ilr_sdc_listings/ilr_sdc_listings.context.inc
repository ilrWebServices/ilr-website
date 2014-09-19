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
        'sdc-catalog-*' => 'sdc-catalog-*',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sdc_course_calendar_day';
  $context->description = '';
  $context->tag = 'sdc';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'sdc_course_calendar' => 'sdc_course_calendar',
      ),
    ),
    'path' => array(
      'values' => array(
        'sdc-catalog-day*' => 'sdc-catalog-day*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-73db2c822e14579fd1e53fd86dc8c940' => array(
          'module' => 'views',
          'delta' => '73db2c822e14579fd1e53fd86dc8c940',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('sdc');
  $export['sdc_course_calendar_day'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sdc_course_calendar_month';
  $context->description = '';
  $context->tag = 'sdc';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'sdc_course_calendar' => 'sdc_course_calendar',
      ),
    ),
    'path' => array(
      'values' => array(
        'sdc-catalog-month*' => 'sdc-catalog-month*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-363ea68b38af370847aacc9006f09d9e' => array(
          'module' => 'views',
          'delta' => '363ea68b38af370847aacc9006f09d9e',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('sdc');
  $export['sdc_course_calendar_month'] = $context;

  return $export;
}
