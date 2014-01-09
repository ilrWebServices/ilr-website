<?php
/**
 * @file
 * wit.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wit_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create wit_article content'.
  $permissions['create wit_article content'] = array(
    'name' => 'create wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'wit editor' => 'wit editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any wit_article content'.
  $permissions['delete any wit_article content'] = array(
    'name' => 'delete any wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own wit_article content'.
  $permissions['delete own wit_article content'] = array(
    'name' => 'delete own wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'wit editor' => 'wit editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any wit_article content'.
  $permissions['edit any wit_article content'] = array(
    'name' => 'edit any wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'wit editor' => 'wit editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own wit_article content'.
  $permissions['edit own wit_article content'] = array(
    'name' => 'edit own wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'wit editor' => 'wit editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
