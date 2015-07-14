<?php
/**
 * @file
 * ilr_forms_staff.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ilr_forms_staff_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-office_professionals_day_reg-field_current_college'
  $field_instances['entityform-office_professionals_day_reg-field_current_college'] = array(
    'bundle' => 'office_professionals_day_reg',
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
        'weight' => 4,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_current_college',
    'label' => 'College',
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
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'entityform-office_professionals_day_reg-field_department'
  $field_instances['entityform-office_professionals_day_reg-field_department'] = array(
    'bundle' => 'office_professionals_day_reg',
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
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_department',
    'label' => 'Department',
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
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'entityform-office_professionals_day_reg-field_email'
  $field_instances['entityform-office_professionals_day_reg-field_email'] = array(
    'bundle' => 'office_professionals_day_reg',
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
        'weight' => 2,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 4,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
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
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'entityform-office_professionals_day_reg-field_first_name'
  $field_instances['entityform-office_professionals_day_reg-field_first_name'] = array(
    'bundle' => 'office_professionals_day_reg',
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
        'weight' => 0,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_first_name',
    'label' => 'First name',
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
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'entityform-office_professionals_day_reg-field_h_event_date'
  $field_instances['entityform-office_professionals_day_reg-field_h_event_date'] = array(
    'bundle' => 'office_professionals_day_reg',
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
        'weight' => 8,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'field_formatter_label' => '',
          'format_type' => 'short',
          'fromto' => 'value',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'field_formatter_label' => '',
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_h_event_date',
    'label' => 'Event date',
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
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'entityform-office_professionals_day_reg-field_job_title'
  $field_instances['entityform-office_professionals_day_reg-field_job_title'] = array(
    'bundle' => 'office_professionals_day_reg',
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
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_job_title',
    'label' => 'Title',
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
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'entityform-office_professionals_day_reg-field_last_name'
  $field_instances['entityform-office_professionals_day_reg-field_last_name'] = array(
    'bundle' => 'office_professionals_day_reg',
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
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_last_name',
    'label' => 'Last name',
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
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'entityform-office_professionals_day_reg-field_phone'
  $field_instances['entityform-office_professionals_day_reg-field_phone'] = array(
    'bundle' => 'office_professionals_day_reg',
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
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_phone',
    'label' => 'Phone',
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
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'entityform-office_professionals_day_reg-field_referenced_node'
  $field_instances['entityform-office_professionals_day_reg-field_referenced_node'] = array(
    'bundle' => 'office_professionals_day_reg',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_current_field_default_value',
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
        'weight' => 7,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_label' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_label' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_referenced_node',
    'label' => 'Event title',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'current' => array(
          'action' => 'hide',
          'action_on_edit' => 1,
          'fallback' => 'none',
          'skip_perm' => 0,
          'status' => 1,
          'use_uid' => 0,
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
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'entityform-sample_form-field_address_line_1'
  $field_instances['entityform-sample_form-field_address_line_1'] = array(
    'bundle' => 'sample_form',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_address_line_1',
    'label' => 'Street address',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-sample_form-field_address_type'
  $field_instances['entityform-sample_form-field_address_type'] = array(
    'bundle' => 'sample_form',
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
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_address_type',
    'label' => 'Address type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-sample_form-field_city'
  $field_instances['entityform-sample_form-field_city'] = array(
    'bundle' => 'sample_form',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_city',
    'label' => 'City',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-sample_form-field_comments'
  $field_instances['entityform-sample_form-field_comments'] = array(
    'bundle' => 'sample_form',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_comments',
    'label' => 'Comments',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-sample_form-field_cornell_college'
  $field_instances['entityform-sample_form-field_cornell_college'] = array(
    'bundle' => 'sample_form',
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
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_cornell_college',
    'label' => 'School or college at Cornell',
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

  // Exported field_instance: 'entityform-sample_form-field_file_upload_general'
  $field_instances['entityform-sample_form-field_file_upload_general'] = array(
    'bundle' => 'sample_form',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'file_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_file_upload_general',
    'label' => 'Upload document',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt doc docx pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-sample_form-field_full_name'
  $field_instances['entityform-sample_form-field_full_name'] = array(
    'bundle' => 'sample_form',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your preferred name, even if it isn\'t your legal name.  (For the sample form this is an example of "help text" to go with a specific field. It shows up <strong>below</strong> the field.)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_full_name',
    'label' => 'Your name',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-sample_form-field_how_heard_admissions'
  $field_instances['entityform-sample_form-field_how_heard_admissions'] = array(
    'bundle' => 'sample_form',
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
        'weight' => 14,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_how_heard_admissions',
    'label' => 'How did you learn about the ILR School? (check all that apply)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-sample_form-field_markup_sample'
  $field_instances['entityform-sample_form-field_markup_sample'] = array(
    'bundle' => 'sample_form',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'markup_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_markup_sample',
    'label' => 'markup sample',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-sample_form-field_response_checkbox'
  $field_instances['entityform-sample_form-field_response_checkbox'] = array(
    'bundle' => 'sample_form',
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
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_response_checkbox',
    'label' => 'I agree with everything.',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-sample_form-field_start_date'
  $field_instances['entityform-sample_form-field_start_date'] = array(
    'bundle' => 'sample_form',
    'deleted' => 0,
    'description' => 'This is here to show a date picker on the sample form. In practice, we usually use text fields for dates instead, because it\'s so often the case that the kind of info being collected for dates lends itself to open-ended text.',
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
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_start_date',
    'label' => 'Start date',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-sample_form-field_state_province'
  $field_instances['entityform-sample_form-field_state_province'] = array(
    'bundle' => 'sample_form',
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
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_state_province',
    'label' => 'State / Province',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-sample_form-field_zip_code'
  $field_instances['entityform-sample_form-field_zip_code'] = array(
    'bundle' => 'sample_form',
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
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_zip_code',
    'label' => 'Zip code',
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
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address type');
  t('City');
  t('College');
  t('Comments');
  t('Department');
  t('Email');
  t('Enter your preferred name, even if it isn\'t your legal name.  (For the sample form this is an example of "help text" to go with a specific field. It shows up <strong>below</strong> the field.)');
  t('Event date');
  t('Event title');
  t('First name');
  t('How did you learn about the ILR School? (check all that apply)');
  t('I agree with everything.');
  t('Last name');
  t('Phone');
  t('School or college at Cornell');
  t('Start date');
  t('State / Province');
  t('Street address');
  t('This is here to show a date picker on the sample form. In practice, we usually use text fields for dates instead, because it\'s so often the case that the kind of info being collected for dates lends itself to open-ended text.');
  t('Title');
  t('Upload document');
  t('Your name');
  t('Zip code');
  t('markup sample');

  return $field_instances;
}
