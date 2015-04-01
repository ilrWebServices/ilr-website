<?php
/**
 * @file
 * registration_pages.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function registration_pages_conditional_fields_default_fields() {
  $items = array();

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'registration_page',
    'dependent' => 'field_aa_member_price',
    'dependee' => 'field_registration_form_type',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        11 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        16 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        41 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        26 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        21 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        31 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        36 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        46 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        11 => array(
          1 => 1,
          3 => 0,
        ),
        16 => array(
          1 => 1,
          3 => 0,
        ),
        41 => array(
          1 => 1,
          3 => 0,
        ),
        26 => array(
          1 => 1,
          3 => 0,
        ),
        21 => array(
          1 => 1,
          3 => 0,
        ),
        31 => array(
          1 => 1,
          3 => 0,
        ),
        36 => array(
          1 => 1,
          3 => 0,
        ),
        46 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => _registration_pages_get_entityform_id_from_type('ilr_alumni_association_event_reg'),
      'value' => array(
        0 => array(
          'target_id' => _registration_pages_get_entityform_id_from_type('ilr_alumni_association_event_reg'),
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'registration_page',
    'dependent' => 'field_aa_non_member_price',
    'dependee' => 'field_registration_form_type',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => 1,
        2 => 2,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        11 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        16 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        41 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        26 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        21 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        31 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        36 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        46 => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => 1,
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => 1,
          3 => 0,
        ),
        2 => array(
          1 => 1,
          3 => 0,
        ),
        11 => array(
          1 => 1,
          3 => 0,
        ),
        16 => array(
          1 => 1,
          3 => 0,
        ),
        41 => array(
          1 => 1,
          3 => 0,
        ),
        26 => array(
          1 => 1,
          3 => 0,
        ),
        21 => array(
          1 => 1,
          3 => 0,
        ),
        31 => array(
          1 => 1,
          3 => 0,
        ),
        36 => array(
          1 => 1,
          3 => 0,
        ),
        46 => array(
          1 => 1,
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => 1,
      'value_form' => _registration_pages_get_entityform_id_from_type('ilr_alumni_association_event_reg'),
      'value' => array(
        0 => array(
          'target_id' => _registration_pages_get_entityform_id_from_type('ilr_alumni_association_event_reg'),
        ),
      ),
      'values' => array(),
    ),
  );

  return $items;
}

function _registration_pages_get_entityform_id_from_type($type) {
  module_load_include('module', 'entityform');
  $entityform_type = entityform_get_types($type);
  return $entityform_type->id;
}
