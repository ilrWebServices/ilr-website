<?php
/**
 * @file
 * ilr_paragraphs.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function ilr_paragraphs_paragraphs_info() {
  $items = array(
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
  );
  return $items;
}
