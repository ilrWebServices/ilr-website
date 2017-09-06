<?php

/**
 * Implements hook_drush_command().
 */
function featuretest_drush_command() {

  $commands['enable-ilr-profile'] = array(
    'description' => 'Enables the ILR profile on featuretest.',
  );

  return $commands;
}

/**
 * Drush command logic.
 * drush_[COMMAND_NAME]().
 */
function drush_featuretest_enable_ilr_profile() {
  if ($result = db_query("UPDATE system SET status=1 WHERE name='ilr'")) {
    drush_print('ILR profile enabled');
  }
}
