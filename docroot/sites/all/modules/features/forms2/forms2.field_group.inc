<?php
/**
 * @file
 * forms2.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function forms2_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forensics_payor|entityform|forensics_debate_camp_payment|default';
  $field_group->group_name = 'group_forensics_payor';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'forensics_debate_camp_payment';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Payor Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_address_line_1',
      3 => 'field_address_line_2',
      4 => 'field_city',
      5 => 'field_state_as_text',
      6 => 'field_country_for_forensics',
      7 => 'field_zip_code',
      8 => 'field_phone',
      9 => 'field_email',
      10 => 'field_total_cost',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Payor Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-forensics-payor field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_forensics_payor|entityform|forensics_debate_camp_payment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forensics_payor|entityform|forensics_debate_camp_payment|email';
  $field_group->group_name = 'group_forensics_payor';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'forensics_debate_camp_payment';
  $field_group->mode = 'email';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Payor Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_address_line_1',
      3 => 'field_address_line_2',
      4 => 'field_city',
      5 => 'field_state_as_text',
      6 => 'field_country_for_forensics',
      7 => 'field_zip_code',
      8 => 'field_phone',
      9 => 'field_email',
      10 => 'field_total_cost',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Payor Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-forensics-payor field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_forensics_payor|entityform|forensics_debate_camp_payment|email'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_forensics_payor|entityform|forensics_debate_camp_payment|form';
  $field_group->group_name = 'group_forensics_payor';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'forensics_debate_camp_payment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Payor Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_address_line_2',
      2 => 'field_city',
      3 => 'field_country_for_forensics',
      4 => 'field_email',
      5 => 'field_first_name',
      6 => 'field_last_name',
      7 => 'field_phone',
      8 => 'field_total_cost',
      9 => 'field_zip_code',
      10 => 'field_state_as_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Payor Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-forensics-payor field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_forensics_payor|entityform|forensics_debate_camp_payment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_data|entityform|forensics_debate_camp_payment|default';
  $field_group->group_name = 'group_student_data';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'forensics_debate_camp_payment';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Student Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_full_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Student Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-student-data field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_student_data|entityform|forensics_debate_camp_payment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_data|entityform|forensics_debate_camp_payment|email';
  $field_group->group_name = 'group_student_data';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'forensics_debate_camp_payment';
  $field_group->mode = 'email';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Student Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_full_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Student Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-student-data field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_student_data|entityform|forensics_debate_camp_payment|email'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_data|entityform|forensics_debate_camp_payment|form';
  $field_group->group_name = 'group_student_data';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'forensics_debate_camp_payment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Student Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_full_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Student Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-student-data field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_student_data|entityform|forensics_debate_camp_payment|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Payor Information');
  t('Student Information');

  return $field_groups;
}
