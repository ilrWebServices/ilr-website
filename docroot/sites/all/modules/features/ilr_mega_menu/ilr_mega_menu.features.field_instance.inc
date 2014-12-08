<?php
/**
 * @file
 * ilr_mega_menu.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ilr_mega_menu_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-mega_menu-field_mega_menu_blocks'
  $field_instances['bean-mega_menu-field_mega_menu_blocks'] = array(
    'bundle' => 'mega_menu',
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
        'weight' => 1,
      ),
      'mega_menu_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_mega_menu_blocks',
    'label' => 'Mega Menu Blocks',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'bean-mega_menu-field_mega_menu_item'
  $field_instances['bean-mega_menu-field_mega_menu_item'] = array(
    'bundle' => 'mega_menu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'mega_menu_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_mega_menu_item',
    'label' => 'Mega Menu Item',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bean-mega_menu-field_menu_name'
  $field_instances['bean-mega_menu-field_menu_name'] = array(
    'bundle' => 'mega_menu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'mega_menu_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_menu_name',
    'label' => 'Menu',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Mega Menu Blocks');
  t('Mega Menu Item');
  t('Menu');

  return $field_instances;
}
