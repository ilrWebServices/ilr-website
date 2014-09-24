<?php
/**
 * @file
 * forms.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function forms_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-career_services_contact_form-field_career_services_how_to_dir'
  $field_instances['entityform-career_services_contact_form-field_career_services_how_to_dir'] = array(
    'bundle' => 'career_services_contact_form',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_career_services_how_to_dir',
    'label' => 'Direct my questions to',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-career_services_contact_form-field_comments'
  $field_instances['entityform-career_services_contact_form-field_comments'] = array(
    'bundle' => 'career_services_contact_form',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_comments',
    'label' => 'Questions and comments',
    'required' => 1,
    'settings' => array(
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-career_services_contact_form-field_email'
  $field_instances['entityform-career_services_contact_form-field_email'] = array(
    'bundle' => 'career_services_contact_form',
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
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-career_services_contact_form-field_full_name'
  $field_instances['entityform-career_services_contact_form-field_full_name'] = array(
    'bundle' => 'career_services_contact_form',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_full_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'entityform-career_services_contact_form-field_subject_line'
  $field_instances['entityform-career_services_contact_form-field_subject_line'] = array(
    'bundle' => 'career_services_contact_form',
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
    'field_name' => 'field_subject_line',
    'label' => 'Subject line for this message',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-classroom_reservation_request-field_comments'
  $field_instances['entityform-classroom_reservation_request-field_comments'] = array(
    'bundle' => 'classroom_reservation_request',
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
        'weight' => 12,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_comments',
    'label' => 'Additional comments',
    'required' => 0,
    'settings' => array(
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
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'entityform-classroom_reservation_request-field_count_as_text'
  $field_instances['entityform-classroom_reservation_request-field_count_as_text'] = array(
    'bundle' => 'classroom_reservation_request',
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
    'field_name' => 'field_count_as_text',
    'label' => 'How many people',
    'required' => 1,
    'settings' => array(
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-classroom_reservation_request-field_dates_as_text'
  $field_instances['entityform-classroom_reservation_request-field_dates_as_text'] = array(
    'bundle' => 'classroom_reservation_request',
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
        'weight' => 7,
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
    'field_name' => 'field_dates_as_text',
    'label' => 'Dates needed (mm/dd/yyyy)',
    'required' => 1,
    'settings' => array(
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'entityform-classroom_reservation_request-field_department'
  $field_instances['entityform-classroom_reservation_request-field_department'] = array(
    'bundle' => 'classroom_reservation_request',
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
          'field_formatter_label' => 'Org or dept',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Org or department',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_department',
    'label' => 'ILR student organization or department name',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-classroom_reservation_request-field_email'
  $field_instances['entityform-classroom_reservation_request-field_email'] = array(
    'bundle' => 'classroom_reservation_request',
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
        'weight' => 0,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'disabled' => 1,
      'kerberized' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-classroom_reservation_request-field_end_time'
  $field_instances['entityform-classroom_reservation_request-field_end_time'] = array(
    'bundle' => 'classroom_reservation_request',
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
        'weight' => 9,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_end_time',
    'label' => 'End time',
    'required' => 1,
    'settings' => array(
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'entityform-classroom_reservation_request-field_event_name'
  $field_instances['entityform-classroom_reservation_request-field_event_name'] = array(
    'bundle' => 'classroom_reservation_request',
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
    'field_name' => 'field_event_name',
    'label' => 'Event name',
    'required' => 1,
    'settings' => array(
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-classroom_reservation_request-field_first_name'
  $field_instances['entityform-classroom_reservation_request-field_first_name'] = array(
    'bundle' => 'classroom_reservation_request',
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
        'weight' => 1,
      ),
      'table' => array(
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
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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

  // Exported field_instance: 'entityform-classroom_reservation_request-field_ilr_rooms'
  $field_instances['entityform-classroom_reservation_request-field_ilr_rooms'] = array(
    'bundle' => 'classroom_reservation_request',
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
        'weight' => 10,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'table' => array(
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
    'field_name' => 'field_ilr_rooms',
    'label' => 'Meeting location preference',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'entityform-classroom_reservation_request-field_last_name'
  $field_instances['entityform-classroom_reservation_request-field_last_name'] = array(
    'bundle' => 'classroom_reservation_request',
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
        'weight' => 2,
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
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-classroom_reservation_request-field_phone'
  $field_instances['entityform-classroom_reservation_request-field_phone'] = array(
    'bundle' => 'classroom_reservation_request',
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
        'weight' => 4,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone',
    'label' => 'Phone (with area code)',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-classroom_reservation_request-field_start_time'
  $field_instances['entityform-classroom_reservation_request-field_start_time'] = array(
    'bundle' => 'classroom_reservation_request',
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
    'field_name' => 'field_start_time',
    'label' => 'Start time',
    'required' => 1,
    'settings' => array(
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'entityform-classroom_reservation_request-field_technical_needs'
  $field_instances['entityform-classroom_reservation_request-field_technical_needs'] = array(
    'bundle' => 'classroom_reservation_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>If there are technical needs, training is required prior to the use of a room. Please contact ILR Technology Services to make these arrangements via email at: <a href="mailto:ilrvtc@cornell.edu>ilrvtc@cornell.edu</a>.</p>
<p>Note: ILR Technology Services does not support Skype in the classrooms. If using Skype, please use your own laptop.</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Technical needs',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Technical needs',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_technical_needs',
    'label' => 'Technical needs (Examples: Microphone, PowerPoint, laptop, DVD, videotaping. Enter "none" if you have NO technical needs.)',
    'required' => 1,
    'settings' => array(
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
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'entityform-credit_internship_contact_form-field_address_line_1'
  $field_instances['entityform-credit_internship_contact_form-field_address_line_1'] = array(
    'bundle' => 'credit_internship_contact_form',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_address_line_1',
    'label' => 'Street address',
    'required' => 0,
    'settings' => array(
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-credit_internship_contact_form-field_city'
  $field_instances['entityform-credit_internship_contact_form-field_city'] = array(
    'bundle' => 'credit_internship_contact_form',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_city',
    'label' => 'City',
    'required' => 0,
    'settings' => array(
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

  // Exported field_instance: 'entityform-credit_internship_contact_form-field_comments'
  $field_instances['entityform-credit_internship_contact_form-field_comments'] = array(
    'bundle' => 'credit_internship_contact_form',
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
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_comments',
    'label' => 'Questions and comments',
    'required' => 1,
    'settings' => array(
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
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'entityform-credit_internship_contact_form-field_country'
  $field_instances['entityform-credit_internship_contact_form-field_country'] = array(
    'bundle' => 'credit_internship_contact_form',
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
    'field_name' => 'field_country',
    'label' => 'Country',
    'required' => 0,
    'settings' => array(
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'entityform-credit_internship_contact_form-field_email'
  $field_instances['entityform-credit_internship_contact_form-field_email'] = array(
    'bundle' => 'credit_internship_contact_form',
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
    ),
    'entity_type' => 'entityform',
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
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'entityform-credit_internship_contact_form-field_first_name'
  $field_instances['entityform-credit_internship_contact_form-field_first_name'] = array(
    'bundle' => 'credit_internship_contact_form',
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 1,
    'settings' => array(
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-credit_internship_contact_form-field_last_name'
  $field_instances['entityform-credit_internship_contact_form-field_last_name'] = array(
    'bundle' => 'credit_internship_contact_form',
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
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-credit_internship_contact_form-field_phone'
  $field_instances['entityform-credit_internship_contact_form-field_phone'] = array(
    'bundle' => 'credit_internship_contact_form',
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
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'entityform-credit_internship_contact_form-field_semester_off_campus'
  $field_instances['entityform-credit_internship_contact_form-field_semester_off_campus'] = array(
    'bundle' => 'credit_internship_contact_form',
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
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_semester_off_campus',
    'label' => 'Semester off-campus',
    'required' => 1,
    'settings' => array(
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
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'entityform-credit_internship_contact_form-field_state_inc_outside_us'
  $field_instances['entityform-credit_internship_contact_form-field_state_inc_outside_us'] = array(
    'bundle' => 'credit_internship_contact_form',
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
    'field_name' => 'field_state_inc_outside_us',
    'label' => 'State',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-credit_internship_contact_form-field_year_as_text'
  $field_instances['entityform-credit_internship_contact_form-field_year_as_text'] = array(
    'bundle' => 'credit_internship_contact_form',
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
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_year_as_text',
    'label' => 'Class year',
    'required' => 1,
    'settings' => array(
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
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'entityform-credit_internship_contact_form-field_zip_code'
  $field_instances['entityform-credit_internship_contact_form-field_zip_code'] = array(
    'bundle' => 'credit_internship_contact_form',
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
    'field_name' => 'field_zip_code',
    'label' => 'Zip code',
    'required' => 0,
    'settings' => array(
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-customized_professional_programs-field_areas_of_interest_for_prof'
  $field_instances['entityform-customized_professional_programs-field_areas_of_interest_for_prof'] = array(
    'bundle' => 'customized_professional_programs',
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_areas_of_interest_for_prof',
    'label' => 'Areas of interest',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-customized_professional_programs-field_comments'
  $field_instances['entityform-customized_professional_programs-field_comments'] = array(
    'bundle' => 'customized_professional_programs',
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_comments',
    'label' => 'Questions and comments',
    'required' => 0,
    'settings' => array(
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-customized_professional_programs-field_email'
  $field_instances['entityform-customized_professional_programs-field_email'] = array(
    'bundle' => 'customized_professional_programs',
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
    ),
    'entity_type' => 'entityform',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-customized_professional_programs-field_first_name'
  $field_instances['entityform-customized_professional_programs-field_first_name'] = array(
    'bundle' => 'customized_professional_programs',
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_first_name',
    'label' => 'First name',
    'required' => 1,
    'settings' => array(
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-customized_professional_programs-field_last_name'
  $field_instances['entityform-customized_professional_programs-field_last_name'] = array(
    'bundle' => 'customized_professional_programs',
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
    'field_name' => 'field_last_name',
    'label' => 'Last name',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-dublin_application_form-field_address_line_1'
  $field_instances['entityform-dublin_application_form-field_address_line_1'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 2,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'line1 home',
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_address_line_1',
    'label' => 'Street address line 1',
    'required' => 1,
    'settings' => array(
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
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_address_line_1_additional'
  $field_instances['entityform-dublin_application_form-field_address_line_1_additional'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 10,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_address_line_1_additional',
    'label' => 'Street address line 1',
    'required' => 1,
    'settings' => array(
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
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_address_line_2'
  $field_instances['entityform-dublin_application_form-field_address_line_2'] = array(
    'bundle' => 'dublin_application_form',
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
          'field_formatter_label' => 'line2 home',
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'email' => array(
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
    'field_name' => 'field_address_line_2',
    'label' => 'Street address line 2',
    'required' => 0,
    'settings' => array(
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
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_address_line_2_additional'
  $field_instances['entityform-dublin_application_form-field_address_line_2_additional'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 11,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_address_line_2_additional',
    'label' => 'Street address line 2',
    'required' => 0,
    'settings' => array(
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
      'weight' => 66,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_citizenship'
  $field_instances['entityform-dublin_application_form-field_citizenship'] = array(
    'bundle' => 'dublin_application_form',
    'default_value' => array(
      0 => array(
        'value' => 'United States',
      ),
    ),
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
        'weight' => 7,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_citizenship',
    'label' => 'Citizenship',
    'required' => 1,
    'settings' => array(
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_city'
  $field_instances['entityform-dublin_application_form-field_city'] = array(
    'bundle' => 'dublin_application_form',
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
          'field_formatter_label' => 'city home',
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'email' => array(
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
    'field_name' => 'field_city',
    'label' => 'City',
    'required' => 1,
    'settings' => array(
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
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_city_additional'
  $field_instances['entityform-dublin_application_form-field_city_additional'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 12,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'city college',
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_city_additional',
    'label' => 'City',
    'required' => 1,
    'settings' => array(
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
      'weight' => 67,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_country'
  $field_instances['entityform-dublin_application_form-field_country'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 7,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_country',
    'label' => 'Country',
    'required' => 1,
    'settings' => array(
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
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_country_additional'
  $field_instances['entityform-dublin_application_form-field_country_additional'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 15,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_country_additional',
    'label' => 'Country',
    'required' => 1,
    'settings' => array(
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
      'weight' => 70,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_date_of_birth'
  $field_instances['entityform-dublin_application_form-field_date_of_birth'] = array(
    'bundle' => 'dublin_application_form',
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
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'field_formatter_label' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'field_formatter_label' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_date_of_birth',
    'label' => 'Date of birth (mm/dd/yyyy)',
    'required' => 1,
    'settings' => array(
      'default_value' => 'blank',
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
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_dates'
  $field_instances['entityform-dublin_application_form-field_dates'] = array(
    'bundle' => 'dublin_application_form',
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
    'field_name' => 'field_dates',
    'label' => 'Expiration date (mm/yyyy)',
    'required' => 1,
    'settings' => array(
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
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_dates_as_text'
  $field_instances['entityform-dublin_application_form-field_dates_as_text'] = array(
    'bundle' => 'dublin_application_form',
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
    'field_name' => 'field_dates_as_text',
    'label' => 'Expected graduation date (mm/yyyy)',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-dublin_application_form-field_disciplinary_action'
  $field_instances['entityform-dublin_application_form-field_disciplinary_action'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 14,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 34,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_disciplinary_action',
    'label' => 'Are you currently, or have you ever been, subject to disciplinary action at Cornell?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_disciplinary_explanation'
  $field_instances['entityform-dublin_application_form-field_disciplinary_explanation'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 15,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_disciplinary_explanation',
    'label' => 'If so, please explan',
    'required' => 0,
    'settings' => array(
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
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_dublin_acad_goals_essay'
  $field_instances['entityform-dublin_application_form-field_dublin_acad_goals_essay'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 10,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_dublin_acad_goals_essay',
    'label' => 'Academic goals essay',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 72,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_dublin_courses_completed'
  $field_instances['entityform-dublin_application_form-field_dublin_courses_completed'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 12,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 32,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_dublin_courses_completed',
    'label' => 'Check all courses you will have completed by the end of the current semester',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_dublin_current_courses'
  $field_instances['entityform-dublin_application_form-field_dublin_current_courses'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 13,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 33,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_dublin_current_courses',
    'label' => 'Please list the courses in which you are currently enrolled',
    'required' => 1,
    'settings' => array(
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
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_dublin_essay1'
  $field_instances['entityform-dublin_application_form-field_dublin_essay1'] = array(
    'bundle' => 'dublin_application_form',
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
      'download' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'markup_default',
        'weight' => 36,
      ),
      'email' => array(
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
    'field_name' => 'field_dublin_essay1',
    'label' => 'Dublin essay 1',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 71,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_dublin_essay_2'
  $field_instances['entityform-dublin_application_form-field_dublin_essay_2'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 11,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'markup_default',
        'weight' => 38,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'markup_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_dublin_essay_2',
    'label' => 'Dublin essay 2',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 73,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_dublin_study_abroad_essay'
  $field_instances['entityform-dublin_application_form-field_dublin_study_abroad_essay'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 12,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_dublin_study_abroad_essay',
    'label' => 'Study abroad essay',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 74,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_email'
  $field_instances['entityform-dublin_application_form-field_email'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 4,
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
      'email' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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

  // Exported field_instance: 'entityform-dublin_application_form-field_first_name'
  $field_instances['entityform-dublin_application_form-field_first_name'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 1,
      ),
      'email' => array(
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
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_gpa'
  $field_instances['entityform-dublin_application_form-field_gpa'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 7,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gpa',
    'label' => 'GPA',
    'required' => 1,
    'settings' => array(
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
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_last_name'
  $field_instances['entityform-dublin_application_form-field_last_name'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 3,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_last_name',
    'label' => 'Last name',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_middle_name'
  $field_instances['entityform-dublin_application_form-field_middle_name'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 2,
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
      'email' => array(
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
    'field_name' => 'field_middle_name',
    'label' => 'Middle name',
    'required' => 0,
    'settings' => array(
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
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_netid'
  $field_instances['entityform-dublin_application_form-field_netid'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 0,
      ),
      'email' => array(
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
    'field_name' => 'field_netid',
    'label' => 'NetID',
    'required' => 1,
    'settings' => array(
      'disabled' => 1,
      'kerberized' => 1,
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
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_number_of_completed_credit'
  $field_instances['entityform-dublin_application_form-field_number_of_completed_credit'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 10,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 30,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_number_of_completed_credit',
    'label' => 'Number of completed credits',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-dublin_application_form-field_number_of_terms_at_cornell'
  $field_instances['entityform-dublin_application_form-field_number_of_terms_at_cornell'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 11,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 31,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_number_of_terms_at_cornell',
    'label' => 'Number of terms at Cornell',
    'required' => 1,
    'settings' => array(
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
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_passport_number'
  $field_instances['entityform-dublin_application_form-field_passport_number'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 22,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_passport_number',
    'label' => 'Passport number',
    'required' => 1,
    'settings' => array(
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
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_phone'
  $field_instances['entityform-dublin_application_form-field_phone'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 19,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone',
    'label' => 'Cell phone number',
    'required' => 0,
    'settings' => array(
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
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_phone_college'
  $field_instances['entityform-dublin_application_form-field_phone_college'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 20,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone_college',
    'label' => 'College phone number',
    'required' => 0,
    'settings' => array(
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
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_phone_home'
  $field_instances['entityform-dublin_application_form-field_phone_home'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 21,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone_home',
    'label' => 'Home phone number',
    'required' => 0,
    'settings' => array(
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
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_state_province'
  $field_instances['entityform-dublin_application_form-field_state_province'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 5,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'email' => array(
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
    'field_name' => 'field_state_province',
    'label' => 'State / Province',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_state_province_additional'
  $field_instances['entityform-dublin_application_form-field_state_province_additional'] = array(
    'bundle' => 'dublin_application_form',
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
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_state_province_additional',
    'label' => 'State / Province',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 68,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_student_id_number'
  $field_instances['entityform-dublin_application_form-field_student_id_number'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 5,
      ),
      'email' => array(
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
    'field_name' => 'field_student_id_number',
    'label' => 'Student ID Number',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-dublin_application_form-field_transfer_student'
  $field_instances['entityform-dublin_application_form-field_transfer_student'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 9,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 29,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_transfer_student',
    'label' => 'Are you a transfer student',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_visa_type'
  $field_instances['entityform-dublin_application_form-field_visa_type'] = array(
    'bundle' => 'dublin_application_form',
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
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_visa_type',
    'label' => 'Visa type (if non-US citizen)',
    'required' => 0,
    'settings' => array(
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
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_year_freshman_soph_jr_sr'
  $field_instances['entityform-dublin_application_form-field_year_freshman_soph_jr_sr'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 6,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 27,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_year_freshman_soph_jr_sr',
    'label' => 'Current class year',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_zip_code'
  $field_instances['entityform-dublin_application_form-field_zip_code'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 11,
      ),
      'email' => array(
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
    'field_name' => 'field_zip_code',
    'label' => 'Zip / Postal code',
    'required' => 1,
    'settings' => array(
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
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'entityform-dublin_application_form-field_zip_postal_code_additional'
  $field_instances['entityform-dublin_application_form-field_zip_postal_code_additional'] = array(
    'bundle' => 'dublin_application_form',
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
        'weight' => 14,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_zip_postal_code_additional',
    'label' => 'Zip / Postal code',
    'required' => 1,
    'settings' => array(
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
      'weight' => 69,
    ),
  );

  // Exported field_instance: 'entityform-employee_recognition_nomination_-field_department'
  $field_instances['entityform-employee_recognition_nomination_-field_department'] = array(
    'bundle' => 'employee_recognition_nomination_',
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
          'field_formatter_label' => 'Nominator department',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Nominator department',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_department',
    'label' => 'Department',
    'required' => 1,
    'settings' => array(
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-employee_recognition_nomination_-field_department_additional'
  $field_instances['entityform-employee_recognition_nomination_-field_department_additional'] = array(
    'bundle' => 'employee_recognition_nomination_',
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
        'weight' => 2,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Nominee department',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Nominee department',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_department_additional',
    'label' => 'Department',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-employee_recognition_nomination_-field_email'
  $field_instances['entityform-employee_recognition_nomination_-field_email'] = array(
    'bundle' => 'employee_recognition_nomination_',
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
        'weight' => 6,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => 'Nominator email',
        ),
        'type' => 'email_default',
        'weight' => 8,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => 'Nominator email',
        ),
        'type' => 'email_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-employee_recognition_nomination_-field_empl_recog_supp_text'
  $field_instances['entityform-employee_recognition_nomination_-field_empl_recog_supp_text'] = array(
    'bundle' => 'employee_recognition_nomination_',
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
        'weight' => 12,
      ),
      'download' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'table' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_empl_recog_supp_text',
    'label' => 'empl recog supp text',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-employee_recognition_nomination_-field_full_name'
  $field_instances['entityform-employee_recognition_nomination_-field_full_name'] = array(
    'bundle' => 'employee_recognition_nomination_',
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
        'weight' => 2,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Nominator name',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Nominator name',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_full_name',
    'label' => 'Your name',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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

  // Exported field_instance: 'entityform-employee_recognition_nomination_-field_full_name_additional'
  $field_instances['entityform-employee_recognition_nomination_-field_full_name_additional'] = array(
    'bundle' => 'employee_recognition_nomination_',
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
        'weight' => 0,
      ),
      'table' => array(
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
    'field_name' => 'field_full_name_additional',
    'label' => 'Nominee name',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-employee_recognition_nomination_-field_letter_of_support'
  $field_instances['entityform-employee_recognition_nomination_-field_letter_of_support'] = array(
    'bundle' => 'employee_recognition_nomination_',
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
        'weight' => 9,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_letter_of_support',
    'label' => 'Your letter of support',
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
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-employee_recognition_nomination_-field_name_title'
  $field_instances['entityform-employee_recognition_nomination_-field_name_title'] = array(
    'bundle' => 'employee_recognition_nomination_',
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
          'field_formatter_label' => 'Nominator title',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Nominator title',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_name_title',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-employee_recognition_nomination_-field_netid'
  $field_instances['entityform-employee_recognition_nomination_-field_netid'] = array(
    'bundle' => 'employee_recognition_nomination_',
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
        'weight' => 7,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Nominator netid',
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Nominator netid',
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_netid',
    'label' => 'NetID',
    'required' => 1,
    'settings' => array(
      'disabled' => 1,
      'kerberized' => 1,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-employee_recognition_nomination_-field_phone'
  $field_instances['entityform-employee_recognition_nomination_-field_phone'] = array(
    'bundle' => 'employee_recognition_nomination_',
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
          'field_formatter_label' => 'Nominator phone',
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Nominator phone',
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-employee_recognition_nomination_-field_supervisor'
  $field_instances['entityform-employee_recognition_nomination_-field_supervisor'] = array(
    'bundle' => 'employee_recognition_nomination_',
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
          'field_formatter_label' => 'Nominee supervisor',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Nominee supervisor',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_supervisor',
    'label' => 'Supervisor',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-employee_recognition_nomination_-field_supporter_1'
  $field_instances['entityform-employee_recognition_nomination_-field_supporter_1'] = array(
    'bundle' => 'employee_recognition_nomination_',
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
        'weight' => 10,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_supporter_1',
    'label' => 'Supporter 1',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-employee_recognition_nomination_-field_supporter_2'
  $field_instances['entityform-employee_recognition_nomination_-field_supporter_2'] = array(
    'bundle' => 'employee_recognition_nomination_',
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
        'weight' => 11,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_supporter_2',
    'label' => 'Supporter 2',
    'required' => 1,
    'settings' => array(
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-employee_recognition_nomination_-field_title_additional'
  $field_instances['entityform-employee_recognition_nomination_-field_title_additional'] = array(
    'bundle' => 'employee_recognition_nomination_',
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
          'field_formatter_label' => 'Nominee title',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Nominee title',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_title_additional',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-faculty_request_for_ta_or_ra-field_account_number'
  $field_instances['entityform-faculty_request_for_ta_or_ra-field_account_number'] = array(
    'bundle' => 'faculty_request_for_ta_or_ra',
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
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'RA account number',
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'RA account number',
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_account_number',
    'label' => 'Account Number (for externally funded projects)',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-faculty_request_for_ta_or_ra-field_comments'
  $field_instances['entityform-faculty_request_for_ta_or_ra-field_comments'] = array(
    'bundle' => 'faculty_request_for_ta_or_ra',
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
        'weight' => 12,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_comments',
    'label' => 'Additional comments',
    'required' => 0,
    'settings' => array(
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-faculty_request_for_ta_or_ra-field_course_name'
  $field_instances['entityform-faculty_request_for_ta_or_ra-field_course_name'] = array(
    'bundle' => 'faculty_request_for_ta_or_ra',
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
        'weight' => 11,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'TA course name',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'TA course name',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_course_name',
    'label' => 'Course name',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-faculty_request_for_ta_or_ra-field_course_number'
  $field_instances['entityform-faculty_request_for_ta_or_ra-field_course_number'] = array(
    'bundle' => 'faculty_request_for_ta_or_ra',
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
        'weight' => 10,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'TA course number',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'TA course number',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_course_number',
    'label' => 'Course number (e.g. ILRLR 2100)',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-faculty_request_for_ta_or_ra-field_department'
  $field_instances['entityform-faculty_request_for_ta_or_ra-field_department'] = array(
    'bundle' => 'faculty_request_for_ta_or_ra',
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
        'weight' => 2,
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
    'field_name' => 'field_department',
    'label' => 'Department',
    'required' => 1,
    'settings' => array(
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-faculty_request_for_ta_or_ra-field_email'
  $field_instances['entityform-faculty_request_for_ta_or_ra-field_email'] = array(
    'bundle' => 'faculty_request_for_ta_or_ra',
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
        'weight' => 0,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'disabled' => 1,
      'kerberized' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'entityform-faculty_request_for_ta_or_ra-field_full_name'
  $field_instances['entityform-faculty_request_for_ta_or_ra-field_full_name'] = array(
    'bundle' => 'faculty_request_for_ta_or_ra',
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
        'weight' => 1,
      ),
      'table' => array(
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
    'field_name' => 'field_full_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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

  // Exported field_instance: 'entityform-faculty_request_for_ta_or_ra-field_number_of_assistants_reque'
  $field_instances['entityform-faculty_request_for_ta_or_ra-field_number_of_assistants_reque'] = array(
    'bundle' => 'faculty_request_for_ta_or_ra',
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
    'field_name' => 'field_number_of_assistants_reque',
    'label' => 'Number of assistants requested',
    'required' => 1,
    'settings' => array(
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-faculty_request_for_ta_or_ra-field_preferred_students'
  $field_instances['entityform-faculty_request_for_ta_or_ra-field_preferred_students'] = array(
    'bundle' => 'faculty_request_for_ta_or_ra',
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
        'weight' => 7,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Preferred students or qualifications',
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Preferred students or qualifications',
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_preferred_students',
    'label' => 'Preferred students (in order of preference), or desired qualifications',
    'required' => 1,
    'settings' => array(
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-faculty_request_for_ta_or_ra-field_project_name'
  $field_instances['entityform-faculty_request_for_ta_or_ra-field_project_name'] = array(
    'bundle' => 'faculty_request_for_ta_or_ra',
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
        'weight' => 9,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'RA project',
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'RA project',
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_project_name',
    'label' => 'Project name or description (e.g. Chaired RA, Assistant Professor RA)',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-faculty_request_for_ta_or_ra-field_semester'
  $field_instances['entityform-faculty_request_for_ta_or_ra-field_semester'] = array(
    'bundle' => 'faculty_request_for_ta_or_ra',
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
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_semester',
    'label' => ' Semester requesting assistantship',
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

  // Exported field_instance: 'entityform-faculty_request_for_ta_or_ra-field_type_of_grad_assistant'
  $field_instances['entityform-faculty_request_for_ta_or_ra-field_type_of_grad_assistant'] = array(
    'bundle' => 'faculty_request_for_ta_or_ra',
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
        'weight' => 5,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_type_of_grad_assistant',
    'label' => 'Type of grad assistant',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-faculty_request_for_ta_or_ra-field_year_as_text'
  $field_instances['entityform-faculty_request_for_ta_or_ra-field_year_as_text'] = array(
    'bundle' => 'faculty_request_for_ta_or_ra',
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
        'weight' => 4,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_year_as_text',
    'label' => 'Year',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-grad_student_appl_for_graduation-field_degree_plan_submitted'
  $field_instances['entityform-grad_student_appl_for_graduation-field_degree_plan_submitted'] = array(
    'bundle' => 'grad_student_appl_for_graduation',
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
        'weight' => 0,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Degree plan',
        ),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Degree plan',
        ),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_degree_plan_submitted',
    'label' => '	I certify that I have read the above information and that I have submitted my Degree Plan.',
    'required' => 1,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-grad_student_appl_for_graduation-field_email'
  $field_instances['entityform-grad_student_appl_for_graduation-field_email'] = array(
    'bundle' => 'grad_student_appl_for_graduation',
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
        'weight' => 7,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 7,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'disabled' => 1,
      'kerberized' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-grad_student_appl_for_graduation-field_full_name'
  $field_instances['entityform-grad_student_appl_for_graduation-field_full_name'] = array(
    'bundle' => 'grad_student_appl_for_graduation',
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
        'weight' => 2,
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
    'field_name' => 'field_full_name',
    'label' => 'Name currently on record',
    'required' => 1,
    'settings' => array(
      'disabled' => 1,
      'kerberized' => 1,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-grad_student_appl_for_graduation-field_full_name_additional'
  $field_instances['entityform-grad_student_appl_for_graduation-field_full_name_additional'] = array(
    'bundle' => 'grad_student_appl_for_graduation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '(If this is a different spelling than what appears on your student center, please visit the Office of the University Registrar in B7 Day hall to have it officially changed.)',
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
        'weight' => 4,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_full_name_additional',
    'label' => 'Name, if different from above',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-grad_student_appl_for_graduation-field_grad_date_appl_for_graduat'
  $field_instances['entityform-grad_student_appl_for_graduation-field_grad_date_appl_for_graduat'] = array(
    'bundle' => 'grad_student_appl_for_graduation',
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
        'weight' => 6,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Graduation date',
        ),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Graduation date',
        ),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_grad_date_appl_for_graduat',
    'label' => 'When will you graduate?',
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

  // Exported field_instance: 'entityform-grad_student_appl_for_graduation-field_name_correct_for_diploma'
  $field_instances['entityform-grad_student_appl_for_graduation-field_name_correct_for_diploma'] = array(
    'bundle' => 'grad_student_appl_for_graduation',
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
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Name correct or not',
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Name correct or not',
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_name_correct_for_diploma',
    'label' => 'Name as it should be spelled on your diploma',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-grad_student_appl_for_graduation-field_pronunciation'
  $field_instances['entityform-grad_student_appl_for_graduation-field_pronunciation'] = array(
    'bundle' => 'grad_student_appl_for_graduation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Example: Barack Obama could submit "bah-RAHK o-BAH-mah"',
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
    'field_name' => 'field_pronunciation',
    'label' => 'Pronunciation',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-grad_student_appl_for_graduation-field_pronunciation_markup'
  $field_instances['entityform-grad_student_appl_for_graduation-field_pronunciation_markup'] = array(
    'bundle' => 'grad_student_appl_for_graduation',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'download' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'table' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_pronunciation_markup',
    'label' => 'pronunciation markup',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-grad_student_appl_for_graduation-field_student_id_number'
  $field_instances['entityform-grad_student_appl_for_graduation-field_student_id_number'] = array(
    'bundle' => 'grad_student_appl_for_graduation',
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
        'weight' => 1,
      ),
      'table' => array(
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
    'field_name' => 'field_student_id_number',
    'label' => 'Student ID Number',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_amount_1'
  $field_instances['entityform-grad_travel_grant_application-field_amount_1'] = array(
    'bundle' => 'grad_travel_grant_application',
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
        'weight' => 9,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_amount_1',
    'label' => 'Amount 1',
    'required' => 0,
    'settings' => array(
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

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_amount_2'
  $field_instances['entityform-grad_travel_grant_application-field_amount_2'] = array(
    'bundle' => 'grad_travel_grant_application',
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
        'weight' => 11,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_amount_2',
    'label' => 'Amount 2',
    'required' => 0,
    'settings' => array(
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

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_amount_3'
  $field_instances['entityform-grad_travel_grant_application-field_amount_3'] = array(
    'bundle' => 'grad_travel_grant_application',
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
        'weight' => 13,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_amount_3',
    'label' => 'Amount 3',
    'required' => 0,
    'settings' => array(
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_chairperson'
  $field_instances['entityform-grad_travel_grant_application-field_chairperson'] = array(
    'bundle' => 'grad_travel_grant_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
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
        'weight' => 4,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_chairperson',
    'label' => 'Chairperson',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_conference_name'
  $field_instances['entityform-grad_travel_grant_application-field_conference_name'] = array(
    'bundle' => 'grad_travel_grant_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
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
    'field_name' => 'field_conference_name',
    'label' => 'Conference name',
    'required' => 1,
    'settings' => array(
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_dates'
  $field_instances['entityform-grad_travel_grant_application-field_dates'] = array(
    'bundle' => 'grad_travel_grant_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
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
    'field_name' => 'field_dates',
    'label' => 'Date (mm/yyyy)',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_dates_as_text'
  $field_instances['entityform-grad_travel_grant_application-field_dates_as_text'] = array(
    'bundle' => 'grad_travel_grant_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
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
    'field_name' => 'field_dates_as_text',
    'label' => 'Expected graduation date (mm/yyyy)',
    'required' => 1,
    'settings' => array(
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_degree_program'
  $field_instances['entityform-grad_travel_grant_application-field_degree_program'] = array(
    'bundle' => 'grad_travel_grant_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_degree_program',
    'label' => 'Degree program',
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

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_email'
  $field_instances['entityform-grad_travel_grant_application-field_email'] = array(
    'bundle' => 'grad_travel_grant_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'disabled' => 1,
      'kerberized' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_first_name'
  $field_instances['entityform-grad_travel_grant_application-field_first_name'] = array(
    'bundle' => 'grad_travel_grant_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
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
        'weight' => 1,
      ),
      'table' => array(
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
    'field_name' => 'field_first_name',
    'label' => 'First name',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_funding_received'
  $field_instances['entityform-grad_travel_grant_application-field_funding_received'] = array(
    'bundle' => 'grad_travel_grant_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'table' => array(
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
    'field_name' => 'field_funding_received',
    'label' => 'Have you received other funding for this trip?',
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

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_last_name'
  $field_instances['entityform-grad_travel_grant_application-field_last_name'] = array(
    'bundle' => 'grad_travel_grant_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
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
    'field_name' => 'field_last_name',
    'label' => 'Last name',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_location_string'
  $field_instances['entityform-grad_travel_grant_application-field_location_string'] = array(
    'bundle' => 'grad_travel_grant_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
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
        'weight' => 4,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_location_string',
    'label' => 'Location',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_source_1'
  $field_instances['entityform-grad_travel_grant_application-field_source_1'] = array(
    'bundle' => 'grad_travel_grant_application',
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
    'field_name' => 'field_source_1',
    'label' => 'Source of funding 1',
    'required' => 0,
    'settings' => array(
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

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_source_2'
  $field_instances['entityform-grad_travel_grant_application-field_source_2'] = array(
    'bundle' => 'grad_travel_grant_application',
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
        'weight' => 10,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_source_2',
    'label' => 'Source of funding 2',
    'required' => 0,
    'settings' => array(
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_source_3'
  $field_instances['entityform-grad_travel_grant_application-field_source_3'] = array(
    'bundle' => 'grad_travel_grant_application',
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
        'weight' => 12,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_source_3',
    'label' => 'Source of funding 3',
    'required' => 0,
    'settings' => array(
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

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_title_of_paper_or_poster'
  $field_instances['entityform-grad_travel_grant_application-field_title_of_paper_or_poster'] = array(
    'bundle' => 'grad_travel_grant_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
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
    'field_name' => 'field_title_of_paper_or_poster',
    'label' => 'Title of paper or poster',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-grad_travel_grant_application-field_travel_grant_already_recei'
  $field_instances['entityform-grad_travel_grant_application-field_travel_grant_already_recei'] = array(
    'bundle' => 'grad_travel_grant_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'confirmation' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'table' => array(
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
    'field_name' => 'field_travel_grant_already_recei',
    'label' => 'Have you received an ILR travel grant within this fiscal year? (July 1 - June 30)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_classes'
  $field_instances['entityform-graduate_student_request_for_tea-field_classes'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
        'weight' => 11,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Classes or faculty',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Classes or faculty',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_classes',
    'label' => 'Classes you are interesting in TAing or faculty members to whom you wish to be assigned',
    'required' => 1,
    'settings' => array(
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_computer_skills'
  $field_instances['entityform-graduate_student_request_for_tea-field_computer_skills'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
        'weight' => 12,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Computer skills',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Computer skills',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_computer_skills',
    'label' => 'Indicate level, if any, of computer skills or knowledge',
    'required' => 1,
    'settings' => array(
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
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_concentration'
  $field_instances['entityform-graduate_student_request_for_tea-field_concentration'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
        'weight' => 4,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_concentration',
    'label' => 'Concentration',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_degree_program'
  $field_instances['entityform-graduate_student_request_for_tea-field_degree_program'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_degree_program',
    'label' => 'Degree program',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_email'
  $field_instances['entityform-graduate_student_request_for_tea-field_email'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
        'weight' => 0,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'disabled' => 1,
      'kerberized' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_first_name'
  $field_instances['entityform-graduate_student_request_for_tea-field_first_name'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
        'weight' => 1,
      ),
      'table' => array(
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
    'field_name' => 'field_first_name',
    'label' => 'First name',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_ilr_department'
  $field_instances['entityform-graduate_student_request_for_tea-field_ilr_department'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
        'weight' => 10,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Departments',
        ),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Departments',
        ),
        'type' => 'list_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_ilr_department',
    'label' => ' Departments in which you prefer assignment (Indicate at least top two choices.)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_last_name'
  $field_instances['entityform-graduate_student_request_for_tea-field_last_name'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
        'weight' => 2,
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
    'field_name' => 'field_last_name',
    'label' => 'Last name',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_minor_subject_s_'
  $field_instances['entityform-graduate_student_request_for_tea-field_minor_subject_s_'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
    'field_name' => 'field_minor_subject_s_',
    'label' => 'Minor subject(s)',
    'required' => 1,
    'settings' => array(
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_number_of_completed_semest'
  $field_instances['entityform-graduate_student_request_for_tea-field_number_of_completed_semest'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
          'field_formatter_label' => 'Semesters completed',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Semesters completed',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_number_of_completed_semest',
    'label' => 'Number of completed semesters in residence',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_prior_appointments'
  $field_instances['entityform-graduate_student_request_for_tea-field_prior_appointments'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
        'weight' => 14,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Prior TA or RA',
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Prior TA or RA',
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_prior_appointments',
    'label' => 'List your prior TA or RA appointments',
    'required' => 1,
    'settings' => array(
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
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_semester'
  $field_instances['entityform-graduate_student_request_for_tea-field_semester'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'table' => array(
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
    'field_name' => 'field_semester',
    'label' => 'Semester for which you are requesting assistantship',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_type_of_grad_assistant'
  $field_instances['entityform-graduate_student_request_for_tea-field_type_of_grad_assistant'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
        'weight' => 9,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'TA or RA',
        ),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'TA or RA',
        ),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_type_of_grad_assistant',
    'label' => 'Indicate preference for teaching or research assistantship',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_work_experience'
  $field_instances['entityform-graduate_student_request_for_tea-field_work_experience'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
        'weight' => 13,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Work experience',
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'Work experience',
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_work_experience',
    'label' => 'List relevant work experience and/or your qualifications',
    'required' => 1,
    'settings' => array(
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
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'entityform-graduate_student_request_for_tea-field_year_as_text'
  $field_instances['entityform-graduate_student_request_for_tea-field_year_as_text'] = array(
    'bundle' => 'graduate_student_request_for_tea',
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
    'field_name' => 'field_year_as_text',
    'label' => 'Year',
    'required' => 1,
    'settings' => array(
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'entityform-ilr_organizational_behavior_lab_-field_comments'
  $field_instances['entityform-ilr_organizational_behavior_lab_-field_comments'] = array(
    'bundle' => 'ilr_organizational_behavior_lab_',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_comments',
    'label' => 'Questions and comments',
    'required' => 1,
    'settings' => array(
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-ilr_organizational_behavior_lab_-field_email'
  $field_instances['entityform-ilr_organizational_behavior_lab_-field_email'] = array(
    'bundle' => 'ilr_organizational_behavior_lab_',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-ilr_organizational_behavior_lab_-field_full_name'
  $field_instances['entityform-ilr_organizational_behavior_lab_-field_full_name'] = array(
    'bundle' => 'ilr_organizational_behavior_lab_',
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_full_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_acad_interest_check_many'
  $field_instances['entityform-ilr_student_advisor_application_-field_acad_interest_check_many'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 31,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 31,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_acad_interest_check_many',
    'label' => 'Academic interests (check all that apply)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_academic_interests_other'
  $field_instances['entityform-ilr_student_advisor_application_-field_academic_interests_other'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 30,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 30,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_academic_interests_other',
    'label' => 'Other academic interests (non-ILR)',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_address_line_1'
  $field_instances['entityform-ilr_student_advisor_application_-field_address_line_1'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 13,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_address_line_1',
    'label' => 'Address line 1 (permanent)',
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
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_address_line_1_additional'
  $field_instances['entityform-ilr_student_advisor_application_-field_address_line_1_additional'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 20,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_address_line_1_additional',
    'label' => 'Address line 1 (summer)',
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
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_address_line_2'
  $field_instances['entityform-ilr_student_advisor_application_-field_address_line_2'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 14,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_address_line_2',
    'label' => 'Address line 2 (permanent)',
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_address_line_2_additional'
  $field_instances['entityform-ilr_student_advisor_application_-field_address_line_2_additional'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 21,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_address_line_2_additional',
    'label' => 'Address line 2 (summer)',
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
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_city'
  $field_instances['entityform-ilr_student_advisor_application_-field_city'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 15,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_city',
    'label' => 'City (permanent)',
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
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_city_additional'
  $field_instances['entityform-ilr_student_advisor_application_-field_city_additional'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 22,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_city_additional',
    'label' => 'City (summer)',
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_comments'
  $field_instances['entityform-ilr_student_advisor_application_-field_comments'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 28,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 28,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_comments',
    'label' => 'Based on your experience, what are some of the most pressing questions and concerns of new Cornell students?',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_dates_as_text'
  $field_instances['entityform-ilr_student_advisor_application_-field_dates_as_text'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
    'field_name' => 'field_dates_as_text',
    'label' => 'Expected graduation date (mm/yyyy)',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_email'
  $field_instances['entityform-ilr_student_advisor_application_-field_email'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 0,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'disabled' => 1,
      'kerberized' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_email_additional'
  $field_instances['entityform-ilr_student_advisor_application_-field_email_additional'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 5,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 5,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email_additional',
    'label' => 'Email address that you will check during the summer',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_ethnicity'
  $field_instances['entityform-ilr_student_advisor_application_-field_ethnicity'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 10,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'table' => array(
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
    'field_name' => 'field_ethnicity',
    'label' => 'Ethnicity (optional; check all that apply)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_experience'
  $field_instances['entityform-ilr_student_advisor_application_-field_experience'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 27,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_experience',
    'label' => 'What past experiences have you had which would help you in the role of a Student Advisor?',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_first_name'
  $field_instances['entityform-ilr_student_advisor_application_-field_first_name'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 1,
      ),
      'table' => array(
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
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_interests_and_goals'
  $field_instances['entityform-ilr_student_advisor_application_-field_interests_and_goals'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
    'field_name' => 'field_interests_and_goals',
    'label' => 'Please elaborate on your ILR academic interests',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_last_name'
  $field_instances['entityform-ilr_student_advisor_application_-field_last_name'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 2,
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
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_phone'
  $field_instances['entityform-ilr_student_advisor_application_-field_phone'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
    'field_name' => 'field_phone',
    'label' => 'Local or cell phone',
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

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_phone_home'
  $field_instances['entityform-ilr_student_advisor_application_-field_phone_home'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
          'field_formatter_label' => 'summerPhone',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone_home',
    'label' => 'Phone number where we can reach you during the summer',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_relationship'
  $field_instances['entityform-ilr_student_advisor_application_-field_relationship'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 29,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 29,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_relationship',
    'label' => 'Did your relationship with your SA address the concerns you listed above? If yes, how so? If not, what would you do differently?',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_role'
  $field_instances['entityform-ilr_student_advisor_application_-field_role'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 26,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_role',
    'label' => 'What do you see as the role of a Student Advisor?',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_state_province'
  $field_instances['entityform-ilr_student_advisor_application_-field_state_province'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 16,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_state_province',
    'label' => 'State / Province (permanent)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_state_province_additional'
  $field_instances['entityform-ilr_student_advisor_application_-field_state_province_additional'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 23,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 23,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_state_province_additional',
    'label' => 'State / Province (summer)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_summer_address_status'
  $field_instances['entityform-ilr_student_advisor_application_-field_summer_address_status'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 19,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 19,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_summer_address_status',
    'label' => 'Summer address status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_transfer_student'
  $field_instances['entityform-ilr_student_advisor_application_-field_transfer_student'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 11,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_transfer_student',
    'label' => 'Did you transfer into ILR?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_zip_code'
  $field_instances['entityform-ilr_student_advisor_application_-field_zip_code'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 17,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_zip_code',
    'label' => 'Zip code (permanent)',
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
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'entityform-ilr_student_advisor_application_-field_zip_postal_code_additional'
  $field_instances['entityform-ilr_student_advisor_application_-field_zip_postal_code_additional'] = array(
    'bundle' => 'ilr_student_advisor_application_',
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
        'weight' => 24,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_zip_postal_code_additional',
    'label' => 'Zip code (summer)',
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
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'entityform-ilr_website_feedback-field_comments'
  $field_instances['entityform-ilr_website_feedback-field_comments'] = array(
    'bundle' => 'ilr_website_feedback',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_comments',
    'label' => 'Comments',
    'required' => 1,
    'settings' => array(
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-ilr_website_feedback-field_email'
  $field_instances['entityform-ilr_website_feedback-field_email'] = array(
    'bundle' => 'ilr_website_feedback',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-ilr_website_feedback-field_full_name'
  $field_instances['entityform-ilr_website_feedback-field_full_name'] = array(
    'bundle' => 'ilr_website_feedback',
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_full_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
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

  // Exported field_instance: 'entityform-international_programs_contact_f-field_comments'
  $field_instances['entityform-international_programs_contact_f-field_comments'] = array(
    'bundle' => 'international_programs_contact_f',
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
        'weight' => 2,
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
    'field_name' => 'field_comments',
    'label' => 'Questions and comments',
    'required' => 1,
    'settings' => array(
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-international_programs_contact_f-field_email'
  $field_instances['entityform-international_programs_contact_f-field_email'] = array(
    'bundle' => 'international_programs_contact_f',
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
        'weight' => 1,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 1,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-international_programs_contact_f-field_full_name'
  $field_instances['entityform-international_programs_contact_f-field_full_name'] = array(
    'bundle' => 'international_programs_contact_f',
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
        'weight' => 0,
      ),
      'table' => array(
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
    'field_name' => 'field_full_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-join_the_hcd_mailing_list-field_address_line_1'
  $field_instances['entityform-join_the_hcd_mailing_list-field_address_line_1'] = array(
    'bundle' => 'join_the_hcd_mailing_list',
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
    'field_name' => 'field_address_line_1',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-join_the_hcd_mailing_list-field_city'
  $field_instances['entityform-join_the_hcd_mailing_list-field_city'] = array(
    'bundle' => 'join_the_hcd_mailing_list',
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
    'field_name' => 'field_city',
    'label' => 'City',
    'required' => 1,
    'settings' => array(
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'entityform-join_the_hcd_mailing_list-field_company'
  $field_instances['entityform-join_the_hcd_mailing_list-field_company'] = array(
    'bundle' => 'join_the_hcd_mailing_list',
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
    'field_name' => 'field_company',
    'label' => 'Company',
    'required' => 0,
    'settings' => array(
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

  // Exported field_instance: 'entityform-join_the_hcd_mailing_list-field_country'
  $field_instances['entityform-join_the_hcd_mailing_list-field_country'] = array(
    'bundle' => 'join_the_hcd_mailing_list',
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
        'weight' => 9,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_country',
    'label' => 'Country',
    'required' => 0,
    'settings' => array(
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
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'entityform-join_the_hcd_mailing_list-field_email'
  $field_instances['entityform-join_the_hcd_mailing_list-field_email'] = array(
    'bundle' => 'join_the_hcd_mailing_list',
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
        'weight' => 4,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-join_the_hcd_mailing_list-field_email_opt_in'
  $field_instances['entityform-join_the_hcd_mailing_list-field_email_opt_in'] = array(
    'bundle' => 'join_the_hcd_mailing_list',
    'default_value' => array(
      0 => array(
        'value' => 1,
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
        'weight' => 13,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Can ILR email',
        ),
        'type' => 'list_default',
        'weight' => 13,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Can ILR email',
        ),
        'type' => 'list_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email_opt_in',
    'label' => ' May we contact you by email about information on our offerings?',
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
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'entityform-join_the_hcd_mailing_list-field_fax'
  $field_instances['entityform-join_the_hcd_mailing_list-field_fax'] = array(
    'bundle' => 'join_the_hcd_mailing_list',
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
        'weight' => 11,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fax',
    'label' => 'Fax',
    'required' => 0,
    'settings' => array(
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'entityform-join_the_hcd_mailing_list-field_first_name'
  $field_instances['entityform-join_the_hcd_mailing_list-field_first_name'] = array(
    'bundle' => 'join_the_hcd_mailing_list',
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
        'weight' => 0,
      ),
      'table' => array(
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
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 1,
    'settings' => array(
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-join_the_hcd_mailing_list-field_hcd_contact_form_topics'
  $field_instances['entityform-join_the_hcd_mailing_list-field_hcd_contact_form_topics'] = array(
    'bundle' => 'join_the_hcd_mailing_list',
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
        'weight' => 12,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Subjects',
        ),
        'type' => 'list_default',
        'weight' => 12,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Subjects',
        ),
        'type' => 'list_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_hcd_contact_form_topics',
    'label' => 'Which topics and types of programs are you interested in? (check all that apply)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'entityform-join_the_hcd_mailing_list-field_job_title'
  $field_instances['entityform-join_the_hcd_mailing_list-field_job_title'] = array(
    'bundle' => 'join_the_hcd_mailing_list',
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
        'weight' => 2,
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
    'field_name' => 'field_job_title',
    'label' => 'Job Title',
    'required' => 0,
    'settings' => array(
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-join_the_hcd_mailing_list-field_last_name'
  $field_instances['entityform-join_the_hcd_mailing_list-field_last_name'] = array(
    'bundle' => 'join_the_hcd_mailing_list',
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
        'weight' => 1,
      ),
      'table' => array(
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
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-join_the_hcd_mailing_list-field_phone'
  $field_instances['entityform-join_the_hcd_mailing_list-field_phone'] = array(
    'bundle' => 'join_the_hcd_mailing_list',
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
        'weight' => 10,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
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
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'entityform-join_the_hcd_mailing_list-field_state_province'
  $field_instances['entityform-join_the_hcd_mailing_list-field_state_province'] = array(
    'bundle' => 'join_the_hcd_mailing_list',
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
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'table' => array(
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
    'field_name' => 'field_state_province',
    'label' => 'State / Province',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'entityform-join_the_hcd_mailing_list-field_zip_code'
  $field_instances['entityform-join_the_hcd_mailing_list-field_zip_code'] = array(
    'bundle' => 'join_the_hcd_mailing_list',
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
    'field_name' => 'field_zip_code',
    'label' => 'Zip code',
    'required' => 1,
    'settings' => array(
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'entityform-labor_roundtable_student_registr-field_email'
  $field_instances['entityform-labor_roundtable_student_registr-field_email'] = array(
    'bundle' => 'labor_roundtable_student_registr',
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
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 2,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-labor_roundtable_student_registr-field_first_name'
  $field_instances['entityform-labor_roundtable_student_registr-field_first_name'] = array(
    'bundle' => 'labor_roundtable_student_registr',
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
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'token' => array(
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
    'field_name' => 'field_first_name',
    'label' => 'First name',
    'required' => 1,
    'settings' => array(
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-labor_roundtable_student_registr-field_h_event_date'
  $field_instances['entityform-labor_roundtable_student_registr-field_h_event_date'] = array(
    'bundle' => 'labor_roundtable_student_registr',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'field_formatter_label' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 9,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'field_formatter_label' => '',
          'format_type' => 'ilr_day_long_date_no_time',
          'fromto' => 'value',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
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
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'entityform-labor_roundtable_student_registr-field_last_name'
  $field_instances['entityform-labor_roundtable_student_registr-field_last_name'] = array(
    'bundle' => 'labor_roundtable_student_registr',
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
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'token' => array(
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
    'field_name' => 'field_last_name',
    'label' => 'Last name',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-labor_roundtable_student_registr-field_major'
  $field_instances['entityform-labor_roundtable_student_registr-field_major'] = array(
    'bundle' => 'labor_roundtable_student_registr',
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
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'token' => array(
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
    'field_name' => 'field_major',
    'label' => 'Major',
    'required' => 1,
    'settings' => array(
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-labor_roundtable_student_registr-field_phone'
  $field_instances['entityform-labor_roundtable_student_registr-field_phone'] = array(
    'bundle' => 'labor_roundtable_student_registr',
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
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'token' => array(
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
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-labor_roundtable_student_registr-field_referenced_node'
  $field_instances['entityform-labor_roundtable_student_registr-field_referenced_node'] = array(
    'bundle' => 'labor_roundtable_student_registr',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_current_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_label' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_label' => '',
          'links' => 0,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_referenced_node',
    'label' => 'Page title',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'current' => array(
          'action' => 'hide',
          'action_on_edit' => 1,
          'fallback' => 'form_error',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'entityform-labor_roundtable_student_registr-field_referral_textarea'
  $field_instances['entityform-labor_roundtable_student_registr-field_referral_textarea'] = array(
    'bundle' => 'labor_roundtable_student_registr',
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
      'token' => array(
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
    'field_name' => 'field_referral_textarea',
    'label' => 'How did you hear about the Labor Roundtable?',
    'required' => 1,
    'settings' => array(
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-labor_roundtable_student_registr-field_school_or_college'
  $field_instances['entityform-labor_roundtable_student_registr-field_school_or_college'] = array(
    'bundle' => 'labor_roundtable_student_registr',
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
        'weight' => 5,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_school_or_college',
    'label' => 'School or college',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-labor_roundtable_student_registr-field_year_as_list_text'
  $field_instances['entityform-labor_roundtable_student_registr-field_year_as_list_text'] = array(
    'bundle' => 'labor_roundtable_student_registr',
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
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'token' => array(
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
    'field_name' => 'field_year_as_list_text',
    'label' => 'Class year',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-library_contact_form-field_comments'
  $field_instances['entityform-library_contact_form-field_comments'] = array(
    'bundle' => 'library_contact_form',
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_comments',
    'label' => 'Questions and comments',
    'required' => 1,
    'settings' => array(
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-library_contact_form-field_cornell_status'
  $field_instances['entityform-library_contact_form-field_cornell_status'] = array(
    'bundle' => 'library_contact_form',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_cornell_status',
    'label' => 'Your status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-library_contact_form-field_email'
  $field_instances['entityform-library_contact_form-field_email'] = array(
    'bundle' => 'library_contact_form',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-library_contact_form-field_full_name'
  $field_instances['entityform-library_contact_form-field_full_name'] = array(
    'bundle' => 'library_contact_form',
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_full_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-library_contact_form-field_library_how_to_direct'
  $field_instances['entityform-library_contact_form-field_library_how_to_direct'] = array(
    'bundle' => 'library_contact_form',
    'default_value' => array(
      0 => array(
        'value' => 'General Information',
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
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_library_how_to_direct',
    'label' => 'Direct your question or message to',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-request_faculty_advisor_or_depar-field_advisor_or_dept_sentence'
  $field_instances['entityform-request_faculty_advisor_or_depar-field_advisor_or_dept_sentence'] = array(
    'bundle' => 'request_faculty_advisor_or_depar',
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
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_advisor_or_dept_sentence',
    'label' => 'Advisor or dept sentence',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-request_faculty_advisor_or_depar-field_email'
  $field_instances['entityform-request_faculty_advisor_or_depar-field_email'] = array(
    'bundle' => 'request_faculty_advisor_or_depar',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'disabled' => 1,
      'kerberized' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-request_faculty_advisor_or_depar-field_first_name'
  $field_instances['entityform-request_faculty_advisor_or_depar-field_first_name'] = array(
    'bundle' => 'request_faculty_advisor_or_depar',
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
    'field_name' => 'field_first_name',
    'label' => 'First name',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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

  // Exported field_instance: 'entityform-request_faculty_advisor_or_depar-field_ilr_dept_req_fac_adv_or_pr'
  $field_instances['entityform-request_faculty_advisor_or_depar-field_ilr_dept_req_fac_adv_or_pr'] = array(
    'bundle' => 'request_faculty_advisor_or_depar',
    'default_value' => array(
      0 => array(
        'value' => 'Not applicable - professor specified above',
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
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_ilr_dept_req_fac_adv_or_pr',
    'label' => 'Department',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'entityform-request_faculty_advisor_or_depar-field_interests_and_goals'
  $field_instances['entityform-request_faculty_advisor_or_depar-field_interests_and_goals'] = array(
    'bundle' => 'request_faculty_advisor_or_depar',
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
    'field_name' => 'field_interests_and_goals',
    'label' => 'Academic interests and goals',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-request_faculty_advisor_or_depar-field_last_name'
  $field_instances['entityform-request_faculty_advisor_or_depar-field_last_name'] = array(
    'bundle' => 'request_faculty_advisor_or_depar',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_last_name',
    'label' => 'Last name',
    'required' => 1,
    'settings' => array(
      'disabled' => 0,
      'kerberized' => 1,
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

  // Exported field_instance: 'entityform-request_faculty_advisor_or_depar-field_middle_name'
  $field_instances['entityform-request_faculty_advisor_or_depar-field_middle_name'] = array(
    'bundle' => 'request_faculty_advisor_or_depar',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_middle_name',
    'label' => 'Middle name',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-request_faculty_advisor_or_depar-field_professor'
  $field_instances['entityform-request_faculty_advisor_or_depar-field_professor'] = array(
    'bundle' => 'request_faculty_advisor_or_depar',
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
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_professor',
    'label' => 'Professor',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'entityform-request_faculty_advisor_or_depar-field_year_soph_jr_sr'
  $field_instances['entityform-request_faculty_advisor_or_depar-field_year_soph_jr_sr'] = array(
    'bundle' => 'request_faculty_advisor_or_depar',
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
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_year_soph_jr_sr',
    'label' => 'Class year in 2014-2015',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'entityform-scheinman_mailing_list-field_address_line_1'
  $field_instances['entityform-scheinman_mailing_list-field_address_line_1'] = array(
    'bundle' => 'scheinman_mailing_list',
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
    'field_name' => 'field_address_line_1',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-scheinman_mailing_list-field_city'
  $field_instances['entityform-scheinman_mailing_list-field_city'] = array(
    'bundle' => 'scheinman_mailing_list',
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
    'field_name' => 'field_city',
    'label' => 'City',
    'required' => 1,
    'settings' => array(
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-scheinman_mailing_list-field_company'
  $field_instances['entityform-scheinman_mailing_list-field_company'] = array(
    'bundle' => 'scheinman_mailing_list',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_company',
    'label' => 'Company',
    'required' => 0,
    'settings' => array(
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

  // Exported field_instance: 'entityform-scheinman_mailing_list-field_country'
  $field_instances['entityform-scheinman_mailing_list-field_country'] = array(
    'bundle' => 'scheinman_mailing_list',
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
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_country',
    'label' => 'Country',
    'required' => 0,
    'settings' => array(
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-scheinman_mailing_list-field_email'
  $field_instances['entityform-scheinman_mailing_list-field_email'] = array(
    'bundle' => 'scheinman_mailing_list',
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
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-scheinman_mailing_list-field_fax'
  $field_instances['entityform-scheinman_mailing_list-field_fax'] = array(
    'bundle' => 'scheinman_mailing_list',
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
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fax',
    'label' => 'Fax',
    'required' => 0,
    'settings' => array(
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-scheinman_mailing_list-field_first_name'
  $field_instances['entityform-scheinman_mailing_list-field_first_name'] = array(
    'bundle' => 'scheinman_mailing_list',
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 1,
    'settings' => array(
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'entityform-scheinman_mailing_list-field_job_title'
  $field_instances['entityform-scheinman_mailing_list-field_job_title'] = array(
    'bundle' => 'scheinman_mailing_list',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_job_title',
    'label' => 'Job Title',
    'required' => 0,
    'settings' => array(
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-scheinman_mailing_list-field_last_name'
  $field_instances['entityform-scheinman_mailing_list-field_last_name'] = array(
    'bundle' => 'scheinman_mailing_list',
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
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-scheinman_mailing_list-field_phone'
  $field_instances['entityform-scheinman_mailing_list-field_phone'] = array(
    'bundle' => 'scheinman_mailing_list',
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
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
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

  // Exported field_instance: 'entityform-scheinman_mailing_list-field_state_province'
  $field_instances['entityform-scheinman_mailing_list-field_state_province'] = array(
    'bundle' => 'scheinman_mailing_list',
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
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_state_province',
    'label' => 'State / Province',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-scheinman_mailing_list-field_zip_code'
  $field_instances['entityform-scheinman_mailing_list-field_zip_code'] = array(
    'bundle' => 'scheinman_mailing_list',
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
    'field_name' => 'field_zip_code',
    'label' => 'Zip code',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-student_services_contact_form-field_comments'
  $field_instances['entityform-student_services_contact_form-field_comments'] = array(
    'bundle' => 'student_services_contact_form',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_comments',
    'label' => 'Questions and comments',
    'required' => 1,
    'settings' => array(
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-student_services_contact_form-field_email'
  $field_instances['entityform-student_services_contact_form-field_email'] = array(
    'bundle' => 'student_services_contact_form',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-student_services_contact_form-field_full_name'
  $field_instances['entityform-student_services_contact_form-field_full_name'] = array(
    'bundle' => 'student_services_contact_form',
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_full_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-undergrad_appl_for_graduation-field_7th_semester_check_certif'
  $field_instances['entityform-undergrad_appl_for_graduation-field_7th_semester_check_certif'] = array(
    'bundle' => 'undergrad_appl_for_graduation',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_7th_semester_check_certif',
    'label' => ' I certify that I have read the above information and that I have completed my 7th semester check.',
    'required' => 1,
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

  // Exported field_instance: 'entityform-undergrad_appl_for_graduation-field_email'
  $field_instances['entityform-undergrad_appl_for_graduation-field_email'] = array(
    'bundle' => 'undergrad_appl_for_graduation',
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
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 1,
    'settings' => array(
      'disabled' => 1,
      'kerberized' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-undergrad_appl_for_graduation-field_full_name'
  $field_instances['entityform-undergrad_appl_for_graduation-field_full_name'] = array(
    'bundle' => 'undergrad_appl_for_graduation',
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
    'field_name' => 'field_full_name',
    'label' => 'Name currently on record',
    'required' => 1,
    'settings' => array(
      'disabled' => 1,
      'kerberized' => 1,
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

  // Exported field_instance: 'entityform-undergrad_appl_for_graduation-field_full_name_additional'
  $field_instances['entityform-undergrad_appl_for_graduation-field_full_name_additional'] = array(
    'bundle' => 'undergrad_appl_for_graduation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '(If this is a different spelling than what appears on your student center, please visit the Office of the University Registrar in B7 Day hall to have it officially changed.)',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_full_name_additional',
    'label' => 'Name, if different from above',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-undergrad_appl_for_graduation-field_grad_date_appl_for_graduat'
  $field_instances['entityform-undergrad_appl_for_graduation-field_grad_date_appl_for_graduat'] = array(
    'bundle' => 'undergrad_appl_for_graduation',
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
    'field_name' => 'field_grad_date_appl_for_graduat',
    'label' => 'When will you graduate?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-undergrad_appl_for_graduation-field_name_correct_for_diploma'
  $field_instances['entityform-undergrad_appl_for_graduation-field_name_correct_for_diploma'] = array(
    'bundle' => 'undergrad_appl_for_graduation',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_name_correct_for_diploma',
    'label' => 'Name as it should be spelled on your diploma',
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

  // Exported field_instance: 'entityform-worker_institute_contact_form-field_comments'
  $field_instances['entityform-worker_institute_contact_form-field_comments'] = array(
    'bundle' => 'worker_institute_contact_form',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_comments',
    'label' => 'Questions and comments',
    'required' => 1,
    'settings' => array(
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

  // Exported field_instance: 'entityform-worker_institute_contact_form-field_email'
  $field_instances['entityform-worker_institute_contact_form-field_email'] = array(
    'bundle' => 'worker_institute_contact_form',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_email',
    'label' => 'Email',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-worker_institute_contact_form-field_full_name'
  $field_instances['entityform-worker_institute_contact_form-field_full_name'] = array(
    'bundle' => 'worker_institute_contact_form',
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_full_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'user-user-field_netid'
  $field_instances['user-user-field_netid'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_netid',
    'label' => 'NetID',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 7,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('	I certify that I have read the above information and that I have submitted my Degree Plan.');
  t(' Departments in which you prefer assignment (Indicate at least top two choices.)');
  t(' I certify that I have read the above information and that I have completed my 7th semester check.');
  t(' May we contact you by email about information on our offerings?');
  t(' Semester requesting assistantship');
  t('(If this is a different spelling than what appears on your student center, please visit the Office of the University Registrar in B7 Day hall to have it officially changed.)');
  t('<p>If there are technical needs, training is required prior to the use of a room. Please contact ILR Technology Services to make these arrangements via email at: <a href="mailto:ilrvtc@cornell.edu>ilrvtc@cornell.edu</a>.</p>
<p>Note: ILR Technology Services does not support Skype in the classrooms. If using Skype, please use your own laptop.</p>');
  t('Academic goals essay');
  t('Academic interests (check all that apply)');
  t('Academic interests and goals');
  t('Account Number (for externally funded projects)');
  t('Additional comments');
  t('Address');
  t('Address line 1 (permanent)');
  t('Address line 1 (summer)');
  t('Address line 2 (permanent)');
  t('Address line 2 (summer)');
  t('Advisor or dept sentence');
  t('Amount 1');
  t('Amount 2');
  t('Amount 3');
  t('Are you a transfer student');
  t('Are you currently, or have you ever been, subject to disciplinary action at Cornell?');
  t('Areas of interest');
  t('Based on your experience, what are some of the most pressing questions and concerns of new Cornell students?');
  t('Cell phone number');
  t('Chairperson');
  t('Check all courses you will have completed by the end of the current semester');
  t('Citizenship');
  t('City');
  t('City (permanent)');
  t('City (summer)');
  t('Class year');
  t('Class year in 2014-2015');
  t('Classes you are interesting in TAing or faculty members to whom you wish to be assigned');
  t('College phone number');
  t('Comments');
  t('Company');
  t('Concentration');
  t('Conference name');
  t('Country');
  t('Course name');
  t('Course number (e.g. ILRLR 2100)');
  t('Current class year');
  t('Date (mm/yyyy)');
  t('Date of birth (mm/dd/yyyy)');
  t('Dates needed (mm/dd/yyyy)');
  t('Degree program');
  t('Department');
  t('Did you transfer into ILR?');
  t('Did your relationship with your SA address the concerns you listed above? If yes, how so? If not, what would you do differently?');
  t('Direct my questions to');
  t('Direct your question or message to');
  t('Dublin essay 1');
  t('Dublin essay 2');
  t('Email');
  t('Email address that you will check during the summer');
  t('End time');
  t('Ethnicity (optional; check all that apply)');
  t('Event date');
  t('Event name');
  t('Example: Barack Obama could submit "bah-RAHK o-BAH-mah"');
  t('Expected graduation date (mm/yyyy)');
  t('Expiration date (mm/yyyy)');
  t('Fax');
  t('First Name');
  t('First name');
  t('GPA');
  t('Have you received an ILR travel grant within this fiscal year? (July 1 - June 30)');
  t('Have you received other funding for this trip?');
  t('Home phone number');
  t('How did you hear about the Labor Roundtable?');
  t('How many people');
  t('ILR student organization or department name');
  t('If so, please explan');
  t('Indicate level, if any, of computer skills or knowledge');
  t('Indicate preference for teaching or research assistantship');
  t('Job Title');
  t('Last Name');
  t('Last name');
  t('List relevant work experience and/or your qualifications');
  t('List your prior TA or RA appointments');
  t('Local or cell phone');
  t('Location');
  t('Major');
  t('Meeting location preference');
  t('Middle name');
  t('Minor subject(s)');
  t('Name');
  t('Name as it should be spelled on your diploma');
  t('Name currently on record');
  t('Name, if different from above');
  t('NetID');
  t('Nominee name');
  t('Number of assistants requested');
  t('Number of completed credits');
  t('Number of completed semesters in residence');
  t('Number of terms at Cornell');
  t('Other academic interests (non-ILR)');
  t('Page title');
  t('Passport number');
  t('Phone');
  t('Phone (with area code)');
  t('Phone number where we can reach you during the summer');
  t('Please elaborate on your ILR academic interests');
  t('Please list the courses in which you are currently enrolled');
  t('Preferred students (in order of preference), or desired qualifications');
  t('Professor');
  t('Project name or description (e.g. Chaired RA, Assistant Professor RA)');
  t('Pronunciation');
  t('Questions and comments');
  t('School or college');
  t('Semester for which you are requesting assistantship');
  t('Semester off-campus');
  t('Source of funding 1');
  t('Source of funding 2');
  t('Source of funding 3');
  t('Start time');
  t('State');
  t('State / Province');
  t('State / Province (permanent)');
  t('State / Province (summer)');
  t('Street address');
  t('Street address line 1');
  t('Street address line 2');
  t('Student ID Number');
  t('Study abroad essay');
  t('Subject line for this message');
  t('Summer address status');
  t('Supervisor');
  t('Supporter 1');
  t('Supporter 2');
  t('Technical needs (Examples: Microphone, PowerPoint, laptop, DVD, videotaping. Enter "none" if you have NO technical needs.)');
  t('Title');
  t('Title of paper or poster');
  t('Type of grad assistant');
  t('Visa type (if non-US citizen)');
  t('What do you see as the role of a Student Advisor?');
  t('What past experiences have you had which would help you in the role of a Student Advisor?');
  t('When will you graduate?');
  t('Which topics and types of programs are you interested in? (check all that apply)');
  t('Year');
  t('Your letter of support');
  t('Your name');
  t('Your status');
  t('Zip / Postal code');
  t('Zip code');
  t('Zip code (permanent)');
  t('Zip code (summer)');
  t('empl recog supp text');
  t('pronunciation markup');

  return $field_instances;
}
