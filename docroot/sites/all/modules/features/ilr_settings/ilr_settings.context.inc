<?php
/**
 * @file
 * ilr_settings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ilr_settings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mai-blog-mail-signup';
  $context->description = 'Show the MailChimp email signup on all mai blog posts and news articles';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'mobilizing-against-inequality*' => 'mobilizing-against-inequality*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-wi-mai-signup' => array(
          'module' => 'bean',
          'delta' => 'wi-mai-signup',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Show the MailChimp email signup on all mai blog posts and news articles');
  $export['mai-blog-mail-signup'] = $context;

  return $export;
}
