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
  $context->name = 'concentrations';
  $context->description = '';
  $context->tag = 'professional programs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'programs/professional-programs/workshops-courses-training/*' => 'programs/professional-programs/workshops-courses-training/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'taxonomy_menu_block-1' => array(
          'module' => 'taxonomy_menu_block',
          'delta' => '1',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'ilr_sdc_listings-course_search' => array(
          'module' => 'ilr_sdc_listings',
          'delta' => 'course_search',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('professional programs');
  $export['concentrations'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'professional_programs';
  $context->description = 'All upcoming classes';
  $context->tag = 'professional programs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'programs/professional-programs/workshops-courses-training/all' => 'programs/professional-programs/workshops-courses-training/all',
        'programs/professional-programs/search*' => 'programs/professional-programs/search*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
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

  // Translatables
  // Included for use with string extractors like potx.
  t('All upcoming classes');
  t('professional programs');
  $export['professional_programs'] = $context;

  return $export;
}
