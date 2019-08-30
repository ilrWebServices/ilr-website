<?php

/**
 * @file
 * student_portraits.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function student_portraits_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_highlighted_content|node|student_portrait|default';
  $field_group->group_name = 'group_highlighted_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'student_portrait';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_portrait_highlighted';
  $field_group->data = array(
    'label' => 'Highlighted content',
    'weight' => '5',
    'children' => array(
      0 => 'field_interests_and_goals',
      1 => 'field_portrait_experience',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-highlighted-content field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_highlighted_content|node|student_portrait|default'] = $field_group;

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
      1 => 'group_highlighted_content',
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
  $field_groups['group_portrait_highlighted|node|student_portrait|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Highlighted');
  t('Highlighted content');

  return $field_groups;
}
