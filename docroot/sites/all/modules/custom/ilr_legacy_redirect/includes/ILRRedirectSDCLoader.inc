<?php
/**
 * @file
 * ILRRedirectSDCLoader class definition
 */

/**
 * Class ILRRedirectSDCLoader
 *
 * Used to load current nodes by catalog prefix
 */
class ILRRedirectSDCLoader extends ILRRedirectLoader{
  protected function getNid($unique_id) {
    $unique_id = strtoupper($unique_id);
    return _ilr_sdc_listings_get_nid_from_catalog_prefix($unique_id);
  }
}