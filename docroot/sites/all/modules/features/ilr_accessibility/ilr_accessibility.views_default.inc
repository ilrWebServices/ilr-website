<?php

/**
 * @file
 * ilr_accessibility.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ilr_accessibility_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'image_files_editable';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Image Files Editable';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Image Files Editable';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer files';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'rendered' => 'rendered',
    'field_file_image_alt_text_editable' => 'field_file_image_alt_text_editable',
    'field_file_image_title_text_editable' => 'field_file_image_title_text_editable',
    'field_file_image_caption_editable' => 'field_file_image_caption_editable',
    'filename' => 'filename',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'rendered' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_file_image_alt_text_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_file_image_title_text_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_file_image_caption_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'filename' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['save_messages'] = 'summary';
  $handler->display->display_options['style_options']['batch_size'] = '10';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = 'Thumbnail';
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered']['file_view_mode'] = 'preview';
  /* Field: File: Alt Text (editable) */
  $handler->display->display_options['fields']['field_file_image_alt_text_editable']['id'] = 'field_file_image_alt_text_editable';
  $handler->display->display_options['fields']['field_file_image_alt_text_editable']['table'] = 'field_data_field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text_editable']['field'] = 'field_file_image_alt_text_editable';
  $handler->display->display_options['fields']['field_file_image_alt_text_editable']['label'] = 'Alt Text';
  $handler->display->display_options['fields']['field_file_image_alt_text_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_file_image_alt_text_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_alt_text_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_file_image_alt_text_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_alt_text_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_file_image_alt_text_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_alt_text_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_file_image_alt_text_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_file_image_alt_text_editable']['suppress_description'] = 1;
  /* Field: File: Title Text (editable) */
  $handler->display->display_options['fields']['field_file_image_title_text_editable']['id'] = 'field_file_image_title_text_editable';
  $handler->display->display_options['fields']['field_file_image_title_text_editable']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text_editable']['field'] = 'field_file_image_title_text_editable';
  $handler->display->display_options['fields']['field_file_image_title_text_editable']['label'] = 'Title Text';
  $handler->display->display_options['fields']['field_file_image_title_text_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_file_image_title_text_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_title_text_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_file_image_title_text_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_title_text_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_file_image_title_text_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_title_text_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_file_image_title_text_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_file_image_title_text_editable']['suppress_description'] = 1;
  /* Field: File: Caption (editable) */
  $handler->display->display_options['fields']['field_file_image_caption_editable']['id'] = 'field_file_image_caption_editable';
  $handler->display->display_options['fields']['field_file_image_caption_editable']['table'] = 'field_data_field_file_image_caption';
  $handler->display->display_options['fields']['field_file_image_caption_editable']['field'] = 'field_file_image_caption_editable';
  $handler->display->display_options['fields']['field_file_image_caption_editable']['label'] = 'Caption';
  $handler->display->display_options['fields']['field_file_image_caption_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_file_image_caption_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_caption_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_file_image_caption_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_caption_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_file_image_caption_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_file_image_caption_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_file_image_caption_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_file_image_caption_editable']['suppress_description'] = 1;
  /* Field: Field: Tags (editable) */
  $handler->display->display_options['fields']['field_tags_editable']['id'] = 'field_tags_editable';
  $handler->display->display_options['fields']['field_tags_editable']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags_editable']['field'] = 'field_tags_editable';
  $handler->display->display_options['fields']['field_tags_editable']['label'] = 'Tags';
  $handler->display->display_options['fields']['field_tags_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tags_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tags_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tags_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_tags_editable']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_tags_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_tags_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_tags_editable']['suppress_description'] = 1;
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = 'Filename';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  /* Field: File: Accessibility Processed (editable) */
  $handler->display->display_options['fields']['field_accessibility_processed_editable']['id'] = 'field_accessibility_processed_editable';
  $handler->display->display_options['fields']['field_accessibility_processed_editable']['table'] = 'field_data_field_accessibility_processed';
  $handler->display->display_options['fields']['field_accessibility_processed_editable']['field'] = 'field_accessibility_processed_editable';
  $handler->display->display_options['fields']['field_accessibility_processed_editable']['label'] = 'Processed';
  $handler->display->display_options['fields']['field_accessibility_processed_editable']['element_type'] = '0';
  $handler->display->display_options['fields']['field_accessibility_processed_editable']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_accessibility_processed_editable']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_accessibility_processed_editable']['settings'] = array(
    'field_formatter_label' => '',
  );
  $handler->display->display_options['fields']['field_accessibility_processed_editable']['field_api_classes'] = TRUE;
  $handler->display->display_options['fields']['field_accessibility_processed_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_accessibility_processed_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_accessibility_processed_editable']['suppress_description'] = 1;
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  /* Filter criterion: File: Accessibility Processed (field_accessibility_processed) */
  $handler->display->display_options['filters']['field_accessibility_processed_value']['id'] = 'field_accessibility_processed_value';
  $handler->display->display_options['filters']['field_accessibility_processed_value']['table'] = 'field_data_field_accessibility_processed';
  $handler->display->display_options['filters']['field_accessibility_processed_value']['field'] = 'field_accessibility_processed_value';
  $handler->display->display_options['filters']['field_accessibility_processed_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_accessibility_processed_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_accessibility_processed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_accessibility_processed_value']['expose']['operator_id'] = 'field_accessibility_processed_value_op';
  $handler->display->display_options['filters']['field_accessibility_processed_value']['expose']['label'] = 'Accessibility Processed';
  $handler->display->display_options['filters']['field_accessibility_processed_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_accessibility_processed_value']['expose']['operator'] = 'field_accessibility_processed_value_op';
  $handler->display->display_options['filters']['field_accessibility_processed_value']['expose']['identifier'] = 'field_accessibility_processed_value';
  $handler->display->display_options['filters']['field_accessibility_processed_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_accessibility_processed_value']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_accessibility_processed_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_accessibility_processed_value']['group_info']['label'] = 'Accessibility Processed';
  $handler->display->display_options['filters']['field_accessibility_processed_value']['group_info']['identifier'] = 'field_accessibility_processed_value';
  $handler->display->display_options['filters']['field_accessibility_processed_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Unprocessed',
      'operator' => 'not',
      'value' => array(
        1 => '1',
      ),
    ),
    2 => array(
      'title' => 'Processed',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
  );
  /* Filter criterion: File: Alt Text (field_file_image_alt_text) */
  $handler->display->display_options['filters']['field_file_image_alt_text_value']['id'] = 'field_file_image_alt_text_value';
  $handler->display->display_options['filters']['field_file_image_alt_text_value']['table'] = 'field_data_field_file_image_alt_text';
  $handler->display->display_options['filters']['field_file_image_alt_text_value']['field'] = 'field_file_image_alt_text_value';
  $handler->display->display_options['filters']['field_file_image_alt_text_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_file_image_alt_text_value']['expose']['operator_id'] = 'field_file_image_alt_text_value_op';
  $handler->display->display_options['filters']['field_file_image_alt_text_value']['expose']['label'] = 'Alt Text (field_file_image_alt_text)';
  $handler->display->display_options['filters']['field_file_image_alt_text_value']['expose']['operator'] = 'field_file_image_alt_text_value_op';
  $handler->display->display_options['filters']['field_file_image_alt_text_value']['expose']['identifier'] = 'field_file_image_alt_text_value';
  $handler->display->display_options['filters']['field_file_image_alt_text_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_file_image_alt_text_value']['group_info']['label'] = 'Alt Text';
  $handler->display->display_options['filters']['field_file_image_alt_text_value']['group_info']['identifier'] = 'field_file_image_alt_text_value';
  $handler->display->display_options['filters']['field_file_image_alt_text_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Empty',
      'operator' => 'empty',
      'value' => '0',
    ),
    2 => array(
      'title' => 'Not Empty',
      'operator' => 'not empty',
      'value' => '0',
    ),
  );
  /* Filter criterion: File: Name */
  $handler->display->display_options['filters']['filename']['id'] = 'filename';
  $handler->display->display_options['filters']['filename']['table'] = 'file_managed';
  $handler->display->display_options['filters']['filename']['field'] = 'filename';
  $handler->display->display_options['filters']['filename']['operator'] = 'contains';
  $handler->display->display_options['filters']['filename']['exposed'] = TRUE;
  $handler->display->display_options['filters']['filename']['expose']['operator_id'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['filename']['expose']['operator'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['identifier'] = 'filename';
  $handler->display->display_options['filters']['filename']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['filename']['group_info']['label'] = 'Name';
  $handler->display->display_options['filters']['filename']['group_info']['identifier'] = 'filename';
  $handler->display->display_options['filters']['filename']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['filename']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/tmp/image-files-editable';
  $export['image_files_editable'] = $view;

  return $export;
}
