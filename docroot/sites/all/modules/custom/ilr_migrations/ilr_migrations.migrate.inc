<?php

/*
 * Implements hook_migrate_api()
 */
function ilr_migrations_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'News' => array('class_name' => 'NewsMigration'),
      'Portraits' => array('class_name' => 'StudentPortraitMigration'),
      'ScheinmanNeutrals' => array('class_name' => 'ScheinmanNeutralsMigration'),
      'Workspan' => array('class_name' => 'WorkspanMigration'),
    ),
  );
  return $api;
}
