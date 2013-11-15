<?php
/**
 * @file
 * ilr_footer_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ilr_footer_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-secondary-menu.
  $menus['menu-secondary-menu'] = array(
    'menu_name' => 'menu-secondary-menu',
    'title' => 'Secondary menu',
    'description' => 'The <em>Secondary</em> menu is used to show utility links for the site and is generally displayed in the footer.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Secondary menu');
  t('The <em>Secondary</em> menu is used to show utility links for the site and is generally displayed in the footer.');


  return $menus;
}
