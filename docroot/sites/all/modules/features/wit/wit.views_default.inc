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
  $view->description = 'See wit_views_pre_view for date filter code';
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

  $view = new view();
  $view->name = 'wit_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'WIT Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search the WIT Archive';
  $handler->display->display_options['css_class'] = 'chosen-filter';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Search instructions';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Enter your search criteria in the fields below. You do not need to fill in all fields.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No results text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found for the specified search criteria.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Publication Date */
  $handler->display->display_options['fields']['field_published_date']['id'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['fields']['field_published_date']['field'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_published_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'field_formatter_label' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Publication */
  $handler->display->display_options['fields']['field_term_publication']['id'] = 'field_term_publication';
  $handler->display->display_options['fields']['field_term_publication']['table'] = 'field_data_field_term_publication';
  $handler->display->display_options['fields']['field_term_publication']['field'] = 'field_term_publication';
  $handler->display->display_options['fields']['field_term_publication']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_term_publication']['settings'] = array(
    'field_formatter_label' => '',
  );
  /* Sort criterion: Content: Publication Date (field_published_date) */
  $handler->display->display_options['sorts']['field_published_date_value']['id'] = 'field_published_date_value';
  $handler->display->display_options['sorts']['field_published_date_value']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['sorts']['field_published_date_value']['field'] = 'field_published_date_value';
  $handler->display->display_options['sorts']['field_published_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Publication Date (field_published_date) */
  $handler->display->display_options['filters']['field_published_date_value_1']['id'] = 'field_published_date_value_1';
  $handler->display->display_options['filters']['field_published_date_value_1']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['filters']['field_published_date_value_1']['field'] = 'field_published_date_value';
  $handler->display->display_options['filters']['field_published_date_value_1']['operator'] = '!=';
  $handler->display->display_options['filters']['field_published_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_published_date_value_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_published_date_value_1']['year_range'] = '-1:+0';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Publication Date (field_published_date) */
  $handler->display->display_options['filters']['field_published_date_value']['id'] = 'field_published_date_value';
  $handler->display->display_options['filters']['field_published_date_value']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['filters']['field_published_date_value']['field'] = 'field_published_date_value';
  $handler->display->display_options['filters']['field_published_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_published_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_published_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_published_date_value']['expose']['operator_id'] = 'field_published_date_value_op';
  $handler->display->display_options['filters']['field_published_date_value']['expose']['label'] = 'Publication Date';
  $handler->display->display_options['filters']['field_published_date_value']['expose']['operator'] = 'field_published_date_value_op';
  $handler->display->display_options['filters']['field_published_date_value']['expose']['identifier'] = 'field_published_date_value_exposed';
  $handler->display->display_options['filters']['field_published_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    41 => 0,
    26 => 0,
    21 => 0,
    31 => 0,
    36 => 0,
    46 => 0,
  );
  $handler->display->display_options['filters']['field_published_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_published_date_value']['year_range'] = '1999:+0';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    41 => 0,
    26 => 0,
    21 => 0,
    31 => 0,
    36 => 0,
    46 => 0,
  );
  /* Filter criterion: Content: Author (field_author) */
  $handler->display->display_options['filters']['field_author_value']['id'] = 'field_author_value';
  $handler->display->display_options['filters']['field_author_value']['table'] = 'field_data_field_author';
  $handler->display->display_options['filters']['field_author_value']['field'] = 'field_author_value';
  $handler->display->display_options['filters']['field_author_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_author_value']['group'] = 1;
  $handler->display->display_options['filters']['field_author_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_author_value']['expose']['operator_id'] = 'field_author_value_op';
  $handler->display->display_options['filters']['field_author_value']['expose']['label'] = 'Author';
  $handler->display->display_options['filters']['field_author_value']['expose']['operator'] = 'field_author_value_op';
  $handler->display->display_options['filters']['field_author_value']['expose']['identifier'] = 'field_author_value';
  $handler->display->display_options['filters']['field_author_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    41 => 0,
    26 => 0,
    21 => 0,
    31 => 0,
    36 => 0,
    46 => 0,
  );
  /* Filter criterion: Content: Publication (field_term_publication) */
  $handler->display->display_options['filters']['field_term_publication_tid']['id'] = 'field_term_publication_tid';
  $handler->display->display_options['filters']['field_term_publication_tid']['table'] = 'field_data_field_term_publication';
  $handler->display->display_options['filters']['field_term_publication_tid']['field'] = 'field_term_publication_tid';
  $handler->display->display_options['filters']['field_term_publication_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_term_publication_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_term_publication_tid']['expose']['operator_id'] = 'field_term_publication_tid_op';
  $handler->display->display_options['filters']['field_term_publication_tid']['expose']['label'] = 'Publication';
  $handler->display->display_options['filters']['field_term_publication_tid']['expose']['operator'] = 'field_term_publication_tid_op';
  $handler->display->display_options['filters']['field_term_publication_tid']['expose']['identifier'] = 'field_term_publication_tid';
  $handler->display->display_options['filters']['field_term_publication_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    16 => 0,
    41 => 0,
    26 => 0,
    21 => 0,
    31 => 0,
    36 => 0,
    46 => 0,
  );
  $handler->display->display_options['filters']['field_term_publication_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_publication_tid']['vocabulary'] = 'publications';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'library/research/workplace-issues-today/search';
  $export['wit_search'] = $view;

  return $export;
}
