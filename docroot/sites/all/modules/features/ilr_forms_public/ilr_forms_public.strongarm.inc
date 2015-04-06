<?php
/**
 * @file
 * ilr_forms_public.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ilr_forms_public_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_entityform__join_the_ics_mailing_list';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_entityform__join_the_ics_mailing_list'] = $strongarm;

  return $export;
}
