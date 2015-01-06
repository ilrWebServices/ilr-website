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
      0 => 'field_ai_honors_awards',
      1 => 'field_ai_links',
      2 => 'field_ai_other_expertise',
      3 => 'field_ai_overview',
      4 => 'field_ai_professional_activities',
      5 => 'field_ai_publications',
      6 => 'field_ai_research_statement',
      7 => 'field_ai_teaching_statement',
      8 => 'field_areas_of_expertise',
      9 => 'field_use_ai_data',
      10 => 'field_visibility_settings',
      11 => 'field_ai_service_statement',
      12 => 'field_ai_outreach_statement',
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
      1 => 'field_ilrweb_publications',
      2 => 'field_ilrweb_publications_file',
      3 => 'field_ilrweb_vita_file',
      4 => 'field_ilrweb_vita_html',
      5 => 'field_faculty_on_leave',
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
  $field_group->parent_name = '';
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
      2 => 'field_email',
      3 => 'field_fax',
      4 => 'field_first_name',
      5 => 'field_last_name',
      6 => 'field_local_address',
      7 => 'field_netid',
      8 => 'field_phone',
      9 => 'field_profile_image',
      10 => 'field_profile_type',
      11 => 'field_working_title',
      12 => 'field_profile_department',
      13 => 'title',
      14 => 'path',
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bio',
    'weight' => '20',
    'children' => array(),
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
      1 => 'field_address_line_2',
      2 => 'field_email',
      3 => 'field_fax',
      4 => 'field_local_address',
      5 => 'field_phone',
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
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact_info|node|people_profile|default'] = $field_group;

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
      ),
    ),
  );
  $export['group_expertise|node|people_profile|default'] = $field_group;

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
      6 => 'field_ilrweb_overview',
      7 => 'field_ilrweb_publications',
      8 => 'field_ilrweb_publications_file',
      9 => 'field_ilrweb_vita_html',
      10 => 'field_ai_outreach_statement',
      11 => 'field_ai_service_statement',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Main Content',
      'instance_settings' => array(
        'classes' => 'group-main-content',
        'element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $export['group_main_content|node|people_profile|default'] = $field_group;

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
      1 => 'group_advanced_tab',
      2 => 'group_basic_tab',
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
      ),
    ),
  );
  $export['group_profile_highlighted|node|people_profile|default'] = $field_group;

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
      ),
    ),
  );
  $export['group_profile_sidebar|node|people_profile|default'] = $field_group;

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
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Related Resources',
      'instance_settings' => array(
        'classes' => 'group group-related-resources',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_related_resources|node|people_profile|default'] = $field_group;

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
      ),
    ),
  );
  $export['group_title_and_focus|node|people_profile|default'] = $field_group;

  return $export;
}
