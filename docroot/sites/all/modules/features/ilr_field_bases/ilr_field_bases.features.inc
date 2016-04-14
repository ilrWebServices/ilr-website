<?php
/**
 * @file
 * ilr_field_bases.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_field_bases_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
}
