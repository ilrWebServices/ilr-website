<?php

/**
 * @file
 * people_profiles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function people_profiles_taxonomy_default_vocabularies() {
  return array(
    'areas_of_expertise' => array(
      'name' => 'Areas of Expertise',
      'machine_name' => 'areas_of_expertise',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
