<?php

/**
 * @file
 * basic_page.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function basic_page_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'html';
  $bean_type->label = 'HTML';
  $bean_type->options = '';
  $bean_type->description = 'Allows you to create custom HTML blocks to display on pages. ';
  $export['html'] = $bean_type;

  return $export;
}
