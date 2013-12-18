<?php
/**
 * @file
 * scheinman_neutral.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function scheinman_neutral_user_default_roles() {
  $roles = array();

  // Exported role: neutral.
  $roles['neutral'] = array(
    'name' => 'neutral',
    'weight' => 4,
  );

  // Exported role: neutral admin.
  $roles['neutral admin'] = array(
    'name' => 'neutral admin',
    'weight' => 3,
  );

  // Exported role: registered user.
  $roles['registered user'] = array(
    'name' => 'registered user',
    'weight' => 5,
  );

  return $roles;
}
