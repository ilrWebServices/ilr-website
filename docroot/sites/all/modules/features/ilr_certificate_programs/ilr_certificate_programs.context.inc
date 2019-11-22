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
    'path' => array(
      'values' => array(
        '~programs/professional-programs/certificate-programs/advanced-certificate-labor-studies' => '~programs/professional-programs/certificate-programs/advanced-certificate-labor-studies',
        '~programs/professional-programs/certificate-programs/leadership-development' => '~programs/professional-programs/certificate-programs/leadership-development',
        '~programs/professional-programs/certificate-programs/hr-business-partnering' => '~programs/professional-programs/certificate-programs/hr-business-partnering',
        '~programs/professional-programs/certificate-programs/human-resource-essentials' => '~programs/professional-programs/certificate-programs/human-resource-essentials',
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('professional programs');
  $export['certificate_programs_cta'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'certificate_programs_cta_human_resource_essentials';
  $context->description = '';
  $context->tag = 'professional programs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'certificate_programs' => 'certificate_programs',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'programs/professional-programs/certificate-programs/human-resource-essentials' => 'programs/professional-programs/certificate-programs/human-resource-essentials',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-human-resource-essentials-certif' => array(
          'module' => 'bean',
          'delta' => 'human-resource-essentials-certif',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('professional programs');
  $export['certificate_programs_cta_human_resource_essentials'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'certificate_programs_cta_labor_studies';
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
    'path' => array(
      'values' => array(
        'programs/professional-programs/certificate-programs/advanced-certificate-labor-studies' => 'programs/professional-programs/certificate-programs/advanced-certificate-labor-studies',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-advanced-certificate-of-labor-st' => array(
          'module' => 'bean',
          'delta' => 'advanced-certificate-of-labor-st',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('professional programs');
  $export['certificate_programs_cta_labor_studies'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'certificate_programs_cta_leadership_development';
  $context->description = '';
  $context->tag = 'professional programs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'certificate_programs' => 'certificate_programs',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'programs/professional-programs/certificate-programs/leadership-development' => 'programs/professional-programs/certificate-programs/leadership-development',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-leadership-development-certifica' => array(
          'module' => 'bean',
          'delta' => 'leadership-development-certifica',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('professional programs');
  $export['certificate_programs_cta_leadership_development'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'certificate_programs_cta_strategic_hr_partnering';
  $context->description = '';
  $context->tag = 'professional programs';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'certificate_programs' => 'certificate_programs',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'programs/professional-programs/certificate-programs/hr-business-partnering' => 'programs/professional-programs/certificate-programs/hr-business-partnering',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-strategic-hr-partnering-certific' => array(
          'module' => 'bean',
          'delta' => 'strategic-hr-partnering-certific',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('professional programs');
  $export['certificate_programs_cta_strategic_hr_partnering'] = $context;

  return $export;
}
