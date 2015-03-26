<?php
/**
 * @file
 * ilr_reflection.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ilr_reflection_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_reflection';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_reflection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_reflection';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_reflection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_reflection';
  $strongarm->value = array();
  $export['node_options_reflection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_reflection';
  $strongarm->value = '0';
  $export['node_preview_reflection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_reflection';
  $strongarm->value = 0;
  $export['node_submitted_reflection'] = $strongarm;

  return $export;
}
