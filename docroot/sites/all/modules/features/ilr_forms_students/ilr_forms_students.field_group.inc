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
  $field_group->identifier = 'group_fex_opportunities|entityform|fex_wisp_sponsor_registration|default';
  $field_group->group_name = 'group_fex_opportunities';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_sponsor_registration';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FEX Opportunities',
    'weight' => '32',
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
  $field_group->identifier = 'group_supervisor_information|entityform|fex_wisp_sponsor_registration|default';
  $field_group->group_name = 'group_supervisor_information';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'fex_wisp_sponsor_registration';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supervisor Information',
    'weight' => '15',
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
    'weight' => '45',
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
