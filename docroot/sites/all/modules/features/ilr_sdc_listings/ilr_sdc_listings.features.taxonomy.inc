<?php
/**
 * @file
 * ilr_sdc_listings.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ilr_sdc_listings_taxonomy_default_vocabularies() {
  return array(
    'course_concentration' => array(
      'name' => 'Course concentration',
      'machine_name' => 'course_concentration',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'course_program' => array(
      'name' => 'Course program',
      'machine_name' => 'course_program',
      'description' => 'Courses in Salesforce are assigned to a program',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
