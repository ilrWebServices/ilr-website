<?php

define('NOTIFICATION_EMAIL', 'nr52@cornell.edu');

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
 * Implements hook_user_presave()
 */
function ilr_user_presave(&$edit, $account, $category) {
  $saml_attributes = simplesamlphp_auth_get_attributes();
  if($account->is_new && !empty($saml_attributes)) {
    $edit['field_netid'][LANGUAGE_NONE][0]['value'] = $saml_attributes['uid'][0];
  }
}

/**
 * Implements hook_user_insert()
 */
function ilr_user_insert(&$edit, $account, $category) {
  if($account->is_new) {
    _ilr_account_notification($account);
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
  $menu = 'main-menu';
  if (module_exists('ilr_sub_sites')) {
    $menu = _ilr_sub_sites_get_current_menu_name();
  }
  $level = ($menu == 'main-menu') ? 1 : 2; // Note this doe snot seem to be zero indexed
  return array(
    // The array key is the block id used by menu block.
    'ilr-subnav' => array(
      // Use the array keys/values described in menu_tree_build().
      'menu_name'   => $menu,
      'title_link'  => TRUE,
      'admin_title' => 'ILR Sidebar Menu',
      'level'       => $level,
      'follow'      => 0,
      'depth'       => 10,
      'expanded'    => TRUE,
      'sort'        => FALSE,
    ),
    'ilr-primary-menu' => array(
      // Use the array keys/values described in menu_tree_build().
      'menu_name'   => $menu,
      'title_link'  => TRUE,
      'admin_title' => 'ILR Primary Menu',
      'level'       => $level,
      'follow'      => 0,
      'depth'       => 1,
      'expanded'    => TRUE,
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
      $title_list = node_title_list($result, $title);
      drupal_set_message(drupal_render($title_list), 'warning', FALSE);
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
/**
 * Lookup entity id for feeds item by guid and importer id.
 * @param $guid
 * @param $importer_id
 * @param int $feed_nid
 * @return int|FALSE
 */
function _ilr_get_feeds_item_entity_id($guid, $importer_id, $feed_nid = 0){
  return db_select('feeds_item')
    ->fields('feeds_item', array('entity_id'))
    ->condition('id', $importer_id)
    ->condition('feed_nid', $feed_nid)
    ->condition('guid', $guid)
    ->execute()
    ->fetchField();
}

/**
 * Return the feed source property for a target.
 *
 * Useful modules like FeedsJson and FeedsXpath where sources are not descriptive
 *  for example "jsonpath_parser:3"
 * @param $target
 * @param FeedsImporter $importer
 * @return null|string
 */
function _ilr_get_feed_source_for_target($target, FeedsImporter $importer) {
  $mappings = $importer->processor->config['mappings'];
  foreach ($mappings as $mapping) {
    if ($mapping['target'] == $target) {
      return $mapping['source'];
    }
  }
  return NULL;
}
/**
 * Get all parent/child relationships for an entity reference field.
 * @param $fieldname
 * @param null $bundle
 *  Bundle name
 * @param string $entity_type
 * @return array
 *  - keys - nid of parent
 *  - values - array of child nids
 */
function _ilr_get_entityreference_relations($fieldname, $bundle = NULL, $entity_type = 'node') {
  $children = array();

  $sql = "SELECT entity_id as parent_nid, {$fieldname}_target_id as child_nid FROM {field_data_{$fieldname}}"
    . " WHERE deleted = 0 "
    . " and entity_type = :entity_type ";
  $args[':entity_type'] = $entity_type;
  if ($bundle) {
    $sql .= " and bundle = :bundle";
    $args[':bundle'] = $bundle;
  }
  $result = db_query($sql, $args);

  while ($record = $result->fetchAssoc()) {
    $children[$record['parent_nid']][] = $record['child_nid'];
  }
  return $children;
}
/**
 * Implements hook_date_format_types()
 */
function ilr_date_format_types() {
  return array(
    'ilr_short_day_only' => t('Short Day only'),
  );
}

/**
 * Implements hook_date_formats().
 */
function ilr_date_formats() {
  $formats = array(
    'ilr_short_day_only' => 'M j',
  );
  $return_formats = array();
  foreach ($formats as $format_type => $date_format) {
    $return_formats[] = array(
      'type' => $format_type,
      'format' => $date_format,
      'locales' => array(),
    );
  }
  return $return_formats;
}

/**
 * Implements hook_entity_info_alter().
 *
 * Add extra entity view modes.
 * Entity View Modes modules doesn't support Features.
 * @see https://www.drupal.org/node/1425620
 */
function ilr_entity_info_alter(&$entity_info) {
  $entity_info['node']['view modes'] += array(
    'reference_field' => array(
      'label' => t('Reference Field'),
      'custom settings' => FALSE,
    ),
  );
}

/**
 * Implements hook_form_FORM_ID_alter() for feeds_import_form.
 *
 * If the user doesn't have "Administer Feeds" permission then remove options to change settings.
 */
function ilr_form_feeds_import_form_alter(&$form, &$form_state, $form_id) {
 $importer = feeds_importer($form['#importer_id']);
 $form['feeds_description'] = array(
   '#type' => 'markup',
   '#markup' => check_plain($importer->config['description']),
   '#weight' => -100,
 );

 if (!user_access('administer feeds')) {
   $form['feeds']['#access'] = FALSE;
 }
}

/**
 * Gets the netid of the current user
 */
function ilr_get_netid_of_current_user() {
  global $user;
  $wrapper = entity_metadata_wrapper('user', $user);
  $netid = $wrapper->field_netid->value();
  if (!empty($netid)) {
    return $netid;
  }
  return NULL;
}

/**
 * Custom function to send the notification
 */
function _ilr_account_notification($account) {
  global $base_url;
  $email = (strpos($account->init, '@') > 0) ? $account->init : $account->init . '@cornell.edu';
  $link = $base_url . "/user/$account->uid";
  $params = array(
    'content' => "A new account was created by <a href='$link'>$account->name</a> (<a href='mailto:$email'>$email</a>)."
  );

  drupal_mail(
    'ilr_account_notification',
    'user_insert',
    NOTIFICATION_EMAIL,
    LANGUAGE_NONE,
    $params,
    'no-reply@ilr.cornell.edu'
  );
}

/**
 * Implements hook_mail().
 * hook for the notification email
 */
function ilr_account_notification_mail($key, &$message, $params) {
  $sitename = variable_get('site_name', 'Drupal');

  $message['headers']['MIME-Version'] = '1.0';
  $message['headers']['Content-Type'] = 'text/plain;charset=utf-8';
  $message['subject'] = t("ILR user account created");
  $message['body'][] = $params['content'];
  $message['body'][] = "\n--\r";
  $message['body'][] = t("This is an automatic e-mail from $sitename.");
}
