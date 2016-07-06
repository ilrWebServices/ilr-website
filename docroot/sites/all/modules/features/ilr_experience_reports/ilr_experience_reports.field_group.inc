<?php
/**
 * @file
 * ilr_experience_reports.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ilr_experience_reports_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|experience_report|default';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'experience_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_para_main_page_content',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-main-content field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_main_content|node|experience_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_report_highlighted|node|experience_report|default';
  $field_group->group_name = 'group_report_highlighted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'experience_report';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Highlighted',
    'weight' => '3',
    'children' => array(
      0 => 'field_image',
      1 => 'group_title_and_focus',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-report-highlighted field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_report_highlighted|node|experience_report|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_and_focus|node|experience_report|default';
  $field_group->group_name = 'group_title_and_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'experience_report';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_report_highlighted';
  $field_group->data = array(
    'label' => 'Title and Focus',
    'weight' => '4',
    'children' => array(
      0 => 'field_country',
      1 => 'field_program',
      2 => 'field_year_as_text',
    ),
    'format_type' => 'hidden',
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
  $field_groups['group_title_and_focus|node|experience_report|default'] = $field_group;

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
      0 => 'field_country',
      1 => 'field_program',
      2 => 'field_year_as_text',
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
  $field_groups['group_title_and_focus|node|experience_report|ilr_theme__highlighted'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Highlighted');
  t('Main Content');
  t('Title and Focus');

  return $field_groups;
}
