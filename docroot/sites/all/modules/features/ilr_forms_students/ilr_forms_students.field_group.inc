<?php
/**
 * @file
 * ilr_forms_students.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ilr_forms_students_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_applicant_information|entityform|fex_wisp_student_application|default';
  $field_group->group_name = 'group_applicant_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Applicant Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_year_fr_soph_jr_sr_milr',
      1 => 'field_cornell_college',
      2 => 'field_netid',
      3 => 'field_first_name',
      4 => 'field_last_name',
      5 => 'field_first_name_additional',
      6 => 'field_student_id_number',
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
  $export['group_applicant_information|entityform|fex_wisp_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_applicant_information|entityform|fex_wisp_student_application|form';
  $field_group->group_name = 'group_applicant_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Applicant Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_year_fr_soph_jr_sr_milr',
      1 => 'field_cornell_college',
      2 => 'field_netid',
      3 => 'field_first_name',
      4 => 'field_last_name',
      5 => 'field_first_name_additional',
      6 => 'field_student_id_number',
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
  $export['group_applicant_information|entityform|fex_wisp_student_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fex_opportunities|entityform|fex_wisp_sponsor_registration|default';
  $field_group->group_name = 'group_fex_opportunities';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_sponsor_registration';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FEX Opportunities',
    'weight' => '3',
    'children' => array(
      0 => 'field_career_field_fex',
      1 => 'field_other_career_field_fex_',
      2 => 'field_activities',
      3 => 'field_city_additional_2',
      4 => 'field_state_province_addl_2',
      5 => 'field_fex_dates',
      6 => 'field_fex_number_of_students',
      7 => 'field_fex_same_day',
      8 => 'field_fex_upperclass_students',
      9 => 'field_fex_dates_constraints',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'FEX Opportunities',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-fex-opportunities field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fex_opportunities|entityform|fex_wisp_sponsor_registration|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fex_opportunities|entityform|fex_wisp_sponsor_registration|form';
  $field_group->group_name = 'group_fex_opportunities';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_sponsor_registration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FEX Opportunities',
    'weight' => '4',
    'children' => array(
      0 => 'field_career_field_fex',
      1 => 'field_other_career_field_fex_',
      2 => 'field_fex_markup_if_not_chosen',
      3 => 'field_fex_markup_if_chosen',
      4 => 'field_activities',
      5 => 'field_city_additional_2',
      6 => 'field_state_province_addl_2',
      7 => 'field_fex_dates',
      8 => 'field_fex_dates_markup',
      9 => 'field_fex_number_of_students',
      10 => 'field_fex_same_day',
      11 => 'field_fex_upperclass_students',
      12 => 'field_fex_dates_constraints',
      13 => 'field_fex_constraints_markup',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'FEX Opportunities',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-fex-opportunities field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fex_opportunities|entityform|fex_wisp_sponsor_registration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fex_wisp_location|entityform|fex_wisp_student_application|default';
  $field_group->group_name = 'group_fex_wisp_location';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FEX/WISP Location',
    'weight' => '6',
    'children' => array(
      0 => 'field_city_additional_2',
      1 => 'field_state_province_addl_2',
      2 => 'field_state_province_addl_3',
      3 => 'field_city_additional_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'FEX/WISP Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-fex-wisp-location field-group-fieldset',
        'description' => 'Please note: You will be required to prove that you have arranged for accommodations and transportation if you are accepted into a FEX or WISP that is not in your hometown.
<br><br>
Indicate at least one choice for location (city and state).',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fex_wisp_location|entityform|fex_wisp_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fex_wisp_location|entityform|fex_wisp_student_application|form';
  $field_group->group_name = 'group_fex_wisp_location';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FEX/WISP Location',
    'weight' => '4',
    'children' => array(
      0 => 'field_city_additional_2',
      1 => 'field_state_province_addl_2',
      2 => 'field_state_province_addl_3',
      3 => 'field_city_additional_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'FEX/WISP Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-fex-wisp-location field-group-fieldset',
        'description' => 'Please note: You will be required to prove that you have arranged for accommodations and transportation if you are accepted into a FEX or WISP that is not in your hometown.
<br><br>
Specify preferred location (city / state). You may also optionally specify an alternate location.
',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fex_wisp_location|entityform|fex_wisp_student_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fex_wisp_sponsor_info|entityform|fex_wisp_sponsor_registration|default';
  $field_group->group_name = 'group_fex_wisp_sponsor_info';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_sponsor_registration';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sponsor Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_fex_wisp_opportunity_type',
      1 => 'field_organization',
      2 => 'field_description_long',
      3 => 'field_h_school_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sponsor Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-fex-wisp-sponsor-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fex_wisp_sponsor_info|entityform|fex_wisp_sponsor_registration|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fex_wisp_sponsor_info|entityform|fex_wisp_sponsor_registration|form';
  $field_group->group_name = 'group_fex_wisp_sponsor_info';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_sponsor_registration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sponsor Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_fex_wisp_opportunity_type',
      1 => 'field_organization',
      2 => 'field_description_long',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sponsor Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-fex-wisp-sponsor-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fex_wisp_sponsor_info|entityform|fex_wisp_sponsor_registration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_cornell_address|entityform|fex_wisp_student_application|default';
  $field_group->group_name = 'group_local_cornell_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Local (Cornell) Address',
    'weight' => '4',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_state_province',
      4 => 'field_zip_code',
      5 => 'field_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Local (Cornell) Address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-local-cornell-address field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_local_cornell_address|entityform|fex_wisp_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_cornell_address|entityform|fex_wisp_student_application|form';
  $field_group->group_name = 'group_local_cornell_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Local (Cornell) Address',
    'weight' => '2',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_state_province',
      4 => 'field_zip_code',
      5 => 'field_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Local (Cornell) Address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-local-cornell-address field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_local_cornell_address|entityform|fex_wisp_student_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_permanent_address|entityform|fex_wisp_student_application|default';
  $field_group->group_name = 'group_permanent_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Permanent Address',
    'weight' => '5',
    'children' => array(
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_city_additional',
      3 => 'field_state_province_additional',
      4 => 'field_zip_postal_code_additional',
      5 => 'field_country',
      6 => 'field_phone_additional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Permanent Address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-permanent-address field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_permanent_address|entityform|fex_wisp_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_permanent_address|entityform|fex_wisp_student_application|form';
  $field_group->group_name = 'group_permanent_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Permanent Address',
    'weight' => '3',
    'children' => array(
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_city_additional',
      3 => 'field_state_province_additional',
      4 => 'field_zip_postal_code_additional',
      5 => 'field_country',
      6 => 'field_phone_additional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Permanent Address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-permanent-address field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_permanent_address|entityform|fex_wisp_student_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_information|entityform|fex_wisp_student_application|default';
  $field_group->group_name = 'group_program_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_h_school_year',
      1 => 'field_h_program',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Program Information',
      'instance_settings' => array(
        'classes' => 'group-program-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_program_information|entityform|fex_wisp_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resume|entityform|fex_wisp_student_application|default';
  $field_group->group_name = 'group_resume';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resume',
    'weight' => '7',
    'children' => array(
      0 => 'field_upload_your_resume_or_cv',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Resume',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-resume field-group-fieldset',
        'description' => 'Save your resume in .doc, .docx, .pdf, or .txt format before uploading it.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_resume|entityform|fex_wisp_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resume|entityform|fex_wisp_student_application|form';
  $field_group->group_name = 'group_resume';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resume',
    'weight' => '28',
    'children' => array(
      0 => 'field_upload_your_resume_or_cv',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Resume',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-resume field-group-fieldset',
        'description' => 'Save your resume in .doc, .docx, .pdf, or .txt format before uploading it.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_resume|entityform|fex_wisp_student_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_supervisor_information|entityform|fex_wisp_sponsor_registration|default';
  $field_group->group_name = 'group_supervisor_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_sponsor_registration';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supervisor Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_first_name_additional',
      1 => 'field_yes_no',
      2 => 'field_last_name_additional',
      3 => 'field_job_title_additional',
      4 => 'field_email_additional',
      5 => 'field_phone_additional',
      6 => 'field_cornell_college_additional',
      7 => 'field_alum_additional',
      8 => 'field_degree_ba_masters_oth_addl',
      9 => 'field_year_as_list_text_2',
      10 => 'field_is_address_the_same',
      11 => 'field_address_line_1_additional',
      12 => 'field_address_line_2_additional',
      13 => 'field_city_additional',
      14 => 'field_state_province_additional',
      15 => 'field_zip_postal_code_additional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Supervisor Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-supervisor-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_supervisor_information|entityform|fex_wisp_sponsor_registration|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_supervisor_information|entityform|fex_wisp_sponsor_registration|form';
  $field_group->group_name = 'group_supervisor_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_sponsor_registration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supervisor Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_first_name_additional',
      1 => 'field_yes_no',
      2 => 'field_last_name_additional',
      3 => 'field_job_title_additional',
      4 => 'field_email_additional',
      5 => 'field_phone_additional',
      6 => 'field_cornell_college_additional',
      7 => 'field_alum_additional',
      8 => 'field_degree_ba_masters_oth_addl',
      9 => 'field_year_as_list_text_2',
      10 => 'field_is_address_the_same',
      11 => 'field_address_line_1_additional',
      12 => 'field_address_line_2_additional',
      13 => 'field_city_additional',
      14 => 'field_state_province_additional',
      15 => 'field_zip_postal_code_additional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Supervisor Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-supervisor-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_supervisor_information|entityform|fex_wisp_sponsor_registration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wisp_opportunities|entityform|fex_wisp_sponsor_registration|default';
  $field_group->group_name = 'group_wisp_opportunities';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_sponsor_registration';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'WISP Opportunities',
    'weight' => '4',
    'children' => array(
      0 => 'field_career_field_wisp',
      1 => 'field_other_career_field_wisp_',
      2 => 'field_responsibility',
      3 => 'field_qualifications',
      4 => 'field_city_additional_3',
      5 => 'field_state_province_addl_3',
      6 => 'field_paid',
      7 => 'field_salary',
      8 => 'field_wisp_dates',
      9 => 'field_wisp_dates_constraints',
      10 => 'field_wisp_number_of_students',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'WISP Opportunities',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-wisp-opportunities field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wisp_opportunities|entityform|fex_wisp_sponsor_registration|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wisp_opportunities|entityform|fex_wisp_sponsor_registration|form';
  $field_group->group_name = 'group_wisp_opportunities';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_sponsor_registration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'WISP Opportunities',
    'weight' => '5',
    'children' => array(
      0 => 'field_wisp_markup_if_not_chosen',
      1 => 'field_wisp_markup_if_chosen',
      2 => 'field_career_field_wisp',
      3 => 'field_other_career_field_wisp_',
      4 => 'field_responsibility',
      5 => 'field_qualifications',
      6 => 'field_city_additional_3',
      7 => 'field_state_province_addl_3',
      8 => 'field_paid',
      9 => 'field_salary',
      10 => 'field_wisp_dates',
      11 => 'field_wisp_dates_markup',
      12 => 'field_wisp_dates_constraints',
      13 => 'field_wisp_constraints_markup',
      14 => 'field_wisp_number_of_students',
      15 => 'field_qualifications_markup',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'WISP Opportunities',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-wisp-opportunities field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wisp_opportunities|entityform|fex_wisp_sponsor_registration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_your_information|entityform|fex_wisp_sponsor_registration|default';
  $field_group->group_name = 'group_your_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_sponsor_registration';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_email',
      3 => 'field_address_line_1',
      4 => 'field_address_line_2',
      5 => 'field_city',
      6 => 'field_state_province',
      7 => 'field_zip_code',
      8 => 'field_phone',
      9 => 'field_alum',
      10 => 'field_cornell_college',
      11 => 'field_degree_ba_masters_other',
      12 => 'field_year_as_list_text',
      13 => 'field_job_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Your Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-your-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_your_information|entityform|fex_wisp_sponsor_registration|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_your_information|entityform|fex_wisp_sponsor_registration|form';
  $field_group->group_name = 'group_your_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_sponsor_registration';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_email',
      3 => 'field_address_line_1',
      4 => 'field_address_line_2',
      5 => 'field_city',
      6 => 'field_state_province',
      7 => 'field_zip_code',
      8 => 'field_phone',
      9 => 'field_alum',
      10 => 'field_cornell_college',
      11 => 'field_degree_ba_masters_other',
      12 => 'field_year_as_list_text',
      13 => 'field_job_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Your Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-your-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_your_information|entityform|fex_wisp_sponsor_registration|form'] = $field_group;

  return $export;
}
