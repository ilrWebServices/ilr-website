<?php

/**
 * @file
 * ilr_forms_students.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ilr_forms_students_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_applicant_information|entityform|fex_student_application|default';
  $field_group->group_name = 'group_applicant_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Applicant Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_first_name_additional',
      2 => 'field_last_name',
      3 => 'field_netid',
      4 => 'field_student_id_number',
      5 => 'field_fexwisp_cert',
      6 => 'field_year_fr_soph_jr_sr_milr',
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
  $field_groups['group_applicant_information|entityform|fex_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_applicant_information|entityform|fex_student_application|form';
  $field_group->group_name = 'group_applicant_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Applicant Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_first_name_additional',
      2 => 'field_last_name',
      3 => 'field_netid',
      4 => 'field_student_id_number',
      5 => 'field_year_fr_soph_jr_sr_milr',
      6 => 'field_fexwisp_cert',
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
  $field_groups['group_applicant_information|entityform|fex_student_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_applicant_information|entityform|wisp_student_application|default';
  $field_group->group_name = 'group_applicant_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'wisp_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Applicant Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_first_name_additional',
      2 => 'field_last_name',
      3 => 'field_netid',
      4 => 'field_student_id_number',
      5 => 'field_fexwisp_cert',
      6 => 'field_year_fr_soph_jr_sr_milr',
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
  $field_groups['group_applicant_information|entityform|wisp_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_applicant_information|entityform|wisp_student_application|form';
  $field_group->group_name = 'group_applicant_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'wisp_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Applicant Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_first_name_additional',
      2 => 'field_last_name',
      3 => 'field_netid',
      4 => 'field_student_id_number',
      5 => 'field_year_fr_soph_jr_sr_milr',
      6 => 'field_fexwisp_cert',
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
  $field_groups['group_applicant_information|entityform|wisp_student_application|form'] = $field_group;

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
    'label' => 'Field Shadowing Program Opportunities',
    'weight' => '3',
    'children' => array(
      0 => 'field_activities',
      1 => 'field_career_field_fex',
      2 => 'field_city_additional_2',
      3 => 'field_fex_dates',
      4 => 'field_fex_dates_constraints',
      5 => 'field_fex_number_of_students',
      6 => 'field_fex_same_day',
      7 => 'field_fex_upperclass_students',
      8 => 'field_other_career_field_fex_',
      9 => 'field_state_province_addl_2',
      10 => 'field_address_line_1_addl_2',
      11 => 'field_address_line_2_addl_2',
      12 => 'field_fex_location',
      13 => 'field_yes_no_3',
      14 => 'field_zip_postal_code_addl_2',
      15 => 'field_remote_fex',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Field Shadowing Program Opportunities',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-fex-opportunities field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_fex_opportunities|entityform|fex_wisp_sponsor_registration|default'] = $field_group;

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
    'label' => 'Field Shadowing Program Opportunities',
    'weight' => '2',
    'children' => array(
      0 => 'field_activities',
      1 => 'field_career_field_fex',
      2 => 'field_city_additional_2',
      3 => 'field_fex_constraints_markup',
      4 => 'field_fex_dates',
      5 => 'field_fex_dates_constraints',
      6 => 'field_fex_dates_markup',
      7 => 'field_fex_markup_if_chosen',
      8 => 'field_fex_markup_if_not_chosen',
      9 => 'field_fex_number_of_students',
      10 => 'field_fex_same_day',
      11 => 'field_fex_upperclass_students',
      12 => 'field_other_career_field_fex_',
      13 => 'field_state_province_addl_2',
      14 => 'field_address_line_1_addl_2',
      15 => 'field_address_line_2_addl_2',
      16 => 'field_fex_location',
      17 => 'field_yes_no_3',
      18 => 'field_zip_postal_code_addl_2',
      19 => 'field_remote_fex',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Field Shadowing Program Opportunities',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-fex-opportunities field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_fex_opportunities|entityform|fex_wisp_sponsor_registration|form'] = $field_group;

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
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_description_long',
      4 => 'field_fex_wisp_opportunity_type',
      5 => 'field_h_school_year',
      6 => 'field_organization',
      7 => 'field_state_province',
      8 => 'field_zip_code',
      9 => 'field_sponsor_address_markup',
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
  $field_groups['group_fex_wisp_sponsor_info|entityform|fex_wisp_sponsor_registration|default'] = $field_group;

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
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_description_long',
      4 => 'field_fex_wisp_opportunity_type',
      5 => 'field_organization',
      6 => 'field_state_province',
      7 => 'field_zip_code',
      8 => 'field_sponsor_address_markup',
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
  $field_groups['group_fex_wisp_sponsor_info|entityform|fex_wisp_sponsor_registration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_cornell_address|entityform|fex_student_application|default';
  $field_group->group_name = 'group_local_cornell_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Local (Cornell) Address',
    'weight' => '2',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_phone',
      4 => 'field_state_province',
      5 => 'field_zip_code',
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
  $field_groups['group_local_cornell_address|entityform|fex_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_cornell_address|entityform|fex_student_application|form';
  $field_group->group_name = 'group_local_cornell_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Local (Cornell) Address',
    'weight' => '2',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_phone',
      4 => 'field_state_province',
      5 => 'field_zip_code',
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
  $field_groups['group_local_cornell_address|entityform|fex_student_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_cornell_address|entityform|wisp_student_application|default';
  $field_group->group_name = 'group_local_cornell_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'wisp_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Local (Cornell) Address',
    'weight' => '2',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_phone',
      4 => 'field_state_province',
      5 => 'field_zip_code',
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
  $field_groups['group_local_cornell_address|entityform|wisp_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_local_cornell_address|entityform|wisp_student_application|form';
  $field_group->group_name = 'group_local_cornell_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'wisp_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Local (Cornell) Address',
    'weight' => '2',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_phone',
      4 => 'field_state_province',
      5 => 'field_zip_code',
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
  $field_groups['group_local_cornell_address|entityform|wisp_student_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_permanent_address|entityform|fex_student_application|default';
  $field_group->group_name = 'group_permanent_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Permanent Address',
    'weight' => '3',
    'children' => array(
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_city_additional',
      3 => 'field_country',
      4 => 'field_phone_additional',
      5 => 'field_state_province_additional',
      6 => 'field_zip_postal_code_additional',
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
  $field_groups['group_permanent_address|entityform|fex_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_permanent_address|entityform|fex_student_application|form';
  $field_group->group_name = 'group_permanent_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Permanent Address',
    'weight' => '3',
    'children' => array(
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_city_additional',
      3 => 'field_country',
      4 => 'field_phone_additional',
      5 => 'field_state_province_additional',
      6 => 'field_zip_postal_code_additional',
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
  $field_groups['group_permanent_address|entityform|fex_student_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_permanent_address|entityform|wisp_student_application|default';
  $field_group->group_name = 'group_permanent_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'wisp_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Permanent Address',
    'weight' => '3',
    'children' => array(
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_city_additional',
      3 => 'field_country',
      4 => 'field_phone_additional',
      5 => 'field_state_province_additional',
      6 => 'field_zip_postal_code_additional',
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
  $field_groups['group_permanent_address|entityform|wisp_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_permanent_address|entityform|wisp_student_application|form';
  $field_group->group_name = 'group_permanent_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'wisp_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Permanent Address',
    'weight' => '3',
    'children' => array(
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_city_additional',
      3 => 'field_country',
      4 => 'field_phone_additional',
      5 => 'field_state_province_additional',
      6 => 'field_zip_postal_code_additional',
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
  $field_groups['group_permanent_address|entityform|wisp_student_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_preferred_fex_location|entityform|fex_student_application|default';
  $field_group->group_name = 'group_preferred_fex_location';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Preferred FEX Location',
    'weight' => '6',
    'children' => array(
      0 => 'field_city_additional_2',
      1 => 'field_city_additional_3',
      2 => 'field_state_province_addl_2',
      3 => 'field_state_province_addl_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Preferred FEX Location',
      'instance_settings' => array(
        'classes' => 'group-preferred-fex-location field-group-fieldset',
        'description' => 'Please note: You will be required to prove that you have arranged for accommodations and transportation if you are accepted into a FEX that is not in your hometown.
',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_preferred_fex_location|entityform|fex_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_preferred_fex_location|entityform|fex_student_application|form';
  $field_group->group_name = 'group_preferred_fex_location';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Preferred Location',
    'weight' => '4',
    'children' => array(
      0 => 'field_city_additional_2',
      1 => 'field_city_additional_3',
      2 => 'field_state_province_addl_2',
      3 => 'field_state_province_addl_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Preferred Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-preferred-fex-location field-group-fieldset',
        'description' => 'Please note: You will be required to prove that you have arranged for accommodations and transportation if you are accepted into an opportunity that is not in your hometown.
<br><br>
Specify preferred location (city / state). You also have the option to list an alternate location.
',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_preferred_fex_location|entityform|fex_student_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_preferred_wisp_location|entityform|wisp_student_application|default';
  $field_group->group_name = 'group_preferred_wisp_location';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'wisp_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Preferred WISP Location',
    'weight' => '4',
    'children' => array(
      0 => 'field_city_additional_2',
      1 => 'field_city_additional_3',
      2 => 'field_state_province_addl_2',
      3 => 'field_state_province_addl_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Preferred WISP Location',
      'instance_settings' => array(
        'classes' => 'group-preferred-wisp-location field-group-fieldset',
        'description' => 'Please note: You will be required to prove that you have arranged for accommodations and transportation if you are accepted into a WISP that is not in your hometown.',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_preferred_wisp_location|entityform|wisp_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_preferred_wisp_location|entityform|wisp_student_application|form';
  $field_group->group_name = 'group_preferred_wisp_location';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'wisp_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Preferred Location',
    'weight' => '4',
    'children' => array(
      0 => 'field_city_additional_2',
      1 => 'field_city_additional_3',
      2 => 'field_state_province_addl_2',
      3 => 'field_state_province_addl_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Preferred Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-preferred-wisp-location field-group-fieldset',
        'description' => 'Please note: You will be required to prove that you have arranged for accommodations and transportation if you are accepted into an opportunity that is not in your hometown.
<br><br>
Specify preferred location (city / state). You also have the option to list an alternate location.',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_preferred_wisp_location|entityform|wisp_student_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_information|entityform|fex_student_application|default';
  $field_group->group_name = 'group_program_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_h_program',
      1 => 'field_h_school_year',
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
  $field_groups['group_program_information|entityform|fex_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_information|entityform|wisp_student_application|default';
  $field_group->group_name = 'group_program_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'wisp_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_h_program',
      1 => 'field_h_school_year',
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
  $field_groups['group_program_information|entityform|wisp_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resume|entityform|fex_student_application|default';
  $field_group->group_name = 'group_resume';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resume',
    'weight' => '9',
    'children' => array(
      0 => 'field_upload_your_resume_or_cv',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Resume',
      'instance_settings' => array(
        'classes' => 'group-resume field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_resume|entityform|fex_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resume|entityform|fex_student_application|form';
  $field_group->group_name = 'group_resume';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resume',
    'weight' => '5',
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
  $field_groups['group_resume|entityform|fex_student_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resume|entityform|wisp_student_application|default';
  $field_group->group_name = 'group_resume';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'wisp_student_application';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resume',
    'weight' => '5',
    'children' => array(
      0 => 'field_upload_your_resume_or_cv',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Resume',
      'instance_settings' => array(
        'classes' => 'group-resume field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_resume|entityform|wisp_student_application|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resume|entityform|wisp_student_application|form';
  $field_group->group_name = 'group_resume';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'wisp_student_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resume',
    'weight' => '5',
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
  $field_groups['group_resume|entityform|wisp_student_application|form'] = $field_group;

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
      0 => 'field_alum_additional',
      1 => 'field_cornell_college_additional',
      2 => 'field_degree_ba_masters_oth_addl',
      3 => 'field_email_additional',
      4 => 'field_first_name_additional',
      5 => 'field_job_title_additional',
      6 => 'field_last_name_additional',
      7 => 'field_phone_additional',
      8 => 'field_year_as_list_text_2',
      9 => 'field_yes_no',
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
  $field_groups['group_supervisor_information|entityform|fex_wisp_sponsor_registration|default'] = $field_group;

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
    'weight' => '5',
    'children' => array(
      0 => 'field_alum_additional',
      1 => 'field_cornell_college_additional',
      2 => 'field_degree_ba_masters_oth_addl',
      3 => 'field_email_additional',
      4 => 'field_first_name_additional',
      5 => 'field_job_title_additional',
      6 => 'field_last_name_additional',
      7 => 'field_phone_additional',
      8 => 'field_year_as_list_text_2',
      9 => 'field_yes_no',
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
  $field_groups['group_supervisor_information|entityform|fex_wisp_sponsor_registration|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_undergrad_institution|entityform|graduate_student_request_for_tea|form';
  $field_group->group_name = 'group_undergrad_institution';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'graduate_student_request_for_tea';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Undergraduate Institution',
    'weight' => '6',
    'children' => array(
      0 => 'field_undergrad_inst_gpa',
      1 => 'field_undergrad_inst_major',
      2 => 'field_current_college',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-undergrad-institution field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_undergrad_institution|entityform|graduate_student_request_for_tea|form'] = $field_group;

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
    'label' => 'Career Exploration Project Opportunities',
    'weight' => '4',
    'children' => array(
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_career_field_wisp',
      3 => 'field_city_additional',
      4 => 'field_other_career_field_wisp_',
      5 => 'field_paid',
      6 => 'field_qualifications',
      7 => 'field_responsibility',
      8 => 'field_salary',
      9 => 'field_state_province_additional',
      10 => 'field_wisp_dates',
      11 => 'field_wisp_dates_constraints',
      12 => 'field_wisp_number_of_students',
      13 => 'field_zip_postal_code_additional',
      14 => 'field_remote_wisp',
      15 => 'field_max_duration_weeks',
      16 => 'field_min_duration_weeks',
      17 => 'field_wisp_location_markup',
      18 => 'field_year_soph_jr_sr_milr1_mult',
      19 => 'field_yes_no_2',
      20 => 'field_yes_no_4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Career Exploration Project Opportunities',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wisp-opportunities field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wisp_opportunities|entityform|fex_wisp_sponsor_registration|default'] = $field_group;

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
    'label' => 'Career Exploration Project Opportunities',
    'weight' => '3',
    'children' => array(
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_career_field_wisp',
      3 => 'field_city_additional',
      4 => 'field_other_career_field_wisp_',
      5 => 'field_paid',
      6 => 'field_qualifications',
      7 => 'field_qualifications_markup',
      8 => 'field_responsibility',
      9 => 'field_salary',
      10 => 'field_state_province_additional',
      11 => 'field_wisp_constraints_markup',
      12 => 'field_wisp_dates',
      13 => 'field_wisp_dates_constraints',
      14 => 'field_wisp_markup_if_chosen',
      15 => 'field_wisp_markup_if_not_chosen',
      16 => 'field_wisp_number_of_students',
      17 => 'field_zip_postal_code_additional',
      18 => 'field_remote_wisp',
      19 => 'field_max_duration_weeks',
      20 => 'field_min_duration_weeks',
      21 => 'field_wisp_location_markup',
      22 => 'field_year_soph_jr_sr_milr1_mult',
      23 => 'field_yes_no_2',
      24 => 'field_yes_no_4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Career Exploration Project Opportunities',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-wisp-opportunities field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wisp_opportunities|entityform|fex_wisp_sponsor_registration|form'] = $field_group;

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
      0 => 'field_alum',
      1 => 'field_cornell_college',
      2 => 'field_degree_ba_masters_other',
      3 => 'field_email',
      4 => 'field_first_name',
      5 => 'field_job_title',
      6 => 'field_last_name',
      7 => 'field_phone',
      8 => 'field_year_as_list_text',
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
  $field_groups['group_your_information|entityform|fex_wisp_sponsor_registration|default'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'field_alum',
      1 => 'field_cornell_college',
      2 => 'field_degree_ba_masters_other',
      3 => 'field_email',
      4 => 'field_first_name',
      5 => 'field_job_title',
      6 => 'field_last_name',
      7 => 'field_phone',
      8 => 'field_year_as_list_text',
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
  $field_groups['group_your_information|entityform|fex_wisp_sponsor_registration|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Applicant Information');
  t('Career Exploration Project Opportunities');
  t('Field Shadowing Program Opportunities');
  t('Local (Cornell) Address');
  t('Permanent Address');
  t('Preferred FEX Location');
  t('Preferred Location');
  t('Preferred WISP Location');
  t('Program Information');
  t('Resume');
  t('Sponsor Information');
  t('Supervisor Information');
  t('Undergraduate Institution');
  t('Your Information');

  return $field_groups;
}
