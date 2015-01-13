<?php
/**
 * Admin form.
 */
function tagged_content_block_admin($form, &$form_state) {
  $form['tagged_content_block_enabled_bundles'] = array(
    '#type' => 'checkboxes',
    '#options' => node_type_get_names(),
    '#default_value' => variable_get('tagged_content_block_enabled_bundles', _tagged_content_block_default_bundles()),
    '#title' => t('Which content types do you want to make available?'),
  );

  return system_settings_form($form);
}

function _tagged_content_block_default_bundles() {
  $enabled_bundles = variable_get('tagged_content_block_enabled_bundles');
  if(empty($enabled_bundles)) {
    $enabled_bundles = _tagged_content_block_enable_default_bundles();
  }
  return $enabled_bundles;
}
