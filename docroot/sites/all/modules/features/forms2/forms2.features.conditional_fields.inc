<?php
/**
 * @file
 * forms2.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function forms2_conditional_fields_default_fields() {
  $items = array();

  $items["entityform:scheinman_webcast_registration"] = array(
    array(
      'entity' => 'entityform',
      'bundle' => 'scheinman_webcast_registration',
      'dependent' => 'field_cornell_degree',
      'dependee' => 'field_alum',
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
          51 => array(
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
          36 => array(
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
          26 => array(
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
        ),
        'element_edit' => array(
          1 => 1,
          3 => 3,
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
          51 => array(
            1 => 1,
            3 => 0,
          ),
          46 => array(
            1 => 1,
            3 => 0,
          ),
          36 => array(
            1 => 1,
            3 => 0,
          ),
          21 => array(
            1 => 1,
            3 => 0,
          ),
          26 => array(
            1 => 1,
            3 => 0,
          ),
          31 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 'Yes',
        'value' => array(
          0 => array(
            'value' => 'Yes',
          ),
        ),
        'values' => array(),
      ),
    ),
    array(
      'entity' => 'entityform',
      'bundle' => 'scheinman_webcast_registration',
      'dependent' => 'field_other_please_specify',
      'dependee' => 'field_prof_field_scheinman',
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
          51 => array(
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
          36 => array(
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
          26 => array(
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
          56 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          61 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 3,
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
          51 => array(
            1 => 1,
            3 => 0,
          ),
          46 => array(
            1 => 1,
            3 => 0,
          ),
          36 => array(
            1 => 1,
            3 => 0,
          ),
          21 => array(
            1 => 1,
            3 => 0,
          ),
          26 => array(
            1 => 1,
            3 => 0,
          ),
          31 => array(
            1 => 1,
            3 => 0,
          ),
          56 => array(
            1 => 1,
            3 => 3,
          ),
          61 => array(
            1 => 1,
            3 => 3,
          ),
        ),
        'selector' => '',
        'values_set' => 3,
        'value_form' => 'Other',
        'values' => array(
          0 => 'School employee',
          1 => 'Other',
        ),
        'value' => array(),
      ),
    ),
    array(
      'entity' => 'entityform',
      'bundle' => 'scheinman_webcast_registration',
      'dependent' => 'field_year_as_text',
      'dependee' => 'field_alum',
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
          51 => array(
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
          36 => array(
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
          26 => array(
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
        ),
        'element_edit' => array(
          1 => 1,
          3 => 3,
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
          51 => array(
            1 => 1,
            3 => 0,
          ),
          46 => array(
            1 => 1,
            3 => 0,
          ),
          36 => array(
            1 => 1,
            3 => 0,
          ),
          21 => array(
            1 => 1,
            3 => 0,
          ),
          26 => array(
            1 => 1,
            3 => 0,
          ),
          31 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 'Yes',
        'value' => array(
          0 => array(
            'value' => 'Yes',
          ),
        ),
        'values' => array(),
      ),
    ),
  );

  return $items;
}
