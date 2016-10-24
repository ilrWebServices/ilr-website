<?php

/**
 * @file
 * File description.
 */

/**
 * Admin form for the module.
 *
 * @param array $form
 *   The form array.
 * @param array $form_state
 *   The form state array passed by reference.
 */
function social_feed_field_admin(array $form, array &$form_state) {
  $available_channels = social_feed_field_get_channels();

  foreach ($available_channels as $name => $channel) {
    $form['sff_' . $name] = array(
      '#type' => 'fieldset',
      '#title' => $channel['name'],
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    foreach ($channel['admin'] as $key => $data) {
      $value = variable_get('sff_' . $name . '_' . $key, '');
      if (!empty($value)) {
        $data['#default_value'] = variable_get('sff_' . $name . '_' . $key, '');
      }
      $form['sff_' . $name]['sff_' . $name . '_' . $key] = $data;
    }
  }

  return system_settings_form($form);
}
