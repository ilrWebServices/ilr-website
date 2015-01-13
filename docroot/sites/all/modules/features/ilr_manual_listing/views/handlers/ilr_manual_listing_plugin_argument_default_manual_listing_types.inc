<?php

/**
 * @file
 * Holds the class defining the Views plugin loading the groups the acting user
 * is member of.
 */

/**
 * The class defining the Views plugin loading the groups and subgroups of the acting user.
 */
class ilr_manual_listing_plugin_argument_default_manual_listing_types extends views_plugin_argument_default {

  /**
   * Get the default argument.
   */
  function get_argument() {
    // Get the group IDs relevant for the acting user, and return them
    // concatenated.
    $enabled_bundles = variable_get('ilr_manual_listing_enabled_bundles', _ilr_manual_listing_default_bundles());
    return implode('+', $enabled_bundles);
  }
}
