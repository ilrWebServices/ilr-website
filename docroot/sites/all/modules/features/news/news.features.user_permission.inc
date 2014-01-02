<?php
/**
 * @file
 * news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'create any news_listing_manual bean'.
  $permissions['create any news_listing_manual bean'] = array(
    'name' => 'create any news_listing_manual bean',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any tagged_news bean'.
  $permissions['create any tagged_news bean'] = array(
    'name' => 'create any tagged_news bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'create news_item content'.
  $permissions['create news_item content'] = array(
    'name' => 'create news_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_item content'.
  $permissions['delete any news_item content'] = array(
    'name' => 'delete any news_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_listing_manual bean'.
  $permissions['delete any news_listing_manual bean'] = array(
    'name' => 'delete any news_listing_manual bean',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any tagged_news bean'.
  $permissions['delete any tagged_news bean'] = array(
    'name' => 'delete any tagged_news bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete own news_item content'.
  $permissions['delete own news_item content'] = array(
    'name' => 'delete own news_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in news_category'.
  $permissions['delete terms in news_category'] = array(
    'name' => 'delete terms in news_category',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any news_item content'.
  $permissions['edit any news_item content'] = array(
    'name' => 'edit any news_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news_listing_manual bean'.
  $permissions['edit any news_listing_manual bean'] = array(
    'name' => 'edit any news_listing_manual bean',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any tagged_news bean'.
  $permissions['edit any tagged_news bean'] = array(
    'name' => 'edit any tagged_news bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit own news_item content'.
  $permissions['edit own news_item content'] = array(
    'name' => 'edit own news_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in news_category'.
  $permissions['edit terms in news_category'] = array(
    'name' => 'edit terms in news_category',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view any news_listing_manual bean'.
  $permissions['view any news_listing_manual bean'] = array(
    'name' => 'view any news_listing_manual bean',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any tagged_news bean'.
  $permissions['view any tagged_news bean'] = array(
    'name' => 'view any tagged_news bean',
    'roles' => array(),
    'module' => 'bean',
  );

  return $permissions;
}
