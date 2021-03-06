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
  $context->name = 'professional_programs';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'sdc_class' => 'sdc_class',
        'sdc_course' => 'sdc_course',
        'sdc_faculty' => 'sdc_faculty',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'programs/professional-programs/workshops-courses-training*' => 'programs/professional-programs/workshops-courses-training*',
        'programs/professional-programs/search*' => 'programs/professional-programs/search*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ilr_sdc_listings-course_search' => array(
          'module' => 'ilr_sdc_listings',
          'delta' => 'course_search',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views--exp-sdc_course_listing-page' => array(
          'module' => 'views',
          'delta' => '-exp-sdc_course_listing-page',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['professional_programs'] = $context;

  return $export;
}
