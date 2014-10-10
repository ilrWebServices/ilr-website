<?php
/**
 * @file
 * ilr_mega_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_mega_menu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
