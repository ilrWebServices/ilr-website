<?php
/**
 * @file
 * block_collection.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function block_collection_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-block_collection-field_collected_blocks'
  $field_instances['bean-block_collection-field_collected_blocks'] = array(
    'bundle' => 'block_collection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'blockreference',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'blockreference_default',
        'weight' => 0,
      ),
      'mega_menu_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div',
    'field_name' => 'field_collected_blocks',
    'label' => 'Blocks',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'blockreference',
      'settings' => array(
        'autocomplete_path' => 'blockreference/autocomplete',
        'size' => 60,
      ),
      'type' => 'blockreference_autocomplete',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks');

  return $field_instances;
}
