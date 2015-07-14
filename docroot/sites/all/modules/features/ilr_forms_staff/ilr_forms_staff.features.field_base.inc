<?php
/**
 * @file
 * ilr_forms_staff.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ilr_forms_staff_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_markup_sample'
  $field_bases['field_markup_sample'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_markup_sample',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<div class="form-item">Tell us more. (For the sample form this demonstrates inserting text between other fields.)</div>
',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  return $field_bases;
}
