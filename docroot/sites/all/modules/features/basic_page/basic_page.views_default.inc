<?php
/**
 * @file
 * basic_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function basic_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'editor_notes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'editor_note';
  $view->human_name = 'Editor Notes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Editor Notes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
    16 => '16',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'note' => 'note',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'note' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Editor Note: Node information. */
  $handler->display->display_options['relationships']['node_info']['id'] = 'node_info';
  $handler->display->display_options['relationships']['node_info']['table'] = 'editor_note';
  $handler->display->display_options['relationships']['node_info']['field'] = 'node_info';
  /* Relationship: Editor Note: User information. */
  $handler->display->display_options['relationships']['author_info']['id'] = 'author_info';
  $handler->display->display_options['relationships']['author_info']['table'] = 'editor_note';
  $handler->display->display_options['relationships']['author_info']['field'] = 'author_info';
  /* Field: Editor Note: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'editor_note';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Editor Note: Editor Note */
  $handler->display->display_options['fields']['note']['id'] = 'note';
  $handler->display->display_options['fields']['note']['table'] = 'editor_note';
  $handler->display->display_options['fields']['note']['field'] = 'note';
  $handler->display->display_options['fields']['note']['label'] = 'Note';
  $handler->display->display_options['fields']['note']['element_label_colon'] = FALSE;
  /* Field: Editor Note: Entity ID */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'editor_note';
  $handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  /* Field: Editor Note: Updated by UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'editor_note';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'node_info';
  $handler->display->display_options['fields']['rendered_entity']['label'] = 'Page';
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Field: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['relationship'] = 'author_info';
  $handler->display->display_options['fields']['field_netid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_netid']['settings'] = array(
    'field_formatter_label' => '',
  );
  /* Filter criterion: Field: NetID (field_netid) */
  $handler->display->display_options['filters']['field_netid_value']['id'] = 'field_netid_value';
  $handler->display->display_options['filters']['field_netid_value']['table'] = 'field_data_field_netid';
  $handler->display->display_options['filters']['field_netid_value']['field'] = 'field_netid_value';
  $handler->display->display_options['filters']['field_netid_value']['relationship'] = 'author_info';
  $handler->display->display_options['filters']['field_netid_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_netid_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_netid_value']['expose']['operator_id'] = 'field_netid_value_op';
  $handler->display->display_options['filters']['field_netid_value']['expose']['label'] = 'Author\'s NetID:';
  $handler->display->display_options['filters']['field_netid_value']['expose']['operator'] = 'field_netid_value_op';
  $handler->display->display_options['filters']['field_netid_value']['expose']['identifier'] = 'field_netid_value';
  $handler->display->display_options['filters']['field_netid_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_netid_value']['expose']['remember_roles'] = array(
    2 => 0,
    11 => '11',
    16 => '16',
    1 => 0,
    41 => 0,
    26 => 0,
    21 => 0,
    31 => 0,
    36 => 0,
    46 => 0,
  );
  /* Filter criterion: Editor Note: Editor Note */
  $handler->display->display_options['filters']['note']['id'] = 'note';
  $handler->display->display_options['filters']['note']['table'] = 'editor_note';
  $handler->display->display_options['filters']['note']['field'] = 'note';
  $handler->display->display_options['filters']['note']['operator'] = 'contains';
  $handler->display->display_options['filters']['note']['exposed'] = TRUE;
  $handler->display->display_options['filters']['note']['expose']['operator_id'] = 'note_op';
  $handler->display->display_options['filters']['note']['expose']['label'] = 'Content contains:';
  $handler->display->display_options['filters']['note']['expose']['operator'] = 'note_op';
  $handler->display->display_options['filters']['note']['expose']['identifier'] = 'note';
  $handler->display->display_options['filters']['note']['expose']['remember_roles'] = array(
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/editor-notes';
  $export['editor_notes'] = $view;

  return $export;
}
