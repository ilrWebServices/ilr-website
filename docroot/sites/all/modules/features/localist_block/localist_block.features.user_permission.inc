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

  // Exported permission: create any event_block bean.
  $permissions['create any event_block bean'] = array(
    'name' => 'create any event_block bean',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'publisher',
    ),
    'module' => 'bean',
  );

  // Exported permission: delete any event_block bean.
  $permissions['delete any event_block bean'] = array(
    'name' => 'delete any event_block bean',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: edit any event_block bean.
  $permissions['edit any event_block bean'] = array(
    'name' => 'edit any event_block bean',
    'roles' => array(
      0 => 'administrator',
      1 => 'contributor',
      2 => 'publisher',
    ),
    'module' => 'bean',
  );

  // Exported permission: view any event_block bean.
  $permissions['view any event_block bean'] = array(
    'name' => 'view any event_block bean',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
