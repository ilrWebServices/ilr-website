<?php
/**
 * @file
 * block_collection.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function block_collection_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__block_collection';
  $strongarm->value = array(
    'view_modes' => array(
      'mega_menu_item' => array(
        'custom_settings' => TRUE,
      ),
      'default' => array(
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
        'label' => array(
          'weight' => '-10',
        ),
        'title' => array(
          'weight' => '-9',
        ),
        'revision' => array(
          'weight' => '10',
        ),
        'view_mode' => array(
          'weight' => '10',
        ),
        'admin_lock' => array(
          'weight' => '10',
        ),
        'admin_hide' => array(
          'weight' => '11',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '-9',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_bean__block_collection'] = $strongarm;

  return $export;
}
