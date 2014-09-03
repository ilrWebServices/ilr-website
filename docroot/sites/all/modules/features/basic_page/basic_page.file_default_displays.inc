<?php
/**
 * @file
 * basic_page.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function basic_page_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__default__file_field_image';
  $file_display->weight = 50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'focussed_grid_image',
    'image_link' => '',
  );
  $export['image__default__file_field_image'] = $file_display;

  return $export;
}
