<?php
/**
 * @file
 * scheinman_neutral.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function scheinman_neutral_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create scheinman_neutral content'.
  $permissions['create scheinman_neutral content'] = array(
    'name' => 'create scheinman_neutral content',
    'roles' => array(
      'Scheinman Neutral Admin' => 'Scheinman Neutral Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any scheinman_neutral content'.
  $permissions['delete any scheinman_neutral content'] = array(
    'name' => 'delete any scheinman_neutral content',
    'roles' => array(
      'Scheinman Neutral Admin' => 'Scheinman Neutral Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own scheinman_neutral content'.
  $permissions['delete own scheinman_neutral content'] = array(
    'name' => 'delete own scheinman_neutral content',
    'roles' => array(
      'Neutral' => 'Neutral',
      'Scheinman Neutral Admin' => 'Scheinman Neutral Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any scheinman_neutral content'.
  $permissions['edit any scheinman_neutral content'] = array(
    'name' => 'edit any scheinman_neutral content',
    'roles' => array(
      'Scheinman Neutral Admin' => 'Scheinman Neutral Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own scheinman_neutral content'.
  $permissions['edit own scheinman_neutral content'] = array(
    'name' => 'edit own scheinman_neutral content',
    'roles' => array(
      'Neutral' => 'Neutral',
      'Scheinman Neutral Admin' => 'Scheinman Neutral Admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
