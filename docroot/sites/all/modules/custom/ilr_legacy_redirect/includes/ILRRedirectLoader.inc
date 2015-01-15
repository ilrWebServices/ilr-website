<?php
/**
 * @file
 * ILRRedirectLoader
 */

/**
 * Class ILRRedirectLoader
 *
 * Abstract class for loading and saving legacy redirects.
 */
abstract class ILRRedirectLoader {
  protected $file_name;

  function __construct($file_name) {
    $this->file_name = $file_name;
  }
  public function runImport() {
    $handle = @fopen('../migration_data/redirects/' .$this->file_name, 'r');
    while ($row = fgetcsv($handle)) {
      $legacy_path = $this->clean_path($row[0]);
      $unique_id = $row[1];
      $nid = $this->getNid($unique_id);
      if ($nid) {
        $this->saveRedirect($nid, $legacy_path);
      }
      else {
        watchdog('ilr_redirect', "Cannot find NID for $unique_id", array(), WATCHDOG_ERROR);
      }
    }
  }
  protected function saveRedirect($nid, $legacy_path) {
    if (!redirect_load_by_source($legacy_path)) {
      $entity_type = 'redirect';
      $redirect = new stdClass();
      redirect_object_prepare($redirect);
      $redirect->source = $legacy_path;
      $redirect->redirect = "node/$nid";
      $redirect->status_code = 301;


      redirect_save($redirect);
    }
    else {
      // Don't duplicate
      //watchdog('ilr_redirect', "Redirect already exists for $legacy_path", array(), WATCHDOG_ALERT);
    }

  }
  protected function clean_path($path) {
    return ltrim($path, '/');
  }

  abstract protected function getNid($unique_id);
}