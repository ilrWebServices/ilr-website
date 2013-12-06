<?php
/**
 * @file
 * basic_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function basic_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer wysiwyg templates'.
  $permissions['administer wysiwyg templates'] = array(
    'name' => 'administer wysiwyg templates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'wysiwyg_template',
  );

  // Exported permission: 'import wysiwyg templates'.
  $permissions['import wysiwyg templates'] = array(
    'name' => 'import wysiwyg templates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'wysiwyg_template',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
