<?php

/*
 * Implements hook_migrate_api()
 */
function ilr_migrations_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'ScheinmanNeutrals' => array('class_name' => 'ScheinmanNeutralsMigration'),
      'WitWireService' => array('class_name' => 'WitWireServiceMigration'),
      'WitPublisher' => array('class_name' => 'WitPublisherMigration'),
      'Wit' => array('class_name' => 'WitMigration'),
    ),
  );
  return $api;
}
