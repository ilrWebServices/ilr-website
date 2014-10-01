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
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
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
  /* Relationship: Content: Department (field_sdc_department) */
  $handler->display->display_options['relationships']['field_sdc_department_tid']['id'] = 'field_sdc_department_tid';
  $handler->display->display_options['relationships']['field_sdc_department_tid']['table'] = 'field_data_field_sdc_department';
  $handler->display->display_options['relationships']['field_sdc_department_tid']['field'] = 'field_sdc_department_tid';
  $handler->display->display_options['relationships']['field_sdc_department_tid']['relationship'] = 'field_course_target_id';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_sdc_department']['id'] = 'field_sdc_department';
  $handler->display->display_options['fields']['field_sdc_department']['table'] = 'field_data_field_sdc_department';
  $handler->display->display_options['fields']['field_sdc_department']['field'] = 'field_sdc_department';
  $handler->display->display_options['fields']['field_sdc_department']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['fields']['field_sdc_department']['label'] = '';
  $handler->display->display_options['fields']['field_sdc_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sdc_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sdc_department']['type'] = 'taxonomy_term_reference_plain';
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
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_sdc_department_tid';
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
  /* Filter criterion: Content: Department (field_sdc_department) ( reference filter) */
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['id'] = 'field_sdc_department_tid_entityreference_filter';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['table'] = 'field_data_field_sdc_department';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['field'] = 'field_sdc_department_tid_entityreference_filter';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['operator_id'] = 'field_sdc_department_tid_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['operator'] = 'field_sdc_department_tid_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['identifier'] = 'field_sdc_department_tid_entityreference_filter';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['reference_display'] = 'sdc_current_departments:entityreference_1';
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content: On Demand (field_on_demand) */
  $handler->display->display_options['filters']['field_on_demand_value']['id'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['filters']['field_on_demand_value']['field'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['value'] = array(
    0 => '0',
  );

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
  /* Filter criterion: Content: Department (field_sdc_department) ( reference filter) */
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['id'] = 'field_sdc_department_tid_entityreference_filter';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['table'] = 'field_data_field_sdc_department';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['field'] = 'field_sdc_department_tid_entityreference_filter';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['group'] = 1;
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['operator_id'] = 'field_sdc_department_tid_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['operator'] = 'field_sdc_department_tid_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['identifier'] = 'field_sdc_department_tid_entityreference_filter';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['reference_display'] = 'sdc_current_departments:entityreference_1';
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
  /* Relationship: Taxonomy term: Content using Department */
  $handler->display->display_options['relationships']['reverse_field_sdc_department_node']['id'] = 'reverse_field_sdc_department_node';
  $handler->display->display_options['relationships']['reverse_field_sdc_department_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_sdc_department_node']['field'] = 'reverse_field_sdc_department_node';
  $handler->display->display_options['relationships']['reverse_field_sdc_department_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_course_node']['id'] = 'reverse_field_course_node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['field'] = 'reverse_field_course_node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['relationship'] = 'reverse_field_sdc_department_node';
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
    'sdc_department' => 'sdc_department',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Class Dates -  start date (field_class_dates) */
  $handler->display->display_options['filters']['field_class_dates_value']['id'] = 'field_class_dates_value';
  $handler->display->display_options['filters']['field_class_dates_value']['table'] = 'field_data_field_class_dates';
  $handler->display->display_options['filters']['field_class_dates_value']['field'] = 'field_class_dates_value';
  $handler->display->display_options['filters']['field_class_dates_value']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['filters']['field_class_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_class_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: On Demand (field_on_demand) */
  $handler->display->display_options['filters']['field_on_demand_value']['id'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['filters']['field_on_demand_value']['field'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['relationship'] = 'reverse_field_sdc_department_node';
  $handler->display->display_options['filters']['field_on_demand_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_on_demand_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'reverse_field_sdc_department_node';
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
    'sdc_department' => 'sdc_department',
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
  $handler->display->display_options['filters']['field_on_demand_value']['relationship'] = 'reverse_field_sdc_department_node';
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
    'sdc_department' => 'sdc_department',
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
  $view->name = 'sdc_full_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SDC Full List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Public Offerings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No matches';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no workshops that match your search.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_course_target_id']['id'] = 'field_course_target_id';
  $handler->display->display_options['relationships']['field_course_target_id']['table'] = 'field_data_field_course';
  $handler->display->display_options['relationships']['field_course_target_id']['field'] = 'field_course_target_id';
  $handler->display->display_options['relationships']['field_course_target_id']['label'] = 'Course node';
  $handler->display->display_options['relationships']['field_course_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sdc_class' => 'sdc_class',
  );
  /* Filter criterion: Content: On Demand (field_on_demand) */
  $handler->display->display_options['filters']['field_on_demand_value']['id'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['table'] = 'field_data_field_on_demand';
  $handler->display->display_options['filters']['field_on_demand_value']['field'] = 'field_on_demand_value';
  $handler->display->display_options['filters']['field_on_demand_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Content: Class Dates -  start date (field_class_dates) */
  $handler->display->display_options['filters']['field_class_dates_value']['id'] = 'field_class_dates_value';
  $handler->display->display_options['filters']['field_class_dates_value']['table'] = 'field_data_field_class_dates';
  $handler->display->display_options['filters']['field_class_dates_value']['field'] = 'field_class_dates_value';
  $handler->display->display_options['filters']['field_class_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_class_dates_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_class_dates_value']['year_range'] = '-0:+3';
  /* Filter criterion: Content: Department (field_sdc_department) ( reference filter) */
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['id'] = 'field_sdc_department_tid_entityreference_filter';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['table'] = 'field_data_field_sdc_department';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['field'] = 'field_sdc_department_tid_entityreference_filter';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['operator_id'] = 'field_sdc_department_tid_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['operator'] = 'field_sdc_department_tid_entityreference_filter_op';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['identifier'] = 'field_sdc_department_tid_entityreference_filter';
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_sdc_department_tid_entityreference_filter']['reference_display'] = 'sdc_current_departments:entityreference_1';
  /* Filter criterion: Content: Online Class (field_online_class) */
  $handler->display->display_options['filters']['field_online_class_value']['id'] = 'field_online_class_value';
  $handler->display->display_options['filters']['field_online_class_value']['table'] = 'field_data_field_online_class';
  $handler->display->display_options['filters']['field_online_class_value']['field'] = 'field_online_class_value';
  $handler->display->display_options['filters']['field_online_class_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_online_class_value']['expose']['operator_id'] = 'field_online_class_value_op';
  $handler->display->display_options['filters']['field_online_class_value']['expose']['label'] = 'Online or In-person';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'professional-programs/public-offerings';
  $export['sdc_full_list'] = $view;

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
