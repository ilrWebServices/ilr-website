<?php
/**
 * @file
 * ilr_redhen.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ilr_redhen_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'notes_needing_response';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_note';
  $view->human_name = 'Notes needing response';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Notes requiring action';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access redhen notes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'note__link';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['style_options']['class'] = 'note__list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'notes-needing-response';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'url_1' => 'url_1',
    'url' => 'url',
  );
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<p>You\'re all caught up! If anyone adds a note to a contact and checks "requires action", it will appear here. This is useful as a task list for managing campers.</p>';
  /* Relationship: Note: Note to Contact */
  $handler->display->display_options['relationships']['redhen_note_related_redhen_contact']['id'] = 'redhen_note_related_redhen_contact';
  $handler->display->display_options['relationships']['redhen_note_related_redhen_contact']['table'] = 'redhen_note';
  $handler->display->display_options['relationships']['redhen_note_related_redhen_contact']['field'] = 'redhen_note_related_redhen_contact';
  /* Field: Contact: Default email */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'views_entity_redhen_contact';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['relationship'] = 'redhen_note_related_redhen_contact';
  $handler->display->display_options['fields']['email']['label'] = '';
  $handler->display->display_options['fields']['email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['email']['alter']['path'] = 'redhen/contact/[contact_id]/note/[entity_id]/view/edit';
  $handler->display->display_options['fields']['email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['email']['link_to_entity'] = 0;
  /* Field: Contact: First name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['relationship'] = 'redhen_note_related_redhen_contact';
  $handler->display->display_options['fields']['first_name']['label'] = '';
  $handler->display->display_options['fields']['first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['first_name']['alter']['path'] = '[url]/edit';
  $handler->display->display_options['fields']['first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['first_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['first_name']['empty'] = '[email]';
  $handler->display->display_options['fields']['first_name']['hide_alter_empty'] = FALSE;
  /* Field: Contact: Last name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['relationship'] = 'redhen_note_related_redhen_contact';
  $handler->display->display_options['fields']['last_name']['label'] = '';
  $handler->display->display_options['fields']['last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['last_name']['alter']['path'] = '[url]/edit';
  $handler->display->display_options['fields']['last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_name']['element_default_classes'] = FALSE;
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'redhen_note_related_redhen_contact';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['settings'] = array(
    'field_formatter_label' => '',
  );
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'redhen_note_related_redhen_contact';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['settings'] = array(
    'field_formatter_label' => '',
  );
  /* Field: Contact: URL */
  $handler->display->display_options['fields']['url_1']['id'] = 'url_1';
  $handler->display->display_options['fields']['url_1']['table'] = 'views_entity_redhen_contact';
  $handler->display->display_options['fields']['url_1']['field'] = 'url';
  $handler->display->display_options['fields']['url_1']['relationship'] = 'redhen_note_related_redhen_contact';
  $handler->display->display_options['fields']['url_1']['label'] = '';
  $handler->display->display_options['fields']['url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url_1']['alter']['text'] = '[field_first_name] [field_last_name]';
  $handler->display->display_options['fields']['url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url_1']['link_to_entity'] = 0;
  /* Field: Note: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_redhen_note';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = ' : ';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'Edit note';
  $handler->display->display_options['fields']['url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['path'] = '[url]/edit';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Note: Message */
  $handler->display->display_options['fields']['redhen_note_body']['id'] = 'redhen_note_body';
  $handler->display->display_options['fields']['redhen_note_body']['table'] = 'field_data_redhen_note_body';
  $handler->display->display_options['fields']['redhen_note_body']['field'] = 'redhen_note_body';
  $handler->display->display_options['fields']['redhen_note_body']['label'] = '';
  $handler->display->display_options['fields']['redhen_note_body']['element_type'] = '0';
  $handler->display->display_options['fields']['redhen_note_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['redhen_note_body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['redhen_note_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['redhen_note_body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['redhen_note_body']['settings'] = array(
    'trim_length' => '600',
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['redhen_note_body']['field_api_classes'] = TRUE;
  /* Filter criterion: Field: Check here if you would like a response (field_response_checkbox) */
  $handler->display->display_options['filters']['field_response_checkbox_value']['id'] = 'field_response_checkbox_value';
  $handler->display->display_options['filters']['field_response_checkbox_value']['table'] = 'field_data_field_response_checkbox';
  $handler->display->display_options['filters']['field_response_checkbox_value']['field'] = 'field_response_checkbox_value';
  $handler->display->display_options['filters']['field_response_checkbox_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'redhen/camp/tasks';
  $export['notes_needing_response'] = $view;

  $view = new view();
  $view->name = 'sports_camp_contacts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'redhen_contact';
  $view->human_name = 'Sports Camp Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sports Camp Contacts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access redhen contacts';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'first_name' => 'first_name',
    'last_name' => 'last_name',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'url' => 'url',
    'email' => 'email',
    'field_current_status' => 'field_current_status',
  );
  $handler->display->display_options['style_options']['default'] = 'field_last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'last_name' => array(
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
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'email' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Field: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['settings'] = array(
    'field_formatter_label' => '',
  );
  /* Field: Field: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_last_name']['settings'] = array(
    'field_formatter_label' => '',
  );
  /* Field: Contact: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_redhen_contact';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = 'Camper name';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '[field_first_name] [field_last_name] ';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Contact: First name */
  $handler->display->display_options['fields']['first_name']['id'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['first_name']['field'] = 'first_name';
  $handler->display->display_options['fields']['first_name']['label'] = 'Parent first name';
  $handler->display->display_options['fields']['first_name']['element_label_colon'] = FALSE;
  /* Field: Contact: Last name */
  $handler->display->display_options['fields']['last_name']['id'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['table'] = 'redhen_contact';
  $handler->display->display_options['fields']['last_name']['field'] = 'last_name';
  $handler->display->display_options['fields']['last_name']['label'] = 'Parent last name';
  $handler->display->display_options['fields']['last_name']['element_label_colon'] = FALSE;
  /* Field: Contact: Default email */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'views_entity_redhen_contact';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['label'] = 'Primary email';
  $handler->display->display_options['fields']['email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['email']['link_to_entity'] = 1;
  /* Field: Contact: Current status */
  $handler->display->display_options['fields']['field_current_status']['id'] = 'field_current_status';
  $handler->display->display_options['fields']['field_current_status']['table'] = 'field_data_field_current_status';
  $handler->display->display_options['fields']['field_current_status']['field'] = 'field_current_status';
  $handler->display->display_options['fields']['field_current_status']['element_type'] = '0';
  $handler->display->display_options['fields']['field_current_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_status']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_current_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_current_status']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_current_status']['field_api_classes'] = TRUE;
  /* Filter criterion: Contact: Current status (field_current_status) */
  $handler->display->display_options['filters']['field_current_status_value']['id'] = 'field_current_status_value';
  $handler->display->display_options['filters']['field_current_status_value']['table'] = 'field_data_field_current_status';
  $handler->display->display_options['filters']['field_current_status_value']['field'] = 'field_current_status_value';
  $handler->display->display_options['filters']['field_current_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_current_status_value']['expose']['operator_id'] = 'field_current_status_value_op';
  $handler->display->display_options['filters']['field_current_status_value']['expose']['label'] = 'Current status';
  $handler->display->display_options['filters']['field_current_status_value']['expose']['operator'] = 'field_current_status_value_op';
  $handler->display->display_options['filters']['field_current_status_value']['expose']['identifier'] = 'field_current_status_value';
  $handler->display->display_options['filters']['field_current_status_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_current_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    41 => 0,
    51 => 0,
    46 => 0,
    21 => 0,
    26 => 0,
    31 => 0,
    56 => 0,
    61 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'redhen/camp/contacts';
  $export['sports_camp_contacts'] = $view;

  return $export;
}
