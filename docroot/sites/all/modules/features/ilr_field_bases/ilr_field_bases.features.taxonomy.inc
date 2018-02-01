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
    'continuing_education_credits' => array(
      'name' => 'Continuing Education Credits',
      'machine_name' => 'continuing_education_credits',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'course_format' => array(
      'name' => 'Course Format',
      'machine_name' => 'course_format',
      'description' => 'Workshop, webinar, lecture, etc.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'course_keywords' => array(
      'name' => 'Course Keywords',
      'machine_name' => 'course_keywords',
      'description' => 'Keywords from SDC Listings',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'course_sponsor' => array(
      'name' => 'Course Sponsor',
      'machine_name' => 'course_sponsor',
      'description' => 'The center, institute or program sponsoring a given course',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'course_topic' => array(
      'name' => 'Course Topic',
      'machine_name' => 'course_topic',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'note_type' => array(
      'name' => 'Note type',
      'machine_name' => 'note_type',
      'description' => NULL,
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
