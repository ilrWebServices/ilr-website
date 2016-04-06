<?php
/**
 * @file
 * ilr_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function ilr_paragraphs_paragraphs_info() {
  $items = array(
    'display_a_block' => array(
      'name' => 'a block',
      'bundle' => 'display_a_block',
      'locked' => '1',
    ),
    'featured_promo' => array(
      'name' => 'a featured promotion',
      'bundle' => 'featured_promo',
      'locked' => '1',
    ),
    'just_image' => array(
      'name' => 'an image',
      'bundle' => 'just_image',
      'locked' => '1',
    ),
    'just_text' => array(
      'name' => 'some text',
      'bundle' => 'just_text',
      'locked' => '1',
    ),
    'sponsor_message' => array(
      'name' => 'a prominent message',
      'bundle' => 'sponsor_message',
      'locked' => '1',
    ),
    'unit_contact_info' => array(
      'name' => 'contact info for a unit',
      'bundle' => 'unit_contact_info',
      'locked' => '1',
    ),
  );
  return $items;
}
