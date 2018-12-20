<?php
/**
 * @file
 * ilr_forms_public.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ilr_forms_public_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-course_follow-field_course'.
  $field_instances['entityform-course_follow-field_course'] = array(
    'bundle' => 'course_follow',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_course',
    'label' => 'Course',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-course_follow-field_email'.
  $field_instances['entityform-course_follow-field_email'] = array(
    'bundle' => 'course_follow',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-course_follow-field_email_opt_in'.
  $field_instances['entityform-course_follow-field_email_opt_in'] = array(
    'bundle' => 'course_follow',
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
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email_opt_in',
    'label' => 'Please add me to your email list',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-course_follow-field_full_name'.
  $field_instances['entityform-course_follow-field_full_name'] = array(
    'bundle' => 'course_follow',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-course_follow-field_organization'.
  $field_instances['entityform-course_follow-field_organization'] = array(
    'bundle' => 'course_follow',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_organization',
    'label' => 'Organization',
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

  // Exported field_instance: 'entityform-course_follow-field_zip_code'.
  $field_instances['entityform-course_follow-field_zip_code'] = array(
    'bundle' => 'course_follow',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_zip_code',
    'label' => 'Zip code',
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

  // Exported field_instance: 'entityform-course_request-field_course'.
  $field_instances['entityform-course_request-field_course'] = array(
    'bundle' => 'course_request',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
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
        'weight' => 1,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'field_formatter_label' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'field_formatter_label' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_course',
    'label' => 'Course',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'entityform-course_request-field_description_long'.
  $field_instances['entityform-course_request-field_description_long'] = array(
    'bundle' => 'course_request',
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
    'field_name' => 'field_description_long',
    'label' => 'Brief description (including # of potential participants)',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-course_request-field_email'.
  $field_instances['entityform-course_request-field_email'] = array(
    'bundle' => 'course_request',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-course_request-field_full_name'.
  $field_instances['entityform-course_request-field_full_name'] = array(
    'bundle' => 'course_request',
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

  // Exported field_instance: 'entityform-course_request-field_job_title'.
  $field_instances['entityform-course_request-field_job_title'] = array(
    'bundle' => 'course_request',
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
    'field_name' => 'field_job_title',
    'label' => 'Job title',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-course_request-field_organization'.
  $field_instances['entityform-course_request-field_organization'] = array(
    'bundle' => 'course_request',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_organization',
    'label' => 'Organization',
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

  // Exported field_instance: 'entityform-course_request-field_phone'.
  $field_instances['entityform-course_request-field_phone'] = array(
    'bundle' => 'course_request',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-email_unsubscribe-field_email'.
  $field_instances['entityform-email_unsubscribe-field_email'] = array(
    'bundle' => 'email_unsubscribe',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_email',
    'label' => 'Your email',
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
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_concentration'.
  $field_instances['entityform-emediation_competition_reg-field_concentration'] = array(
    'bundle' => 'emediation_competition_reg',
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
    'field_name' => 'field_concentration',
    'label' => 'What is your major (or what program are you in?)',
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

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_current_college'.
  $field_instances['entityform-emediation_competition_reg-field_current_college'] = array(
    'bundle' => 'emediation_competition_reg',
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
    'field_name' => 'field_current_college',
    'label' => 'College or university',
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

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_email'.
  $field_instances['entityform-emediation_competition_reg-field_email'] = array(
    'bundle' => 'emediation_competition_reg',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_email_additional'.
  $field_instances['entityform-emediation_competition_reg-field_email_additional'] = array(
    'bundle' => 'emediation_competition_reg',
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
        'weight' => 10,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 11,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email_additional',
    'label' => 'Email (2nd participant)',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_experience'.
  $field_instances['entityform-emediation_competition_reg-field_experience'] = array(
    'bundle' => 'emediation_competition_reg',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_experience',
    'label' => 'What is your experience with mediation?',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_first_name'.
  $field_instances['entityform-emediation_competition_reg-field_first_name'] = array(
    'bundle' => 'emediation_competition_reg',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_first_name_additional'.
  $field_instances['entityform-emediation_competition_reg-field_first_name_additional'] = array(
    'bundle' => 'emediation_competition_reg',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_first_name_additional',
    'label' => 'First name (2nd participant)',
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

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_h_event_date'.
  $field_instances['entityform-emediation_competition_reg-field_h_event_date'] = array(
    'bundle' => 'emediation_competition_reg',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'download' => array(
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
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_last_name'.
  $field_instances['entityform-emediation_competition_reg-field_last_name'] = array(
    'bundle' => 'emediation_competition_reg',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_last_name_additional'.
  $field_instances['entityform-emediation_competition_reg-field_last_name_additional'] = array(
    'bundle' => 'emediation_competition_reg',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_last_name_additional',
    'label' => 'Last name (2nd participant)',
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

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_mediator_or_disputant'.
  $field_instances['entityform-emediation_competition_reg-field_mediator_or_disputant'] = array(
    'bundle' => 'emediation_competition_reg',
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
        'weight' => 8,
      ),
      'table' => array(
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_mediator_or_disputant',
    'label' => 'Registering as mediator, disputant, or disputant team?',
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

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_reason'.
  $field_instances['entityform-emediation_competition_reg-field_reason'] = array(
    'bundle' => 'emediation_competition_reg',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_reason',
    'label' => 'Why would you like to join this competition?',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_referenced_node'.
  $field_instances['entityform-emediation_competition_reg-field_referenced_node'] = array(
    'bundle' => 'emediation_competition_reg',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_current_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
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
          'bypass_access' => FALSE,
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
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_second_person_markup'.
  $field_instances['entityform-emediation_competition_reg-field_second_person_markup'] = array(
    'bundle' => 'emediation_competition_reg',
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
        'weight' => 7,
      ),
      'download' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'table' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_second_person_markup',
    'label' => 'Second person markup',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'entityform-emediation_competition_reg-field_type_of_student_emediation'.
  $field_instances['entityform-emediation_competition_reg-field_type_of_student_emediation'] = array(
    'bundle' => 'emediation_competition_reg',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_type_of_student_emediation',
    'label' => 'Type of student',
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

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_account_number'.
  $field_instances['entityform-ilr_conf_center_reservation-field_account_number'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_account_number',
    'label' => 'University account number (if paying by transfer)',
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
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_comments'.
  $field_instances['entityform-ilr_conf_center_reservation-field_comments'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_comments',
    'label' => 'Additional room set-up instructions',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_conf_center_room_pref'.
  $field_instances['entityform-ilr_conf_center_reservation-field_conf_center_room_pref'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_conf_center_room_pref',
    'label' => 'Room preference (check all that apply)',
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

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_conf_cntr_catering_request'.
  $field_instances['entityform-ilr_conf_center_reservation-field_conf_cntr_catering_request'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
    'field_name' => 'field_conf_cntr_catering_request',
    'label' => 'Will you need catering? (Please check all that apply)',
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

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_conf_cntr_payment_type'.
  $field_instances['entityform-ilr_conf_center_reservation-field_conf_cntr_payment_type'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
        'weight' => 20,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_conf_cntr_payment_type',
    'label' => 'How will you be paying?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_department'.
  $field_instances['entityform-ilr_conf_center_reservation-field_department'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_department',
    'label' => 'Department/Organization',
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
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_description_long'.
  $field_instances['entityform-ilr_conf_center_reservation-field_description_long'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_description_long',
    'label' => 'Please provide a brief description of your event',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_email'.
  $field_instances['entityform-ilr_conf_center_reservation-field_email'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email',
    'label' => 'Email address',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_event_date'.
  $field_instances['entityform-ilr_conf_center_reservation-field_event_date'] = array(
    'bundle' => 'ilr_conf_center_reservation',
    'deleted' => 0,
    'description' => 'For single-day events, please enter the same dates and times for both start and end date.',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_event_date',
    'label' => 'Event date(s)',
    'required' => 1,
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
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_event_name'.
  $field_instances['entityform-ilr_conf_center_reservation-field_event_name'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_event_name',
    'label' => 'Event name',
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

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_first_name'.
  $field_instances['entityform-ilr_conf_center_reservation-field_first_name'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_instructions'.
  $field_instances['entityform-ilr_conf_center_reservation-field_instructions'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_instructions',
    'label' => 'Catering instructions',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_last_name'.
  $field_instances['entityform-ilr_conf_center_reservation-field_last_name'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
        'weight' => 16,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_last_name',
    'label' => 'Last Name',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_num_cornell_participants'.
  $field_instances['entityform-ilr_conf_center_reservation-field_num_cornell_participants'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
    'field_name' => 'field_num_cornell_participants',
    'label' => 'Expected head count',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_nyc_or_ithaca'.
  $field_instances['entityform-ilr_conf_center_reservation-field_nyc_or_ithaca'] = array(
    'bundle' => 'ilr_conf_center_reservation',
    'default_value' => array(
      0 => array(
        'value' => 'Ithaca, NY',
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
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_nyc_or_ithaca',
    'label' => 'Is this reservation for the Ithaca, NY or the New York City Conference center?',
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

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_other_please_specify'.
  $field_instances['entityform-ilr_conf_center_reservation-field_other_please_specify'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_other_please_specify',
    'label' => 'Explanation of "other" room preference',
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

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_phone'.
  $field_instances['entityform-ilr_conf_center_reservation-field_phone'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
        'weight' => 18,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_phone',
    'label' => 'Phone number',
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
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_registration_end_date'.
  $field_instances['entityform-ilr_conf_center_reservation-field_registration_end_date'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_registration_end_date',
    'label' => 'Alternate start date',
    'required' => 1,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_requested_room_set_up'.
  $field_instances['entityform-ilr_conf_center_reservation-field_requested_room_set_up'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_requested_room_set_up',
    'label' => 'Requested room set-up',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_conf_center_reservation-field_technical_needs'.
  $field_instances['entityform-ilr_conf_center_reservation-field_technical_needs'] = array(
    'bundle' => 'ilr_conf_center_reservation',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_technical_needs',
    'label' => 'Audio visual equipment',
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

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_address_line_1'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_address_line_1'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 10,
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
    'field_name' => 'field_address_line_1',
    'label' => 'Street address',
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

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_address_line_2'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_address_line_2'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 11,
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
    'field_name' => 'field_address_line_2',
    'label' => 'Address line 2',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_address_type'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_address_type'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 9,
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
      'table' => array(
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_attendee_list'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_attendee_list'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 19,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 21,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_attendee_list',
    'label' => 'Include my name',
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
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_attendee_list_guests'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_attendee_list_guests'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 20,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 22,
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
      'table' => array(
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
    'field_name' => 'field_attendee_list_guests',
    'label' => 'Include guest names',
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

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_attendee_list_markup'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_attendee_list_markup'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 21,
      ),
      'download' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'markup_default',
        'weight' => 20,
      ),
      'table' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_attendee_list_markup',
    'label' => 'Attendee list markup',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_city'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_city'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 12,
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
    'field_name' => 'field_city',
    'label' => 'City',
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

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_company'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_company'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
      'email' => array(
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
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_company',
    'label' => 'Company or organization',
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

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_discount_eligible'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_discount_eligible'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box to pay the $100 ticket price offered to recent Cornell graduates from years 2014 through 2018.',
    'display' => array(
      'default' => array(
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_discount_eligible',
    'label' => 'Recent grad?',
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
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_email'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_email'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 14,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 16,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 14,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 16,
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
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_first_name'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_first_name'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
      'email' => array(
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_guests'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_guests'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If you are making reservations for guests, please enter their names and Cornell class years if applicable. This will assist us with creating accurate name tags.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 18,
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
        'weight' => 17,
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
    'field_name' => 'field_guests',
    'label' => 'Your guests',
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
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_h_event_date'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_h_event_date'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
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
        'weight' => 0,
      ),
      'email' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'table' => array(
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
        'weight' => 0,
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
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 22,
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
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_job_title'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_job_title'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
      'email' => array(
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
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_job_title',
    'label' => 'Job title',
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
  // 'entityform-ilr_sports_summit_event_registra-field_last_name'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_last_name'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 4,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_middle_name'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_middle_name'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
      'email' => array(
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
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_middle_name',
    'label' => 'Middle / former name',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_name_for_name_tag'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_name_for_name_tag'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Include class year if desired',
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
      'email' => array(
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
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_name_for_name_tag',
    'label' => 'Name for name tag',
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
  // 'entityform-ilr_sports_summit_event_registra-field_phone'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_phone'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 15,
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
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_referenced_node'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_referenced_node'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_current_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'field_formatter_label' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'email' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'field_formatter_label' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
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
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_state_province'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_state_province'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 13,
      ),
      'email' => array(
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
        'weight' => 13,
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
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_tickets_for_aa_members'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_tickets_for_aa_members'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 15,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 17,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tickets_for_aa_members',
    'label' => 'Number of tickets for Cornell alumni',
    'required' => 0,
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
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_tickets_for_non_members'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_tickets_for_non_members'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 16,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 18,
      ),
      'email' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tickets_for_non_members',
    'label' => 'Number of tickets for general public (including guests of Cornell alumni at discounted rate)',
    'required' => 0,
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
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_total_cost'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_total_cost'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 19,
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
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_total_cost',
    'label' => 'Total Cost',
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
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_year_as_text'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_year_as_text'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '(for Cornell graduates)',
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
      'email' => array(
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
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_year_as_text',
    'label' => 'Class year',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'entityform-ilr_sports_summit_event_registra-field_zip_code'.
  $field_instances['entityform-ilr_sports_summit_event_registra-field_zip_code'] = array(
    'bundle' => 'ilr_sports_summit_event_registra',
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
        'weight' => 14,
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
    'field_name' => 'field_zip_code',
    'label' => 'Zip / Postal code',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-join_hcd_mail_list-field_email'.
  $field_instances['entityform-join_hcd_mail_list-field_email'] = array(
    'bundle' => 'join_hcd_mail_list',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-join_hcd_mail_list-field_first_name'.
  $field_instances['entityform-join_hcd_mail_list-field_first_name'] = array(
    'bundle' => 'join_hcd_mail_list',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-join_hcd_mail_list-field_job_title'.
  $field_instances['entityform-join_hcd_mail_list-field_job_title'] = array(
    'bundle' => 'join_hcd_mail_list',
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
    'field_name' => 'field_job_title',
    'label' => 'Job Title',
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

  // Exported field_instance: 'entityform-join_hcd_mail_list-field_last_name'.
  $field_instances['entityform-join_hcd_mail_list-field_last_name'] = array(
    'bundle' => 'join_hcd_mail_list',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'entityform-join_hcd_mail_list-field_mc_hcd_signup'.
  $field_instances['entityform-join_hcd_mail_list-field_mc_hcd_signup'] = array(
    'bundle' => 'join_hcd_mail_list',
    'default_value' => array(
      0 => array(
        'subscribe' => 1,
        'interest_groups' => array(
          'e2c22f8563' => array(
            '8d9b040c60' => 0,
            '23cd4cd067' => 0,
            '040d8716f2' => 0,
            '90cce1177c' => 0,
            '102cdf258e' => 0,
            '205f11d95a' => 0,
            '580d1dc365' => 0,
            '07846e5b49' => 0,
            'a5636a0567' => 0,
            'c2eff2693e' => 0,
            'f94368962a' => 0,
          ),
        ),
        'is_default' => TRUE,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'mailchimp_lists',
        'settings' => array(
          'field_formatter_label' => '',
          'show_interest_groups' => FALSE,
        ),
        'type' => 'mailchimp_lists_field_subscribe',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_mc_hcd_signup',
    'label' => 'mc hcd signup',
    'required' => 1,
    'settings' => array(
      'interest_groups_title' => '',
      'mergefields' => array(
        'CAMPAIGN' => '',
        'EMAIL' => '[entityform:field-email]',
        'FNAME' => '[entityform:field-first-name]',
        'INTEREST' => '',
        'LNAME' => '[entityform:field-last-name]',
        'MMERGE4' => '',
        'ORG' => '[entityform:field-organization]',
        'PAGEURL' => '',
        'TITLE' => '[entityform:field-job-title]',
        'UBDATE' => '',
        'UBPAGEID' => '',
        'UBVARIANT' => '',
        'advanced' => 0,
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 1,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'entityform-join_hcd_mail_list-field_organization'.
  $field_instances['entityform-join_hcd_mail_list-field_organization'] = array(
    'bundle' => 'join_hcd_mail_list',
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
    'field_name' => 'field_organization',
    'label' => 'Organization',
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
  // 'entityform-join_the_ics_mailing_list-field_address_line_1'.
  $field_instances['entityform-join_the_ics_mailing_list-field_address_line_1'] = array(
    'bundle' => 'join_the_ics_mailing_list',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_address_line_1',
    'label' => 'Address',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-join_the_ics_mailing_list-field_city'.
  $field_instances['entityform-join_the_ics_mailing_list-field_city'] = array(
    'bundle' => 'join_the_ics_mailing_list',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_city',
    'label' => 'City',
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

  // Exported field_instance:
  // 'entityform-join_the_ics_mailing_list-field_company'.
  $field_instances['entityform-join_the_ics_mailing_list-field_company'] = array(
    'bundle' => 'join_the_ics_mailing_list',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_company',
    'label' => 'Company',
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
  // 'entityform-join_the_ics_mailing_list-field_country'.
  $field_instances['entityform-join_the_ics_mailing_list-field_country'] = array(
    'bundle' => 'join_the_ics_mailing_list',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_country',
    'label' => 'Country',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'entityform-join_the_ics_mailing_list-field_email'.
  $field_instances['entityform-join_the_ics_mailing_list-field_email'] = array(
    'bundle' => 'join_the_ics_mailing_list',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'entityform-join_the_ics_mailing_list-field_email_opt_in'.
  $field_instances['entityform-join_the_ics_mailing_list-field_email_opt_in'] = array(
    'bundle' => 'join_the_ics_mailing_list',
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
        'weight' => 11,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Can ICS share updates?',
        ),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Can ICS share updates?',
        ),
        'type' => 'list_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email_opt_in',
    'label' => 'Please share updates on future ICS activities and insights with me.',
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
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'entityform-join_the_ics_mailing_list-field_first_name'.
  $field_instances['entityform-join_the_ics_mailing_list-field_first_name'] = array(
    'bundle' => 'join_the_ics_mailing_list',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'entityform-join_the_ics_mailing_list-field_job_title'.
  $field_instances['entityform-join_the_ics_mailing_list-field_job_title'] = array(
    'bundle' => 'join_the_ics_mailing_list',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_job_title',
    'label' => 'Job title',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'entityform-join_the_ics_mailing_list-field_last_name'.
  $field_instances['entityform-join_the_ics_mailing_list-field_last_name'] = array(
    'bundle' => 'join_the_ics_mailing_list',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'entityform-join_the_ics_mailing_list-field_phone'.
  $field_instances['entityform-join_the_ics_mailing_list-field_phone'] = array(
    'bundle' => 'join_the_ics_mailing_list',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_phone',
    'label' => 'Phone',
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
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'entityform-join_the_ics_mailing_list-field_state_province'.
  $field_instances['entityform-join_the_ics_mailing_list-field_state_province'] = array(
    'bundle' => 'join_the_ics_mailing_list',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'entityform-join_the_ics_mailing_list-field_zip_code'.
  $field_instances['entityform-join_the_ics_mailing_list-field_zip_code'] = array(
    'bundle' => 'join_the_ics_mailing_list',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_zip_code',
    'label' => 'Zip code',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'entityform-microsite_interest-field_comments'.
  $field_instances['entityform-microsite_interest-field_comments'] = array(
    'bundle' => 'microsite_interest',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_comments',
    'label' => 'What would you like to know?',
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
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'entityform-microsite_interest-field_description'.
  $field_instances['entityform-microsite_interest-field_description'] = array(
    'bundle' => 'microsite_interest',
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
        'type' => 'text_plain',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_description',
    'label' => 'Button clicked',
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

  // Exported field_instance: 'entityform-microsite_interest-field_email'.
  $field_instances['entityform-microsite_interest-field_email'] = array(
    'bundle' => 'microsite_interest',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_email',
    'label' => 'Your email',
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
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'entityform-microsite_interest-field_full_name'.
  $field_instances['entityform-microsite_interest-field_full_name'] = array(
    'bundle' => 'microsite_interest',
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
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'entityform-microsite_interest-field_job_title'.
  $field_instances['entityform-microsite_interest-field_job_title'] = array(
    'bundle' => 'microsite_interest',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_job_title',
    'label' => 'Your job title',
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
      'weight' => 36,
    ),
  );

  // Exported field_instance:
  // 'entityform-microsite_interest-field_referenced_node'.
  $field_instances['entityform-microsite_interest-field_referenced_node'] = array(
    'bundle' => 'microsite_interest',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
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
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_referenced_node',
    'label' => 'Submission page',
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
      'weight' => 42,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_address_line_1'.
  $field_instances['entityform-sports_camp_application-field_address_line_1'] = array(
    'bundle' => 'sports_camp_application',
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
    'label' => 'Mailing address',
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
      'weight' => 39,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_camper_type'.
  $field_instances['entityform-sports_camp_application-field_camper_type'] = array(
    'bundle' => 'sports_camp_application',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_camper_type',
    'label' => 'Student type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-sports_camp_application-field_city'.
  $field_instances['entityform-sports_camp_application-field_city'] = array(
    'bundle' => 'sports_camp_application',
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
      'weight' => 40,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_city_additional'.
  $field_instances['entityform-sports_camp_application-field_city_additional'] = array(
    'bundle' => 'sports_camp_application',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_city_additional',
    'label' => 'City/Country of school',
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
      'weight' => 45,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_count_as_text'.
  $field_instances['entityform-sports_camp_application-field_count_as_text'] = array(
    'bundle' => 'sports_camp_application',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_count_as_text',
    'label' => 'Current grade in school',
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
      'weight' => 46,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_country'.
  $field_instances['entityform-sports_camp_application-field_country'] = array(
    'bundle' => 'sports_camp_application',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_country',
    'label' => 'Country',
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
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'entityform-sports_camp_application-field_dob'.
  $field_instances['entityform-sports_camp_application-field_dob'] = array(
    'bundle' => 'sports_camp_application',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_dob',
    'label' => 'Date of birth',
    'required' => 1,
    'settings' => array(
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '-16 years',
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
        'label_position' => 'none',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-18:-14',
      ),
      'type' => 'date_popup',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'entityform-sports_camp_application-field_email'.
  $field_instances['entityform-sports_camp_application-field_email'] = array(
    'bundle' => 'sports_camp_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Note this email will be used in all follow-up academy communication, including the payment confirmation.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email',
    'label' => 'Parent / Guardian email',
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
      'weight' => 54,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_email_additional'.
  $field_instances['entityform-sports_camp_application-field_email_additional'] = array(
    'bundle' => 'sports_camp_application',
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
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email_additional',
    'label' => 'Student email',
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
      'weight' => 37,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_first_name'.
  $field_instances['entityform-sports_camp_application-field_first_name'] = array(
    'bundle' => 'sports_camp_application',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_first_name',
    'label' => 'Student first name',
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
      'weight' => 35,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_first_name_additional'.
  $field_instances['entityform-sports_camp_application-field_first_name_additional'] = array(
    'bundle' => 'sports_camp_application',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_first_name_additional',
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
      'weight' => 52,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_how_heard_other'.
  $field_instances['entityform-sports_camp_application-field_how_heard_other'] = array(
    'bundle' => 'sports_camp_application',
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
    'field_name' => 'field_how_heard_other',
    'label' => 'How did you hear about the academy?',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_last_name'.
  $field_instances['entityform-sports_camp_application-field_last_name'] = array(
    'bundle' => 'sports_camp_application',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_last_name',
    'label' => 'Student last name',
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
      'weight' => 36,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_last_name_additional'.
  $field_instances['entityform-sports_camp_application-field_last_name_additional'] = array(
    'bundle' => 'sports_camp_application',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_last_name_additional',
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
      'weight' => 53,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_organization'.
  $field_instances['entityform-sports_camp_application-field_organization'] = array(
    'bundle' => 'sports_camp_application',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_organization',
    'label' => 'School name',
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
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'entityform-sports_camp_application-field_phone'.
  $field_instances['entityform-sports_camp_application-field_phone'] = array(
    'bundle' => 'sports_camp_application',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_phone',
    'label' => 'Home phone',
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
      'weight' => 55,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_phone_additional'.
  $field_instances['entityform-sports_camp_application-field_phone_additional'] = array(
    'bundle' => 'sports_camp_application',
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
        'weight' => 16,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_phone_additional',
    'label' => 'Cell phone',
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
      'weight' => 56,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_state_as_text'.
  $field_instances['entityform-sports_camp_application-field_state_as_text'] = array(
    'bundle' => 'sports_camp_application',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_state_as_text',
    'label' => 'State or province',
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
      'weight' => 41,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_text_paragraph'.
  $field_instances['entityform-sports_camp_application-field_text_paragraph'] = array(
    'bundle' => 'sports_camp_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '1 - 3 paragraphs',
    'display' => array(
      'default' => array(
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_text_paragraph',
    'label' => 'What are you hoping to gain from the experience?',
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
      'weight' => 57,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_work_experience'.
  $field_instances['entityform-sports_camp_application-field_work_experience'] = array(
    'bundle' => 'sports_camp_application',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '1 - 3 paragraphs',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_work_experience',
    'label' => 'Describe any relevant sports leadership experience (managing, counseling, coaching etc.)',
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
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 56,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_camp_application-field_zip_code'.
  $field_instances['entityform-sports_camp_application-field_zip_code'] = array(
    'bundle' => 'sports_camp_application',
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
    'label' => 'Zip/postal code',
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
      'weight' => 42,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_leadership_camp_payment-field_address_line_1'.
  $field_instances['entityform-sports_leadership_camp_payment-field_address_line_1'] = array(
    'bundle' => 'sports_leadership_camp_payment',
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
        'weight' => 5,
      ),
      'email' => array(
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
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_address_line_1',
    'label' => 'Address line 1',
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
  // 'entityform-sports_leadership_camp_payment-field_address_line_2'.
  $field_instances['entityform-sports_leadership_camp_payment-field_address_line_2'] = array(
    'bundle' => 'sports_leadership_camp_payment',
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
        'weight' => 16,
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
      'email' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 16,
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
    'field_name' => 'field_address_line_2',
    'label' => 'Address line 2 or District',
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
  // 'entityform-sports_leadership_camp_payment-field_city'.
  $field_instances['entityform-sports_leadership_camp_payment-field_city'] = array(
    'bundle' => 'sports_leadership_camp_payment',
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
        'weight' => 7,
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
    'field_name' => 'field_city',
    'label' => 'City',
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

  // Exported field_instance:
  // 'entityform-sports_leadership_camp_payment-field_email'.
  $field_instances['entityform-sports_leadership_camp_payment-field_email'] = array(
    'bundle' => 'sports_leadership_camp_payment',
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
        'weight' => 22,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 12,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 22,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email',
    'label' => 'Parent / Guardian email',
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

  // Exported field_instance:
  // 'entityform-sports_leadership_camp_payment-field_first_name'.
  $field_instances['entityform-sports_leadership_camp_payment-field_first_name'] = array(
    'bundle' => 'sports_leadership_camp_payment',
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
        'weight' => 3,
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
    'field_name' => 'field_first_name',
    'label' => 'Payor\'s first name',
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

  // Exported field_instance:
  // 'entityform-sports_leadership_camp_payment-field_full_name'.
  $field_instances['entityform-sports_leadership_camp_payment-field_full_name'] = array(
    'bundle' => 'sports_leadership_camp_payment',
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
        'weight' => 2,
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
    'field_name' => 'field_full_name',
    'label' => 'Student\'s name',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_leadership_camp_payment-field_last_name'.
  $field_instances['entityform-sports_leadership_camp_payment-field_last_name'] = array(
    'bundle' => 'sports_leadership_camp_payment',
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
        'weight' => 4,
      ),
      'email' => array(
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
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_last_name',
    'label' => 'Payor\'s last name',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_leadership_camp_payment-field_phone'.
  $field_instances['entityform-sports_leadership_camp_payment-field_phone'] = array(
    'bundle' => 'sports_leadership_camp_payment',
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
        'weight' => 11,
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
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_leadership_camp_payment-field_state_as_text'.
  $field_instances['entityform-sports_leadership_camp_payment-field_state_as_text'] = array(
    'bundle' => 'sports_leadership_camp_payment',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_state_as_text',
    'label' => 'State',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_leadership_camp_payment-field_total_cost'.
  $field_instances['entityform-sports_leadership_camp_payment-field_total_cost'] = array(
    'bundle' => 'sports_leadership_camp_payment',
    'default_value' => array(
      0 => array(
        'value' => 2250,
      ),
    ),
    'deleted' => 0,
    'description' => 'In US dollars',
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
        'weight' => 13,
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_total_cost',
    'label' => 'Payment amount',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_leadership_camp_payment-field_zip_code'.
  $field_instances['entityform-sports_leadership_camp_payment-field_zip_code'] = array(
    'bundle' => 'sports_leadership_camp_payment',
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
        'weight' => 10,
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_zip_code',
    'label' => 'Zip code',
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

  // Exported field_instance:
  // 'entityform-sports_leadership_interest-field_comments'.
  $field_instances['entityform-sports_leadership_interest-field_comments'] = array(
    'bundle' => 'sports_leadership_interest',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_comments',
    'label' => 'Tell us about your interest',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_leadership_interest-field_description'.
  $field_instances['entityform-sports_leadership_interest-field_description'] = array(
    'bundle' => 'sports_leadership_interest',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_description',
    'label' => 'Button clicked',
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

  // Exported field_instance:
  // 'entityform-sports_leadership_interest-field_email'.
  $field_instances['entityform-sports_leadership_interest-field_email'] = array(
    'bundle' => 'sports_leadership_interest',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_email',
    'label' => 'Your email',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'entityform-sports_leadership_interest-field_full_name'.
  $field_instances['entityform-sports_leadership_interest-field_full_name'] = array(
    'bundle' => 'sports_leadership_interest',
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

  // Exported field_instance:
  // 'entityform-sports_leadership_interest-field_job_title'.
  $field_instances['entityform-sports_leadership_interest-field_job_title'] = array(
    'bundle' => 'sports_leadership_interest',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_job_title',
    'label' => 'Your job title',
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
  // 'entityform-wi_ilo_new_world_of_work_reg-field_comments'.
  $field_instances['entityform-wi_ilo_new_world_of_work_reg-field_comments'] = array(
    'bundle' => 'wi_ilo_new_world_of_work_reg',
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
    'field_name' => 'field_comments',
    'label' => 'Dietary restrictions',
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
      'weight' => 42,
    ),
  );

  // Exported field_instance:
  // 'entityform-wi_ilo_new_world_of_work_reg-field_email'.
  $field_instances['entityform-wi_ilo_new_world_of_work_reg-field_email'] = array(
    'bundle' => 'wi_ilo_new_world_of_work_reg',
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
      'weight' => 40,
    ),
  );

  // Exported field_instance:
  // 'entityform-wi_ilo_new_world_of_work_reg-field_first_name'.
  $field_instances['entityform-wi_ilo_new_world_of_work_reg-field_first_name'] = array(
    'bundle' => 'wi_ilo_new_world_of_work_reg',
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

  // Exported field_instance:
  // 'entityform-wi_ilo_new_world_of_work_reg-field_job_title'.
  $field_instances['entityform-wi_ilo_new_world_of_work_reg-field_job_title'] = array(
    'bundle' => 'wi_ilo_new_world_of_work_reg',
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
      'weight' => 36,
    ),
  );

  // Exported field_instance:
  // 'entityform-wi_ilo_new_world_of_work_reg-field_last_name'.
  $field_instances['entityform-wi_ilo_new_world_of_work_reg-field_last_name'] = array(
    'bundle' => 'wi_ilo_new_world_of_work_reg',
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

  // Exported field_instance:
  // 'entityform-wi_ilo_new_world_of_work_reg-field_organization'.
  $field_instances['entityform-wi_ilo_new_world_of_work_reg-field_organization'] = array(
    'bundle' => 'wi_ilo_new_world_of_work_reg',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_organization',
    'label' => 'Organization',
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
      'weight' => 38,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('(for Cornell graduates)');
  t('1 - 3 paragraphs');
  t('Additional room set-up instructions');
  t('Address');
  t('Address line 1');
  t('Address line 2');
  t('Address line 2 or District');
  t('Address type');
  t('Alternate start date');
  t('Attendee list markup');
  t('Audio visual equipment');
  t('Brief description (including # of potential participants)');
  t('Button clicked');
  t('Catering instructions');
  t('Cell phone');
  t('Check this box to pay the $100 ticket price offered to recent Cornell graduates from years 2014 through 2018.');
  t('City');
  t('City/Country of school');
  t('Class year');
  t('College or university');
  t('Company');
  t('Company or organization');
  t('Country');
  t('Course');
  t('Current grade in school');
  t('Date of birth');
  t('Department/Organization');
  t('Describe any relevant sports leadership experience (managing, counseling, coaching etc.)');
  t('Dietary restrictions');
  t('Email');
  t('Email (2nd participant)');
  t('Email address');
  t('Event date');
  t('Event date(s)');
  t('Event name');
  t('Event title');
  t('Expected head count');
  t('Explanation of "other" room preference');
  t('First Name');
  t('First name');
  t('First name (2nd participant)');
  t('For single-day events, please enter the same dates and times for both start and end date.');
  t('Home phone');
  t('How did you hear about the academy?');
  t('How will you be paying?');
  t('If you are making reservations for guests, please enter their names and Cornell class years if applicable. This will assist us with creating accurate name tags.');
  t('In US dollars');
  t('Include class year if desired');
  t('Include guest names');
  t('Include my name');
  t('Is this reservation for the Ithaca, NY or the New York City Conference center?');
  t('Job Title');
  t('Job title');
  t('Last Name');
  t('Last name');
  t('Last name (2nd participant)');
  t('Mailing address');
  t('Middle / former name');
  t('Name for name tag');
  t('Note this email will be used in all follow-up academy communication, including the payment confirmation.');
  t('Number of tickets for Cornell alumni');
  t('Number of tickets for general public (including guests of Cornell alumni at discounted rate)');
  t('Organization');
  t('Parent / Guardian email');
  t('Payment amount');
  t('Payor\'s first name');
  t('Payor\'s last name');
  t('Phone');
  t('Phone number');
  t('Please add me to your email list');
  t('Please provide a brief description of your event');
  t('Please share updates on future ICS activities and insights with me.');
  t('Recent grad?');
  t('Registering as mediator, disputant, or disputant team?');
  t('Requested room set-up');
  t('Room preference (check all that apply)');
  t('School name');
  t('Second person markup');
  t('State');
  t('State / Province');
  t('State or province');
  t('Street address');
  t('Student email');
  t('Student first name');
  t('Student last name');
  t('Student type');
  t('Student\'s name');
  t('Submission page');
  t('Tell us about your interest');
  t('Title');
  t('Total Cost');
  t('Type of student');
  t('University account number (if paying by transfer)');
  t('What are you hoping to gain from the experience?');
  t('What is your experience with mediation?');
  t('What is your major (or what program are you in?)');
  t('What would you like to know?');
  t('Why would you like to join this competition?');
  t('Will you need catering? (Please check all that apply)');
  t('Your email');
  t('Your guests');
  t('Your job title');
  t('Your name');
  t('Zip / Postal code');
  t('Zip code');
  t('Zip/postal code');
  t('mc hcd signup');

  return $field_instances;
}
