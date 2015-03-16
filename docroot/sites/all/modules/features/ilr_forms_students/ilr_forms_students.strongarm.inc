<?php
/**
 * @file
 * ilr_forms_students.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ilr_forms_students_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_entityform__mlb_today_with_rob_manfred';
  $strongarm->value = array(
    'view_modes' => array(
      'email' => array(
        'custom_settings' => TRUE,
      ),
      'download' => array(
        'custom_settings' => TRUE,
      ),
      'table' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'confirmation' => array(
        'custom_settings' => FALSE,
      ),
      'review' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_entityform__mlb_today_with_rob_manfred'] = $strongarm;

  return $export;
}
