<?php
/**
 * @file
 * ilr_footer_menu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ilr_footer_menu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_secondary_links_source';
  $strongarm->value = 'menu-secondary-menu';
  $export['menu_secondary_links_source'] = $strongarm;

  return $export;
}
