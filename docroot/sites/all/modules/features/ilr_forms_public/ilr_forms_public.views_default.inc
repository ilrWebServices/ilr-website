<?php

/**
 * @file
 * ilr_forms_public.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ilr_forms_public_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'entityform_draft_submissions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Entityform draft submissions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Entityform draft submissions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer entityform types';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset to include all forms with draft submissions';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityform_id' => 'entityform_id',
    'views_bulk_operations' => 'views_bulk_operations',
    'entityform_id_1' => 'entityform_id_1',
    'type' => 'type',
    'user' => 'user',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
  );
  $handler->display->display_options['style_options']['default'] = 'type';
  $handler->display->display_options['style_options']['info'] = array(
    'entityform_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entityform_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'user' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Entityform Submission */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'entityform';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Entityform Submission: Entityform Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'entityform';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_last_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_last_name']['field_api_classes'] = TRUE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_first_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_first_name']['field_api_classes'] = TRUE;
  /* Field: Entityform Submission: Draft */
  $handler->display->display_options['fields']['draft']['id'] = 'draft';
  $handler->display->display_options['fields']['draft']['table'] = 'entityform';
  $handler->display->display_options['fields']['draft']['field'] = 'draft';
  $handler->display->display_options['fields']['draft']['label'] = 'Draft status (1=yes, 0=no)';
  $handler->display->display_options['fields']['draft']['alter']['text'] = '[draft] 1=draft, 0=completed transaction';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Field: Entityform Submission: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'entityform';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  /* Filter criterion: Entityform Submission: Draft */
  $handler->display->display_options['filters']['draft']['id'] = 'draft';
  $handler->display->display_options['filters']['draft']['table'] = 'entityform';
  $handler->display->display_options['filters']['draft']['field'] = 'draft';
  $handler->display->display_options['filters']['draft']['value']['value'] = '1';
  $handler->display->display_options['filters']['draft']['expose']['operator_id'] = 'draft_op';
  $handler->display->display_options['filters']['draft']['expose']['label'] = 'Draft';
  $handler->display->display_options['filters']['draft']['expose']['operator'] = 'draft_op';
  $handler->display->display_options['filters']['draft']['expose']['identifier'] = 'draft';
  $handler->display->display_options['filters']['draft']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['draft']['group_info']['label'] = 'Draft';
  $handler->display->display_options['filters']['draft']['group_info']['identifier'] = 'draft';
  $handler->display->display_options['filters']['draft']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['draft']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ilr_alumni_association_event_reg' => 'ilr_alumni_association_event_reg',
    'forensics_debate_camp_payment' => 'forensics_debate_camp_payment',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Entityform Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => 0,
    11 => '11',
    1 => 0,
    16 => 0,
    41 => 0,
    51 => 0,
    46 => 0,
    36 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
    56 => 0,
    61 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/structure/entityform-draft-submissions';
  $export['entityform_draft_submissions'] = $view;

  $view = new view();
  $view->name = 'groat_sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Groat Sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Groat Sponsors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  /* Field: Field: First name (editable) */
  $handler->display->display_options['fields']['field_first_name_editable']['id'] = 'field_first_name_editable';
  $handler->display->display_options['fields']['field_first_name_editable']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_editable']['field'] = 'field_first_name_editable';
  $handler->display->display_options['fields']['field_first_name_editable']['label'] = '';
  $handler->display->display_options['fields']['field_first_name_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_first_name_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_first_name_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_first_name_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_first_name_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_first_name_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_first_name_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_first_name_editable']['suppress_description'] = 0;
  /* Field: Field: Last name (editable) */
  $handler->display->display_options['fields']['field_last_name_editable']['id'] = 'field_last_name_editable';
  $handler->display->display_options['fields']['field_last_name_editable']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_editable']['field'] = 'field_last_name_editable';
  $handler->display->display_options['fields']['field_last_name_editable']['label'] = '';
  $handler->display->display_options['fields']['field_last_name_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_last_name_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_last_name_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_last_name_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_last_name_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_last_name_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_last_name_editable']['suppress_description'] = 0;
  /* Field: Field: Company (editable) */
  $handler->display->display_options['fields']['field_company_editable']['id'] = 'field_company_editable';
  $handler->display->display_options['fields']['field_company_editable']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company_editable']['field'] = 'field_company_editable';
  $handler->display->display_options['fields']['field_company_editable']['label'] = '';
  $handler->display->display_options['fields']['field_company_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_company_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_company_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_company_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_company_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_company_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_company_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_company_editable']['suppress_description'] = 0;
  /* Field: Field: Payment amount (editable) */
  $handler->display->display_options['fields']['field_total_cost_editable']['id'] = 'field_total_cost_editable';
  $handler->display->display_options['fields']['field_total_cost_editable']['table'] = 'field_data_field_total_cost';
  $handler->display->display_options['fields']['field_total_cost_editable']['field'] = 'field_total_cost_editable';
  $handler->display->display_options['fields']['field_total_cost_editable']['label'] = '';
  $handler->display->display_options['fields']['field_total_cost_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_total_cost_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_total_cost_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_total_cost_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_total_cost_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_total_cost_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_total_cost_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_total_cost_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_total_cost_editable']['suppress_description'] = 0;
  /* Field: Entityform Submission: payment type (editable) */
  $handler->display->display_options['fields']['field_payment_type_editable']['id'] = 'field_payment_type_editable';
  $handler->display->display_options['fields']['field_payment_type_editable']['table'] = 'field_data_field_payment_type';
  $handler->display->display_options['fields']['field_payment_type_editable']['field'] = 'field_payment_type_editable';
  $handler->display->display_options['fields']['field_payment_type_editable']['label'] = '';
  $handler->display->display_options['fields']['field_payment_type_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_payment_type_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_payment_type_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_payment_type_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_payment_type_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_payment_type_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_payment_type_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_payment_type_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_payment_type_editable']['suppress_description'] = 0;
  /* Field: Field: Price note (editable) */
  $handler->display->display_options['fields']['field_price_note_editable']['id'] = 'field_price_note_editable';
  $handler->display->display_options['fields']['field_price_note_editable']['table'] = 'field_data_field_price_note';
  $handler->display->display_options['fields']['field_price_note_editable']['field'] = 'field_price_note_editable';
  $handler->display->display_options['fields']['field_price_note_editable']['label'] = '';
  $handler->display->display_options['fields']['field_price_note_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_price_note_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price_note_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_price_note_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_price_note_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_price_note_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_price_note_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_price_note_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_price_note_editable']['suppress_description'] = 0;
  /* Field: Field: Email (editable) */
  $handler->display->display_options['fields']['field_email_editable']['id'] = 'field_email_editable';
  $handler->display->display_options['fields']['field_email_editable']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email_editable']['field'] = 'field_email_editable';
  $handler->display->display_options['fields']['field_email_editable']['label'] = '';
  $handler->display->display_options['fields']['field_email_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_email_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_email_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_email_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_email_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_email_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_email_editable']['suppress_description'] = 0;
  /* Field: Field: Street address (editable) */
  $handler->display->display_options['fields']['field_address_line_1_editable']['id'] = 'field_address_line_1_editable';
  $handler->display->display_options['fields']['field_address_line_1_editable']['table'] = 'field_data_field_address_line_1';
  $handler->display->display_options['fields']['field_address_line_1_editable']['field'] = 'field_address_line_1_editable';
  $handler->display->display_options['fields']['field_address_line_1_editable']['label'] = '';
  $handler->display->display_options['fields']['field_address_line_1_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_address_line_1_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_line_1_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_address_line_1_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_address_line_1_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_address_line_1_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_address_line_1_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_address_line_1_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_address_line_1_editable']['suppress_description'] = 0;
  /* Field: Field: Street address line 2 (editable) */
  $handler->display->display_options['fields']['field_address_line_2_editable']['id'] = 'field_address_line_2_editable';
  $handler->display->display_options['fields']['field_address_line_2_editable']['table'] = 'field_data_field_address_line_2';
  $handler->display->display_options['fields']['field_address_line_2_editable']['field'] = 'field_address_line_2_editable';
  $handler->display->display_options['fields']['field_address_line_2_editable']['label'] = '';
  $handler->display->display_options['fields']['field_address_line_2_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_address_line_2_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_line_2_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_address_line_2_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_address_line_2_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_address_line_2_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_address_line_2_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_address_line_2_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_address_line_2_editable']['suppress_description'] = 0;
  /* Field: Field: City (editable) */
  $handler->display->display_options['fields']['field_city_editable']['id'] = 'field_city_editable';
  $handler->display->display_options['fields']['field_city_editable']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city_editable']['field'] = 'field_city_editable';
  $handler->display->display_options['fields']['field_city_editable']['label'] = '';
  $handler->display->display_options['fields']['field_city_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_city_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_city_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_city_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_city_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_city_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_city_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_city_editable']['suppress_description'] = 0;
  /* Field: Entityform Submission: State / Province (editable) */
  $handler->display->display_options['fields']['field_state_province_editable']['id'] = 'field_state_province_editable';
  $handler->display->display_options['fields']['field_state_province_editable']['table'] = 'field_data_field_state_province';
  $handler->display->display_options['fields']['field_state_province_editable']['field'] = 'field_state_province_editable';
  $handler->display->display_options['fields']['field_state_province_editable']['label'] = '';
  $handler->display->display_options['fields']['field_state_province_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_state_province_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_state_province_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_state_province_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_state_province_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_state_province_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_state_province_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_state_province_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_state_province_editable']['suppress_description'] = 0;
  /* Field: Field: Zip code (editable) */
  $handler->display->display_options['fields']['field_zip_code_editable']['id'] = 'field_zip_code_editable';
  $handler->display->display_options['fields']['field_zip_code_editable']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code_editable']['field'] = 'field_zip_code_editable';
  $handler->display->display_options['fields']['field_zip_code_editable']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_zip_code_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zip_code_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_zip_code_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_zip_code_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_zip_code_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_zip_code_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_zip_code_editable']['suppress_description'] = 0;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'groat_sponsor' => 'groat_sponsor',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'alumni/groat/admin/groat-sponsors';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_first_name_editable' => 'field_first_name_editable',
    'field_last_name_editable' => 'field_last_name_editable',
    'field_company_editable' => 'field_company_editable',
    'field_total_cost_editable' => 0,
    'field_payment_type_editable' => 0,
    'field_price_note_editable' => 0,
    'field_email_editable' => 0,
    'field_address_line_1_editable' => 0,
    'field_address_line_2_editable' => 0,
    'field_city_editable' => 0,
    'field_state_province_editable' => 0,
    'field_zip_code_editable' => 0,
    'entityform_id' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: First name (editable) */
  $handler->display->display_options['fields']['field_first_name_editable']['id'] = 'field_first_name_editable';
  $handler->display->display_options['fields']['field_first_name_editable']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name_editable']['field'] = 'field_first_name_editable';
  $handler->display->display_options['fields']['field_first_name_editable']['label'] = '';
  $handler->display->display_options['fields']['field_first_name_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_first_name_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_first_name_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_first_name_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_first_name_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_first_name_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_first_name_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_first_name_editable']['suppress_description'] = 0;
  /* Field: Field: Last name (editable) */
  $handler->display->display_options['fields']['field_last_name_editable']['id'] = 'field_last_name_editable';
  $handler->display->display_options['fields']['field_last_name_editable']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name_editable']['field'] = 'field_last_name_editable';
  $handler->display->display_options['fields']['field_last_name_editable']['label'] = '';
  $handler->display->display_options['fields']['field_last_name_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_last_name_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_last_name_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_last_name_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_last_name_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_last_name_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_last_name_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_last_name_editable']['suppress_description'] = 0;
  /* Field: Field: Company (editable) */
  $handler->display->display_options['fields']['field_company_editable']['id'] = 'field_company_editable';
  $handler->display->display_options['fields']['field_company_editable']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company_editable']['field'] = 'field_company_editable';
  $handler->display->display_options['fields']['field_company_editable']['label'] = '';
  $handler->display->display_options['fields']['field_company_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_company_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_company_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_company_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_company_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_company_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_company_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_company_editable']['suppress_description'] = 0;
  /* Field: Field: Payment amount (editable) */
  $handler->display->display_options['fields']['field_total_cost_editable']['id'] = 'field_total_cost_editable';
  $handler->display->display_options['fields']['field_total_cost_editable']['table'] = 'field_data_field_total_cost';
  $handler->display->display_options['fields']['field_total_cost_editable']['field'] = 'field_total_cost_editable';
  $handler->display->display_options['fields']['field_total_cost_editable']['label'] = '';
  $handler->display->display_options['fields']['field_total_cost_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_total_cost_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_total_cost_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_total_cost_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_total_cost_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_total_cost_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_total_cost_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_total_cost_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_total_cost_editable']['suppress_description'] = 0;
  /* Field: Entityform Submission: payment type (editable) */
  $handler->display->display_options['fields']['field_payment_type_editable']['id'] = 'field_payment_type_editable';
  $handler->display->display_options['fields']['field_payment_type_editable']['table'] = 'field_data_field_payment_type';
  $handler->display->display_options['fields']['field_payment_type_editable']['field'] = 'field_payment_type_editable';
  $handler->display->display_options['fields']['field_payment_type_editable']['label'] = '';
  $handler->display->display_options['fields']['field_payment_type_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_payment_type_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_payment_type_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_payment_type_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_payment_type_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_payment_type_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_payment_type_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_payment_type_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_payment_type_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_payment_type_editable']['suppress_description'] = 0;
  /* Field: Field: Price note (editable) */
  $handler->display->display_options['fields']['field_price_note_editable']['id'] = 'field_price_note_editable';
  $handler->display->display_options['fields']['field_price_note_editable']['table'] = 'field_data_field_price_note';
  $handler->display->display_options['fields']['field_price_note_editable']['field'] = 'field_price_note_editable';
  $handler->display->display_options['fields']['field_price_note_editable']['label'] = '';
  $handler->display->display_options['fields']['field_price_note_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price_note_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_price_note_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price_note_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_price_note_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_price_note_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_price_note_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_price_note_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_price_note_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_price_note_editable']['suppress_description'] = 0;
  /* Field: Field: Email (editable) */
  $handler->display->display_options['fields']['field_email_editable']['id'] = 'field_email_editable';
  $handler->display->display_options['fields']['field_email_editable']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email_editable']['field'] = 'field_email_editable';
  $handler->display->display_options['fields']['field_email_editable']['label'] = '';
  $handler->display->display_options['fields']['field_email_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_email_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_email_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_email_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_email_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_email_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_email_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_email_editable']['suppress_description'] = 0;
  /* Field: Field: Street address (editable) */
  $handler->display->display_options['fields']['field_address_line_1_editable']['id'] = 'field_address_line_1_editable';
  $handler->display->display_options['fields']['field_address_line_1_editable']['table'] = 'field_data_field_address_line_1';
  $handler->display->display_options['fields']['field_address_line_1_editable']['field'] = 'field_address_line_1_editable';
  $handler->display->display_options['fields']['field_address_line_1_editable']['label'] = '';
  $handler->display->display_options['fields']['field_address_line_1_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_line_1_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_address_line_1_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_line_1_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_address_line_1_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_address_line_1_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_address_line_1_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_address_line_1_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_address_line_1_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_address_line_1_editable']['suppress_description'] = 0;
  /* Field: Field: Street address line 2 (editable) */
  $handler->display->display_options['fields']['field_address_line_2_editable']['id'] = 'field_address_line_2_editable';
  $handler->display->display_options['fields']['field_address_line_2_editable']['table'] = 'field_data_field_address_line_2';
  $handler->display->display_options['fields']['field_address_line_2_editable']['field'] = 'field_address_line_2_editable';
  $handler->display->display_options['fields']['field_address_line_2_editable']['label'] = '';
  $handler->display->display_options['fields']['field_address_line_2_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address_line_2_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_address_line_2_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address_line_2_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_address_line_2_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_address_line_2_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_address_line_2_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_address_line_2_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_address_line_2_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_address_line_2_editable']['suppress_description'] = 0;
  /* Field: Field: City (editable) */
  $handler->display->display_options['fields']['field_city_editable']['id'] = 'field_city_editable';
  $handler->display->display_options['fields']['field_city_editable']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city_editable']['field'] = 'field_city_editable';
  $handler->display->display_options['fields']['field_city_editable']['label'] = '';
  $handler->display->display_options['fields']['field_city_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_city_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_city_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_city_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_city_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_city_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_city_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_city_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_city_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_city_editable']['suppress_description'] = 0;
  /* Field: Entityform Submission: State / Province (editable) */
  $handler->display->display_options['fields']['field_state_province_editable']['id'] = 'field_state_province_editable';
  $handler->display->display_options['fields']['field_state_province_editable']['table'] = 'field_data_field_state_province';
  $handler->display->display_options['fields']['field_state_province_editable']['field'] = 'field_state_province_editable';
  $handler->display->display_options['fields']['field_state_province_editable']['label'] = '';
  $handler->display->display_options['fields']['field_state_province_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_state_province_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_state_province_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_state_province_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_state_province_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_state_province_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_state_province_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_state_province_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_state_province_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_state_province_editable']['suppress_description'] = 0;
  /* Field: Field: Zip code (editable) */
  $handler->display->display_options['fields']['field_zip_code_editable']['id'] = 'field_zip_code_editable';
  $handler->display->display_options['fields']['field_zip_code_editable']['table'] = 'field_data_field_zip_code';
  $handler->display->display_options['fields']['field_zip_code_editable']['field'] = 'field_zip_code_editable';
  $handler->display->display_options['fields']['field_zip_code_editable']['label'] = '';
  $handler->display->display_options['fields']['field_zip_code_editable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_zip_code_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zip_code_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_zip_code_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_zip_code_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_zip_code_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_zip_code_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_zip_code_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_zip_code_editable']['suppress_description'] = 0;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  $export['groat_sponsors'] = $view;

  return $export;
}
