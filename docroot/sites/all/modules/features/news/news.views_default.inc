<?php
/**
 * @file
 * news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_archive';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Archive';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News Archive';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Select';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_published_date',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Published Date Day */
  $handler->display->display_options['fields']['field_published_date_1']['id'] = 'field_published_date_1';
  $handler->display->display_options['fields']['field_published_date_1']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['fields']['field_published_date_1']['field'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date_1']['ui_name'] = 'Published Date Day';
  $handler->display->display_options['fields']['field_published_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_published_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_published_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published_date_1']['settings'] = array(
    'format_type' => 'ilr_short_day_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'field_formatter_label' => '',
  );
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_published_date']['id'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['fields']['field_published_date']['field'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date']['label'] = '';
  $handler->display->display_options['fields']['field_published_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_published_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_published_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_published_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_published_date']['settings'] = array(
    'format_type' => 'ilr_month_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_published_date']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] - [field_published_date_1]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Publication Date (field_published_date) */
  $handler->display->display_options['sorts']['field_published_date_value']['id'] = 'field_published_date_value';
  $handler->display->display_options['sorts']['field_published_date_value']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['sorts']['field_published_date_value']['field'] = 'field_published_date_value';
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
    'news_item' => 'news_item',
  );
  /* Filter criterion: Content: Publication Date (field_published_date) */
  $handler->display->display_options['filters']['field_published_date_value']['id'] = 'field_published_date_value';
  $handler->display->display_options['filters']['field_published_date_value']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['filters']['field_published_date_value']['field'] = 'field_published_date_value';
  $handler->display->display_options['filters']['field_published_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_published_date_value']['expose']['operator_id'] = 'field_published_date_value_op';
  $handler->display->display_options['filters']['field_published_date_value']['expose']['operator'] = 'field_published_date_value_op';
  $handler->display->display_options['filters']['field_published_date_value']['expose']['identifier'] = 'field_published_date_value';
  $handler->display->display_options['filters']['field_published_date_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_published_date_value']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['field_published_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_published_date_value']['year_range'] = '-8:+0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'about-ilr/news/archive';
  $export['news_archive'] = $view;

  return $export;
}
