<?php

/*
 * Implements hook_migrate_api()
 */
function ilr_migrations_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'FeaturedBook' => array('class_name' => 'FeaturedBookMigration'),
      'Microfiche' => array('class_name' => 'MicroficheMigration'),
      'Microfilm' => array('class_name' => 'MicrofilmMigration'),
      'News' => array('class_name' => 'NewsMigration'),
      'Portraits' => array('class_name' => 'StudentPortraitMigration'),
      'ScheinmanNeutrals' => array('class_name' => 'ScheinmanNeutralsMigration'),
      'Wit' => array('class_name' => 'WitMigration'),
      'WitPublisher' => array('class_name' => 'WitPublisherMigration'),
      'WitWireService' => array('class_name' => 'WitWireServiceMigration'),
      'Workspan' => array('class_name' => 'WorkspanMigration'),
    ),
  );
  return $api;
}
