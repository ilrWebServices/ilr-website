<?php
/**
 * @file
 * ilr_certificate_programs.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ilr_certificate_programs_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'certificate_programs_cta';
  $context->description = '';
  $context->tag = 'professional programs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'certificate_programs' => 'certificate_programs',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ilr_certificate_programs-certificate_programs_cta' => array(
          'module' => 'ilr_certificate_programs',
          'delta' => 'certificate_programs_cta',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('professional programs');
  $export['certificate_programs_cta'] = $context;

  return $export;
}
