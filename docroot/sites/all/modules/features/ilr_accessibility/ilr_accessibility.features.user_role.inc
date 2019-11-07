<?php

/**
 * @file
 * ilr_accessibility.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ilr_accessibility_user_default_roles() {
  $roles = array();

  // Exported role: accessibility reviewer.
  $roles['accessibility reviewer'] = array(
    'name' => 'accessibility reviewer',
    'weight' => 13,
  );

  return $roles;
}
