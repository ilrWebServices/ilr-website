<?php

/**
 *  Page callback method for creating sub pages
 */
function ilr_sub_pages_create_sub_page($parent_node) {
  global $user;

  if (empty($_GET['sub_page_type'])) {
    drupal_goto(current_path() . '/type');
  }
  $type = $_GET['sub_page_type'];
  $enabled_bundles = variable_get('ilr_sub_pages_enabled_bundles',_ilr_sub_pages_default_bundles());
  if (!in_array($type, $enabled_bundles, TRUE)) {
    drupal_set_message('Sorry, but this content type is not available as a sub page.','error') ;
    return '';
  }

  // @see node_add() in node.pages.inc
  $node = (object) array(
    'uid' => $user->uid,
    'name' => (isset($user->name) ? $user->name : ''),
    'type' => $type,
    'language' => LANGUAGE_NONE,
  );

  // store parent node menu parent for later form alter
  menu_node_prepare($parent_node);
  $node->ilr_default_menu_parent = $parent_node->menu['menu_name'] . ':' . $parent_node->menu['mlid'];

  // store parent node kerberized setting for later
  $node->kerberized = $parent_node->kerberized;

  drupal_set_title(t('Create sub page of @title', array('@title' => $parent_node->title)), PASS_THROUGH);

  // prepare form state
  $form_state = array();
  $form_state['build_info']['args'] = array($node);
  $form_state['#ilr_sub_page'] = TRUE;
  form_load_include($form_state, 'inc', 'node', 'node.pages');

  return drupal_build_form($node->type . '_node_form', $form_state);
}
