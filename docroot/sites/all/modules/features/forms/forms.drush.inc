<?php

/**
 * Implements hook_drush_command().
 */
function forms_drush_command() {
  $commands['sanitize-form-data'] = array(
    'description' => 'Deletes form data.',
    'aliases' => array('sfd'),
    'arguments' => array(
      'type' => 'Entityform type',
     ),
    'examples' => array(
      'drush sfd' => 'Sanitize (delete) all form data.',
      'drush sfd contact' => 'Sanitize (delete) form data for the "contact" entityform type.',
    ),
  );
  return $commands;
}

/**
 * Drush command logic.
 * drush_[COMMAND_NAME]().
 */
function drush_forms_sanitize_form_data($entityform_type=NULL) {
  $type = ($entityform_type) ? $entityform_type : 'all';
  if (drush_confirm('Are you sure you want to delete ' . $type . ' form data?')) {
    if ($entityform_type) {
      $field_names = forms_get_field_instances($entityform_type);
      if (!empty($field_names)) {
        foreach ($field_names as $field_name) {
          db_query("DELETE FROM field_data_{$field_name} WHERE entity_type = 'entityform' and bundle = '$entityform_type'");
          db_query("DELETE FROM field_revision_{$field_name} WHERE entity_type = 'entityform' and bundle = '$entityform_type'");
        }
        $tokens = ['@type' => $entityform_type];
        drush_print(dt('Form data removed from @type', $tokens));
      }
    }
    else {
      $instances = forms_get_all_field_instances();
      foreach ($instances as $field_name) {
        db_query("DELETE FROM field_data_{$field_name} WHERE entity_type = 'entityform'");
        db_query("DELETE FROM field_revision_{$field_name} WHERE entity_type = 'entityform'");
      }
      drush_print(dt('All form data removed.'));
    }
  }
  else {
    drush_user_abort();
  }
}

function forms_get_field_instances($entityform_type) {
  $field_names = [];
  $fields_info = field_info_instances('entityform', $entityform_type);
  return array_keys($fields_info);
}

function forms_get_all_field_instances() {
  $instances = [];
  module_load_include('module','entityform');
  $types = entityform_get_types();
  foreach ($types as $machine_name => $type) {
    $type_instances = forms_get_field_instances($machine_name);
    foreach ($type_instances as $field_name) {
      if (!in_array($field_name, $instances)) {
        $instances[] = $field_name;
      }
    }
  }
  return $instances;
}
