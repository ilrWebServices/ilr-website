<?php
/**
 * @file
 * block_collection.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function block_collection_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any block_collection bean'.
  $permissions['create any block_collection bean'] = array(
    'name' => 'create any block_collection bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any block_collection bean'.
  $permissions['delete any block_collection bean'] = array(
    'name' => 'delete any block_collection bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any block_collection bean'.
  $permissions['edit any block_collection bean'] = array(
    'name' => 'edit any block_collection bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any block_collection bean'.
  $permissions['view any block_collection bean'] = array(
    'name' => 'view any block_collection bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
