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
  $form['description'] = array(
    '#markup' => t('On this page you can setup the different channels. Fields for inputting API keys are grouped by channel.'),
  );
  $available_channels = social_feed_field_get_channels(TRUE);
  foreach ($available_channels as $name => $channel) {
    $form['sff_' . $name] = array(
      '#type' => 'fieldset',
      '#title' => $channel['name'],
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    if (isset($channel['admin']['#description'])) {
      $form['sff_' . $name]['#description'] = $channel['admin']['#description'];
      unset($channel['admin']['#description']);
    }
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
