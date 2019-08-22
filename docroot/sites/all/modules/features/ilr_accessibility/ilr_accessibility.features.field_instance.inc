<?php

/**
 * @file
 * ilr_accessibility.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ilr_accessibility_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'file-image-field_accessibility_processed'.
  $field_instances['file-image-field_accessibility_processed'] = array(
    'bundle' => 'image',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'This is a temporary field, used to mark the progress of reviewing these images for accessibility.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'preview' => array(
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
      'wysiwyg' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'file',
    'fences_wrapper' => 'div',
    'field_name' => 'field_accessibility_processed',
    'label' => 'Accessibility Processed',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accessibility Processed');
  t('This is a temporary field, used to mark the progress of reviewing these images for accessibility.');

  return $field_instances;
}
