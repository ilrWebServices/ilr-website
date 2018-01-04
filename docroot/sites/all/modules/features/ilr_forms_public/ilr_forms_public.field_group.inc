<?php
/**
 * @file
 * ilr_forms_public.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ilr_forms_public_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_application_questions|entityform|sports_camp_application|form';
  $field_group->group_name = 'group_application_questions';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sports_camp_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Application questions',
    'weight' => '5',
    'children' => array(
      0 => 'field_work_experience',
      1 => 'field_text_paragraph',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-application-questions field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_application_questions|entityform|sports_camp_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_parent_guardian_info|entityform|sports_camp_application|form';
  $field_group->group_name = 'group_parent_guardian_info';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sports_camp_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Parent/guardian information',
    'weight' => '4',
    'children' => array(
      0 => 'field_full_name',
      1 => 'field_email',
      2 => 'field_phone',
      3 => 'field_phone_additional',
      4 => 'field_first_name_additional',
      5 => 'field_last_name_additional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-parent-guardian-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_parent_guardian_info|entityform|sports_camp_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_information|entityform|sports_camp_application|form';
  $field_group->group_name = 'group_student_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sports_camp_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Student Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_dob',
      3 => 'field_address_line_1',
      4 => 'field_city',
      5 => 'field_state_as_text',
      6 => 'field_zip_code',
      7 => 'field_country',
      8 => 'field_organization',
      9 => 'field_city_additional',
      10 => 'field_count_as_text',
      11 => 'field_email_additional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-student-information field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_student_information|entityform|sports_camp_application|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Application questions');
  t('Parent/guardian information');
  t('Student Information');

  return $field_groups;
}
