<?php
/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function ilr_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site config form with some sane defaults for quicker install
  $default_mail = 'aaronf@cornell.edu';

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
 * Implements hook_user_insert()
 */
function ilr_user_presave(&$edit, $account, $category) {
  $saml_attributes = simplesamlphp_auth_get_attributes();
  if($account->is_new && !empty($saml_attributes)) {
    $edit['field_netid'][LANGUAGE_NONE][0]['value'] = $saml_attributes['uid'][0];
  }
}

/**
 * Implements hook_form_FORM_ID_alter()
 * Sets up validation to keep Cornell users from registering
 */
function ilr_form_user_register_form_alter(&$form, &$form_state) {
  // Add our own validation function to the array of validation callbacks
  $form['#validate'][] = 'ilr_user_register_validate';
}

/**
 * Implements hook_form_FORM_ID_alter()
 * Disables editing the NetID field
 */
function ilr_form_user_profile_form_alter(&$form, $form_state, $form_id) {
  if (isset($form['field_netid'])) {
    $form['field_netid']['#disabled'] = TRUE;
  }
}

/**
 * Implements hook_form_FORM_ID_alter()
 * Adds the login button
 */
function ilr_form_user_login_alter(&$form, $form_state, $form_id) {
  $form['netid'] = array(
    '#markup' => '<h2>Cornell Users</h2><p><a class="button" href="/saml_login">NetID Login</a></p><h2>No Cornell NetID?</h2>',
    '#weight' => -10,
  );
}

/**
 * Implements hook_form_FORM_ID_alter()
 * Prevents Cornell users from changing their password
 */
function ilr_form_user_pass_alter(&$form, $form_state, $form_id) {
  $form['#validate'][] = 'ilr_user_pass_validate';
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
      'level'       => 0,
      'follow'      => 0,
      'depth'       => 10,
      'expanded'    => FALSE,
      'sort'        => FALSE,
    ),
  );
}

/**
 * Implements hook_menu_alter()
 * Removes the saml_login link for logged in users
 */
function ilr_menu_alter(&$items) {
  $items['saml_login']['access callback'] = 'user_is_anonymous';
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

/**
 * Validation callback
 * See ilr_form_user_register_form_alter
 */
function ilr_user_register_validate($form, &$form_state) {
  if (_ilr_user_has_cornell_email($form_state['values']['mail'])) {
    form_set_error('mail', t('Cornell users must log in with NetID.'));
  }
}

/**
 * Validation callback
 * See ilr_form_user_pass_alter
 */
function ilr_user_pass_validate($form, &$form_state) {
  if (_ilr_user_has_cornell_email($form_state['values']['name'])) {
    form_set_error('mail', t('Please log in with your NetID.'));
  }
}

/**
 * String manipulation to check for cornell.edu email addy
 */
function _ilr_user_has_cornell_email($email) {
  return substr($email, -11) == 'cornell.edu';
}

/**
 * Returns the term in the given vocabulary.
 */
function _ilr_get_or_create_term($term_name, $vocab_machine_name) {
  $terms = taxonomy_get_term_by_name($term_name, $vocab_machine_name);
  if (!$terms) {
    $vocab = taxonomy_vocabulary_machine_name_load($vocab_machine_name);
    $term = new stdClass();
    $term->name = $term_name;
    $term->vid = $vocab->vid;
    taxonomy_term_save($term);
  }
  else {
    $term = array_shift($terms);
  }
  return $term;
}

/**
 * Find the nids for the nodes that this block is used in.
 *
 * Assumes blocks will be set in field_blocks field collection.
 * @param $bid
 *  Block id.
 * @return array
 *  nids which use this block via the field_blocks field collection.
 */
function _ilr_get_block_usage($bid) {
  $nids = array();
  $block_fields = field_info_instances('field_collection_item', 'field_blocks');
  $field_collection_ids = array();
  foreach ($block_fields as $field_name => $block_field) {
    $field_info = field_info_field($field_name);
    if ($field_info['type'] == 'blockreference') {
      $field_collection_ids = array_merge(_ilr_block_usage_block_reference($field_name, $bid), $field_collection_ids);
    }
  }
  if ($field_collection_ids) {
    $items = entity_load('field_collection_item', $field_collection_ids);
    foreach ($items as $item) {
      $nids[] = $item->hostEntityId();
    }
  }
  return $nids;

}

/**
 * Find the field collection ids that use the block with the given field.
 * @param $block_field
 *  Field name for Block Reference Field.
 * @param $bid
 *  Block id
 * @return array
 *  field collection id which use this block via the $block_field.
 */
function _ilr_block_usage_block_reference($block_field, $bid){
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'field_collection_item')
    ->entityCondition('bundle', 'field_blocks')
    ->propertyCondition('archived', 0)
    ->fieldCondition($block_field, 'bid', $bid);
  $result = $query->execute();
  if (!empty($result['field_collection_item'])) {
    return array_keys($result['field_collection_item']);
  }
  return array();
}

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Alter bean_form.
 */
function ilr_form_bean_form_alter(&$form, &$form_state, $form_id) {
  _ilr_add_bean_usage_warning($form);
}

/**
 * Add warning message about where the current bean is used.
 * @param $form
 */
function _ilr_add_bean_usage_warning(&$form) {
  $bean = $form['bean']['#value'];
  if (empty($form_state['input']) && empty($bean->is_new)) {
    $theme = variable_get('theme_default', 'none');
    $block = _ilr_block_load('bean', $bean->delta, $theme);
    $nids = _ilr_get_block_usage($block->bid);
    // @todo Should this warning only show when there is more than 1?
    if (!empty($nids)) {
      $result = db_select('node', 'n')->fields('n', array(
        'nid',
        'title',
        'created'
      ))->condition('nid', $nids)->execute();
      $title = 'This block is currently being used in the following pages. Any changes will affect these pages.';
      drupal_set_message(drupal_render(node_title_list($result, $title)), 'warning', FALSE);
    }
  }
}

/**
 * Loads a block object from the database for a specific theme.
 *
 * Core's block_load ignores theme.
 * @return
 *   A block object.
 */
function _ilr_block_load($module, $delta, $theme) {
  $block = FALSE;
  if (isset($delta)) {
    $block = db_query('SELECT * FROM {block} WHERE module = :module AND delta = :delta AND theme = :theme', array(':module' => $module, ':delta' => $delta, ':theme' => $theme))->fetchObject();
  }
  return $block;
}
