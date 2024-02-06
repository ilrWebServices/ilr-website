<?php

define('NOTIFICATION_EMAIL', 'ilrweb@cornell.edu');

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function ilr_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site config form with some sane defaults for quicker install
  $default_mail = 'ilrweb@cornell.edu';

  $form['site_information']['site_name']['#default_value'] = 'Cornell University | ILR School';
  $form['site_information']['site_mail']['#default_value'] = $default_mail;
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = $default_mail;
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/New_York';
  $form['update_notifications']['update_status_module']['#default_value'] = array(1);
}

/**
 * Implements hook_admin_paths().
 */
function ilr_admin_paths() {
  $paths = array(
    'editor_note/*' => TRUE,
  );
  return $paths;
}

/**
 * Implements hook_user_presave()
 */
function ilr_user_presave(&$edit, $account, $category) {
  if (module_exists('simplesamlphp_auth')) {
    module_load_include('inc', 'simplesamlphp_auth');
    $saml_attributes = simplesamlphp_auth_get_attributes();
    if($account->is_new && !empty($saml_attributes)) {
      $edit['field_netid'][LANGUAGE_NONE][0]['value'] = $saml_attributes['uid'][0];
    }
  }
}

/**
 * Implements hook_node_access()
 * Removes ability for non-admins to edit the homepage
 * Note that this hook does not get run for users who have
 * 'bypass node access' permission
 */
function ilr_node_access($node, $op, $account) {
  if ($op == 'update') {
    if ($node->nid == 248901 && !user_access('bypass node access')) {
      return NODE_ACCESS_DENY;
    }
  }
  return NODE_ACCESS_IGNORE;
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
    '#markup' => '<h2>Cornell Users</h2><p><a class="link--button" href="/saml_login">NetID Login</a></p><h2>No Cornell NetID?</h2>',
    '#weight' => -10,
  );
  // Remove the saml link provided by the simplesamlphp_auth module
  if (!empty($form['links']) && isset($form['links']['#markup'])) {
    unset($form['links']['#markup']);
  }
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
    $menu = _ilr_sub_sites_get_menu_name();
  }
  $follow = ($menu == 'main-menu') ? 'active' : 'child'; // Not zero indexed
  $level = ($menu == 'main-menu') ? 1 : 2; // Not zero indexed
  $depth = $depth_relative = 0;
  $paged = 1;
  $menu_item = ilr_get_menu_item();
  if ($menu_item && !ilr_mlid_has_children($menu_item->mlid)) {
    if (!ilr_mlid_has_siblings($menu_item->plid)) {
      $trail = menu_get_active_trail();
      $depth = count($trail) - 2;
      $paged = 0;
    }
  }

  $defaults = menu_block_default_config();

  $overrides = [
    'menu_name'   => $menu,
    'admin_title' => 'ILR Sidebar Menu',
    'expanded'    => TRUE,
    'paged' => $paged,
    'parent_mlid' => 0,
    'follow' => 'active',
    'title_link' => 1,
    'depth' => $depth,
    'depth_relative' => $depth_relative
  ];

  $subnav = array_replace($defaults, $overrides);

  return array(
    'ilr-subnav' => $subnav,
    'ilr-primary-menu' => array(
      // Use the array keys/values described in menu_tree_build().
      'menu_name'   => $menu,
      'title_link'  => TRUE,
      'parent_mlid' => 0,
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
 * Implements hook_block_view_alter().
 */
function ilr_block_view_alter(&$data, $block) {
  if ($block->delta == 'ilr-subnav') {
    if ($data['subject'] == "Main menu") {
      $data['subject'] = '<a href="/">Home</a>';
    }

    // Check to see if the bock title is rendering as a string, and remove it if so.
    // This happens, for example, on subsite 404 pages.
    if (isset($data['subject_array']['#markup'])) {
      $data['subject'] = '';
    }
  }
}

/**
 * Implements hook_block_info().
 * Adds the google translate block
 */
function ilr_block_info() {
  $blocks['ilr_wordmark'] = array(
    'info' => t('ILR Wordmark'),
  );
  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function ilr_block_view($delta='') {
  if ($delta == 'ilr_wordmark') {
    $markup = '<div class="ilr-logo ilr-logo--wordmark"><a class="ilr-logo__link" href="/" ><img src="/sites/all/themes/ilr_theme/images/logos/ILR-wordmark.svg" alt="ILR School"></a></div>';

    $block = array(
      'subject' => '',
      'content' => $markup,
    );
  }

  return $block;
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
 * Implements hook_page_alter().
 * Checks for now-defunct requests for the library pages and
 * redirects the request to the appropriate url
 */
function ilr_page_alter(&$page) {
  $status = drupal_get_http_header('Status');
  $request_path = request_path();
  if ($status == '404 Not Found' && strpos($request_path, 'library') === 0) {
    drupal_add_http_header('Status', '303 See Other');
    switch (TRUE) {
      case strstr($request_path, 'kheel-center'):
        $uri = '/kheel';
        break;
      case strstr($request_path, 'collections'):
        $uri = '/collections';
        break;
      case strstr($request_path, 'workplace-issues-today'):
        $uri = '/workplace-issues-today';
        break;
      case strstr($request_path, 'research'):
        $uri = '/research';
        break;
      default:
        $uri = '/';
        break;
    }
    $url = 'http://catherwood.library.cornell.edu' . $uri;
    // Unset the request destination to avoid redirect hijacking in drupal_goto
    unset($_GET['destination']);
    drupal_goto($url, array("external" => TRUE));
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

function _ilr_add_permissions_to_role($permissions, $role_name) {
  $role = user_role_load_by_name($role_name);
  if ($role) {
    user_role_grant_permissions($role->rid, $permissions);
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
  $format_types = _ilr_get_date_format_types();
  $return_formats = array();
  foreach ($format_types as $key => $format_type) {
    $return_formats[$key] = $format_type['label'];
  }
  return $return_formats;
}

/**
 * Utility Function to Date format information.
 *
 * Provides central location for all date format information.
 * @return array
 */
function _ilr_get_date_format_types() {
  return array(
    'ilr_short_day_only' => array(
      'label' => t('Short Day only'),
      'format' => 'M j',
    ),

    'ilr_year_only' => array(
      'label' => t('Year only'),
      'format' => 'Y',
    ),
    'ilr_date_short' => array(
      'label' => t('Short Date only'),
      'format' => 'm/d/Y',
    ),
    'ilr_month_only' => array(
      'label' => t('Month only'),
      'format' => 'F',
    ),
    'ilr_post_format' => array(
      'label' => t('Post format'),
      'format' => 'F d, Y',
    ),
  );
}
/**
 * Implements hook_date_formats().
 */
function ilr_date_formats() {
  $format_types = _ilr_get_date_format_types();
  $return_formats = array();
  foreach ($format_types as $key => $format_type) {
    $return_formats[] = array(
      'type' => $key,
      'format' => $format_type['format'],
      'locales' => array(),
    );
  }
  return $return_formats;
}

/**
 * Implements hook_flush_caches().
 */
function ilr_flush_caches(){
  _ilr_set_date_format_vars();
}

/**
 * Set all date variables that Drupal needs for our custom date formats.
 */
function _ilr_set_date_format_vars(){
  $format_types = _ilr_get_date_format_types();
  foreach ($format_types as $key => $format_type) {
    variable_set("date_format_$key", $format_type['format']);
  }
}
/**
 * Implements hook_entity_info_alter().
 *
 * Add extra entity view modes.
 * Entity View Modes modules doesn't support Features.
 * @see https://www.drupal.org/node/1425620
 * Adds a mega_menu_item view mode (see tagged_content.inc)
 */
function ilr_entity_info_alter(&$entity_info) {
  $entity_info['node']['view modes'] += array(
    'basic_teaser' => array(
      'label' => t('Basic Teaser'),
      'custom settings' => FALSE,
    ),
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
 * Implements hook_form_FORM_ID_alter().
 * form_id = ilr_editable_settings_form
 * Adds a setting for cancel and reject messages for all payment forms
 * @see ilr_editable_settings module.
 */
function ilr_form_ilr_editable_settings_form_alter(&$form, &$form_state, $form_id) {
  if (module_exists('freedompay_entityform')) {
    $payment_forms = freedompay_entityform_get_payment_forms();
    $form['freedompay_set'] = array(
      '#type' => 'fieldset',
      '#title' => t('FreedomPay Messages'),
    );
    $form['freedompay_set']['freedompay_default_cancel_message'] = array(
      '#type' => 'textarea',
      '#title' => t('Default FreedomPay cancel message'),
      '#default_value' => FREEDOMPAY_DEFAULT_CANCEL_MESSAGE,
    );
    $form['freedompay_set']['freedompay_default_reject_message'] = array(
      '#type' => 'textarea',
      '#title' => t('Default FreedomPay rejected message'),
      '#default_value' => FREEDOMPAY_DEFAULT_REJECT_MESSAGE,
    );
    foreach ($payment_forms as $name => $entityform_type) {
      $replaced_name = ucfirst(str_replace('_', ' ', $name));
      $form['freedompay_set']['freedompay_'.$name.'_reject_message'] = array(
        '#type' => 'textarea',
        '#title' => t($replaced_name . ' FreedomPay rejected message'),
        '#default_value' => FREEDOMPAY_DEFAULT_REJECT_MESSAGE,
      );
      $form['freedompay_set']['freedompay_'.$name.'_cancel_message'] = array(
        '#type' => 'textarea',
        '#title' => t($replaced_name . ' FreedomPay cancel message'),
        '#default_value' => FREEDOMPAY_DEFAULT_CANCEL_MESSAGE,
      );
      $form['freedompay_set']['freedompay_'.$name.'_checkout_message'] = array(
        '#type' => 'textarea',
        '#title' => t($replaced_name . ' FreedomPay checkout message'),
        '#default_value' => FREEDOMPAY_DEFAULT_CHECKOUT_MESSAGE,
      );
    }
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
    'Cornell University ILR School <ilr-noreply@cornell.edu>'
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

function ilr_is_production_site() {
  $is_production = FALSE;
  if (isset($_ENV["PLATFORM_BRANCH"]) && $_ENV['PLATFORM_BRANCH'] == 'master') {
    $is_production = TRUE;
  }
  return $is_production;
}

/**
 * Creates or retrieves an entitymetadata wrapper for a given nid
 */
function ilr_get_node_wrapper($node_or_nid) {
  $wrappers = &drupal_static(__FUNCTION__);
  $node = (is_numeric($node_or_nid)) ? node_load($node_or_nid) : $node_or_nid;
  if (!isset($wrappers[$node->nid])) {
    $wrappers[$node->nid] = entity_metadata_wrapper('node', $node);
  }
  return $wrappers[$node->nid];
}

/**
 * Gets the url alis for a wrapper
 */
function ilr_get_wrapper_alias($wrapper) {
  if ($wrapper->getBundle() == 'promo') {
    return promo_get_url_from_wrapper($wrapper);
  }
  else {
    $nid = $wrapper->getIdentifier();
    return '/' . drupal_get_path_alias("node/$nid");
  }
  return '';
}

/**
 * Adds the read more link for content,
 * which is removed by tagged_content but
 * is sometimes present in the design
 */
function ilr_add_read_more_link(&$variables) {
  $node_title_stripped = strip_tags($variables['node']->title);
  $variables['content']['links']['node']['#links']['node-readmoremore'] = array(
    'title' => t('Read more<span class="element-invisible"> about @title</span>', array('@title' => $node_title_stripped)),
    'href' => '/node/'. $variables['node']->nid,
    'html' => TRUE,
    'attributes' => array('data-nid'=>$variables['node']->nid,'rel' => 'tag', 'title' => $node_title_stripped),
  );
}

/**
 * Figures out whether user account has a NetID
 */
function ilr_user_has_netid() {
  global $user;
  if ($user->uid) {
    $account = user_load($user->uid);
    return !empty($account->field_netid);
  }
  return FALSE;
}

/**
 * Generates a string representation for the given byte count.
 *
 * @param $size
 *   A size in bytes.
 * @param $langcode
 *   Optional language code to translate to a language other than what is used
 *   to display the page.
 *
 * @return
 *   A translated string representation of the size.
 */
function ilr_format_file_size($size, $langcode = NULL) {
  if ($size < DRUPAL_KILOBYTE) {
    return format_plural($size, '1 byte', '@count bytes', array(), array('langcode' => $langcode));
  }
  else {
    $size = $size / DRUPAL_KILOBYTE; // Convert bytes to kilobytes.
    $units = array(
      t('@size KB', array(), array('langcode' => $langcode)),
      t('@size MB', array(), array('langcode' => $langcode)),
      t('@size GB', array(), array('langcode' => $langcode)),
      t('@size TB', array(), array('langcode' => $langcode)),
      t('@size PB', array(), array('langcode' => $langcode)),
      t('@size EB', array(), array('langcode' => $langcode)),
      t('@size ZB', array(), array('langcode' => $langcode)),
      t('@size YB', array(), array('langcode' => $langcode)),
    );
    foreach ($units as $unit) {
      if (round($size) >= DRUPAL_KILOBYTE) {
        $size = $size / DRUPAL_KILOBYTE;
      }
      else {
        break;
      }
    }
    return str_replace('@size', round($size), $unit);
  }
}

/**
 * Checks if user has a given role
 * - Can check an array of roles or a single role
 */
function _ilr_user_has_role($roles) {
  return !!count(array_intersect(is_array($roles)? $roles : array($roles), array_values($GLOBALS['user']->roles)));
}

/**
 * Custom EntityFieldQuery on users
 * rolename requires the hook_query_TAG_alter() below
 */
function ilr_get_users_by_rolename($rolename){
  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'user');
  $query->addTag('rolequery');
  $query->addMetaData('rolename', $rolename);

  if($user_results = $query->execute()) {
    $users = user_load_multiple(array_keys($user_results['user']));
    return $users;
  }
  return FALSE;
}

/**
 * Implements hook_query_TAG_alter()
 * Limits EFQ in get_users_by_rolename
 */
function ilr_query_rolequery_alter(QueryAlterableInterface $query) {
  $rolename = $query->getMetaData('rolename');
  $role_subquery = db_select("role", "role");
  $role_subquery->condition('role.name', $rolename, '=');
  $role_subquery->join('users_roles', "users_to_include", "role.rid = users_to_include.rid");
  $role_subquery->fields('users_to_include', array('uid' => 'uid'));
  $role_subquery->where('users_to_include.uid = users.uid');
  $query->exists($role_subquery);
}

/**
 * Rename an array of fields.
 *
 * Copied from field_rename.module/field_rename_rename_fields() in https://www.drupal.org/project/field_rename
 *
 * Which in turn was adapted from code in forum_update_7003(). See also
 * zgadzaj.com/how-to-change-the-machine-name-of-a-content-field-in-
 * drupal-7.
 *
 * @param $fields
 *   Array of field names, with old names as keys and new names as values.
 * @param $drop_first
 *   Boolean: whether to drop any existing tables for the renamed fields. If
 *   you have created the renamed field already - for example, by renaming
 *   a field that was exported to Features and then reverting the feature -
 *   you may wish to set this argument to TRUE so that your data will be
 *   copied.
 */
function ilr_rename_fields($fields, $drop_first = FALSE) {
  $error = false;

  foreach ($fields as $old_field_name => $new_field_name) {
    if (empty($old_field_name)) {
      drupal_set_message('Current field name must not be empty.', 'error');
      continue;
    }
    if (empty($new_field_name)) {
      drupal_set_message('New field name must not be empty.', 'error');
      continue;
    }
    // Read field data.
    $old_field = field_read_field($old_field_name);
    if (empty($old_field)) {
      drupal_set_message('Field "' . $old_field_name . '" does not exist.', 'error');
      continue;
    }

    // Update {field_config}.
    try {
      db_update('field_config')->fields(array('field_name' => $new_field_name))->condition('id', $old_field['id'])->execute();
    } catch (Exception $e) {
      $error = true;
      drupal_set_message('Could not update field_config table: ' . $e->getMessage(), 'error');
    }

    // Update {field_config_instance}.
    try {
      db_update('field_config_instance')->fields(array('field_name' => $new_field_name))->condition('field_id', $old_field['id'])->execute();
    } catch (Exception $e) {
      $error = true;
      drupal_set_message('Could not update field_config_instance table: ' . $e->getMessage(), 'error');
    }

    // The tables that need updating in the form 'old_name' => 'new_name'.
    $tables = array(
      'field_data_' . $old_field_name => 'field_data_' . $new_field_name,
      'field_revision_' . $old_field_name => 'field_revision_' . $new_field_name,
    );

    // Iterate through tables to be redefined and renamed.
    foreach ($tables as $old_table => $new_table) {
      // Iterate through the field's columns. For example, a 'text' field will
      // have columns 'value' and 'format'.
      foreach ($old_field['columns'] as $column_name => $column_definition) {
        // Column names are in the format {field_name}_{column_name}.
        $old_column_name = $old_field_name . '_' . $column_name;
        $new_column_name = $new_field_name . '_' . $column_name;

        // If there is an index for the field, drop and then re-add it.
        $has_index = isset($old_field['indexes'][$column_name]) && ($old_field['indexes'][$column_name] == array($column_name));
        if ($has_index) {
          try {
            db_drop_index($old_table, $old_column_name);
          } catch (Exception $e) {
            $error = true;
            drupal_set_message('Could not drop index: ' . $e->getMessage(), 'error');
          }
        }

        // Rename the column.
        try {
            db_change_field($old_table, $old_column_name, $new_column_name, $column_definition);
        } catch (Exception $e) {
            $error = true;
            drupal_set_message('Could not change field: ' . $e->getMessage(), 'error');
        }

        if ($has_index) {
            try {
                db_drop_index($old_table, $new_column_name);
                db_add_index($old_table, $new_column_name, array($new_column_name));
            } catch (Exception $e) {
                $error = true;
                drupal_set_message('Could not update index: ' . $e->getMessage(), 'error');
            }
        }

        watchdog('Field Rename', 'Renamed field !old_field_name to !new_field_name.', array('!old_field_name' => $old_field_name, '!new_field_name' => $new_field_name));
      }

      // The new table may exist e.g. due to having been included in a feature
      // that was reverted prior to this update being run. If so, we need to
      // drop the new table so that the old one can be renamed.
      if ($drop_first && db_table_exists($new_table)) {
        try {
          db_drop_table($new_table);
        } catch (Exception $e) {
          $error = true;
          drupal_set_message('Could not drop table: ' . $e->getMessage(), 'error');
        }
      }

      // Rename the table.
      try {
        db_rename_table($old_table, $new_table);
      } catch (Exception $e) {
        $error = true;
        drupal_set_message('Could not rename table: ' . $e->getMessage(), 'error');
      }
    }

    if (!$error) {
      drupal_set_message(t('Renamed field !old_field_name to !new_field_name.', array('!old_field_name' => $old_field_name, '!new_field_name' => $new_field_name)));
    } else {
      drupal_set_message(t('Errors occured while renaming field !old_field_name to !new_field_name.', array('!old_field_name' => $old_field_name, '!new_field_name' => $new_field_name)), 'error');
    }
  }
}

function ilr_add_section_title(&$variables, $title=NULL) {
  if ($title) {
    $variables['section_title'] = $title;
  }
  else {
    $parents = ilr_get_menu_trail_by_path();
    if (count($parents) > 2) {
      $url = $parents[count($parents) - 2];
      $path = (strpos($url, 'node') === 0)
        ? $url
        : drupal_lookup_path("source", $url);
      if (!$path) { // Check if there is a redirect
        $redirects = redirect_fetch_rids_by_path($url, LANGUAGE_NONE);
        if (!empty($redirects)) {
          $redirect = redirect_load($redirects[0]);
          $path = drupal_lookup_path("source", $redirect->redirect);
        }
      }
      $parent_title = menu_get_object('node', 1, $path)->title;

      $variables['section_title'] = $parent_title;
    }
  }
}

function ilr_get_menu_trail_by_path() {
  $parents = _menu_trail_by_path_get_parent_candidates(drupal_get_path_alias());
  return $parents;
}

function ilr_get_menu_item($nid=NULL) {
  if (!$nid) {
    if ($node = menu_get_object()) {
      $nid = $node->nid;
    }
  }
  if ($nid) {
    $menu_record = db_select('menu_links', 'ml')
      ->condition('ml.link_path', 'node/' . $nid)
      ->fields('ml', array('menu_name', 'mlid', 'plid', 'hidden'))
      ->execute()
      ->fetchObject();

    if (is_object($menu_record)) {
      return $menu_record;
    }
  }
  return NULL;
}

function ilr_mlid_has_children($mlid) {
  $menu_record = db_select('menu_links', 'ml')
      ->condition('ml.plid', $mlid)
      ->condition('ml.hidden', 1, '!=')
      ->fields('ml', array('mlid'))
      ->execute()
      ->fetchObject();
  if (!empty($menu_record)) {
    return 1;
  }
  return 0;
}

function ilr_mlid_has_siblings($plid) {
  $menu_record = db_select('menu_links', 'ml')
      ->condition('ml.plid', $plid)
      ->condition('ml.hidden', 1, '!=')
      ->fields('ml', array('mlid'))
      ->execute()
      ->fetchObject();
  if (!empty($menu_record)) {
    return 1;
  }
  return 0;
}

function ilr_get_bem_markup($content, $block, $element, $modifiers=[], $prefix='', $suffix='') {
  $classname = $block . '__' . $element;
  $modifier_classes = '';
  foreach ($modifiers as $modifier) {
    $modifier_classes .= ' ' . $classname . '--' . $modifier;
  }
  $markup = '<div class="'. $classname .' ' . $modifier_classes . '">';
  $markup .= $prefix;
  $markup .= $content;
  $markup .= $suffix;
  $markup .= '</div>';

  return $markup;
}
