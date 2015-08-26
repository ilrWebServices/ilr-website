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

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Email');
  t('The contact email is used when a user requests more info about and/or customized delivery of a course. This can be overidden at the course level. ');

  return $field_instances;
}
