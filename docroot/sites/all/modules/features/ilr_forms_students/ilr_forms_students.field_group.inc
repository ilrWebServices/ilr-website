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
  $export['group_applicant_information|entityform|fex_student_application|default'] = $field_group;

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
  $export['group_applicant_information|entityform|fex_student_application|form'] = $field_group;

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
  $export['group_applicant_information|entityform|wisp_student_application|default'] = $field_group;

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
  $export['group_applicant_information|entityform|wisp_student_application|form'] = $field_group;

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
      0 => 'field_description_long',
      1 => 'field_fex_wisp_opportunity_type',
      2 => 'field_h_school_year',
      3 => 'field_organization',
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
      0 => 'field_description_long',
      1 => 'field_fex_wisp_opportunity_type',
      2 => 'field_organization',
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
  $export['group_local_cornell_address|entityform|fex_student_application|default'] = $field_group;

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
  $export['group_local_cornell_address|entityform|fex_student_application|form'] = $field_group;

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
  $export['group_local_cornell_address|entityform|wisp_student_application|default'] = $field_group;

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
  $export['group_local_cornell_address|entityform|wisp_student_application|form'] = $field_group;

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
  $export['group_permanent_address|entityform|fex_student_application|default'] = $field_group;

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
  $export['group_permanent_address|entityform|fex_student_application|form'] = $field_group;

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
  $export['group_permanent_address|entityform|wisp_student_application|default'] = $field_group;

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
  $export['group_permanent_address|entityform|wisp_student_application|form'] = $field_group;

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
  $export['group_preferred_fex_location|entityform|fex_student_application|default'] = $field_group;

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
    'label' => 'Preferred FEX Location',
    'weight' => '4',
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
        'required_fields' => 1,
        'classes' => 'group-preferred-fex-location field-group-fieldset',
        'description' => 'Please note: You will be required to prove that you have arranged for accommodations and transportation if you are accepted into a FEX that is not in your hometown.
<br><br>
Specify preferred location (city / state). You also have the option to list an alternate location.
',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_preferred_fex_location|entityform|fex_student_application|form'] = $field_group;

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
  $export['group_preferred_wisp_location|entityform|wisp_student_application|default'] = $field_group;

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
        'required_fields' => 1,
        'classes' => 'group-preferred-wisp-location field-group-fieldset',
        'description' => 'Please note: You will be required to prove that you have arranged for accommodations and transportation if you are accepted into a WISP that is not in your hometown.
<br><br>
Specify preferred location (city / state). You also have the option to list an alternate location.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_preferred_wisp_location|entityform|wisp_student_application|form'] = $field_group;

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
  $export['group_program_information|entityform|fex_student_application|default'] = $field_group;

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
  $export['group_program_information|entityform|wisp_student_application|default'] = $field_group;

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
  $export['group_resume|entityform|fex_student_application|default'] = $field_group;

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
  $export['group_resume|entityform|fex_student_application|form'] = $field_group;

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
  $export['group_resume|entityform|wisp_student_application|default'] = $field_group;

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
  $export['group_resume|entityform|wisp_student_application|form'] = $field_group;

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
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_alum_additional',
      3 => 'field_city_additional',
      4 => 'field_cornell_college_additional',
      5 => 'field_degree_ba_masters_oth_addl',
      6 => 'field_email_additional',
      7 => 'field_first_name_additional',
      8 => 'field_is_address_the_same',
      9 => 'field_job_title_additional',
      10 => 'field_last_name_additional',
      11 => 'field_phone_additional',
      12 => 'field_state_province_additional',
      13 => 'field_year_as_list_text_2',
      14 => 'field_yes_no',
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
    'weight' => '5',
    'children' => array(
      0 => 'field_address_line_1_additional',
      1 => 'field_address_line_2_additional',
      2 => 'field_alum_additional',
      3 => 'field_city_additional',
      4 => 'field_cornell_college_additional',
      5 => 'field_degree_ba_masters_oth_addl',
      6 => 'field_email_additional',
      7 => 'field_first_name_additional',
      8 => 'field_is_address_the_same',
      9 => 'field_job_title_additional',
      10 => 'field_last_name_additional',
      11 => 'field_phone_additional',
      12 => 'field_state_province_additional',
      13 => 'field_year_as_list_text_2',
      14 => 'field_yes_no',
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
      1 => 'field_city_additional_3',
      2 => 'field_other_career_field_wisp_',
      3 => 'field_paid',
      4 => 'field_qualifications',
      5 => 'field_responsibility',
      6 => 'field_salary',
      7 => 'field_state_province_addl_3',
      8 => 'field_wisp_dates',
      9 => 'field_wisp_dates_constraints',
      10 => 'field_wisp_number_of_students',
      11 => 'field_remote_wisp',
      12 => 'field_year_soph_jr_sr_milr1_mult',
      13 => 'field_min_duration_weeks',
      14 => 'field_max_duration_weeks',
      15 => 'field_yes_no_2',
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
    'weight' => '3',
    'children' => array(
      0 => 'field_career_field_wisp',
      1 => 'field_city_additional_3',
      2 => 'field_other_career_field_wisp_',
      3 => 'field_paid',
      4 => 'field_qualifications',
      5 => 'field_qualifications_markup',
      6 => 'field_responsibility',
      7 => 'field_salary',
      8 => 'field_state_province_addl_3',
      9 => 'field_wisp_constraints_markup',
      10 => 'field_wisp_dates',
      11 => 'field_wisp_dates_constraints',
      12 => 'field_wisp_dates_markup',
      13 => 'field_wisp_markup_if_chosen',
      14 => 'field_wisp_markup_if_not_chosen',
      15 => 'field_wisp_number_of_students',
      16 => 'field_remote_wisp',
      17 => 'field_year_soph_jr_sr_milr1_mult',
      18 => 'field_min_duration_weeks',
      19 => 'field_max_duration_weeks',
      20 => 'field_yes_no_2',
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
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_alum',
      3 => 'field_city',
      4 => 'field_cornell_college',
      5 => 'field_degree_ba_masters_other',
      6 => 'field_email',
      7 => 'field_first_name',
      8 => 'field_job_title',
      9 => 'field_last_name',
      10 => 'field_phone',
      11 => 'field_state_province',
      12 => 'field_year_as_list_text',
      13 => 'field_zip_code',
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
    'weight' => '4',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_alum',
      3 => 'field_city',
      4 => 'field_cornell_college',
      5 => 'field_degree_ba_masters_other',
      6 => 'field_email',
      7 => 'field_first_name',
      8 => 'field_job_title',
      9 => 'field_last_name',
      10 => 'field_phone',
      11 => 'field_state_province',
      12 => 'field_year_as_list_text',
      13 => 'field_zip_code',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Applicant Information');
  t('FEX Opportunities');
  t('Local (Cornell) Address');
  t('Permanent Address');
  t('Preferred FEX Location');
  t('Preferred WISP Location');
  t('Program Information');
  t('Resume');
  t('Sponsor Information');
  t('Supervisor Information');
  t('WISP Opportunities');
  t('Your Information');

  return $export;
}
