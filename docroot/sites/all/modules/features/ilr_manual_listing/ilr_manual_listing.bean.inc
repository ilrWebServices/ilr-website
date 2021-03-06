<?php

/**
 * @file
 * ilr_manual_listing.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function ilr_manual_listing_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'content_listing_manual';
  $bean_type->label = 'Content Listing (Manual)';
  $bean_type->options = '';
  $bean_type->description = 'Provides a listing of teasers for specifically chosen content.';
  $export['content_listing_manual'] = $bean_type;

  return $export;
}
