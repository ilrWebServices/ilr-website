<?php
/**
 * @file
 * ILRRedirectMigrationLoader
 */

/**
 * Class ILRRedirectMigrationLoader
 *
 * Used to load nodes by migration source id.
 */
class ILRRedirectMigrationLoader extends ILRRedirectLoader{
  protected $map_table;
  function __construct($file, $migration) {
    parent::__construct($file);
    $this->map_table = "migrate_map_$migration";
  }
  protected function getNid($unique_id) {
    return db_select($this->map_table, 'm')
      ->fields('m',array('destid1'))
      ->condition('sourceid1', $unique_id)
      ->execute()
      ->fetchField();
  }
}