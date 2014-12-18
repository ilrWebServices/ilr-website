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
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_mega_menu_item',
    'label' => 'Menu Link',
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
      'weight' => 3,
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
        'weight' => 2,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bean-mega_menu-field_referenced_entity'
  $field_instances['bean-mega_menu-field_referenced_entity'] = array(
    'bundle' => 'mega_menu',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_label' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
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
    'field_name' => 'field_referenced_entity',
    'label' => 'Mega Menu Items',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'current' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Mega Menu Items');
  t('Menu');
  t('Menu Link');

  return $field_instances;
}
