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
  $context->tag = '';
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
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views--exp-sdc_class_calendar-page_4' => array(
          'module' => 'views',
          'delta' => '-exp-sdc_class_calendar-page_4',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['sdc_course_calendar'] = $context;

  return $export;
}
