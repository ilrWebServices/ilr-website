<?php
/**
 * @file
 * basic_page.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function basic_page_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-worker-institute-menu.
  $menus['menu-worker-institute-menu'] = array(
    'menu_name' => 'menu-worker-institute-menu',
    'title' => 'Worker Institute Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Worker Institute Menu');


  return $menus;
}
