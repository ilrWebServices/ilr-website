<?php
/**
 * @file
 * ilr_sdc_listings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ilr_sdc_listings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'course_manual_listings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Course Manual Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = 'custom';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '7200';
  $handler->display->display_options['cache']['output_lifespan'] = 'custom';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '7200';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Catalog Number Prefix */
  $handler->display->display_options['fields']['field_catalog_prefix']['id'] = 'field_catalog_prefix';
  $handler->display->display_options['fields']['field_catalog_prefix']['table'] = 'field_data_field_catalog_prefix';
  $handler->display->display_options['fields']['field_catalog_prefix']['field'] = 'field_catalog_prefix';
  $handler->display->display_options['fields']['field_catalog_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_prefix']['settings'] = array(
    'field_formatter_label' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_catalog_prefix] - [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Catalog Number Prefix (field_catalog_prefix) */
  $handler->display->display_options['sorts']['field_catalog_prefix_value']['id'] = 'field_catalog_prefix_value';
  $handler->display->display_options['sorts']['field_catalog_prefix_value']['table'] = 'field_data_field_catalog_prefix';
  $handler->display->display_options['sorts']['field_catalog_prefix_value']['field'] = 'field_catalog_prefix_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sdc_course' => 'sdc_course',
  );
  /* Filter criterion: Content: Catalog Number Prefix (field_catalog_prefix) */
  $handler->display->display_options['filters']['field_catalog_prefix_value']['id'] = 'field_catalog_prefix_value';
  $handler->display->display_options['filters']['field_catalog_prefix_value']['table'] = 'field_data_field_catalog_prefix';
  $handler->display->display_options['filters']['field_catalog_prefix_value']['field'] = 'field_catalog_prefix_value';
  $handler->display->display_options['filters']['field_catalog_prefix_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_catalog_prefix_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_catalog_prefix_value']['expose']['operator_id'] = 'field_catalog_prefix_value_op';
  $handler->display->display_options['filters']['field_catalog_prefix_value']['expose']['label'] = 'Catalog Numbers (separated by spaces)';
  $handler->display->display_options['filters']['field_catalog_prefix_value']['expose']['description'] = 'List all catalog numbers separated by spaces';
  $handler->display->display_options['filters']['field_catalog_prefix_value']['expose']['operator'] = 'field_catalog_prefix_value_op';
  $handler->display->display_options['filters']['field_catalog_prefix_value']['expose']['identifier'] = 'field_catalog_prefix_value';
  $handler->display->display_options['filters']['field_catalog_prefix_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );

  /* Display: Catalog Number and Title */
  $handler = $view->new_display('panel_pane', 'Catalog Number and Title', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Course Manual Listing';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Table with next class date */
  $handler = $view->new_display('panel_pane', 'Table with next class date', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_catalog_prefix' => 'field_catalog_prefix',
    'title' => 'title',
    'view' => 'view',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_catalog_prefix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Catalog Number Prefix */
  $handler->display->display_options['fields']['field_catalog_prefix']['id'] = 'field_catalog_prefix';
  $handler->display->display_options['fields']['field_catalog_prefix']['table'] = 'field_data_field_catalog_prefix';
  $handler->display->display_options['fields']['field_catalog_prefix']['field'] = 'field_catalog_prefix';
  $handler->display->display_options['fields']['field_catalog_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_prefix']['settings'] = array(
    'field_formatter_label' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_catalog_prefix] - [title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Next Class Date';
  $handler->display->display_options['fields']['view']['empty'] = 'No classes offered';
  $handler->display->display_options['fields']['view']['view'] = 'next_class_course';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  $handler->display->display_options['pane_category']['name'] = 'Course Manual Listing';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Course Description */
  $handler = $view->new_display('panel_pane', 'Course Description', 'panel_pane_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Course Manual Listing';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['course_manual_listings'] = $view;

  $view = new view();
  $view->name = 'ilr_filtered_courses';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ILR Filtered Courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sdc_course' => 'sdc_course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Sponsor (field_course_sponsor_reference) */
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['id'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['table'] = 'field_data_field_course_sponsor_reference';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['field'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['operator_id'] = 'field_course_sponsor_reference_tid_op';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['label'] = 'Sponsor(s)';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['operator'] = 'field_course_sponsor_reference_tid_op';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['identifier'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
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
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['vocabulary'] = 'course_sponsor';
  /* Filter criterion: Content: Class Dates -  start date (field_class_dates) */
  $handler->display->display_options['filters']['field_class_dates_value']['id'] = 'field_class_dates_value';
  $handler->display->display_options['filters']['field_class_dates_value']['table'] = 'field_data_field_class_dates';
  $handler->display->display_options['filters']['field_class_dates_value']['field'] = 'field_class_dates_value';
  $handler->display->display_options['filters']['field_class_dates_value']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['field_class_dates_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_class_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_class_dates_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_dates_value']['expose']['operator_id'] = 'field_class_dates_value_op';
  $handler->display->display_options['filters']['field_class_dates_value']['expose']['label'] = 'Class Start Date';
  $handler->display->display_options['filters']['field_class_dates_value']['expose']['operator'] = 'field_class_dates_value_op';
  $handler->display->display_options['filters']['field_class_dates_value']['expose']['identifier'] = 'field_class_dates_value';
  $handler->display->display_options['filters']['field_class_dates_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_class_dates_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Topic (field_course_topic_reference) */
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['id'] = 'field_course_topic_reference_tid';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['table'] = 'field_data_field_course_topic_reference';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['field'] = 'field_course_topic_reference_tid';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['value'] = '';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['operator_id'] = 'field_course_topic_reference_tid_op';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['label'] = 'Topic(s)';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['operator'] = 'field_course_topic_reference_tid_op';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['identifier'] = 'field_course_topic_reference_tid';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
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
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['vocabulary'] = 'course_topic';
  /* Filter criterion: Content: Format (field_course_format_reference) */
  $handler->display->display_options['filters']['field_course_format_reference_tid']['id'] = 'field_course_format_reference_tid';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['table'] = 'field_data_field_course_format_reference';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['field'] = 'field_course_format_reference_tid';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_course_format_reference_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['operator_id'] = 'field_course_format_reference_tid_op';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['label'] = 'Format(s)';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['operator'] = 'field_course_format_reference_tid_op';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['identifier'] = 'field_course_format_reference_tid';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
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
  $handler->display->display_options['filters']['field_course_format_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['vocabulary'] = 'course_format';
  /* Filter criterion: Content: Keywords (field_keywords) */
  $handler->display->display_options['filters']['field_keywords_tid']['id'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['filters']['field_keywords_tid']['field'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_keywords_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['operator_id'] = 'field_keywords_tid_op';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['label'] = 'Keyword(s)';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['operator'] = 'field_keywords_tid_op';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['identifier'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
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
  $handler->display->display_options['filters']['field_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_keywords_tid']['vocabulary'] = 'course_keywords';
  /* Filter criterion: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['field_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 1;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Content: Online Class (field_online_class) */
  $handler->display->display_options['filters']['field_online_class_value']['id'] = 'field_online_class_value';
  $handler->display->display_options['filters']['field_online_class_value']['table'] = 'field_data_field_online_class';
  $handler->display->display_options['filters']['field_online_class_value']['field'] = 'field_online_class_value';
  $handler->display->display_options['filters']['field_online_class_value']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['field_online_class_value']['group'] = 1;
  $handler->display->display_options['filters']['field_online_class_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_online_class_value']['expose']['operator_id'] = 'field_online_class_value_op';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['label'] = 'Online Classes Only';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['operator'] = 'field_online_class_value_op';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['identifier'] = 'field_online_class_value';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Content: Class Dates -  start date (field_class_dates) */
  $handler->display->display_options['filters']['field_class_dates_value_1']['id'] = 'field_class_dates_value_1';
  $handler->display->display_options['filters']['field_class_dates_value_1']['table'] = 'field_data_field_class_dates';
  $handler->display->display_options['filters']['field_class_dates_value_1']['field'] = 'field_class_dates_value';
  $handler->display->display_options['filters']['field_class_dates_value_1']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['field_class_dates_value_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_class_dates_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_class_dates_value_1']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_class_dates_value_1']['year_range'] = '-0:+10';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;

  /* Display: Filtered Courses with Class Dates */
  $handler = $view->new_display('panel_pane', 'Filtered Courses with Class Dates', 'bean_pane_filtered');
  $handler->display->display_options['display_description'] = 'Provides a listing of courses filtered by different criteria.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_course_node']['id'] = 'reverse_field_course_node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['field'] = 'reverse_field_course_node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['required'] = TRUE;
  $handler->display->display_options['pane_title'] = 'Bean Tilte';
  $handler->display->display_options['pane_category']['name'] = 'Filtered Courses';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Filtered Courses Without Class Dates */
  $handler = $view->new_display('panel_pane', 'Filtered Courses Without Class Dates', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Provides a listing of courses filtered by different criteria. Not filtering by dates.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sdc_course' => 'sdc_course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Sponsor (field_course_sponsor_reference) */
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['id'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['table'] = 'field_data_field_course_sponsor_reference';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['field'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['operator_id'] = 'field_course_sponsor_reference_tid_op';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['label'] = 'Sponsor(s)';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['operator'] = 'field_course_sponsor_reference_tid_op';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['identifier'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
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
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['vocabulary'] = 'course_sponsor';
  /* Filter criterion: Content: Topic (field_course_topic_reference) */
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['id'] = 'field_course_topic_reference_tid';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['table'] = 'field_data_field_course_topic_reference';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['field'] = 'field_course_topic_reference_tid';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['operator_id'] = 'field_course_topic_reference_tid_op';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['label'] = 'Topic (field_course_topic_reference)';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['operator'] = 'field_course_topic_reference_tid_op';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['identifier'] = 'field_course_topic_reference_tid';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
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
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['vocabulary'] = 'course_topic';
  /* Filter criterion: Content: Format (field_course_format_reference) */
  $handler->display->display_options['filters']['field_course_format_reference_tid']['id'] = 'field_course_format_reference_tid';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['table'] = 'field_data_field_course_format_reference';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['field'] = 'field_course_format_reference_tid';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_course_format_reference_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['operator_id'] = 'field_course_format_reference_tid_op';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['label'] = 'Format(s)';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['operator'] = 'field_course_format_reference_tid_op';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['identifier'] = 'field_course_format_reference_tid';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
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
  $handler->display->display_options['filters']['field_course_format_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['vocabulary'] = 'course_format';
  /* Filter criterion: Content: Keywords (field_keywords) */
  $handler->display->display_options['filters']['field_keywords_tid']['id'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['filters']['field_keywords_tid']['field'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_keywords_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['operator_id'] = 'field_keywords_tid_op';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['label'] = 'Keyword(s)';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['operator'] = 'field_keywords_tid_op';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['identifier'] = 'field_keywords_tid';
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_keywords_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
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
  $handler->display->display_options['filters']['field_keywords_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_keywords_tid']['vocabulary'] = 'course_keywords';
  /* Filter criterion: Content: On Demand (field_on_demand) */
  $handler->display->display_options['filters']['field_on_demand_value']['id'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['filters']['field_on_demand_value']['field'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['group'] = 1;
  $handler->display->display_options['filters']['field_on_demand_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_on_demand_value']['expose']['operator_id'] = 'field_on_demand_value_op';
  $handler->display->display_options['filters']['field_on_demand_value']['expose']['label'] = 'On Demand';
  $handler->display->display_options['filters']['field_on_demand_value']['expose']['operator'] = 'field_on_demand_value_op';
  $handler->display->display_options['filters']['field_on_demand_value']['expose']['identifier'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['pane_category']['name'] = 'Filtered Courses';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['ilr_filtered_courses'] = $view;

  $view = new view();
  $view->name = 'next_class_course';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SDC Next Class Course';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = 'custom';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '7200';
  $handler->display->display_options['cache']['output_lifespan'] = 'custom';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '7200';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '&nbsp;';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Class Dates */
  $handler->display->display_options['fields']['field_class_dates']['id'] = 'field_class_dates';
  $handler->display->display_options['fields']['field_class_dates']['table'] = 'field_data_field_class_dates';
  $handler->display->display_options['fields']['field_class_dates']['field'] = 'field_class_dates';
  $handler->display->display_options['fields']['field_class_dates']['group_type'] = 'min';
  $handler->display->display_options['fields']['field_class_dates']['label'] = '';
  $handler->display->display_options['fields']['field_class_dates']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_class_dates']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_class_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_dates']['settings'] = array(
    'format_type' => 'ilr_short_day_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'field_formatter_label' => '',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Class Dates -  start date (field_class_dates) */
  $handler->display->display_options['sorts']['field_class_dates_value']['id'] = 'field_class_dates_value';
  $handler->display->display_options['sorts']['field_class_dates_value']['table'] = 'field_data_field_class_dates';
  $handler->display->display_options['sorts']['field_class_dates_value']['field'] = 'field_class_dates_value';
  /* Contextual filter: Field: Course (field_course) */
  $handler->display->display_options['arguments']['field_course_target_id']['id'] = 'field_course_target_id';
  $handler->display->display_options['arguments']['field_course_target_id']['table'] = 'field_data_field_course';
  $handler->display->display_options['arguments']['field_course_target_id']['field'] = 'field_course_target_id';
  $handler->display->display_options['arguments']['field_course_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_course_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_course_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sdc_class' => 'sdc_class',
  );
  /* Filter criterion: Content: Class Dates -  start date (field_class_dates) */
  $handler->display->display_options['filters']['field_class_dates_value']['id'] = 'field_class_dates_value';
  $handler->display->display_options['filters']['field_class_dates_value']['table'] = 'field_data_field_class_dates';
  $handler->display->display_options['filters']['field_class_dates_value']['field'] = 'field_class_dates_value';
  $handler->display->display_options['filters']['field_class_dates_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_class_dates_value']['default_date'] = 'now';
  $export['next_class_course'] = $view;

  $view = new view();
  $view->name = 'sdc_class_calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'SDC Class Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Workshops';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_month';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = 'custom';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '7200';
  $handler->display->display_options['cache']['output_lifespan'] = 'custom';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '7200';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no workshops that match your search.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_course_target_id']['id'] = 'field_course_target_id';
  $handler->display->display_options['relationships']['field_course_target_id']['table'] = 'field_data_field_course';
  $handler->display->display_options['relationships']['field_course_target_id']['field'] = 'field_course_target_id';
  $handler->display->display_options['relationships']['field_course_target_id']['label'] = 'Course';
  $handler->display->display_options['relationships']['field_course_target_id']['required'] = TRUE;
  /* Relationship: Content: Sponsor (field_course_sponsor_reference) */
  $handler->display->display_options['relationships']['field_course_sponsor_reference_tid']['id'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['relationships']['field_course_sponsor_reference_tid']['table'] = 'field_data_field_course_sponsor_reference';
  $handler->display->display_options['relationships']['field_course_sponsor_reference_tid']['field'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['relationships']['field_course_sponsor_reference_tid']['relationship'] = 'field_course_target_id';
  /* Field: Content: Sponsor */
  $handler->display->display_options['fields']['field_course_sponsor_reference']['id'] = 'field_course_sponsor_reference';
  $handler->display->display_options['fields']['field_course_sponsor_reference']['table'] = 'field_data_field_course_sponsor_reference';
  $handler->display->display_options['fields']['field_course_sponsor_reference']['field'] = 'field_course_sponsor_reference';
  $handler->display->display_options['fields']['field_course_sponsor_reference']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['fields']['field_course_sponsor_reference']['label'] = '';
  $handler->display->display_options['fields']['field_course_sponsor_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_sponsor_reference']['element_type'] = '0';
  $handler->display->display_options['fields']['field_course_sponsor_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_sponsor_reference']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_course_sponsor_reference']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_course_sponsor_reference']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_course_sponsor_reference']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_course_sponsor_reference']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_course_sponsor_reference']['field_api_classes'] = TRUE;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_course_sponsor_reference_tid';
  /* Sort criterion: Content: Class Dates -  start date (field_class_dates) */
  $handler->display->display_options['sorts']['field_class_dates_value']['id'] = 'field_class_dates_value';
  $handler->display->display_options['sorts']['field_class_dates_value']['table'] = 'field_data_field_class_dates';
  $handler->display->display_options['sorts']['field_class_dates_value']['field'] = 'field_class_dates_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: Content: On Demand (field_on_demand) */
  $handler->display->display_options['filters']['field_on_demand_value']['id'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['filters']['field_on_demand_value']['field'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_on_demand_value']['group'] = 1;
  /* Filter criterion: Content: Sponsor (field_course_sponsor_reference) */
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['id'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['table'] = 'field_data_field_course_sponsor_reference';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['field'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['operator_id'] = 'field_course_sponsor_reference_tid_op';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['label'] = 'Centers, Institutes, and Programs';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['operator'] = 'field_course_sponsor_reference_tid_op';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['identifier'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
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
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['vocabulary'] = 'course_sponsor';
  /* Filter criterion: Content: Online Class (field_online_class) */
  $handler->display->display_options['filters']['field_online_class_value']['id'] = 'field_online_class_value';
  $handler->display->display_options['filters']['field_online_class_value']['table'] = 'field_data_field_online_class';
  $handler->display->display_options['filters']['field_online_class_value']['field'] = 'field_online_class_value';
  $handler->display->display_options['filters']['field_online_class_value']['group'] = 1;
  $handler->display->display_options['filters']['field_online_class_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_online_class_value']['expose']['operator_id'] = 'field_online_class_value_op';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['label'] = 'Online or In-person';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['operator'] = 'field_online_class_value_op';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['identifier'] = 'field_online_class_value';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
  );

  /* Display: Month LIst */
  $handler = $view->new_display('page', 'Month LIst', 'page_month');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_course_sponsor_reference',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_class_dates.field_class_dates_value' => 'field_data_field_class_dates.field_class_dates_value',
  );
  $handler->display->display_options['path'] = 'professional-programs/public-offerings/calendar-month';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_nav');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Link */
  $handler->display->display_options['footer']['link']['id'] = 'link';
  $handler->display->display_options['footer']['link']['table'] = 'views';
  $handler->display->display_options['footer']['link']['field'] = 'link';
  $handler->display->display_options['footer']['link']['label'] = 'On Demand Link';
  $handler->display->display_options['footer']['link']['empty'] = TRUE;
  $handler->display->display_options['footer']['link']['text'] = 'View On Demand Courses';
  $handler->display->display_options['footer']['link']['path'] = 'professional-programs/public-offerings/ondemand';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_class_dates.field_class_dates_value' => 'field_data_field_class_dates.field_class_dates_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: Content: On Demand (field_on_demand) */
  $handler->display->display_options['filters']['field_on_demand_value']['id'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['filters']['field_on_demand_value']['field'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_on_demand_value']['group'] = 1;
  /* Filter criterion: Content: Online Class (field_online_class) */
  $handler->display->display_options['filters']['field_online_class_value']['id'] = 'field_online_class_value';
  $handler->display->display_options['filters']['field_online_class_value']['table'] = 'field_data_field_online_class';
  $handler->display->display_options['filters']['field_online_class_value']['field'] = 'field_online_class_value';
  $handler->display->display_options['filters']['field_online_class_value']['group'] = 1;
  $handler->display->display_options['filters']['field_online_class_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_online_class_value']['expose']['operator_id'] = 'field_online_class_value_op';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['operator'] = 'field_online_class_value_op';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['identifier'] = 'field_online_class_value';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Content: Sponsor (field_course_sponsor_reference) */
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['id'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['table'] = 'field_data_field_course_sponsor_reference';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['field'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['operator_id'] = 'field_course_sponsor_reference_tid_op';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['operator'] = 'field_course_sponsor_reference_tid_op';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['identifier'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
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
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['vocabulary'] = 'course_sponsor';

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_sdc_department',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_class_dates.field_class_dates_value' => 'field_data_field_class_dates.field_class_dates_value',
  );
  $handler->display->display_options['path'] = 'sdc-catalog';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_class_dates.field_class_dates_value' => 'field_data_field_class_dates.field_class_dates_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-class-dates/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_day');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_course_sponsor_reference',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_class_dates.field_class_dates_value' => 'field_data_field_class_dates.field_class_dates_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  /* Filter criterion: Content: On Demand (field_on_demand) */
  $handler->display->display_options['filters']['field_on_demand_value']['id'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['filters']['field_on_demand_value']['field'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_on_demand_value']['group'] = 1;
  /* Filter criterion: Content: Sponsor (field_course_sponsor_reference) */
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['id'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['table'] = 'field_data_field_course_sponsor_reference';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['field'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['operator_id'] = 'field_course_sponsor_reference_tid_op';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['label'] = 'Centers, Institutes, and Programs';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['operator'] = 'field_course_sponsor_reference_tid_op';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['identifier'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
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
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['vocabulary'] = 'course_sponsor';
  /* Filter criterion: Content: Online Class (field_online_class) */
  $handler->display->display_options['filters']['field_online_class_value']['id'] = 'field_online_class_value';
  $handler->display->display_options['filters']['field_online_class_value']['table'] = 'field_data_field_online_class';
  $handler->display->display_options['filters']['field_online_class_value']['field'] = 'field_online_class_value';
  $handler->display->display_options['filters']['field_online_class_value']['group'] = 1;
  $handler->display->display_options['filters']['field_online_class_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_online_class_value']['expose']['operator_id'] = 'field_online_class_value_op';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['label'] = 'Online or In-person';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['operator'] = 'field_online_class_value_op';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['identifier'] = 'field_online_class_value';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    9 => 0,
    6 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['path'] = 'professional-programs/public-offerings/calendar-day';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Class Dates */
  $handler->display->display_options['fields']['field_class_dates']['id'] = 'field_class_dates';
  $handler->display->display_options['fields']['field_class_dates']['table'] = 'field_data_field_class_dates';
  $handler->display->display_options['fields']['field_class_dates']['field'] = 'field_class_dates';
  $handler->display->display_options['fields']['field_class_dates']['label'] = '';
  $handler->display->display_options['fields']['field_class_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_dates']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_class_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_class_dates']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_class_dates']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_class_dates.field_class_dates_value' => 'field_data_field_class_dates.field_class_dates_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-class-dates/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_class_dates.field_class_dates_value' => 'field_data_field_class_dates.field_class_dates_value',
  );
  $export['sdc_class_calendar'] = $view;

  $view = new view();
  $view->name = 'sdc_course_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SDC Course Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Public Offerings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = 'custom';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '7200';
  $handler->display->display_options['cache']['output_lifespan'] = 'custom';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '7200';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset filter';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Many programs are available for custom delivery to your organization. Please request more information for programs listed with no upcoming dates.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No courses were found that match everything that you filtered on. Try selecting fewer filter options.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Sponsor (field_course_sponsor_reference) */
  $handler->display->display_options['relationships']['field_course_sponsor_reference_tid']['id'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['relationships']['field_course_sponsor_reference_tid']['table'] = 'field_data_field_course_sponsor_reference';
  $handler->display->display_options['relationships']['field_course_sponsor_reference_tid']['field'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['relationships']['field_course_sponsor_reference_tid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_course_node']['id'] = 'reverse_field_course_node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['field'] = 'reverse_field_course_node';
  /* Field: Content: Catalog Number Prefix */
  $handler->display->display_options['fields']['field_catalog_prefix']['id'] = 'field_catalog_prefix';
  $handler->display->display_options['fields']['field_catalog_prefix']['table'] = 'field_data_field_catalog_prefix';
  $handler->display->display_options['fields']['field_catalog_prefix']['field'] = 'field_catalog_prefix';
  $handler->display->display_options['fields']['field_catalog_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_prefix']['settings'] = array(
    'field_formatter_label' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_catalog_prefix])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '350';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Next Class Date';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['empty'] = ' ';
  $handler->display->display_options['fields']['view']['view'] = 'next_class_course';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: On Demand */
  $handler->display->display_options['fields']['field_on_demand']['id'] = 'field_on_demand';
  $handler->display->display_options['fields']['field_on_demand']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['fields']['field_on_demand']['field'] = 'field_on_demand';
  $handler->display->display_options['fields']['field_on_demand']['label'] = 'Next Class Date';
  $handler->display->display_options['fields']['field_on_demand']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_on_demand']['alter']['text'] = 'Available On Demand';
  $handler->display->display_options['fields']['field_on_demand']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_on_demand']['empty'] = '[view]';
  $handler->display->display_options['fields']['field_on_demand']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_on_demand']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_on_demand']['settings'] = array(
    'field_formatter_label' => '',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Sort criterion: Content: On Demand (field_on_demand) */
  $handler->display->display_options['sorts']['field_on_demand_value']['id'] = 'field_on_demand_value';
  $handler->display->display_options['sorts']['field_on_demand_value']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['sorts']['field_on_demand_value']['field'] = 'field_on_demand_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    3 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sdc_course' => 'sdc_course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Topic (field_course_topic_reference) */
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['id'] = 'field_course_topic_reference_tid';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['table'] = 'field_data_field_course_topic_reference';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['field'] = 'field_course_topic_reference_tid';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['operator_id'] = 'field_course_topic_reference_tid_op';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['operator'] = 'field_course_topic_reference_tid_op';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['identifier'] = 'field_course_topic_reference_tid';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
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
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_topic_reference_tid']['vocabulary'] = 'course_topic';
  /* Filter criterion: Content: Format (field_course_format_reference) */
  $handler->display->display_options['filters']['field_course_format_reference_tid']['id'] = 'field_course_format_reference_tid';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['table'] = 'field_data_field_course_format_reference';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['field'] = 'field_course_format_reference_tid';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_course_format_reference_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['operator_id'] = 'field_course_format_reference_tid_op';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['label'] = 'Format';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['operator'] = 'field_course_format_reference_tid_op';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['identifier'] = 'field_course_format_reference_tid';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_course_format_reference_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
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
  $handler->display->display_options['filters']['field_course_format_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_format_reference_tid']['vocabulary'] = 'course_format';
  /* Filter criterion: Content: Sponsor (field_course_sponsor_reference) */
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['id'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['table'] = 'field_data_field_course_sponsor_reference';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['field'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['operator_id'] = 'field_course_sponsor_reference_tid_op';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['label'] = 'Centers, Institutes, and Programs';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['operator'] = 'field_course_sponsor_reference_tid_op';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['identifier'] = 'field_course_sponsor_reference_tid';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
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
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_course_sponsor_reference_tid']['vocabulary'] = 'course_sponsor';
  /* Filter criterion: Content: Class Dates -  start date (field_class_dates) */
  $handler->display->display_options['filters']['field_class_dates_value']['id'] = 'field_class_dates_value';
  $handler->display->display_options['filters']['field_class_dates_value']['table'] = 'field_data_field_class_dates';
  $handler->display->display_options['filters']['field_class_dates_value']['field'] = 'field_class_dates_value';
  $handler->display->display_options['filters']['field_class_dates_value']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['field_class_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_class_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_class_dates_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_dates_value']['expose']['operator_id'] = 'field_class_dates_value_op';
  $handler->display->display_options['filters']['field_class_dates_value']['expose']['label'] = 'Start date';
  $handler->display->display_options['filters']['field_class_dates_value']['expose']['operator'] = 'field_class_dates_value_op';
  $handler->display->display_options['filters']['field_class_dates_value']['expose']['identifier'] = 'field_class_dates_value';
  $handler->display->display_options['filters']['field_class_dates_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    11 => 0,
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
  $handler->display->display_options['filters']['field_class_dates_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_class_dates_value']['year_range'] = '-0:+1';
  /* Filter criterion: Content: Class Dates - end date (field_class_dates:value2) */
  $handler->display->display_options['filters']['field_class_dates_value2']['id'] = 'field_class_dates_value2';
  $handler->display->display_options['filters']['field_class_dates_value2']['table'] = 'field_data_field_class_dates';
  $handler->display->display_options['filters']['field_class_dates_value2']['field'] = 'field_class_dates_value2';
  $handler->display->display_options['filters']['field_class_dates_value2']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['field_class_dates_value2']['operator'] = '<=';
  $handler->display->display_options['filters']['field_class_dates_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_class_dates_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_dates_value2']['expose']['operator_id'] = 'field_class_dates_value2_op';
  $handler->display->display_options['filters']['field_class_dates_value2']['expose']['label'] = 'End date';
  $handler->display->display_options['filters']['field_class_dates_value2']['expose']['operator'] = 'field_class_dates_value2_op';
  $handler->display->display_options['filters']['field_class_dates_value2']['expose']['identifier'] = 'field_class_dates_value2';
  $handler->display->display_options['filters']['field_class_dates_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    11 => 0,
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
  $handler->display->display_options['filters']['field_class_dates_value2']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_class_dates_value2']['year_range'] = '-0:+1';
  /* Filter criterion: Content: Setting (field_setting) */
  $handler->display->display_options['filters']['field_setting_value_1']['id'] = 'field_setting_value_1';
  $handler->display->display_options['filters']['field_setting_value_1']['table'] = 'field_data_field_setting';
  $handler->display->display_options['filters']['field_setting_value_1']['field'] = 'field_setting_value';
  $handler->display->display_options['filters']['field_setting_value_1']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['field_setting_value_1']['value'] = array(
    'online' => 'online',
    'blended' => 'blended',
  );
  $handler->display->display_options['filters']['field_setting_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_setting_value_1']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: On Demand (field_on_demand) */
  $handler->display->display_options['filters']['field_on_demand_value']['id'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['filters']['field_on_demand_value']['field'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['field_on_demand_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_on_demand_value']['group'] = 2;
  $handler->display->display_options['filters']['field_on_demand_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Setting (field_setting) */
  $handler->display->display_options['filters']['field_setting_value']['id'] = 'field_setting_value';
  $handler->display->display_options['filters']['field_setting_value']['table'] = 'field_data_field_setting';
  $handler->display->display_options['filters']['field_setting_value']['field'] = 'field_setting_value';
  $handler->display->display_options['filters']['field_setting_value']['value'] = array(
    'online' => 'online',
    'blended' => 'blended',
  );
  $handler->display->display_options['filters']['field_setting_value']['group'] = 2;
  $handler->display->display_options['filters']['field_setting_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: On Demand (field_on_demand) */
  $handler->display->display_options['filters']['field_on_demand_value_1']['id'] = 'field_on_demand_value_1';
  $handler->display->display_options['filters']['field_on_demand_value_1']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['filters']['field_on_demand_value_1']['field'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value_1']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_on_demand_value_1']['group'] = 2;
  $handler->display->display_options['filters']['field_on_demand_value_1']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['field_address_locality']['group'] = 3;
  $handler->display->display_options['filters']['field_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator_id'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_address_locality']['expose']['operator'] = 'field_address_locality_op';
  $handler->display->display_options['filters']['field_address_locality']['expose']['identifier'] = 'field_address_locality';
  $handler->display->display_options['filters']['field_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    11 => 0,
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
  /* Filter criterion: Content: Class Dates -  start date (field_class_dates) */
  $handler->display->display_options['filters']['field_class_dates_value_1']['id'] = 'field_class_dates_value_1';
  $handler->display->display_options['filters']['field_class_dates_value_1']['table'] = 'field_data_field_class_dates';
  $handler->display->display_options['filters']['field_class_dates_value_1']['field'] = 'field_class_dates_value';
  $handler->display->display_options['filters']['field_class_dates_value_1']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['field_class_dates_value_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_class_dates_value_1']['group'] = 3;
  $handler->display->display_options['filters']['field_class_dates_value_1']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'professional-programs/public-offerings';
  $export['sdc_course_listing'] = $view;

  $view = new view();
  $view->name = 'sdc_current_departments';
  $view->description = 'Used for exposed filter of sdc_full_list to only show departments that have current classes';
  $view->tag = 'default,sdc';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'SDC Current Departments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content using Sponsor */
  $handler->display->display_options['relationships']['reverse_field_course_sponsor_reference_node']['id'] = 'reverse_field_course_sponsor_reference_node';
  $handler->display->display_options['relationships']['reverse_field_course_sponsor_reference_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_course_sponsor_reference_node']['field'] = 'reverse_field_course_sponsor_reference_node';
  $handler->display->display_options['relationships']['reverse_field_course_sponsor_reference_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_course_node']['id'] = 'reverse_field_course_node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['field'] = 'reverse_field_course_node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['relationship'] = 'reverse_field_course_sponsor_reference_node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['required'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'course_sponsor' => 'course_sponsor',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: On Demand (field_on_demand) */
  $handler->display->display_options['filters']['field_on_demand_value']['id'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['filters']['field_on_demand_value']['field'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['relationship'] = 'reverse_field_course_sponsor_reference_node';
  $handler->display->display_options['filters']['field_on_demand_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_on_demand_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'reverse_field_course_sponsor_reference_node';
  $handler->display->display_options['filters']['status_1']['value'] = '1';

  /* Display: Reference Any */
  $handler = $view->new_display('entityreference', 'Reference Any', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Reference Month */
  $handler = $view->new_display('entityreference', 'Reference Month', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Except arg for month';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Class Dates -  start date (field_class_dates) */
  $handler->display->display_options['arguments']['field_class_dates_value']['id'] = 'field_class_dates_value';
  $handler->display->display_options['arguments']['field_class_dates_value']['table'] = 'field_data_field_class_dates';
  $handler->display->display_options['arguments']['field_class_dates_value']['field'] = 'field_class_dates_value';
  $handler->display->display_options['arguments']['field_class_dates_value']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['arguments']['field_class_dates_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_class_dates_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_class_dates_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_class_dates_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_class_dates_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_class_dates_value']['use_fromto'] = 'no';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'course_sponsor' => 'course_sponsor',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: On Demand (field_on_demand) */
  $handler->display->display_options['filters']['field_on_demand_value']['id'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['filters']['field_on_demand_value']['field'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['relationship'] = 'reverse_field_course_sponsor_reference_node';
  $handler->display->display_options['filters']['field_on_demand_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_on_demand_value']['value'] = array(
    1 => '1',
  );

  /* Display: Reference Day */
  $handler = $view->new_display('entityreference', 'Reference Day', 'entityreference_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Class Dates -  start date (field_class_dates) */
  $handler->display->display_options['arguments']['field_class_dates_value']['id'] = 'field_class_dates_value';
  $handler->display->display_options['arguments']['field_class_dates_value']['table'] = 'field_data_field_class_dates';
  $handler->display->display_options['arguments']['field_class_dates_value']['field'] = 'field_class_dates_value';
  $handler->display->display_options['arguments']['field_class_dates_value']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['arguments']['field_class_dates_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_class_dates_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_class_dates_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_class_dates_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_class_dates_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_class_dates_value']['granularity'] = 'day';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'course_sponsor' => 'course_sponsor',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: On Demand (field_on_demand) */
  $handler->display->display_options['filters']['field_on_demand_value']['id'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['filters']['field_on_demand_value']['field'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['field_on_demand_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_on_demand_value']['value'] = array(
    1 => '1',
  );
  $export['sdc_current_departments'] = $view;

  $view = new view();
  $view->name = 'sdc_ondemand';
  $view->description = 'List all SDC ondemand online courses';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'sdc-ondemand';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'On Demand Courses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sdc_course' => 'sdc_course',
  );
  /* Filter criterion: Content: On Demand (field_on_demand) */
  $handler->display->display_options['filters']['field_on_demand_value']['id'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['filters']['field_on_demand_value']['field'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'professional-programs/public-offerings/ondemand';
  $export['sdc_ondemand'] = $view;

  return $export;
}
