<?php

/**
 * @file
 * people_profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function people_profiles_field_group_info() {
  $field_groups = array();

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
      0 => 'field_ai_honors_awards',
      1 => 'field_ai_links',
      2 => 'field_ai_other_expertise',
      3 => 'field_ai_overview',
      4 => 'field_ai_professional_activities',
      5 => 'field_ai_publications',
      6 => 'field_ai_research_statement',
      7 => 'field_ai_teaching_statement',
      8 => 'field_areas_of_expertise',
      9 => 'field_visibility_settings',
      10 => 'field_ai_outreach_statement',
      11 => 'field_ai_service_statement',
      12 => 'field_display_in_faculty_lists',
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
  $field_groups['group_activity_insight|node|people_profile|form'] = $field_group;

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
      1 => 'field_email',
      2 => 'field_fax',
      3 => 'field_first_name',
      4 => 'field_ilrweb_vita_file',
      5 => 'field_last_name',
      6 => 'field_local_address',
      7 => 'field_netid',
      8 => 'field_phone',
      9 => 'field_profile_image',
      10 => 'field_profile_type',
      11 => 'field_working_title',
      12 => 'field_faculty_on_leave',
      13 => 'field_profile_department',
      14 => 'field_office_hours',
      15 => 'field_preferred_pronouns',
      16 => 'title',
      17 => 'path',
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
  $field_groups['group_basic_tab|node|people_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|people_profile|default';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile_sidebar';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '28',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_email',
      2 => 'field_fax',
      3 => 'field_local_address',
      4 => 'field_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'classes' => 'group group-contact-info',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_people_profile_full_group_contact_info',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact_info|node|people_profile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_expertise|node|people_profile|default';
  $field_group->group_name = 'group_expertise';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile_sidebar';
  $field_group->data = array(
    'label' => 'Expertise',
    'weight' => '30',
    'children' => array(
      0 => 'field_ai_other_expertise',
      1 => 'field_areas_of_expertise',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Expertise',
      'instance_settings' => array(
        'classes' => 'group group-expertise',
        'element' => 'div',
        'attributes' => '',
        'id' => 'node_people_profile_full_group_expertise',
      ),
    ),
  );
  $field_groups['group_expertise|node|people_profile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|people_profile|default';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_ai_honors_awards',
      1 => 'field_ai_overview',
      2 => 'field_ai_professional_activities',
      3 => 'field_ai_publications',
      4 => 'field_ai_research_statement',
      5 => 'field_ai_teaching_statement',
      6 => 'field_ai_outreach_statement',
      7 => 'field_ai_service_statement',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Main Content',
      'instance_settings' => array(
        'classes' => 'group-main-content',
        'element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
        'id' => 'node_people_profile_full_group_main_content',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_main_content|node|people_profile|default'] = $field_group;

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
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'People Profile Tabs',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_people_profile_tabs|node|people_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_highlighted|node|people_profile|default';
  $field_group->group_name = 'group_profile_highlighted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Highlighted',
    'weight' => '0',
    'children' => array(
      0 => 'field_profile_image',
      1 => 'group_title_and_focus',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Highlighted',
      'instance_settings' => array(
        'classes' => 'group-highlighted field-group-html-element',
        'element' => 'div',
        'attributes' => '',
        'id' => 'node_people_profile_full_group_profile_highlighted',
      ),
    ),
  );
  $field_groups['group_profile_highlighted|node|people_profile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_sidebar|node|people_profile|default';
  $field_group->group_name = 'group_profile_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '2',
    'children' => array(
      0 => 'group_contact_info',
      1 => 'group_expertise',
      2 => 'group_related_resources',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'classes' => 'group group-sidebar',
        'element' => 'div',
        'attributes' => '',
        'id' => 'node_people_profile_full_group_profile_sidebar',
      ),
    ),
  );
  $field_groups['group_profile_sidebar|node|people_profile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_teaser_content|node|people_profile|teaser';
  $field_group->group_name = 'group_profile_teaser_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_email',
      1 => 'field_phone',
      2 => 'field_working_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'people-profile__content',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_profile_teaser_content|node|people_profile|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_resources|node|people_profile|default';
  $field_group->group_name = 'group_related_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile_sidebar';
  $field_group->data = array(
    'label' => 'Related Resources',
    'weight' => '29',
    'children' => array(
      0 => 'field_ai_links',
      1 => 'field_ilrweb_vita_file',
      2 => 'field_office_hours',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Related Resources',
      'instance_settings' => array(
        'classes' => 'group group-related-resources',
        'element' => 'div',
        'attributes' => '',
        'id' => 'node_people_profile_full_group_related_resources',
      ),
    ),
  );
  $field_groups['group_related_resources|node|people_profile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_and_focus|node|people_profile|default';
  $field_group->group_name = 'group_title_and_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'people_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile_highlighted';
  $field_group->data = array(
    'label' => 'Title and Focus',
    'weight' => '2',
    'children' => array(
      0 => 'field_working_title',
      1 => 'field_profile_department',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'classes' => 'group-title-and-focus field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => 'node_people_profile_full_group_title_and_focus',
      ),
    ),
  );
  $field_groups['group_title_and_focus|node|people_profile|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Activity Insight');
  t('Basic');
  t('Contact');
  t('Content');
  t('Expertise');
  t('Highlighted');
  t('Main Content');
  t('People Profile Tabs');
  t('Related Resources');
  t('Sidebar');
  t('Title and Focus');

  return $field_groups;
}
