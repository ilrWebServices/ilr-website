<?php
/**
 * @file
 * ilr_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ilr_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer dependencies'.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: 'administer entityform types'.
  $permissions['administer entityform types'] = array(
    'name' => 'administer entityform types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'administer fancybox'.
  $permissions['administer fancybox'] = array(
    'name' => 'administer fancybox',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fancybox',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer ilr manual listing configuration'.
  $permissions['administer ilr manual listing configuration'] = array(
    'name' => 'administer ilr manual listing configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ilr_manual_listing',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer simpleSAMLphp authentication'.
  $permissions['administer simpleSAMLphp authentication'] = array(
    'name' => 'administer simpleSAMLphp authentication',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplesamlphp_auth',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer tagged content block configuration'.
  $permissions['administer tagged content block configuration'] = array(
    'name' => 'administer tagged content block configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tagged_content_block',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer youtube'.
  $permissions['administer youtube'] = array(
    'name' => 'administer youtube',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'youtube',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear people_profile_xml_import feeds'.
  $permissions['clear people_profile_xml_import feeds'] = array(
    'name' => 'clear people_profile_xml_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear youtube_importer feeds'.
  $permissions['clear youtube_importer feeds'] = array(
    'name' => 'clear youtube_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear youtube_playlist_importer feeds'.
  $permissions['clear youtube_playlist_importer feeds'] = array(
    'name' => 'clear youtube_playlist_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create any content_listing_manual bean'.
  $permissions['create any content_listing_manual bean'] = array(
    'name' => 'create any content_listing_manual bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any html bean'.
  $permissions['create any html bean'] = array(
    'name' => 'create any html bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any tagged_content bean'.
  $permissions['create any tagged_content bean'] = array(
    'name' => 'create any tagged_content bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create featured_book content'.
  $permissions['create featured_book content'] = array(
    'name' => 'create featured_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create microfiche content'.
  $permissions['create microfiche content'] = array(
    'name' => 'create microfiche content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create microfilm content'.
  $permissions['create microfilm content'] = array(
    'name' => 'create microfilm content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create promo content'.
  $permissions['create promo content'] = array(
    'name' => 'create promo content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create spotlight content'.
  $permissions['create spotlight content'] = array(
    'name' => 'create spotlight content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create wit_article content'.
  $permissions['create wit_article content'] = array(
    'name' => 'create wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'wit editor' => 'wit editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create youtube_playlist content'.
  $permissions['create youtube_playlist content'] = array(
    'name' => 'create youtube_playlist content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create youtube_video content'.
  $permissions['create youtube_video content'] = array(
    'name' => 'create youtube_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any content_listing_manual bean'.
  $permissions['delete any content_listing_manual bean'] = array(
    'name' => 'delete any content_listing_manual bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any entityform'.
  $permissions['delete any entityform'] = array(
    'name' => 'delete any entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete any featured_book content'.
  $permissions['delete any featured_book content'] = array(
    'name' => 'delete any featured_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any html bean'.
  $permissions['delete any html bean'] = array(
    'name' => 'delete any html bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any microfiche content'.
  $permissions['delete any microfiche content'] = array(
    'name' => 'delete any microfiche content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any microfilm content'.
  $permissions['delete any microfilm content'] = array(
    'name' => 'delete any microfilm content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any promo content'.
  $permissions['delete any promo content'] = array(
    'name' => 'delete any promo content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any spotlight content'.
  $permissions['delete any spotlight content'] = array(
    'name' => 'delete any spotlight content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any tagged_content bean'.
  $permissions['delete any tagged_content bean'] = array(
    'name' => 'delete any tagged_content bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any wit_article content'.
  $permissions['delete any wit_article content'] = array(
    'name' => 'delete any wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any youtube_playlist content'.
  $permissions['delete any youtube_playlist content'] = array(
    'name' => 'delete any youtube_playlist content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any youtube_video content'.
  $permissions['delete any youtube_video content'] = array(
    'name' => 'delete any youtube_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own entityform'.
  $permissions['delete own entityform'] = array(
    'name' => 'delete own entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete own featured_book content'.
  $permissions['delete own featured_book content'] = array(
    'name' => 'delete own featured_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own microfiche content'.
  $permissions['delete own microfiche content'] = array(
    'name' => 'delete own microfiche content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own microfilm content'.
  $permissions['delete own microfilm content'] = array(
    'name' => 'delete own microfilm content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own promo content'.
  $permissions['delete own promo content'] = array(
    'name' => 'delete own promo content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own spotlight content'.
  $permissions['delete own spotlight content'] = array(
    'name' => 'delete own spotlight content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own wit_article content'.
  $permissions['delete own wit_article content'] = array(
    'name' => 'delete own wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'wit editor' => 'wit editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own youtube_playlist content'.
  $permissions['delete own youtube_playlist content'] = array(
    'name' => 'delete own youtube_playlist content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own youtube_video content'.
  $permissions['delete own youtube_video content'] = array(
    'name' => 'delete own youtube_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in areas_of_expertise'.
  $permissions['delete terms in areas_of_expertise'] = array(
    'name' => 'delete terms in areas_of_expertise',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in publications'.
  $permissions['delete terms in publications'] = array(
    'name' => 'delete terms in publications',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in wire_services'.
  $permissions['delete terms in wire_services'] = array(
    'name' => 'delete terms in wire_services',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any content_listing_manual bean'.
  $permissions['edit any content_listing_manual bean'] = array(
    'name' => 'edit any content_listing_manual bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any entityform'.
  $permissions['edit any entityform'] = array(
    'name' => 'edit any entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit any featured_book content'.
  $permissions['edit any featured_book content'] = array(
    'name' => 'edit any featured_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any html bean'.
  $permissions['edit any html bean'] = array(
    'name' => 'edit any html bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any microfiche content'.
  $permissions['edit any microfiche content'] = array(
    'name' => 'edit any microfiche content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any microfilm content'.
  $permissions['edit any microfilm content'] = array(
    'name' => 'edit any microfilm content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any promo content'.
  $permissions['edit any promo content'] = array(
    'name' => 'edit any promo content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any spotlight content'.
  $permissions['edit any spotlight content'] = array(
    'name' => 'edit any spotlight content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tagged_content bean'.
  $permissions['edit any tagged_content bean'] = array(
    'name' => 'edit any tagged_content bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any wit_article content'.
  $permissions['edit any wit_article content'] = array(
    'name' => 'edit any wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'wit editor' => 'wit editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any youtube_playlist content'.
  $permissions['edit any youtube_playlist content'] = array(
    'name' => 'edit any youtube_playlist content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any youtube_video content'.
  $permissions['edit any youtube_video content'] = array(
    'name' => 'edit any youtube_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit own entityform'.
  $permissions['edit own entityform'] = array(
    'name' => 'edit own entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit own featured_book content'.
  $permissions['edit own featured_book content'] = array(
    'name' => 'edit own featured_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own microfiche content'.
  $permissions['edit own microfiche content'] = array(
    'name' => 'edit own microfiche content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own microfilm content'.
  $permissions['edit own microfilm content'] = array(
    'name' => 'edit own microfilm content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own promo content'.
  $permissions['edit own promo content'] = array(
    'name' => 'edit own promo content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own spotlight content'.
  $permissions['edit own spotlight content'] = array(
    'name' => 'edit own spotlight content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own wit_article content'.
  $permissions['edit own wit_article content'] = array(
    'name' => 'edit own wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'wit editor' => 'wit editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own youtube_playlist content'.
  $permissions['edit own youtube_playlist content'] = array(
    'name' => 'edit own youtube_playlist content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own youtube_video content'.
  $permissions['edit own youtube_video content'] = array(
    'name' => 'edit own youtube_video content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in areas_of_expertise'.
  $permissions['edit terms in areas_of_expertise'] = array(
    'name' => 'edit terms in areas_of_expertise',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in publications'.
  $permissions['edit terms in publications'] = array(
    'name' => 'edit terms in publications',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in wire_services'.
  $permissions['edit terms in wire_services'] = array(
    'name' => 'edit terms in wire_services',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import people_profile_xml_import feeds'.
  $permissions['import people_profile_xml_import feeds'] = array(
    'name' => 'import people_profile_xml_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import youtube_importer feeds'.
  $permissions['import youtube_importer feeds'] = array(
    'name' => 'import youtube_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import youtube_playlist_importer feeds'.
  $permissions['import youtube_playlist_importer feeds'] = array(
    'name' => 'import youtube_playlist_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'tamper people_profile_xml_import'.
  $permissions['tamper people_profile_xml_import'] = array(
    'name' => 'tamper people_profile_xml_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper youtube_importer'.
  $permissions['tamper youtube_importer'] = array(
    'name' => 'tamper youtube_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper youtube_playlist_importer'.
  $permissions['tamper youtube_playlist_importer'] = array(
    'name' => 'tamper youtube_playlist_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock people_profile_xml_import feeds'.
  $permissions['unlock people_profile_xml_import feeds'] = array(
    'name' => 'unlock people_profile_xml_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock youtube_importer feeds'.
  $permissions['unlock youtube_importer feeds'] = array(
    'name' => 'unlock youtube_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock youtube_playlist_importer feeds'.
  $permissions['unlock youtube_playlist_importer feeds'] = array(
    'name' => 'unlock youtube_playlist_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'view any content_listing_manual bean'.
  $permissions['view any content_listing_manual bean'] = array(
    'name' => 'view any content_listing_manual bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any entityform'.
  $permissions['view any entityform'] = array(
    'name' => 'view any entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view any html bean'.
  $permissions['view any html bean'] = array(
    'name' => 'view any html bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any tagged_content bean'.
  $permissions['view any tagged_content bean'] = array(
    'name' => 'view any tagged_content bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean revisions'.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view own entityform'.
  $permissions['view own entityform'] = array(
    'name' => 'view own entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
