<?php
/**
 * @file
 * ilr_field_bases.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ilr_field_bases_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'paragraphs_item-display_a_block-field_one_block'
  $field_instances['paragraphs_item-display_a_block-field_one_block'] = array(
    'bundle' => 'display_a_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select an existing block',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'blockreference',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'blockreference_without_title',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_one_block',
    'label' => 'Block',
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
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-course_sponsor-field_email'
  $field_instances['taxonomy_term-course_sponsor-field_email'] = array(
    'bundle' => 'course_sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The contact email is used when a user requests more info about and/or customized delivery of a course. This can be overidden at the course level. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email',
    'label' => 'Contact Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-course_sponsor-field_error_message'
  $field_instances['taxonomy_term-course_sponsor-field_error_message'] = array(
    'bundle' => 'course_sponsor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'fences_wrapper' => 'div',
    'field_name' => 'field_error_message',
    'label' => 'No results message',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 36,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Block');
  t('Contact Email');
  t('No results message');
  t('Select an existing block');
  t('The contact email is used when a user requests more info about and/or customized delivery of a course. This can be overidden at the course level. ');

  return $field_instances;
}
