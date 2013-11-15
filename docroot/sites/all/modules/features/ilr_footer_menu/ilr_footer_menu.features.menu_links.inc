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

  // Exported menu link: menu-secondary-menu:saml_login
  $menu_links['menu-secondary-menu:saml_login'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'saml_login',
    'router_path' => 'saml_login',
    'link_title' => 'Log in',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-secondary-menu:user/login
  $menu_links['menu-secondary-menu:user/login'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-secondary-menu:user/logout
  $menu_links['menu-secondary-menu:user/logout'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Log in');
  t('Log out');


  return $menu_links;
}
