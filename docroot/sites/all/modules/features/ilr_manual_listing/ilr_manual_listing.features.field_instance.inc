<?php
/**
 * @file
 * ilr_manual_listing.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ilr_manual_listing_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-content_listing_manual-field_content'
  $field_instances['bean-content_listing_manual-field_content'] = array(
    'bundle' => 'content_listing_manual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_label' => '',
          'links' => 0,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'mega_menu_item' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_label' => '',
          'links' => 1,
          'view_mode' => 'mega_menu_item',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_content',
    'label' => 'Content',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $field_instances;
}
