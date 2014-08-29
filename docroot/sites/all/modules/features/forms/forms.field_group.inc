<?php
/**
 * @file
 * forms.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function forms_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_academics_dublin|entityform|dublin_application_form|form';
  $field_group->group_name = 'group_academics_dublin';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Academics',
    'weight' => '28',
    'children' => array(
      0 => 'field_gpa',
      1 => 'field_expected_graduation_date',
      2 => 'field_transfer_student',
      3 => 'field_number_of_completed_credit',
      4 => 'field_number_of_terms_at_cornell',
      5 => 'field_dublin_courses_completed',
      6 => 'field_dublin_current_courses',
      7 => 'field_disciplinary_action',
      8 => 'field_disciplinary_explanation',
      9 => 'field_year_freshman_soph_jr_sr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Academics',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-academics-dublin field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_academics_dublin|entityform|dublin_application_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_college_address|entityform|dublin_application_form|form';
  $field_group->group_name = 'group_college_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'College address',
    'weight' => '2',
    'children' => array(
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_city_additional',
      3 => 'field_state_province_additional',
      4 => 'field_zip_postal_code_additional',
      5 => 'field_country_additional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'College address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-college-address field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_college_address|entityform|dublin_application_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dublin_essays|entityform|dublin_application_form|form';
  $field_group->group_name = 'group_dublin_essays';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Essays',
    'weight' => '38',
    'children' => array(
      0 => 'field_dublin_acad_goals_essay',
      1 => 'field_dublin_study_abroad_essay',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Essays',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-dublin-essays field-group-fieldset',
        'description' => 'Write and save your essays first, then copy and paste them below.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dublin_essays|entityform|dublin_application_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_address|entityform|dublin_application_form|form';
  $field_group->group_name = 'group_home_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Home address',
    'weight' => '1',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_state_province',
      4 => 'field_zip_code',
      5 => 'field_country',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Home address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-home-address field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_home_address|entityform|dublin_application_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_passport_information|entityform|dublin_application_form|form';
  $field_group->group_name = 'group_passport_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Passport information',
    'weight' => '24',
    'children' => array(
      0 => 'field_passport_number',
      1 => 'field_passport_expiration_date',
      2 => 'field_citizenship',
      3 => 'field_visa_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Passport information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-passport-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_passport_information|entityform|dublin_application_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phone_numbers|entityform|dublin_application_form|form';
  $field_group->group_name = 'group_phone_numbers';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phone numbers',
    'weight' => '21',
    'children' => array(
      0 => 'field_phone_college',
      1 => 'field_phone_home',
      2 => 'field_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Phone numbers',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-phone-numbers field-group-fieldset',
        'description' => 'Enter at least one phone number.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_phone_numbers|entityform|dublin_application_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_data|entityform|dublin_application_form|form';
  $field_group->group_name = 'group_student_data';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Student Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_middle_name',
      2 => 'field_last_name',
      3 => 'field_email',
      4 => 'field_student_id_number',
      5 => 'field_date_of_birth',
      6 => 'field_netid',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Student Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-student-data field-group-fieldset',
        'description' => 'Enter your name as it appears on your passport.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_student_data|entityform|dublin_application_form|form'] = $field_group;

  return $export;
}
