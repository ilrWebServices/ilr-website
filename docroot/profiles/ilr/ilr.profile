<?php
/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function ilr_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site config form with some sane defaults for quicker install
  $default_mail = 'atf46@cornell.edu';

  $form['site_information']['site_name']['#default_value'] = 'Cornell University | ILR School';
  $form['site_information']['site_mail']['#default_value'] = $default_mail;
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = $default_mail;
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/New_York';
  $form['update_notifications']['update_status_module']['#default_value'] = array(1);
}

/**
 * Implements hook_menu()
 */
function ilr_menu(){
  $items['home'] = array(
    'title' => '',
    'page callback' => 'ilr_home_view',
    'access callback' => TRUE,
    'type' => MENU_CALLBACK,
  );

  return $items;
}

function ilr_home_view() {
  return '';
}

/**
 * Implements hook_form_FORM_ID_alter()
 *
 */
function ilr_form_user_register_form_alter(&$form, &$form_state) {
  // Add our own validation function to the array of validation callbacks
  $form['#validate'][] = 'ilr_user_register_validate';
}

// Check to make sure they're not using a Cornell Email
function ilr_user_register_validate($form, &$form_state) {
  $email = $form_state['values']['mail'];
  $cornell_email = substr($email, -11) == 'cornell.edu';

  if ($cornell_email) {
    form_set_error('mail', t('Cornell users can create an account using the "Log in" link in the footer.'));
  }
}

/**
 * Implements hook_form_FORM_ID_alter()
 *
 */
function ilr_form_user_login_alter(&$form, $form_state, $form_id) {
  $form['netid'] = array(
    '#markup' => '<h2>Cornell Users</h2><p><a class="button" href="/saml_login">NetID Login</a></p><h2>No Cornell NetID?</h2>',
    '#weight' => -10,
  );
}

/**
 * Implements hook_menu_block_blocks()
 *
 * @see menu_tree_build() for a description of the config array.
 */
function ilr_menu_block_blocks() {
  return array(
    // The array key is the block id used by menu block.
    'ilr-subnav' => array(
      // Use the array keys/values described in menu_tree_build().
      'menu_name'   => 'main-menu',
      'parent_mlid' => 0,
      'title_link'  => TRUE,
      'admin_title' => 'Main Menu Children',
      'level'       => 2,
      'follow'      => 0,
      'depth'       => 0,
      'expanded'    => TRUE,
      'sort'        => FALSE,
    ),
  );
}

/**
 * Implements hook_menu_alter()
 */
function ilr_menu_alter(&$items) {
  // Makes the saml_login link disappear when users are logged in.
  $items['saml_login']['access callback'] = 'user_is_anonymous';

  // Remove all access to the password reset form
  $items['user/password']['access callback'] = FALSE;
}

/**
 * Implements hook_wysiwyg_editor_settings_alter().
 *
 * See https://drupal.org/node/1956778
 * See https://drupal.org/node/1979042#comment-7633733
 */
function ilr_wysiwyg_editor_settings_alter(&$settings, $context) {
  if ($context['profile']->editor == 'ckeditor') {
    $settings['allowedContent'] = TRUE;
  }
}
