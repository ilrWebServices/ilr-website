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
    'action_callout' => array(
      'name' => 'an action callout',
      'bundle' => 'action_callout',
      'locked' => '1',
    ),
    'compare_three' => array(
      'name' => 'compare three',
      'bundle' => 'compare_three',
      'locked' => '1',
    ),
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
      'name' => 'text',
      'bundle' => 'just_text',
      'locked' => '1',
    ),
    'side_by_side_text' => array(
      'name' => 'side by side text',
      'bundle' => 'side_by_side_text',
      'locked' => '1',
    ),
    'social_callout' => array(
      'name' => 'a social callout',
      'bundle' => 'social_callout',
      'locked' => '1',
    ),
    'social_feed' => array(
      'name' => 'a social feed',
      'bundle' => 'social_feed',
      'locked' => '1',
    ),
    'sponsor_message' => array(
      'name' => 'a prominent message',
      'bundle' => 'sponsor_message',
      'locked' => '1',
    ),
    'tabs' => array(
      'name' => 'tabs',
      'bundle' => 'tabs',
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
