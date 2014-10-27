<?php
/**
 * Author: Ted Bowman
 * Date: 10/27/14
 * Time: 1:55 PM
 */

function ilr_bean_views_settings($form, &$form_state) {
  module_load_include('inc', 'views_content', 'plugins/content_types/views_panes');
  $displays = views_content_views_panes_content_type_content_types('views_panes');
  foreach ($displays as $display) {
    if (isset($display['category'][0])) {
      $options[$display['category'][0]] = $display['category'][0];
    }
  }
  $form['views_panes_bean_types'] = array(
    '#title' => t('Views Panes Categories for Bean Types'),
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => variable_get('views_panes_bean_types', array()),
  );
  
  return system_settings_form($form);
}