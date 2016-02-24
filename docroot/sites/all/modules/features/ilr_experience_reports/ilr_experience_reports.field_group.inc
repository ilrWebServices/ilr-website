<?php
/**
 * @file
 * ilr_experience_reports.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ilr_experience_reports_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_and_focus|node|experience_report|ilr_theme__highlighted';
  $field_group->group_name = 'group_title_and_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'experience_report';
  $field_group->mode = 'ilr_theme__highlighted';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title and Focus',
    'weight' => '2',
    'children' => array(
      0 => 'field_program',
      1 => 'field_country',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-title-and-focus field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_title_and_focus|node|experience_report|ilr_theme__highlighted'] = $field_group;

  return $export;
}
