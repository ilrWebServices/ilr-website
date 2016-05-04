<?php
/**
 * @file
 */

/**
 * Admin form.
 */
function ilr_sub_pages_type_admin($form, &$form_state) {
  $selected_options = variable_get('ilr_sub_pages_enabled_bundles',_ilr_sub_pages_default_bundles());
  $form['ilr_sub_pages_enabled_bundles'] = array(
    '#type' => 'checkboxes',
    '#options' => node_type_get_names(),
    '#default_value' => $selected_options,
    '#title' => t('Which content types do you want to make available as sub pages?'),
  );
  return system_settings_form($form);
}
