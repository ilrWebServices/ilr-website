<?php
/**
 * @file
 * Administration pages callbacks.
 */

/**
 * Views Beans Admin form callback.
 */
function views_beans_settings($form, &$form_state) {
  // @todo Clear caches manually?
  drupal_set_message(t('Changing this form requires clearing all caches.'));
  module_load_include('inc', 'views_content', 'plugins/content_types/views_panes');
  $displays = views_content_views_panes_content_type_content_types('views_panes');
  foreach ($displays as $display) {
    if (isset($display['category'][0])) {
      $options[$display['category'][0]] = $display['category'][0];
    }
  }
  $form['views_beans_bean_types'] = array(
    '#title' => t('Views Panes Categories for Bean Types'),
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => variable_get('views_beans_bean_types', array()),
  );

  return system_settings_form($form);
}