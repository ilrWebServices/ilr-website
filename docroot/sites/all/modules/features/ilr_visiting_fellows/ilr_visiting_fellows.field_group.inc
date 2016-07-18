<?php
/**
 * @file
 * ilr_visiting_fellows.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ilr_visiting_fellows_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|visiting_fellow|default';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'visiting_fellow';
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
        'id' => '',
      ),
    ),
  );
  $field_groups['group_main_content|node|visiting_fellow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_and_focus|node|visiting_fellow|ilr_theme__highlighted';
  $field_group->group_name = 'group_title_and_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'visiting_fellow';
  $field_group->mode = 'ilr_theme__highlighted';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title and Focus',
    'weight' => '1',
    'children' => array(
      0 => 'field_country',
      1 => 'field_dates_as_text',
      2 => 'field_email',
      3 => 'field_full_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_title_and_focus|node|visiting_fellow|ilr_theme__highlighted'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Main Content');
  t('Title and Focus');

  return $field_groups;
}
