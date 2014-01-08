<?php
/**
 * @file
 * wit.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wit_user_default_roles() {
  $roles = array();

  // Exported role: wit editor.
  $roles['wit editor'] = array(
    'name' => 'wit editor',
    'weight' => 6,
  );

  return $roles;
}
