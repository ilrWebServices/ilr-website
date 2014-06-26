<?php
/**
 * Implements hook_views_plugins().
 *
 * Provides 2 Views Default Argument plugins
 * These provide all the Groups and Subgroups for a User.
 * This is necessary because OG Subgroups doesn't actually make the user a member of the group.
 *
 *
 * Classes derived from og_views_plugins
 */
function ilr_manual_listing_views_plugins() {
  return array(
    'argument default' => array(
      'ilr_manual_listing_user_groups' => array(
        'title' => t('ILR Manual Listing content types'),
        'help' => t('These are set in ....'),
        'handler' => 'ilr_manual_listing_plugin_argument_default_manual_listing_types',
        'path' => drupal_get_path('module', 'ilr_manual_listing') . '/views/handlers',
      ),
    ),

  );
}
