<?php
/**
 * @file
 * ILRRedirectLoader
 */

class ILRRedirectLoader {
  protected $file_name;

  function __construct($file_name) {
    $this->file_name = $file_name;
  }
  public function runImport() {
    $handle = @fopen('../migration_data/' .$this->file_name, 'r');
    while ($row = fgetcsv($handle)) {
      watchdog('redirect', $row[0]);
      break;
    }
  }
}