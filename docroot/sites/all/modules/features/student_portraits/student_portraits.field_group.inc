<?php
/**
 * @file
 * student_portraits.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function student_portraits_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_portrait_highlighted|node|student_portrait|default';
  $field_group->group_name = 'group_portrait_highlighted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student_portrait';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Highlighted',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'field_interests_and_goals',
      2 => 'field_portrait_experience',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'classes' => 'group-portrait-highlighted field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => 'node_student_portrait_full_group_portrait_highlighted',
      ),
    ),
  );
  $export['group_portrait_highlighted|node|student_portrait|default'] = $field_group;

  return $export;
}
