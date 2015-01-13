<?php
/**
 * @file
 * ilr_field_bases.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ilr_field_bases_taxonomy_default_vocabularies() {
  return array(
    'category_type' => array(
      'name' => 'Category Type',
      'machine_name' => 'category_type',
      'description' => 'Designation for the type of content; Used in theme as [category_type] / [primary_tag] ',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
