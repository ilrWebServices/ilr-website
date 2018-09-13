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
  $field_group->identifier = 'group_highlighted_content|node|visiting_fellow|default';
  $field_group->group_name = 'group_highlighted_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'visiting_fellow';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_highlighted';
  $field_group->data = array(
    'label' => 'Highlighted content',
    'weight' => '2',
    'children' => array(
      0 => 'field_country',
      1 => 'field_dates_as_text',
      2 => 'field_email',
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
  $field_groups['group_highlighted_content|node|visiting_fellow|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_highlighted|node|visiting_fellow|default';
  $field_group->group_name = 'group_highlighted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'visiting_fellow';
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
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-highlighted field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_highlighted|node|visiting_fellow|default'] = $field_group;

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
    'weight' => '2',
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
      'label' => 'Title and Focus',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-and-focus field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_title_and_focus|node|visiting_fellow|ilr_theme__highlighted'] = $field_group;

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
    'label' => 'Title and focus',
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
        'classes' => 'group-title-and-focus field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_title_and_focus|node|visiting_fellow|ilr_theme__highlighted'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Highlighted');
  t('Highlighted content');
  t('Main Content');
  t('Title and Focus');
  t('Title and focus');

  return $field_groups;
}
