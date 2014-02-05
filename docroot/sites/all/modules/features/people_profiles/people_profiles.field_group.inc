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
  $field_group->identifier = 'group_activity_insight|node|people_profile|form';
  $field_group->group_name = 'group_activity_insight';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_people_profile_tabs';
  $field_group->data = array(
    'label' => 'Activity Insight',
    'weight' => '24',
    'children' => array(
      0 => 'field_ai_professional_activities',
      1 => 'field_ai_honors_awards',
      2 => 'field_ai_publications',
      3 => 'field_ai_overview',
      4 => 'field_use_ai_data',
      5 => 'field_visibility_settings',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Activity Insight',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_activity_insight|node|people_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced_tab|node|people_profile|form';
  $field_group->group_name = 'group_advanced_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_people_profile_tabs';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '20',
    'children' => array(
      0 => 'field_ilrweb_overview',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Advanced',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_advanced_tab|node|people_profile|form'] = $field_group;

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
    'weight' => '22',
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
      8 => 'field_netid',
      9 => 'field_phone',
      10 => 'field_profile_image',
      11 => 'field_state',
      12 => 'field_working_title',
      13 => 'field_zip_code',
      14 => 'field_profile_type',
      15 => 'title',
      16 => 'path',
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
    'weight' => '23',
    'children' => array(
      0 => 'field_ai_research_statement',
      1 => 'field_areas_of_expertise',
    ),
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
      0 => 'group_activity_insight',
      1 => 'group_basic_tab',
      2 => 'group_faculty_info_tab',
      3 => 'group_advanced_tab',
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
