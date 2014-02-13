<?php
/**
 * @file
 * people_profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function people_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create people_profile content'.
  $permissions['create people_profile content'] = array(
    'name' => 'create people_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any people_profile content'.
  $permissions['delete any people_profile content'] = array(
    'name' => 'delete any people_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own people_profile content'.
  $permissions['delete own people_profile content'] = array(
    'name' => 'delete own people_profile content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any people_profile content'.
  $permissions['edit any people_profile content'] = array(
    'name' => 'edit any people_profile content',
    'roles' => array(
      'faculty admin' => 'faculty admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own people_profile content'.
  $permissions['edit own people_profile content'] = array(
    'name' => 'edit own people_profile content',
    'roles' => array(
      'faculty admin' => 'faculty admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
