<?php
/**
 * @file
 * ilr_memory_book.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ilr_memory_book_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-memory_book-field_para_main_page_content'.
  $field_instances['node-memory_book-field_para_main_page_content'] = array(
    'bundle' => 'memory_book',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'field_formatter_label' => '',
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'mega_menu_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_para_main_page_content',
    'label' => 'Paragraph elements',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'compare_three' => -1,
        'display_a_block' => 'display_a_block',
        'featured_promo' => 'featured_promo',
        'just_image' => -1,
        'just_text' => 'just_text',
        'side_by_side_text' => -1,
        'social_feed' => -1,
        'sponsor_message' => -1,
        'unit_contact_info' => -1,
      ),
      'bundle_weights' => array(
        'compare_three' => 2,
        'display_a_block' => 3,
        'featured_promo' => 4,
        'just_image' => 5,
        'just_text' => 6,
        'side_by_side_text' => 7,
        'social_feed' => 8,
        'sponsor_message' => 9,
        'unit_contact_info' => 10,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Paragraph elements');

  return $field_instances;
}
