<?php

$_forms_user_account = NULL;

/**
 * Swaps kerberized forms with netID login button
 */
function forms_block_view_alter(&$data, $block) {
  if (_forms_kerberized_form_present($data['content'])
    && !_forms_user_logged_in_with_netid()) {
      $data['content'] = drupal_get_form('forms_login_form');
  }
}

/**
 * Returns a simple login button for NetID logins
 */
function forms_login_form($form, &$form_state) {
  $form['netid'] = array(
    '#markup' => '<p>You must log in with your NetID to view this form.<br /><br /> <a class="button" href="/saml_login">NetID Login</a></p>',
    '#weight' => -10,
  );
  return $form;
}

/**
 * Implements hook_form_FORM_ID_alter
 * Adds a kerberized checkbox for
 * field instances on kerberized forms
 */
function forms_form_field_ui_field_edit_form_alter(&$form, &$form_state, $form_id) {
  if (isset($form['#instance']['entity_type'])
    && $form['#instance']['entity_type']  == 'entityform') {
    if (_forms_field_offer_kerberization($form)) {
      _forms_kerberize_field($form);
    }
  }
}

/**
 * Adds the requires authorization checkbox to entityform type creation/edit
 */
function _forms_add_kerberized_checkbox(&$form) {
  $kerberized = (isset($form['#entityform_type']->data['kerberized']))
    ? $form['#entityform_type']->data['kerberized']
    : 0;

  $form['data']['kerberized'] = array(
    '#type' => 'checkbox',
    '#title' => t('This form require NetID authentication'),
    '#weight' => 0,
    '#default_value' => $kerberized,
  );
}

/**
 * Determines whether kerberization should be offered for a field
 */
function _forms_field_offer_kerberization($form) {
  return _forms_form_is_kerberized($form['#instance']['bundle'])
      && _forms_field_is_kerberizable($form['#instance']['field_name']);
}

/**
 * Adds appropriate checkboxes to field instance settings forms
 */
function _forms_kerberize_field(&$form) {
  $kerberized = isset($form['#instance']['settings']['kerberized']) ? $form['#instance']['settings']['kerberized'] : 0;

  $form['instance']['settings']['kerberized'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display user account info as default value for this field'),
    '#weight' => -1,
    '#default_value' => $kerberized,
  );

  $disabled = isset($form['#instance']['settings']['disabled']) ? $form['#instance']['settings']['disabled'] : 0;

  $form['instance']['settings']['disabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('User is not allowed to modify this field'),
    '#weight' => -1,
    '#default_value' => $disabled,
  );
}

/**
 * Checks to see whether the block being rendered is a kerberized entityform
 * See forms_block_view_alter()
 */
function _forms_kerberized_form_present($form) {
  if (isset($form['#entity']) && get_class($form['#entity']) == 'Entityform') {
    return _forms_form_is_kerberized($form['#entity']->type);
  }
  return FALSE;
}

/**
 * Checks whether a specific entityform bundle requires NetID authentication
 */
function _forms_form_is_kerberized($bundle) {
  $entityform_type = entityform_type_load($bundle);
  $kerberized = empty($entityform_type->data['kerberized'])
    ? FALSE
    : $entityform_type->data['kerberized'];
  return $kerberized;
}

/**
 * Checks whether the field can be kerberized
 * Based on information saved in the user account object
 */
function _forms_field_is_kerberizable($field_name) {
  $kerberizable_fields = array(
    'field_full_name',
    'field_email',
    'field_first_name',
    'field_last_name',
  );
  return in_array($field_name, $kerberizable_fields);
}

/**
 * Checks whether a specific field instance has been kerberized
 */
function _forms_field_is_kerberized($field_instance) {
  if (isset($field_instance['settings']['kerberized'])) {
    return $field_instance['settings']['kerberized'];
  }
  return FALSE;
}

/**
 * Gets all the kerberized fields and sets their default value
 * Disables kerberized fields which admin has specified are not user disabled
 */
function _forms_set_kerberized_values(&$form) {
  $instances = field_info_instances('entityform', $form['#bundle']);
  foreach ($instances as $field_name => $value) {
    if (_forms_field_is_kerberized($instances[$field_name])) {
      // Email #default_value is different
      if (strpos($field_name, 'email') > 0) {
        $form[$field_name][LANGUAGE_NONE][0]['email']['#default_value'] = _forms_map_user_attribute_to_field($field_name);
      } // Default pattern
      else {
        $form[$field_name][LANGUAGE_NONE][0]['value']['#default_value'] = _forms_map_user_attribute_to_field($field_name);
      }
      // Figure out if user can edit the field
      if (isset($instances[$field_name]['settings']['disabled'])) {
        $form[$field_name]['#disabled'] = $instances[$field_name]['settings']['disabled'];
      }
    }
  }
}

/**
 * Connects the kerberizable_fields to the correct user account attributes
 */
function _forms_map_user_attribute_to_field($field_name) {
  global $_forms_user_account;
  if (!$_forms_user_account) {
    $_forms_user_account = _forms_get_user_account_info();
  }
  switch ($field_name) {
    case 'field_full_name':
      return $_forms_user_account->name;
      break;
    case 'field_email':
      return $_forms_user_account->mail;
      break;
    case 'field_first_name':
      return $_forms_user_account->field_first_name[LANGUAGE_NONE][0]['safe_value'];
      break;
    case 'field_last_name':
      return $_forms_user_account->field_last_name[LANGUAGE_NONE][0]['safe_value'];
      break;
  }
  return '';
}

/**
 * Loads the user object and all its attributes
 * Since additional fields added to accounts are not available
 * in the global $user object
 */
function _forms_get_user_account_info() {
  global $user;
  return user_load($user->uid);
}

/**
 * Checks the init value created by simplesamlphp_auth
 * with the value of the user's email before the '@' symbol
 */
function _forms_user_logged_in_with_netid() {
  global $user;
  if ($user->uid) { // the user is logged in
    return $user->init == strstr($user->mail, '@', true);
  }
  return FALSE;
}
