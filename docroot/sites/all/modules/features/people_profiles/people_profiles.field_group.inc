<?php
/**
 * @file
 * people_profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function people_profiles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_areas_of_expertise_tab|node|people_profile|form';
  $field_group->group_name = 'group_areas_of_expertise_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_people_profile_tabs';
  $field_group->data = array(
    'label' => 'Areas of Expertise',
    'weight' => '21',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-areas-of-expertise-tab field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_areas_of_expertise_tab|node|people_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_tab|node|people_profile|form';
  $field_group->group_name = 'group_basic_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_people_profile_tabs';
  $field_group->data = array(
    'label' => 'Basic',
    'weight' => '19',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_department',
      4 => 'field_email',
      5 => 'field_fax',
      6 => 'field_first_name',
      7 => 'field_last_name',
      8 => 'field_phone',
      9 => 'field_profile_image',
      10 => 'field_state',
      11 => 'field_working_title',
      12 => 'field_zip_code',
      13 => 'field_netid',
      14 => 'title',
      15 => 'path',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Basic',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_basic_tab|node|people_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bio_tab|node|people_profile|form';
  $field_group->group_name = 'group_bio_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_people_profile_tabs';
  $field_group->data = array(
    'label' => 'Bio',
    'weight' => '20',
    'children' => array(
      0 => 'field_bio',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Bio',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_bio_tab|node|people_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faculty_info_tab|node|people_profile|form';
  $field_group->group_name = 'group_faculty_info_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_people_profile_tabs';
  $field_group->data = array(
    'label' => 'Faculty Info',
    'weight' => '22',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-faculty-info-tab field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_faculty_info_tab|node|people_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_people_profile_tabs|node|people_profile|form';
  $field_group->group_name = 'group_people_profile_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'People Profile Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_areas_of_expertise_tab',
      1 => 'group_basic_tab',
      2 => 'group_bio_tab',
      3 => 'group_faculty_info_tab',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'People Profile Tabs',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_people_profile_tabs|node|people_profile|form'] = $field_group;

  return $export;
}
