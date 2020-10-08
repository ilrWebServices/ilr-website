<?php

/**
 * @file
 * scheinman_neutral.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function scheinman_neutral_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__scheinman_neutral';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'mega_menu_item' => array(
        'custom_settings' => TRUE,
      ),
      'basic_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'reference_field' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__scheinman_neutral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_scheinman_neutral';
  $strongarm->value = array(
    0 => 'scheinman-institute',
  );
  $export['menu_options_scheinman_neutral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_scheinman_neutral';
  $strongarm->value = 'scheinman-institute:0';
  $export['menu_parent_scheinman_neutral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_scheinman_neutral';
  $strongarm->value = array();
  $export['node_options_scheinman_neutral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_scheinman_neutral';
  $strongarm->value = '1';
  $export['node_preview_scheinman_neutral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_scheinman_neutral';
  $strongarm->value = 0;
  $export['node_submitted_scheinman_neutral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_scheinman_neutral_pattern';
  $strongarm->value = 'scheinman-institute/roster-neutrals/[node:title]';
  $export['pathauto_node_scheinman_neutral_pattern'] = $strongarm;

  return $export;
}
