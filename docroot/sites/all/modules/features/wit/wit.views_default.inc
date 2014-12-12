<?php
/**
 * @file
 * wit.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wit_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'wit_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Wit Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'collapse-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'collapse-list';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Publication Date (field_published_date) */
  $handler->display->display_options['sorts']['field_published_date_value']['id'] = 'field_published_date_value';
  $handler->display->display_options['sorts']['field_published_date_value']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['sorts']['field_published_date_value']['field'] = 'field_published_date_value';
  $handler->display->display_options['sorts']['field_published_date_value']['order'] = 'DESC';
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
    'wit_article' => 'wit_article',
  );
  /* Filter criterion: Content: Publication Date (field_published_date) */
  $handler->display->display_options['filters']['field_published_date_value']['id'] = 'field_published_date_value';
  $handler->display->display_options['filters']['field_published_date_value']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['filters']['field_published_date_value']['field'] = 'field_published_date_value';
  $handler->display->display_options['filters']['field_published_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_published_date_value']['value']['value'] = '2014-12-10';
  $handler->display->display_options['filters']['field_published_date_value']['form_type'] = 'date_text';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_current_pub');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'wit_article' => 'wit_article',
  );
  /* Filter criterion: Content: Publication Date (field_published_date) */
  $handler->display->display_options['filters']['field_published_date_value']['id'] = 'field_published_date_value';
  $handler->display->display_options['filters']['field_published_date_value']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['filters']['field_published_date_value']['field'] = 'field_published_date_value';
  $handler->display->display_options['filters']['field_published_date_value']['value']['value'] = '2014-12-10';
  $handler->display->display_options['filters']['field_published_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['inherit_pager'] = TRUE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $export['wit_listing'] = $view;

  return $export;
}
