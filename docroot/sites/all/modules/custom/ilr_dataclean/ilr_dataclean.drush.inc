<?php

/**
 * Implements hook_drush_command().
 */
function ilr_dataclean_drush_command() {

  $commands['enable-ilr-profile'] = array(
    'description' => 'Enables the ILR profile.',
  );

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

  $commands['sanitize-contact-data'] = array(
    'description' => 'Deletes redhen contact data.',
    'aliases' => array('scd'),
    'arguments' => array(
      'type' => 'Bundle',
     ),
    'examples' => array(
      'drush scd' => 'Sanitize (delete) all redhen contact data.',
      'drush scd sports_leadership_camp_contact' => 'Sanitize (delete) contact data for the "sports leadership camp contact" type.',
    ),
  );


  return $commands;
}

/**
 * drush_[COMMAND_NAME]().
 *
 */
function drush_ilr_dataclean_enable_ilr_profile() {
  if ($result = db_query("UPDATE system SET status=1 WHERE name='ilr'")) {
    drush_print('ILR profile enabled');
  }
}

/**
 * drush_[COMMAND_NAME]().
 *
 * Removes field data from entityform submissions.
 * This is much faster than deleting form data through
 * _forms_delete_field_instances_from_entityform($bundle)
 */
function drush_ilr_dataclean_sanitize_form_data($entityform_type=NULL) {
  $type = ($entityform_type) ? $entityform_type : 'all';
  if (drush_confirm('Are you sure you want to delete ' . $type . ' form data?')) {
    if ($entityform_type) {
      $field_names = array_keys(ilr_dataclean_drush_get_field_instances('entityform', $entityform_type));
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
      $instances = ilr_dataclean_drush_get_all_field_instances();
      foreach ($instances as $field_name) {
        db_query("DELETE FROM field_data_{$field_name} WHERE entity_type = 'entityform'");
        db_query("DELETE FROM field_revision_{$field_name} WHERE entity_type = 'entityform'");
        drush_print(dt('@field_name entityform data removed.', [
          '@field_name' => $field_name,
        ]));
      }
      drush_print(dt('All entityform data removed.'));
    }
  }
  else {
    drush_user_abort();
  }
}

/**
 * Drush command logic.
 *
 * Removes the field data from redhen contacts.
 */
function drush_ilr_dataclean_sanitize_contact_data($bundle=NULL) {
  $type = ($bundle) ? $bundle : 'all';
  if (drush_confirm('Are you sure you want to delete ' . $type . ' contact data?')) {
    $field_names = [];
    $bundle_field_info = ilr_dataclean_drush_get_field_instances('redhen_contact', $bundle);
    foreach ($bundle_field_info as $bundle => $fields) {
      foreach ($fields as $field_name => $field_info) {
        if (!in_array($field_name, $field_names)) {
          $field_names[] = $field_name;
        }
      }
    }
    if (!empty($field_names)) {
      foreach ($field_names as $field_name) {
        db_query("DELETE FROM field_data_{$field_name} WHERE entity_type = 'redhen_contact' and bundle = '$bundle'");
        db_query("DELETE FROM field_revision_{$field_name} WHERE entity_type = 'redhen_contact' and bundle = '$bundle'");
      }
      $tokens = ['@type' => $type];
      drush_print(dt('Contact data removed from @type contacts', $tokens));
    }
  }
  else {
    drush_user_abort();
  }
}

function ilr_dataclean_drush_get_field_instances($entity_type, $bundle=NULL) {
  $field_names = [];
  $fields_info = field_info_instances($entity_type, $bundle);
  return $fields_info;
}

function ilr_dataclean_drush_get_all_field_instances() {
  $instances = [];
  module_load_include('module','entityform');
  $types = entityform_get_types();
  foreach ($types as $bundle => $type) {
    $type_instances = array_keys(ilr_dataclean_drush_get_field_instances('entityform', $bundle));
    foreach ($type_instances as $field_name) {
      if (!in_array($field_name, $instances)) {
        $instances[] = $field_name;
      }
    }
  }
  return $instances;
}
