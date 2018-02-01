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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'redhen_contact-sports_leadership_camp_contact-field_current_status'.
  $field_instances['redhen_contact-sports_leadership_camp_contact-field_current_status'] = array(
    'bundle' => 'sports_leadership_camp_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 3,
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
    'field_name' => 'field_current_status',
    'label' => 'Current status',
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

  // Exported field_instance:
  // 'redhen_contact-sports_leadership_camp_contact-field_dob'.
  $field_instances['redhen_contact-sports_leadership_camp_contact-field_dob'] = array(
    'bundle' => 'sports_leadership_camp_contact',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'field_formatter_label' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 4,
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
    'field_name' => 'field_dob',
    'label' => 'Camper date of birth',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'redhen_contact-sports_leadership_camp_contact-field_email_additional'.
  $field_instances['redhen_contact-sports_leadership_camp_contact-field_email_additional'] = array(
    'bundle' => 'sports_leadership_camp_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 8,
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
    'field_name' => 'field_email_additional',
    'label' => 'Camper email',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'redhen_contact-sports_leadership_camp_contact-field_first_name'.
  $field_instances['redhen_contact-sports_leadership_camp_contact-field_first_name'] = array(
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
        'weight' => 5,
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
    'field_name' => 'field_first_name',
    'label' => 'Camper first name',
    'required' => 0,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'redhen_contact-sports_leadership_camp_contact-field_last_name'.
  $field_instances['redhen_contact-sports_leadership_camp_contact-field_last_name'] = array(
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
        'weight' => 6,
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
    'field_name' => 'field_last_name',
    'label' => 'Camper last name',
    'required' => 0,
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
      'weight' => 5,
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
          'bypass_access' => 0,
          'field_formatter_label' => '',
          'link' => 1,
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
      'weight' => 8,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'redhen_note-redhen_note-field_response_checkbox'.
  $field_instances['redhen_note-redhen_note-field_response_checkbox'] = array(
    'bundle' => 'redhen_note',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_note',
    'fences_wrapper' => 'div',
    'field_name' => 'field_response_checkbox',
    'label' => 'Requires action',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'redhen_note-redhen_note-redhen_note_body'.
  $field_instances['redhen_note-redhen_note-redhen_note_body'] = array(
    'bundle' => 'redhen_note',
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
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_note',
    'field_name' => 'redhen_note_body',
    'label' => 'Message',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'redhen_note-redhen_note-redhen_note_type'.
  $field_instances['redhen_note-redhen_note-redhen_note_type'] = array(
    'bundle' => 'redhen_note',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_note',
    'field_name' => 'redhen_note_type',
    'label' => 'Note Type',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Camper date of birth');
  t('Camper email');
  t('Camper first name');
  t('Camper last name');
  t('Current status');
  t('Email');
  t('Forms');
  t('Interest, application and scholarship forms');
  t('Message');
  t('Note Type');
  t('Requires action');
  t('Unique identifier');

  return $field_instances;
}
