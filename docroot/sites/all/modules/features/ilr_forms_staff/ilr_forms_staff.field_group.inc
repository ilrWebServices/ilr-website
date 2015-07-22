<?php
/**
 * @file
 * ilr_forms_staff.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ilr_forms_staff_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mailing_address|entityform|sample_form|form';
  $field_group->group_name = 'group_mailing_address';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sample_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mailing Address',
    'weight' => '6',
    'children' => array(
      0 => 'field_address_line_1',
      1 => 'field_city',
      2 => 'field_state_province',
      3 => 'field_zip_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Mailing Address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-mailing-address field-group-fieldset',
        'description' => 'Please enter your address.  (For the sample form, this shows how form fields can be grouped.  Note that typically forms look best if all fields are in groups, or if none are. The text at the beginning of the group is optional.)',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_mailing_address|entityform|sample_form|form'] = $field_group;

  return $export;
}
