<?php

/**
 * Swaps kerberized forms with netID login button
 */
function forms_block_view_alter(&$data, $block) {
  if (isset($data['content'])
    && is_array($data['content'])
    && _forms_kerberized_form_present($data['content'])
    && !_forms_saml_attributes_present()) {
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
 * Implements hook_user_logout()
 * Redirects users logged out via _forms_handle_kerberized_form
 * This and forms_drupal_goto_alter are based on
 * https://drupal.org/project/redirect_after_logout
 */
function forms_user_logout($account) {
  $destination = &drupal_static(__FUNCTION__);
  $destination = current_path();
}

/**
 * Implements hook_drupal_goto_alter().
 */
function forms_drupal_goto_alter(&$path, &$options, &$http_response_code) {
  $destination = &drupal_static('forms_user_logout');
  if (!$path && $destination) {
    drupal_goto($destination);
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
    '#title' => t('This form requires NetID authentication'),
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
    '#title' => t('Display NetID info as default value for this field'),
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
    'field_netid',
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
  $saml_attributes = simplesamlphp_auth_get_attributes();

  if (!empty($saml_attributes)) {
    switch ($field_name) {
      case 'field_full_name':
        return $saml_attributes['displayName'][0];
        break;
      case 'field_email':
        return $saml_attributes['mail'][0];
        break;
      case 'field_first_name':
        return $saml_attributes['givenName'][0];
        break;
      case 'field_last_name':
        return $saml_attributes['sn'][0];
        break;
      case 'field_netid':
        return $saml_attributes['uid'][0];
        break;
    }
  } // Auth attributes missing, so log an error
  else {
    // Unexpected, based on _forms_handle_kerberized_form()
    watchdog(
      'forms.kerberized',
      'SimpleSAML authentication attributes not present when expected',
      array(),
      WATCHDOG_ERROR
    );
  }

  return '';
}

/**
 * Adds kerberized values to forms when appropriate
 * Logs user out if SAML Session missing (e.g. browser was closed)
 */
function _forms_handle_kerberized_form(&$form) {
  if (user_is_logged_in() && _forms_user_has_netid()) {
    if (_forms_saml_attributes_present()) {
      _forms_set_kerberized_values($form);
    } // SimpleSAMLAuth info missing, so force the user to log in again
    else {
      require_once(drupal_get_path('module', 'user') . '/user.pages.inc');
      user_logout(); // See forms_drupal_goto_alter for redirect
    }
  }
}

/**
 * Figures out whether user account has a NetID
 */
function _forms_user_has_netid() {
  global $user;
  if ($user->uid) {
    $account = user_load($user->uid);
    return !empty($account->field_netid);
  }
  return FALSE;
}

/**
 * Checks to confirm there are values in the SAML Auth Session
 */
function _forms_saml_attributes_present() {
  if ($attributes = simplesamlphp_auth_get_attributes()) {
    return !empty($attributes);
  }
  return FALSE;
}
