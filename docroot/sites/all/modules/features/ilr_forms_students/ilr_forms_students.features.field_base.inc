<?php

/**
 * @file
 * ilr_forms_students.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ilr_forms_students_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_remote_fex'.
  $field_bases['field_remote_fex'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_remote_fex',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'on site' => 'Students will work on site, so they must have housing nearby',
        'on site or remote' => 'Students can work on site if they have housing nearby, but otherwise this can be a remote-only opportunity',
        'remote' => 'Students must work remotely',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
