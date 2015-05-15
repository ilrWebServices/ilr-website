<?php
/**
 * @file
 * ilr_sdc_listings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ilr_sdc_listings_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|sdc_class|default';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdc_class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_course',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'classes' => 'group-main-content field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_main_content|node|sdc_class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|sdc_course|default';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdc_course';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_catalog_prefix',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Main Content',
      'instance_settings' => array(
        'classes' => 'group-main-content',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_main_content|node|sdc_course|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|sdc_course|teaser';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdc_course';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Main Content',
      'instance_settings' => array(
        'classes' => 'group-main-content',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_main_content|node|sdc_course|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|sdc_class|default';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdc_class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '1',
    'children' => array(
      0 => 'field_address',
      1 => 'field_registration_end_date',
      2 => 'field_building',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'classes' => 'group-sidebar',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_sidebar|node|sdc_class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|sdc_course|default';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sdc_course';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-sidebar field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sidebar|node|sdc_course|default'] = $field_group;

  return $export;
}
