<?php
/**
 * @file
 * ilr_experience_reports.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ilr_experience_reports_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__experience_report';
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
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'basic_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'reference_field' => array(
        'custom_settings' => FALSE,
      ),
      'ilr_theme__highlighted' => array(
        'custom_settings' => TRUE,
      ),
      'bartik__header' => array(
        'custom_settings' => FALSE,
      ),
      'bartik__help' => array(
        'custom_settings' => FALSE,
      ),
      'bartik__highlighted' => array(
        'custom_settings' => FALSE,
      ),
      'bartik__featured' => array(
        'custom_settings' => FALSE,
      ),
      'bartik__sidebar_first' => array(
        'custom_settings' => FALSE,
      ),
      'bartik__sidebar_second' => array(
        'custom_settings' => FALSE,
      ),
      'bartik__triptych_first' => array(
        'custom_settings' => FALSE,
      ),
      'bartik__triptych_middle' => array(
        'custom_settings' => FALSE,
      ),
      'bartik__triptych_last' => array(
        'custom_settings' => FALSE,
      ),
      'bartik__footer_firstcolumn' => array(
        'custom_settings' => FALSE,
      ),
      'bartik__footer_secondcolumn' => array(
        'custom_settings' => FALSE,
      ),
      'bartik__footer_thirdcolumn' => array(
        'custom_settings' => FALSE,
      ),
      'bartik__footer_fourthcolumn' => array(
        'custom_settings' => FALSE,
      ),
      'bartik__footer' => array(
        'custom_settings' => FALSE,
      ),
      'ilr_theme__header' => array(
        'custom_settings' => FALSE,
      ),
      'ilr_theme__sidebar_first' => array(
        'custom_settings' => FALSE,
      ),
      'ilr_theme__sidebar_second' => array(
        'custom_settings' => FALSE,
      ),
      'ilr_theme__content_bottom' => array(
        'custom_settings' => FALSE,
      ),
      'ilr_theme__footer' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'redirect' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__experience_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_experience_report';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_experience_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_experience_report';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_experience_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_experience_report';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_experience_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_experience_report';
  $strongarm->value = '1';
  $export['node_preview_experience_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_experience_report';
  $strongarm->value = 0;
  $export['node_submitted_experience_report'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_experience_report_pattern';
  $strongarm->value = '[node:menu-link:parent:url:path]/[node:menu-link:title]';
  $export['pathauto_node_experience_report_pattern'] = $strongarm;

  return $export;
}
