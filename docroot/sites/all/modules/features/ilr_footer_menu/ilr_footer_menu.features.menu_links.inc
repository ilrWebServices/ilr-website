<?php
/**
 * @file
 * ilr_footer_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ilr_footer_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-secondary-menu_log-in:user/login
  $menu_links['menu-secondary-menu_log-in:user/login'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log In',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-secondary-menu_log-in:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_log-out:user/logout
  $menu_links['menu-secondary-menu_log-out:user/logout'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log Out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-secondary-menu_log-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Log In');
  t('Log Out');


  return $menu_links;
}
