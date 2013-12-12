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

  // Exported role: Neutral.
  $roles['Neutral'] = array(
    'name' => 'Neutral',
    'weight' => 4,
  );

  // Exported role: Scheinman Neutral Admin.
  $roles['Scheinman Neutral Admin'] = array(
    'name' => 'Scheinman Neutral Admin',
    'weight' => 3,
  );

  return $roles;
}
