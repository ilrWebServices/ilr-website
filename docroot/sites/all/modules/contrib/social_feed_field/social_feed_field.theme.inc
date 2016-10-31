<?php

/**
 * @file
 * Theme functions for the social_feed_field module.
 */

/**
 * Implements hook_preprocess_HOOK().
 *
 * This function does the preprocess for a POS collection item.
 */
function social_feed_field_preprocess_sff_container(&$variables) {
  $variables['list'] = theme('item_list', array(
    'items' => $variables['items'],
    'attributes' => array('class' => array($variables['class'])),
  ));
}
