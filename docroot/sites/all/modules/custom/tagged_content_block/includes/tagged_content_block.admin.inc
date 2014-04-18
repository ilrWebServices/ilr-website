<?php
/**
 * @file
 * CU Search admin page for setting up the Search block attributes
 */

/**
 * Admin form.
 */
function tagged_content_block_admin($form, &$form_state) {

  $form['tagged_content_block_enabled_bundles'] = array(
    '#type' => 'checkboxes',
    '#options' => node_type_get_names(),
    '#default_value' => variable_get('tagged_content_block_enabled_bundles', ''),
    '#title' => t('Which content types do you want to make available?'),
  );

  return system_settings_form($form);
}
