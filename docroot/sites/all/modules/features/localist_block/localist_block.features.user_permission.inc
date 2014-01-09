<?php
/**
 * @file
 * localist_block.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function localist_block_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any event_block bean'.
  $permissions['create any event_block bean'] = array(
    'name' => 'create any event_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any event_block bean'.
  $permissions['delete any event_block bean'] = array(
    'name' => 'delete any event_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any event_block bean'.
  $permissions['edit any event_block bean'] = array(
    'name' => 'edit any event_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any event_block bean'.
  $permissions['view any event_block bean'] = array(
    'name' => 'view any event_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
