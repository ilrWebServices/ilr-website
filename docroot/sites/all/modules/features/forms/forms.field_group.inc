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
  $field_group->identifier = 'group_7th_semester_check|entityform|undergrad_appl_for_graduation|form';
  $field_group->group_name = 'group_7th_semester_check';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'undergrad_appl_for_graduation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '7th Semester Check',
    'weight' => '0',
    'children' => array(
      0 => 'field_7th_semester_check_certif',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '7th Semester Check',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-7th-semester-check field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_7th_semester_check|entityform|undergrad_appl_for_graduation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_academics_dublin|entityform|dublin_application_form|default';
  $field_group->group_name = 'group_academics_dublin';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Academics',
    'weight' => '5',
    'children' => array(
      0 => 'field_dates_as_text',
      1 => 'field_disciplinary_action',
      2 => 'field_disciplinary_explanation',
      3 => 'field_dublin_courses_completed',
      4 => 'field_dublin_current_courses',
      5 => 'field_gpa',
      6 => 'field_number_of_completed_credit',
      7 => 'field_number_of_terms_at_cornell',
      8 => 'field_transfer_student',
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
  $export['group_academics_dublin|entityform|dublin_application_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_academics_dublin|entityform|dublin_application_form|email';
  $field_group->group_name = 'group_academics_dublin';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'email';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Academics',
    'weight' => '24',
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
  $export['group_academics_dublin|entityform|dublin_application_form|email'] = $field_group;

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
    'weight' => '6',
    'children' => array(
      0 => 'field_dates_as_text',
      1 => 'field_disciplinary_action',
      2 => 'field_disciplinary_explanation',
      3 => 'field_dublin_courses_completed',
      4 => 'field_dublin_current_courses',
      5 => 'field_gpa',
      6 => 'field_number_of_completed_credit',
      7 => 'field_number_of_terms_at_cornell',
      8 => 'field_transfer_student',
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
  $field_group->identifier = 'group_applicant_information|entityform|grad_travel_grant_application|default';
  $field_group->group_name = 'group_applicant_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'grad_travel_grant_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Applicant Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_chairperson',
      1 => 'field_dates_as_text',
      2 => 'field_degree_program',
      3 => 'field_email',
      4 => 'field_first_name',
      5 => 'field_last_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Applicant Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-applicant-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_applicant_information|entityform|grad_travel_grant_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_applicant_information|entityform|grad_travel_grant_application|form';
  $field_group->group_name = 'group_applicant_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'grad_travel_grant_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Applicant Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_email',
      1 => 'field_first_name',
      2 => 'field_last_name',
      3 => 'field_degree_program',
      4 => 'field_chairperson',
      5 => 'field_dates_as_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Applicant Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-applicant-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_applicant_information|entityform|grad_travel_grant_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_college_address|entityform|dublin_application_form|default';
  $field_group->group_name = 'group_college_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'College address',
    'weight' => '2',
    'children' => array(
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_city_additional',
      3 => 'field_country_additional',
      4 => 'field_state_province_additional',
      5 => 'field_zip_postal_code_additional',
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
  $export['group_college_address|entityform|dublin_application_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_college_address|entityform|dublin_application_form|email';
  $field_group->group_name = 'group_college_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'email';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'College address',
    'weight' => '15',
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
  $export['group_college_address|entityform|dublin_application_form|email'] = $field_group;

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
    'weight' => '3',
    'children' => array(
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_city_additional',
      3 => 'field_country_additional',
      4 => 'field_state_province_additional',
      5 => 'field_zip_postal_code_additional',
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
  $field_group->identifier = 'group_conference_details|entityform|distance_learning_reservation_re|default';
  $field_group->group_name = 'group_conference_details';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'distance_learning_reservation_re';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Conference Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_conference_name',
      1 => 'field_dates',
      2 => 'field_start_time',
      3 => 'field_end_time',
      4 => 'field_recurrence',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Conference Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-conference-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_conference_details|entityform|distance_learning_reservation_re|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conference_details|entityform|distance_learning_reservation_re|form';
  $field_group->group_name = 'group_conference_details';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'distance_learning_reservation_re';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Conference Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_conference_name',
      1 => 'field_dates',
      2 => 'field_start_time',
      3 => 'field_end_time',
      4 => 'field_recurrence',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Conference Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-conference-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_conference_details|entityform|distance_learning_reservation_re|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conference_fieldset|entityform|grad_travel_grant_application|default';
  $field_group->group_name = 'group_conference_fieldset';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'grad_travel_grant_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Conference',
    'weight' => '1',
    'children' => array(
      0 => 'field_conference_name',
      1 => 'field_dates',
      2 => 'field_location_string',
      3 => 'field_title_of_paper_or_poster',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Conference',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-conference-fieldset field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_conference_fieldset|entityform|grad_travel_grant_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conference_fieldset|entityform|grad_travel_grant_application|form';
  $field_group->group_name = 'group_conference_fieldset';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'grad_travel_grant_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Conference',
    'weight' => '1',
    'children' => array(
      0 => 'field_conference_name',
      1 => 'field_dates',
      2 => 'field_location_string',
      3 => 'field_title_of_paper_or_poster',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Conference',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-conference-fieldset field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_conference_fieldset|entityform|grad_travel_grant_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_information|entityform|classroom_technologies_request|default';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'classroom_technologies_request';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_email',
      1 => 'field_first_name',
      2 => 'field_last_name',
      3 => 'field_phone',
      4 => 'field_course_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact_information|entityform|classroom_technologies_request|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_information|entityform|classroom_technologies_request|form';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'classroom_technologies_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_email',
      1 => 'field_first_name',
      2 => 'field_last_name',
      3 => 'field_phone',
      4 => 'field_course_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact_information|entityform|classroom_technologies_request|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_information|entityform|distance_learning_reservation_re|default';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'distance_learning_reservation_re';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_email',
      1 => 'field_first_name',
      2 => 'field_last_name',
      3 => 'field_phone',
      4 => 'field_department',
      5 => 'field_account_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact_information|entityform|distance_learning_reservation_re|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_information|entityform|distance_learning_reservation_re|form';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'distance_learning_reservation_re';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_email',
      1 => 'field_first_name',
      2 => 'field_last_name',
      3 => 'field_phone',
      4 => 'field_department',
      5 => 'field_account_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact_information|entityform|distance_learning_reservation_re|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cornell_site_details|entityform|distance_learning_reservation_re|default';
  $field_group->group_name = 'group_cornell_site_details';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'distance_learning_reservation_re';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cornell Site Details',
    'weight' => '7',
    'children' => array(
      0 => 'field_num_cornell_participants',
      1 => 'field_projector_needs',
      2 => 'field_comments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Cornell Site Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-cornell-site-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cornell_site_details|entityform|distance_learning_reservation_re|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cornell_site_details|entityform|distance_learning_reservation_re|form';
  $field_group->group_name = 'group_cornell_site_details';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'distance_learning_reservation_re';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cornell Site Details',
    'weight' => '3',
    'children' => array(
      0 => 'field_num_cornell_participants',
      1 => 'field_projector_needs',
      2 => 'field_comments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Cornell Site Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-cornell-site-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cornell_site_details|entityform|distance_learning_reservation_re|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_degree_plan|entityform|grad_student_appl_for_graduation|form';
  $field_group->group_name = 'group_degree_plan';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'grad_student_appl_for_graduation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Degree Plan',
    'weight' => '0',
    'children' => array(
      0 => 'field_degree_plan_submitted',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Degree Plan',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-degree-plan field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_degree_plan|entityform|grad_student_appl_for_graduation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dublin_essays|entityform|dublin_application_form|default';
  $field_group->group_name = 'group_dublin_essays';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Essays',
    'weight' => '6',
    'children' => array(
      0 => 'field_dublin_essay1',
      1 => 'field_dublin_essay_2',
      2 => 'field_dublin_acad_goals_file_upl',
      3 => 'field_dublin_abroad_file_upload',
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
  $export['group_dublin_essays|entityform|dublin_application_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dublin_essays|entityform|dublin_application_form|email';
  $field_group->group_name = 'group_dublin_essays';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'email';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Essays',
    'weight' => '25',
    'children' => array(
      0 => 'field_dublin_acad_goals_essay',
      1 => 'field_dublin_study_abroad_essay',
      2 => 'field_dublin_essay1',
      3 => 'field_dublin_essay_2',
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
  $export['group_dublin_essays|entityform|dublin_application_form|email'] = $field_group;

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
    'weight' => '8',
    'children' => array(
      0 => 'field_dublin_essay1',
      1 => 'field_dublin_essay_2',
      2 => 'field_dublin_acad_goals_file_upl',
      3 => 'field_dublin_abroad_file_upload',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Essays',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-dublin-essays field-group-fieldset',
        'description' => 'Save your essays in doc, docx, pdf, or txt format, and upload them below.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dublin_essays|entityform|dublin_application_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_experience|entityform|ilr_student_advisor_application_|default';
  $field_group->group_name = 'group_experience';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'ilr_student_advisor_application_';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your thoughts and experience',
    'weight' => '14',
    'children' => array(
      0 => 'field_comments',
      1 => 'field_experience',
      2 => 'field_relationship',
      3 => 'field_role',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Your thoughts and experience',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-experience field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_experience|entityform|ilr_student_advisor_application_|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_experience|entityform|ilr_student_advisor_application_|form';
  $field_group->group_name = 'group_experience';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'ilr_student_advisor_application_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your thoughts and experience',
    'weight' => '14',
    'children' => array(
      0 => 'field_comments',
      1 => 'field_experience',
      2 => 'field_relationship',
      3 => 'field_role',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Your thoughts and experience',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-experience field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_experience|entityform|ilr_student_advisor_application_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_graduation_date|entityform|grad_student_appl_for_graduation|form';
  $field_group->group_name = 'group_graduation_date';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'grad_student_appl_for_graduation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Graduation Date',
    'weight' => '2',
    'children' => array(
      0 => 'field_grad_date_appl_for_graduat',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Graduation Date',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-graduation-date field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_graduation_date|entityform|grad_student_appl_for_graduation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_graduation_date|entityform|undergrad_appl_for_graduation|form';
  $field_group->group_name = 'group_graduation_date';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'undergrad_appl_for_graduation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Graduation Date',
    'weight' => '2',
    'children' => array(
      0 => 'field_grad_date_appl_for_graduat',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Graduation Date',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-graduation-date field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_graduation_date|entityform|undergrad_appl_for_graduation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_address|entityform|dublin_application_form|default';
  $field_group->group_name = 'group_home_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Home address',
    'weight' => '1',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_country',
      4 => 'field_state_province',
      5 => 'field_zip_code',
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
  $export['group_home_address|entityform|dublin_application_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_address|entityform|dublin_application_form|email';
  $field_group->group_name = 'group_home_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'email';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Home address',
    'weight' => '3',
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
  $export['group_home_address|entityform|dublin_application_form|email'] = $field_group;

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
    'weight' => '2',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_country',
      4 => 'field_state_province',
      5 => 'field_zip_code',
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
  $field_group->identifier = 'group_letters_of_support|entityform|employee_recognition_nomination_|default';
  $field_group->group_name = 'group_letters_of_support';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'employee_recognition_nomination_';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Letters of Support',
    'weight' => '8',
    'children' => array(
      0 => 'field_letter_of_support',
      1 => 'field_supporter_1',
      2 => 'field_supporter_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Letters of Support',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-letters-of-support field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_letters_of_support|entityform|employee_recognition_nomination_|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_letters_of_support|entityform|employee_recognition_nomination_|form';
  $field_group->group_name = 'group_letters_of_support';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'employee_recognition_nomination_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Letters of Support',
    'weight' => '2',
    'children' => array(
      0 => 'field_letter_of_support',
      1 => 'field_supporter_1',
      2 => 'field_supporter_2',
      3 => 'field_empl_recog_supp_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Letters of Support',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-letters-of-support field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_letters_of_support|entityform|employee_recognition_nomination_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name_for_diploma|entityform|undergrad_appl_for_graduation|form';
  $field_group->group_name = 'group_name_for_diploma';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'undergrad_appl_for_graduation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name for Diploma',
    'weight' => '1',
    'children' => array(
      0 => 'field_full_name',
      1 => 'field_name_correct_for_diploma',
      2 => 'field_full_name_additional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Name for Diploma',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-name-for-diploma field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_name_for_diploma|entityform|undergrad_appl_for_graduation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name_student_id|entityform|grad_student_appl_for_graduation|form';
  $field_group->group_name = 'group_name_student_id';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'grad_student_appl_for_graduation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name and Student ID',
    'weight' => '1',
    'children' => array(
      0 => 'field_full_name',
      1 => 'field_name_correct_for_diploma',
      2 => 'field_full_name_additional',
      3 => 'field_student_id_number',
      4 => 'field_pronunciation',
      5 => 'field_pronunciation_markup',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Name and Student ID',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-name-student-id field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_name_student_id|entityform|grad_student_appl_for_graduation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nominator|entityform|employee_recognition_nomination_|default';
  $field_group->group_name = 'group_nominator';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'employee_recognition_nomination_';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Nominator',
    'weight' => '1',
    'children' => array(
      0 => 'field_department',
      1 => 'field_email',
      2 => 'field_full_name',
      3 => 'field_name_title',
      4 => 'field_netid',
      5 => 'field_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Nominator',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-nominator field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_nominator|entityform|employee_recognition_nomination_|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nominator|entityform|employee_recognition_nomination_|form';
  $field_group->group_name = 'group_nominator';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'employee_recognition_nomination_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Nominator',
    'weight' => '1',
    'children' => array(
      0 => 'field_full_name',
      1 => 'field_name_title',
      2 => 'field_department',
      3 => 'field_phone',
      4 => 'field_email',
      5 => 'field_netid',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Nominator',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-nominator field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_nominator|entityform|employee_recognition_nomination_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nominee|entityform|employee_recognition_nomination_|default';
  $field_group->group_name = 'group_nominee';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'employee_recognition_nomination_';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Nominee',
    'weight' => '0',
    'children' => array(
      0 => 'field_department_additional',
      1 => 'field_full_name_additional',
      2 => 'field_supervisor',
      3 => 'field_title_additional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Nominee',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-nominee field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_nominee|entityform|employee_recognition_nomination_|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nominee|entityform|employee_recognition_nomination_|form';
  $field_group->group_name = 'group_nominee';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'employee_recognition_nomination_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Nominee',
    'weight' => '0',
    'children' => array(
      0 => 'field_full_name_additional',
      1 => 'field_title_additional',
      2 => 'field_department_additional',
      3 => 'field_supervisor',
      4 => 'field_reason',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Nominee',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-nominee field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_nominee|entityform|employee_recognition_nomination_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_funding_fieldset|entityform|grad_travel_grant_application|default';
  $field_group->group_name = 'group_other_funding_fieldset';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'grad_travel_grant_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Funding',
    'weight' => '2',
    'children' => array(
      0 => 'field_amount_1',
      1 => 'field_amount_2',
      2 => 'field_amount_3',
      3 => 'field_funding_received',
      4 => 'field_source_1',
      5 => 'field_source_2',
      6 => 'field_source_3',
      7 => 'field_travel_grant_already_recei',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Other Funding',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-other-funding-fieldset field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_other_funding_fieldset|entityform|grad_travel_grant_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_funding_fieldset|entityform|grad_travel_grant_application|form';
  $field_group->group_name = 'group_other_funding_fieldset';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'grad_travel_grant_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other Funding',
    'weight' => '2',
    'children' => array(
      0 => 'field_funding_received',
      1 => 'field_travel_grant_already_recei',
      2 => 'field_amount_1',
      3 => 'field_source_1',
      4 => 'field_amount_2',
      5 => 'field_source_2',
      6 => 'field_amount_3',
      7 => 'field_source_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Other Funding',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-other-funding-fieldset field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_other_funding_fieldset|entityform|grad_travel_grant_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_passport_information|entityform|dublin_application_form|default';
  $field_group->group_name = 'group_passport_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Passport information',
    'weight' => '4',
    'children' => array(
      0 => 'field_citizenship',
      1 => 'field_dates',
      2 => 'field_passport_number',
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
      'formatter' => 'open',
    ),
  );
  $export['group_passport_information|entityform|dublin_application_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_passport_information|entityform|dublin_application_form|email';
  $field_group->group_name = 'group_passport_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'email';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Passport information',
    'weight' => '23',
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
      'formatter' => 'open',
    ),
  );
  $export['group_passport_information|entityform|dublin_application_form|email'] = $field_group;

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
    'weight' => '5',
    'children' => array(
      0 => 'field_citizenship',
      1 => 'field_dates',
      2 => 'field_passport_number',
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
      'formatter' => 'open',
    ),
  );
  $export['group_passport_information|entityform|dublin_application_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_permanent_address|entityform|ilr_student_advisor_application_|default';
  $field_group->group_name = 'group_permanent_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'ilr_student_advisor_application_';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Permanent address',
    'weight' => '12',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_state_province',
      4 => 'field_zip_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Permanent address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-permanent-address field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_permanent_address|entityform|ilr_student_advisor_application_|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_permanent_address|entityform|ilr_student_advisor_application_|form';
  $field_group->group_name = 'group_permanent_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'ilr_student_advisor_application_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Permanent address',
    'weight' => '12',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_state_province',
      4 => 'field_zip_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Permanent address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-permanent-address field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_permanent_address|entityform|ilr_student_advisor_application_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phone_numbers|entityform|dublin_application_form|default';
  $field_group->group_name = 'group_phone_numbers';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phone numbers',
    'weight' => '3',
    'children' => array(
      0 => 'field_phone',
      1 => 'field_phone_college',
      2 => 'field_phone_home',
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
  $export['group_phone_numbers|entityform|dublin_application_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phone_numbers|entityform|dublin_application_form|email';
  $field_group->group_name = 'group_phone_numbers';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'email';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phone numbers',
    'weight' => '22',
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
  $export['group_phone_numbers|entityform|dublin_application_form|email'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'field_phone',
      1 => 'field_phone_college',
      2 => 'field_phone_home',
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
  $field_group->identifier = 'group_remote_sites|entityform|distance_learning_reservation_re|default';
  $field_group->group_name = 'group_remote_sites';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'distance_learning_reservation_re';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Remote Sites',
    'weight' => '48',
    'children' => array(
      0 => 'field_remote_site_details',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Remote Sites',
      'instance_settings' => array(
        'classes' => 'group-remote-sites field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );

  $export['group_remote_sites|entityform|distance_learning_reservation_re|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_remote_sites|entityform|distance_learning_reservation_re|form';
  $field_group->group_name = 'group_remote_sites';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'distance_learning_reservation_re';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Remote Sites',
    'weight' => '48',
    'children' => array(
      0 => 'field_remote_site_details',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Remote Sites',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-remote-sites field-group-fieldset',
        'description' => 'You must have at least one remote site, and for each site the site name is required. Click the "Add another item" button below to add additional sites. Note that you can\'t add another site until you\'ve specified the site name for the previous site.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_remote_sites|entityform|distance_learning_reservation_re|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reservations|entityform|ilr_alumni_association_event_reg|form';
  $field_group->group_name = 'group_reservations';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'ilr_alumni_association_event_reg';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Reservations',
    'weight' => '17',
    'children' => array(
      0 => 'field_tickets_for_aa_members',
      1 => 'field_tickets_for_non_members',
      2 => 'field_guests',
      3 => 'field_attendee_list',
      4 => 'field_attendee_list_guests',
      5 => 'field_attendee_list_markup',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Reservations',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-reservations field-group-fieldset',
        'description' => 'Please purchase one ticket for each person attending.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_reservations|entityform|ilr_alumni_association_event_reg|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_data|entityform|dublin_application_form|default';
  $field_group->group_name = 'group_student_data';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Student Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_email',
      1 => 'field_first_name',
      2 => 'field_last_name',
      3 => 'field_middle_name',
      4 => 'field_netid',
      5 => 'field_student_id_number',
      6 => 'field_date_of_birth_as_text',
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
  $export['group_student_data|entityform|dublin_application_form|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_data|entityform|dublin_application_form|email';
  $field_group->group_name = 'group_student_data';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'dublin_application_form';
  $field_group->mode = 'email';
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
  $export['group_student_data|entityform|dublin_application_form|email'] = $field_group;

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
      0 => 'field_email',
      1 => 'field_first_name',
      2 => 'field_last_name',
      3 => 'field_middle_name',
      4 => 'field_netid',
      5 => 'field_student_id_number',
      6 => 'field_date_of_birth_as_text',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summer_address|entityform|ilr_student_advisor_application_|default';
  $field_group->group_name = 'group_summer_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'ilr_student_advisor_application_';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summer address',
    'weight' => '13',
    'children' => array(
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_city_additional',
      3 => 'field_state_province_additional',
      4 => 'field_summer_address_status',
      5 => 'field_zip_postal_code_additional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Summer address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-summer-address field-group-fieldset',
        'description' => 'We may need to contact you over the summer. Please let us know how to reach you.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_summer_address|entityform|ilr_student_advisor_application_|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summer_address|entityform|ilr_student_advisor_application_|form';
  $field_group->group_name = 'group_summer_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'ilr_student_advisor_application_';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summer address',
    'weight' => '13',
    'children' => array(
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_city_additional',
      3 => 'field_state_province_additional',
      4 => 'field_summer_address_status',
      5 => 'field_zip_postal_code_additional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Summer address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-summer-address field-group-fieldset',
        'description' => 'We may need to contact you over the summer. Please let us know how to reach you.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_summer_address|entityform|ilr_student_advisor_application_|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_of_support_needed|entityform|classroom_technologies_request|default';
  $field_group->group_name = 'group_type_of_support_needed';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'classroom_technologies_request';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type of Support Needed',
    'weight' => '2',
    'children' => array(
      0 => 'field_support_needed',
      1 => 'field_equipment_type',
      2 => 'field_equipment_loan_additional_',
      3 => 'field_laptop_loan_addl_info',
      4 => 'field_wireless_networking_needed',
      5 => 'field_laptop_size_preference',
      6 => 'field_non_standard_applications',
      7 => 'field_video_recording_addl_info',
      8 => 'field_media_cl_tech_video_rec',
      9 => 'field_number_of_copies',
      10 => 'field_post_to_web_',
      11 => 'field_training_technical_support',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Type of Support Needed',
      'instance_settings' => array(
        'classes' => 'group-type-of-support-needed field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_type_of_support_needed|entityform|classroom_technologies_request|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_type_of_support_needed|entityform|classroom_technologies_request|form';
  $field_group->group_name = 'group_type_of_support_needed';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'classroom_technologies_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type of Support Needed',
    'weight' => '3',
    'children' => array(
      0 => 'field_support_needed',
      1 => 'field_equipment_type',
      2 => 'field_equipment_loan_additional_',
      3 => 'field_laptop_loan_addl_info',
      4 => 'field_wireless_networking_needed',
      5 => 'field_laptop_size_preference',
      6 => 'field_non_standard_applications',
      7 => 'field_video_recording_addl_info',
      8 => 'field_media_cl_tech_video_rec',
      9 => 'field_number_of_copies',
      10 => 'field_post_to_web_',
      11 => 'field_training_technical_support',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Type of Support Needed',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-type-of-support-needed field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_type_of_support_needed|entityform|classroom_technologies_request|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_when_and_where|entityform|classroom_technologies_request|default';
  $field_group->group_name = 'group_when_and_where';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'classroom_technologies_request';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'When and Where?',
    'weight' => '1',
    'children' => array(
      0 => 'field_building_or_location',
      1 => 'field_room',
      2 => 'field_dates',
      3 => 'field_start_time',
      4 => 'field_end_time',
      5 => 'field_recurrence',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'When and Where?',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-when-and-where field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_when_and_where|entityform|classroom_technologies_request|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_when_and_where|entityform|classroom_technologies_request|form';
  $field_group->group_name = 'group_when_and_where';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'classroom_technologies_request';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'When and Where?',
    'weight' => '2',
    'children' => array(
      0 => 'field_building_or_location',
      1 => 'field_room',
      2 => 'field_dates',
      3 => 'field_start_time',
      4 => 'field_end_time',
      5 => 'field_recurrence',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'When and Where?',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-when-and-where field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_when_and_where|entityform|classroom_technologies_request|form'] = $field_group;

  return $export;
}
