<?php
/**
 * @file
 * ilr_memory_book.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ilr_memory_book_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__memory_book';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'mega_menu_item' => array(
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
      'alternate_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'ilr_theme__highlighted' => array(
        'custom_settings' => FALSE,
      ),
      'ilr_theme__sidebar_second' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
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
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__memory_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_memory_book';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_memory_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_memory_book';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_memory_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_memory_book';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_memory_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_memory_book';
  $strongarm->value = '0';
  $export['node_preview_memory_book'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_memory_book';
  $strongarm->value = 0;
  $export['node_submitted_memory_book'] = $strongarm;

  return $export;
}
