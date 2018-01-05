<?php
/**
 * @file
 * ilr_redhen.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ilr_redhen_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'redhen_contact-sports_leadership_camp_contact-field_account_number'.
  $field_instances['redhen_contact-sports_leadership_camp_contact-field_account_number'] = array(
    'bundle' => 'sports_leadership_camp_contact',
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
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_contact',
    'fences_wrapper' => 'div',
    'field_name' => 'field_account_number',
    'label' => 'Unique identifier',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'redhen_contact-sports_leadership_camp_contact-field_referenced_entityform'.
  $field_instances['redhen_contact-sports_leadership_camp_contact-field_referenced_entityform'] = array(
    'bundle' => 'sports_leadership_camp_contact',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Interest, application and scholarship forms',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'field_formatter_label' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_contact',
    'fences_wrapper' => 'div',
    'field_name' => 'field_referenced_entityform',
    'label' => 'Forms',
    'required' => 0,
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
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'redhen_contact-sports_leadership_camp_contact-redhen_contact_email'.
  $field_instances['redhen_contact-sports_leadership_camp_contact-redhen_contact_email'] = array(
    'bundle' => 'sports_leadership_camp_contact',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'redhen_fields',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'redhen_email_formatter',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_contact',
    'field_name' => 'redhen_contact_email',
    'label' => 'Email',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'redhen_fields',
      'settings' => array(),
      'type' => 'redhen_email_widget',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Email');
  t('Forms');
  t('Interest, application and scholarship forms');
  t('Unique identifier');

  return $field_instances;
}
