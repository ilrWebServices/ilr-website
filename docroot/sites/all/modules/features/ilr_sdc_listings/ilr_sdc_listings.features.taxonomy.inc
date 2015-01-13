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
    'course_keywords' => array(
      'name' => 'Course Keywords',
      'machine_name' => 'course_keywords',
      'description' => 'Keywords from SDC Listings',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'sdc_department' => array(
      'name' => 'SDC Department',
      'machine_name' => 'sdc_department',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
