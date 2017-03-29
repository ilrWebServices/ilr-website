<?php
/**
 * @file
 * ilr_memory_book.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ilr_memory_book_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ilr_memory_book';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'memory_book' => 'memory_book',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ilr_reflection-reflection_node_form' => array(
          'module' => 'ilr_reflection',
          'delta' => 'reflection_node_form',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-reflections-block' => array(
          'module' => 'views',
          'delta' => 'reflections-block',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['ilr_memory_book'] = $context;

  return $export;
}
