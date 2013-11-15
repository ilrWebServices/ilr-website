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
