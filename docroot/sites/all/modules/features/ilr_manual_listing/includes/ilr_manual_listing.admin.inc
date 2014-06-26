<?php
/**
 * @file
 * CU Search admin page for setting up the Search block attributes
 */

/**
 * Admin form.
 */
function ilr_manual_listing_admin($form, &$form_state) {
  $form['ilr_manual_listing_enabled_bundles'] = array(
    '#type' => 'checkboxes',
    '#options' => node_type_get_names(),
    '#default_value' => variable_get('ilr_manual_listing_enabled_bundles', _ilr_manual_listing_default_bundles()),
    '#title' => t('Which content types do you want to make available?'),
  );

  return system_settings_form($form);
}
