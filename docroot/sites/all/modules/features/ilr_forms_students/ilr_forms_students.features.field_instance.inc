<?php
/**
 * @file
 * ilr_forms_students.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ilr_forms_students_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_activities'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_activities'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<li>Plain text only, no bullets or other special formatting</li>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_activities',
    'label' => 'Activities to be observed by FEX participants',
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
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_address_line_1'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_address_line_1'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
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
    'field_name' => 'field_address_line_1',
    'label' => 'Street address line 1',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_address_line_1_additional'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_address_line_1_additional'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_address_line_1_additional',
    'label' => 'Street address line 1 (supervisor)',
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
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_address_line_2'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_address_line_2'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
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
    'field_name' => 'field_address_line_2',
    'label' => 'Street address line 2',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_address_line_2_additional'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_address_line_2_additional'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_address_line_2_additional',
    'label' => 'Street address line 2 (supervisor)',
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
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_alum'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_alum'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
    'field_name' => 'field_alum',
    'label' => 'Are you a Cornell Alum?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_alum_additional'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_alum_additional'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 25,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_alum_additional',
    'label' => 'Is the supervisor a Cornell alum?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_career_field_fex'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_career_field_fex'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 34,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_career_field_fex',
    'label' => 'Career field for this FEX opportunity',
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
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_career_field_wisp'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_career_field_wisp'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 48,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_career_field_wisp',
    'label' => 'Career field for this WISP opportunity',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_city'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_city'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_city_additional'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_city_additional'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_city_additional',
    'label' => 'City (supervisor)',
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
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_city_additional_2'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_city_additional_2'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_city_additional_2',
    'label' => 'City where this FEX opportunity is located',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_city_additional_3'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_city_additional_3'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 52,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_city_additional_3',
    'label' => 'City where this WISP opportunity is located',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_cornell_college'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_cornell_college'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => array(
      0 => array(
        'value' => 'ILR',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_cornell_college',
    'label' => 'College',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_cornell_college_additional'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_cornell_college_additional'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => array(
      0 => array(
        'value' => 'ILR',
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
        'weight' => 24,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_cornell_college_additional',
    'label' => 'College (supervisor)',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_degree_ba_masters_oth_addl'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_degree_ba_masters_oth_addl'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 26,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_degree_ba_masters_oth_addl',
    'label' => 'Degree (supervisor)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_degree_ba_masters_other'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_degree_ba_masters_other'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 15,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_degree_ba_masters_other',
    'label' => 'Degree',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_description_long'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_description_long'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<li>Plain text only, no bullets or other special formatting</li>',
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
    'field_name' => 'field_description_long',
    'label' => 'Description of organization',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_email'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_email'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_email_additional'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_email_additional'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_email_additional',
    'label' => 'Email (supervisor)',
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
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_fex_dates'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_fex_dates'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<li>Plain text only, no bullets or other special formatting</li>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_fex_dates',
    'label' => 'Dates and duration for this FEX opportunity',
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
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_fex_dates_markup'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_fex_dates_markup'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 44,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_fex_dates_markup',
    'label' => 'FEX dates markup',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_fex_markup_if_chosen'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_fex_markup_if_chosen'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 38,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_fex_markup_if_chosen',
    'label' => 'fex markup if chosen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_fex_markup_if_not_chosen'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_fex_markup_if_not_chosen'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 36,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_fex_markup_if_not_chosen',
    'label' => 'fex markup if not chosen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_fex_number_of_students'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_fex_number_of_students'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 45,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_fex_number_of_students',
    'label' => 'Number of students you can host for this FEX opportunity',
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
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_fex_same_day'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_fex_same_day'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 46,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_fex_same_day',
    'label' => 'If sponsoring more than one student, will you host them on the same day(s) or individually?',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_fex_upperclass_students'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_fex_upperclass_students'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Sometimes, usually related to geographic location, a FEX opportunity is not selected by any of the freshmen. In that case, we would like to offer the opportunity to upperclass students.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'list_default',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_fex_upperclass_students',
    'label' => 'If freshmen don\'t select this opportunity, may we offer it to upperclass students?',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_fex_wisp_opportunity_type'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_fex_wisp_opportunity_type'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_fex_wisp_opportunity_type',
    'label' => 'Type of opportunity (select one or both)',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_first_name'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_first_name'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_first_name_additional'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_first_name_additional'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
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
    'field_name' => 'field_first_name_additional',
    'label' => 'First name (supervisor)',
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
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_is_address_the_same'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_is_address_the_same'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 28,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_is_address_the_same',
    'label' => 'Is the supervisor\'s address the same as yours?',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_job_title'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_job_title'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_job_title_additional'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_job_title_additional'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
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
    'field_name' => 'field_job_title_additional',
    'label' => 'Job title (supervisor)',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_last_name'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_last_name'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_last_name_additional'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_last_name_additional'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_last_name_additional',
    'label' => 'Last name (supervisor)',
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
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_organization'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_organization'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
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
    'field_name' => 'field_organization',
    'label' => 'Organization name',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_other_career_field_fex_'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_other_career_field_fex_'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_other_career_field_fex_',
    'label' => 'Other career field (FEX)',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_other_career_field_wisp_'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_other_career_field_wisp_'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 49,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_other_career_field_wisp_',
    'label' => 'Other career field (WISP)',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_paid'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_paid'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 54,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_paid',
    'label' => 'Is this a paid WISP?',
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
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_phone'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_phone'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_phone_additional'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_phone_additional'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_phone_additional',
    'label' => 'Phone (supervisor)',
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_qualifications'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_qualifications'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<li>Plain text only, no bullets or other special formatting</li>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 51,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_qualifications',
    'label' => 'Qualifications, computer skills, and transportation needs',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_qualifications_markup'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_qualifications_markup'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 61,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_qualifications_markup',
    'label' => 'Qualifications markup',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_responsibility'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_responsibility'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<li>Plain text only, no bullets or other special formatting</li>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 50,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_responsibility',
    'label' => 'Responsibilities or projects to be completed by WISP student(s)',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_salary'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_salary'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 55,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_salary',
    'label' => 'Amount of compensation',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_state_province'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_state_province'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_state_province_additional'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_state_province_additional'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 32,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_state_province_additional',
    'label' => 'State / Province (supervisor)',
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
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_state_province_addl_2'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_state_province_addl_2'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 42,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_state_province_addl_2',
    'label' => 'State / Province where this FEX opportunity is located',
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
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_state_province_addl_3'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_state_province_addl_3'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 53,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_state_province_addl_3',
    'label' => 'State / Province where this WISP opportunity is located',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_wisp_constraints_markup'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_wisp_constraints_markup'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 59,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_wisp_constraints_markup',
    'label' => 'WISP dates constraints markup',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_wisp_dates'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_wisp_dates'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<li>Plain text only, no bullets or other special formatting</li>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 56,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_wisp_dates',
    'label' => 'Preferred dates and duration for this WISP opportunity',
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
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_wisp_dates_constraints'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_wisp_dates_constraints'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<li>Plain text only, no bullets or other special formatting</li>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 58,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_wisp_dates_constraints',
    'label' => 'Constraints on the dates for this WISP opportunity',
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
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_wisp_dates_markup'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_wisp_dates_markup'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 57,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_wisp_dates_markup',
    'label' => 'WISP dates markup',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_wisp_markup_if_chosen'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_wisp_markup_if_chosen'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 39,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_wisp_markup_if_chosen',
    'label' => 'wisp markup if chosen',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_wisp_markup_if_not_chosen'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_wisp_markup_if_not_chosen'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 37,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_wisp_markup_if_not_chosen',
    'label' => 'wisp markup if not chosen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_wisp_number_of_students'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_wisp_number_of_students'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 60,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_wisp_number_of_students',
    'label' => 'Number of students you can host for this WISP opportunity',
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
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_year_as_list_text'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_year_as_list_text'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_year_as_list_text',
    'label' => 'Graduation year',
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
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_year_as_list_text_2'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_year_as_list_text_2'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 27,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_year_as_list_text_2',
    'label' => 'Graduation year (supervisor)',
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
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_yes_no'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_yes_no'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
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
        'weight' => 18,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_yes_no',
    'label' => 'Will you be managing this student from day to day?',
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

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_zip_code'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_zip_code'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-fex_wisp_sponsor_registration-field_zip_postal_code_additional'
  $field_instances['entityform-fex_wisp_sponsor_registration-field_zip_postal_code_additional'] = array(
    'bundle' => 'fex_wisp_sponsor_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_zip_postal_code_additional',
    'label' => 'Zip code (supervisor)',
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
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'entityform-keith_strudler_lecture-field_email'
  $field_instances['entityform-keith_strudler_lecture-field_email'] = array(
    'bundle' => 'keith_strudler_lecture',
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
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
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
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'entityform-keith_strudler_lecture-field_first_name'
  $field_instances['entityform-keith_strudler_lecture-field_first_name'] = array(
    'bundle' => 'keith_strudler_lecture',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'entityform-keith_strudler_lecture-field_h_event_date'
  $field_instances['entityform-keith_strudler_lecture-field_h_event_date'] = array(
    'bundle' => 'keith_strudler_lecture',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'entityform-keith_strudler_lecture-field_last_name'
  $field_instances['entityform-keith_strudler_lecture-field_last_name'] = array(
    'bundle' => 'keith_strudler_lecture',
    'default_value' => NULL,
    'deleted' => 0,
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
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'entityform-keith_strudler_lecture-field_referenced_node'
  $field_instances['entityform-keith_strudler_lecture-field_referenced_node'] = array(
    'bundle' => 'keith_strudler_lecture',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_current_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
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
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'entityform-keith_strudler_lecture-field_student_id_number'
  $field_instances['entityform-keith_strudler_lecture-field_student_id_number'] = array(
    'bundle' => 'keith_strudler_lecture',
    'default_value' => NULL,
    'deleted' => 0,
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
    'field_name' => 'field_student_id_number',
    'label' => 'Student ID',
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

  // Exported field_instance: 'entityform-keith_strudler_lecture-field_year_as_text'
  $field_instances['entityform-keith_strudler_lecture-field_year_as_text'] = array(
    'bundle' => 'keith_strudler_lecture',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Year you will graduate, e.g. 2016',
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
    'field_name' => 'field_year_as_text',
    'label' => 'Class year',
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

  // Exported field_instance: 'entityform-mlb_today_with_rob_manfred-field_email'
  $field_instances['entityform-mlb_today_with_rob_manfred-field_email'] = array(
    'bundle' => 'mlb_today_with_rob_manfred',
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
        'weight' => 3,
      ),
      'email' => array(
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
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
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
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'entityform-mlb_today_with_rob_manfred-field_full_name'
  $field_instances['entityform-mlb_today_with_rob_manfred-field_full_name'] = array(
    'bundle' => 'mlb_today_with_rob_manfred',
    'default_value' => NULL,
    'deleted' => 0,
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_full_name',
    'label' => 'Name',
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
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'entityform-mlb_today_with_rob_manfred-field_h_event_date'
  $field_instances['entityform-mlb_today_with_rob_manfred-field_h_event_date'] = array(
    'bundle' => 'mlb_today_with_rob_manfred',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
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
        'weight' => 4,
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
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'entityform-mlb_today_with_rob_manfred-field_mlb_checkboxes'
  $field_instances['entityform-mlb_today_with_rob_manfred-field_mlb_checkboxes'] = array(
    'bundle' => 'mlb_today_with_rob_manfred',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Affiliation',
        ),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Affiliation',
        ),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Affiliation',
        ),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Affiliation',
        ),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_mlb_checkboxes',
    'label' => 'Affiliation (check one or both)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'entityform-mlb_today_with_rob_manfred-field_referenced_node'
  $field_instances['entityform-mlb_today_with_rob_manfred-field_referenced_node'] = array(
    'bundle' => 'mlb_today_with_rob_manfred',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_current_field_default_value',
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
        'module' => 'entityreference',
        'settings' => array(
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
        'weight' => 3,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_label' => '',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
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
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'entityform-transfer_offer-field_current_college'
  $field_instances['entityform-transfer_offer-field_current_college'] = array(
    'bundle' => 'transfer_offer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter the name of the school you will attend for your first year. If you have not yet selected a school, please enter “Undecided” and email ilradmissions@cornell.edu once you have finalized your decision.',
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
          'field_formatter_label' => 'School first year',
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
        'weight' => 6,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => 'School first year',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_current_college',
    'label' => 'School you will attend for your first year',
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

  // Exported field_instance: 'entityform-transfer_offer-field_date_of_birth_as_text'
  $field_instances['entityform-transfer_offer-field_date_of_birth_as_text'] = array(
    'bundle' => 'transfer_offer',
    'default_value' => NULL,
    'deleted' => 0,
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
        'weight' => 4,
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
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_date_of_birth_as_text',
    'label' => 'Date of birth',
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

  // Exported field_instance: 'entityform-transfer_offer-field_email'
  $field_instances['entityform-transfer_offer-field_email'] = array(
    'bundle' => 'transfer_offer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Since email will be our main form of communication with TO students, please indicate the email address you will use throughout the next year.',
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
        'weight' => 3,
      ),
      'email' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 3,
      ),
      'table' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'email_default',
        'weight' => 3,
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

  // Exported field_instance: 'entityform-transfer_offer-field_first_name'
  $field_instances['entityform-transfer_offer-field_first_name'] = array(
    'bundle' => 'transfer_offer',
    'default_value' => NULL,
    'deleted' => 0,
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
        'weight' => 1,
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
        'weight' => 1,
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

  // Exported field_instance: 'entityform-transfer_offer-field_last_name'
  $field_instances['entityform-transfer_offer-field_last_name'] = array(
    'bundle' => 'transfer_offer',
    'default_value' => NULL,
    'deleted' => 0,
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

  // Exported field_instance: 'entityform-transfer_offer-field_phone'
  $field_instances['entityform-transfer_offer-field_phone'] = array(
    'bundle' => 'transfer_offer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter the phone number where you can be reached throughout the next academic year.',
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
        'weight' => 7,
      ),
      'email' => array(
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-transfer_offer-field_referenced_node'
  $field_instances['entityform-transfer_offer-field_referenced_node'] = array(
    'bundle' => 'transfer_offer',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_current_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
      'email' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_formatter_label' => 'Offer',
          'link' => 0,
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
    'label' => 'Offer year',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-transfer_offer-field_transfer_offer_reply'
  $field_instances['entityform-transfer_offer-field_transfer_offer_reply'] = array(
    'bundle' => 'transfer_offer',
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
      'download' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_label' => 'Accept?',
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'email' => array(
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
          'field_formatter_label' => 'Accept?',
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'fences_wrapper' => 'div',
    'field_name' => 'field_transfer_offer_reply',
    'label' => 'Do you wish to accept the Transfer Option (TO) to Cornell\'s ILR School?',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('<li>Plain text only, no bullets or other special formatting</li>');
  t('Activities to be observed by FEX participants');
  t('Affiliation (check one or both)');
  t('Amount of compensation');
  t('Are you a Cornell Alum?');
  t('Career field for this FEX opportunity');
  t('Career field for this WISP opportunity');
  t('City');
  t('City (supervisor)');
  t('City where this FEX opportunity is located');
  t('City where this WISP opportunity is located');
  t('Class year');
  t('College');
  t('College (supervisor)');
  t('Constraints on the dates for this WISP opportunity');
  t('Date of birth');
  t('Dates and duration for this FEX opportunity');
  t('Degree');
  t('Degree (supervisor)');
  t('Description of organization');
  t('Do you wish to accept the Transfer Option (TO) to Cornell\'s ILR School?');
  t('Email');
  t('Email (supervisor)');
  t('Event date');
  t('Event title');
  t('FEX dates markup');
  t('First name');
  t('First name (supervisor)');
  t('Graduation year');
  t('Graduation year (supervisor)');
  t('If freshmen don\'t select this opportunity, may we offer it to upperclass students?');
  t('If sponsoring more than one student, will you host them on the same day(s) or individually?');
  t('Is the supervisor a Cornell alum?');
  t('Is the supervisor\'s address the same as yours?');
  t('Is this a paid WISP?');
  t('Job title');
  t('Job title (supervisor)');
  t('Last name');
  t('Last name (supervisor)');
  t('Name');
  t('Number of students you can host for this FEX opportunity');
  t('Number of students you can host for this WISP opportunity');
  t('Offer year');
  t('Organization name');
  t('Other career field (FEX)');
  t('Other career field (WISP)');
  t('Phone');
  t('Phone (supervisor)');
  t('Please enter the name of the school you will attend for your first year. If you have not yet selected a school, please enter “Undecided” and email ilradmissions@cornell.edu once you have finalized your decision.');
  t('Please enter the phone number where you can be reached throughout the next academic year.');
  t('Preferred dates and duration for this WISP opportunity');
  t('Qualifications markup');
  t('Qualifications, computer skills, and transportation needs');
  t('Responsibilities or projects to be completed by WISP student(s)');
  t('School you will attend for your first year');
  t('Since email will be our main form of communication with TO students, please indicate the email address you will use throughout the next year.');
  t('Sometimes, usually related to geographic location, a FEX opportunity is not selected by any of the freshmen. In that case, we would like to offer the opportunity to upperclass students.');
  t('State / Province');
  t('State / Province (supervisor)');
  t('State / Province where this FEX opportunity is located');
  t('State / Province where this WISP opportunity is located');
  t('Street address line 1');
  t('Street address line 1 (supervisor)');
  t('Street address line 2');
  t('Street address line 2 (supervisor)');
  t('Student ID');
  t('Type of opportunity (select one or both)');
  t('WISP dates constraints markup');
  t('WISP dates markup');
  t('Will you be managing this student from day to day?');
  t('Year you will graduate, e.g. 2016');
  t('Zip code');
  t('Zip code (supervisor)');
  t('fex markup if chosen');
  t('fex markup if not chosen');
  t('wisp markup if chosen');
  t('wisp markup if not chosen');

  return $field_instances;
}
