<?php
/**
 * @file
 * ilr_forms_public.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ilr_forms_public_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_second_person_markup'
  $field_bases['field_second_person_markup'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_second_person_markup',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<div class="form-item">Information about the second participant on your team</div>
',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  return $field_bases;
}
