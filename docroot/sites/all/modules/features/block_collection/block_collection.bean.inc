<?php
/**
 * @file
 * block_collection.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function block_collection_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'block_collection';
  $bean_type->label = 'Block Collection';
  $bean_type->options = '';
  $bean_type->description = 'Creates a wrapper that you can add other blocks to for display purposes.';
  $export['block_collection'] = $bean_type;

  return $export;
}
