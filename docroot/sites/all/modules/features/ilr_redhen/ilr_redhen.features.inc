<?php
/**
 * @file
 * ilr_redhen.features.inc
 */

/**
 * Implements hook_default_redhen_contact_type().
 */
function ilr_redhen_default_redhen_contact_type() {
  $items = array();
  $items['sports_leadership_camp_contact'] = entity_import('redhen_contact_type', '{
    "name" : "sports_leadership_camp_contact",
    "label" : "Sports Leadership Camp Contact",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  return $items;
}
