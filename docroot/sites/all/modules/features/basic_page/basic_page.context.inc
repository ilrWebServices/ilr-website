<?php

/**
 * @file
 * basic_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function basic_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'worker-institute-subsite';
  $context->description = '';
  $context->tag = 'subsite';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*worker-institute*' => '*worker-institute*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('subsite');
  $export['worker-institute-subsite'] = $context;

  return $export;
}
