<?php
/**
 * @file
 * CU Search admin page for setting up the Search block attributes
 */

/**
 * Admin form.
 */
function ilr_search_admin($form, &$form_state) {

  $form['ilr_search_google_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Google CSE Key'),
    '#default_value' => variable_get('ilr_search_google_key', '004310106128673806828:gxzzkns1chw')
  );

  return system_settings_form($form);
}
