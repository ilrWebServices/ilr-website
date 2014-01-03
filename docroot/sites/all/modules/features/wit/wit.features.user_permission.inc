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
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any wit_article content'.
  $permissions['delete any wit_article content'] = array(
    'name' => 'delete any wit_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own wit_article content'.
  $permissions['delete own wit_article content'] = array(
    'name' => 'delete own wit_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in publications'.
  $permissions['delete terms in publications'] = array(
    'name' => 'delete terms in publications',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in wire_service'.
  $permissions['delete terms in wire_service'] = array(
    'name' => 'delete terms in wire_service',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any wit_article content'.
  $permissions['edit any wit_article content'] = array(
    'name' => 'edit any wit_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own wit_article content'.
  $permissions['edit own wit_article content'] = array(
    'name' => 'edit own wit_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in publications'.
  $permissions['edit terms in publications'] = array(
    'name' => 'edit terms in publications',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in wire_service'.
  $permissions['edit terms in wire_service'] = array(
    'name' => 'edit terms in wire_service',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
