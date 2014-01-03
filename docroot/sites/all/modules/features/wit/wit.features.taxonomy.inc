<?php
/**
 * @file
 * wit.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wit_taxonomy_default_vocabularies() {
  return array(
    'publications' => array(
      'name' => 'Publications',
      'machine_name' => 'publications',
      'description' => 'Used for linking to WIT articles',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'wire_service' => array(
      'name' => 'Wire Service',
      'machine_name' => 'wire_service',
      'description' => 'Used for linking to WIT articles',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
