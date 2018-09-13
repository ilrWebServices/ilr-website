<?php
/**
 * @file
 * ilr_certificate_programs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ilr_certificate_programs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_curriculum|node|certificate_programs|default';
  $field_group->group_name = 'group_curriculum';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'certificate_programs';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Curriculum',
    'weight' => '5',
    'children' => array(
      0 => 'field_course',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-curriculum field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_curriculum|node|certificate_programs|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Curriculum');

  return $field_groups;
}
