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
      'contributor' => 'contributor',
      'course admin' => 'course admin',
      'neutral' => 'neutral',
      'neutral admin' => 'neutral admin',
      'wit editor' => 'wit editor',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'course admin' => 'course admin',
      'neutral' => 'neutral',
      'neutral admin' => 'neutral admin',
      'wit editor' => 'wit editor',
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
      'contributor' => 'contributor',
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
      'contributor' => 'contributor',
      'course admin' => 'course admin',
      'neutral admin' => 'neutral admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'course admin' => 'course admin',
      'neutral admin' => 'neutral admin',
      'wit editor' => 'wit editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content region field'.
  $permissions['access content region field'] = array(
    'name' => 'access content region field',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ilr_field_bases',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'wit editor' => 'wit editor',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'media',
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

  // Exported permission: 'add top level menu items'.
  $permissions['add top level menu items'] = array(
    'name' => 'add top level menu items',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ilr_sub_pages',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer any editor note'.
  $permissions['administer any editor note'] = array(
    'name' => 'administer any editor note',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'editor_note',
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

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'file_entity',
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
      'contributor' => 'contributor',
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

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
      'power user' => 'power user',
    ),
    'module' => 'redirect',
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

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
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

  // Exported permission: 'administer wysiwyg templates'.
  $permissions['administer wysiwyg templates'] = array(
    'name' => 'administer wysiwyg templates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'wysiwyg_template',
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

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
      'power user' => 'power user',
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
      'contributor' => 'contributor',
    ),
    'module' => 'user',
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
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any event_block bean'.
  $permissions['create any event_block bean'] = array(
    'name' => 'create any event_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any filtered_courses bean'.
  $permissions['create any filtered_courses bean'] = array(
    'name' => 'create any filtered_courses bean',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
      'form admin' => 'form admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any html bean'.
  $permissions['create any html bean'] = array(
    'name' => 'create any html bean',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any mega_menu bean'.
  $permissions['create any mega_menu bean'] = array(
    'name' => 'create any mega_menu bean',
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
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create author content'.
  $permissions['create author content'] = array(
    'name' => 'create author content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create basic_page content'.
  $permissions['create basic_page content'] = array(
    'name' => 'create basic_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create featured_book content'.
  $permissions['create featured_book content'] = array(
    'name' => 'create featured_book content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create microfiche content'.
  $permissions['create microfiche content'] = array(
    'name' => 'create microfiche content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create microfilm content'.
  $permissions['create microfilm content'] = array(
    'name' => 'create microfilm content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
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

  // Exported permission: 'create people_profile content'.
  $permissions['create people_profile content'] = array(
    'name' => 'create people_profile content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create post content'.
  $permissions['create post content'] = array(
    'name' => 'create post content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create promo content'.
  $permissions['create promo content'] = array(
    'name' => 'create promo content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create reflection content'.
  $permissions['create reflection content'] = array(
    'name' => 'create reflection content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create registration_page content'.
  $permissions['create registration_page content'] = array(
    'name' => 'create registration_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create scheinman_neutral content'.
  $permissions['create scheinman_neutral content'] = array(
    'name' => 'create scheinman_neutral content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'neutral admin' => 'neutral admin',
      'registered user' => 'registered user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create sdc_class content'.
  $permissions['create sdc_class content'] = array(
    'name' => 'create sdc_class content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create sdc_course content'.
  $permissions['create sdc_course content'] = array(
    'name' => 'create sdc_course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create sdc_faculty content'.
  $permissions['create sdc_faculty content'] = array(
    'name' => 'create sdc_faculty content',
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
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create student_portrait content'.
  $permissions['create student_portrait content'] = array(
    'name' => 'create student_portrait content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create sub page'.
  $permissions['create sub page'] = array(
    'name' => 'create sub page',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'ilr_sub_pages',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'power user' => 'power user',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create wit_article content'.
  $permissions['create wit_article content'] = array(
    'name' => 'create wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'wit editor' => 'wit editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create workspan content'.
  $permissions['create workspan content'] = array(
    'name' => 'create workspan content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create youtube_video content'.
  $permissions['create youtube_video content'] = array(
    'name' => 'create youtube_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any author content'.
  $permissions['delete any author content'] = array(
    'name' => 'delete any author content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any basic_page content'.
  $permissions['delete any basic_page content'] = array(
    'name' => 'delete any basic_page content',
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

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any entityform'.
  $permissions['delete any entityform'] = array(
    'name' => 'delete any entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'form admin' => 'form admin',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete any event_block bean'.
  $permissions['delete any event_block bean'] = array(
    'name' => 'delete any event_block bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any featured_book content'.
  $permissions['delete any featured_book content'] = array(
    'name' => 'delete any featured_book content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any filtered_courses bean'.
  $permissions['delete any filtered_courses bean'] = array(
    'name' => 'delete any filtered_courses bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any html bean'.
  $permissions['delete any html bean'] = array(
    'name' => 'delete any html bean',
    'roles' => array(
      'administrator' => 'administrator',
      'power user' => 'power user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'power user' => 'power user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any mega_menu bean'.
  $permissions['delete any mega_menu bean'] = array(
    'name' => 'delete any mega_menu bean',
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

  // Exported permission: 'delete any news_item content'.
  $permissions['delete any news_item content'] = array(
    'name' => 'delete any news_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'power user' => 'power user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any people_profile content'.
  $permissions['delete any people_profile content'] = array(
    'name' => 'delete any people_profile content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any post content'.
  $permissions['delete any post content'] = array(
    'name' => 'delete any post content',
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

  // Exported permission: 'delete any reflection content'.
  $permissions['delete any reflection content'] = array(
    'name' => 'delete any reflection content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any registration_page content'.
  $permissions['delete any registration_page content'] = array(
    'name' => 'delete any registration_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any scheinman_neutral content'.
  $permissions['delete any scheinman_neutral content'] = array(
    'name' => 'delete any scheinman_neutral content',
    'roles' => array(
      'administrator' => 'administrator',
      'neutral admin' => 'neutral admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sdc_class content'.
  $permissions['delete any sdc_class content'] = array(
    'name' => 'delete any sdc_class content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sdc_course content'.
  $permissions['delete any sdc_course content'] = array(
    'name' => 'delete any sdc_course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sdc_faculty content'.
  $permissions['delete any sdc_faculty content'] = array(
    'name' => 'delete any sdc_faculty content',
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

  // Exported permission: 'delete any student_portrait content'.
  $permissions['delete any student_portrait content'] = array(
    'name' => 'delete any student_portrait content',
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
      'course admin' => 'course admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any wit_article content'.
  $permissions['delete any wit_article content'] = array(
    'name' => 'delete any wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any workspan content'.
  $permissions['delete any workspan content'] = array(
    'name' => 'delete any workspan content',
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

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own author content'.
  $permissions['delete own author content'] = array(
    'name' => 'delete own author content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own basic_page content'.
  $permissions['delete own basic_page content'] = array(
    'name' => 'delete own basic_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own entityform'.
  $permissions['delete own entityform'] = array(
    'name' => 'delete own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete own featured_book content'.
  $permissions['delete own featured_book content'] = array(
    'name' => 'delete own featured_book content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'power user' => 'power user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own microfiche content'.
  $permissions['delete own microfiche content'] = array(
    'name' => 'delete own microfiche content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own microfilm content'.
  $permissions['delete own microfilm content'] = array(
    'name' => 'delete own microfilm content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
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

  // Exported permission: 'delete own people_profile content'.
  $permissions['delete own people_profile content'] = array(
    'name' => 'delete own people_profile content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own post content'.
  $permissions['delete own post content'] = array(
    'name' => 'delete own post content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own promo content'.
  $permissions['delete own promo content'] = array(
    'name' => 'delete own promo content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reflection content'.
  $permissions['delete own reflection content'] = array(
    'name' => 'delete own reflection content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own registration_page content'.
  $permissions['delete own registration_page content'] = array(
    'name' => 'delete own registration_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own scheinman_neutral content'.
  $permissions['delete own scheinman_neutral content'] = array(
    'name' => 'delete own scheinman_neutral content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'neutral' => 'neutral',
      'neutral admin' => 'neutral admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sdc_class content'.
  $permissions['delete own sdc_class content'] = array(
    'name' => 'delete own sdc_class content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sdc_course content'.
  $permissions['delete own sdc_course content'] = array(
    'name' => 'delete own sdc_course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sdc_faculty content'.
  $permissions['delete own sdc_faculty content'] = array(
    'name' => 'delete own sdc_faculty content',
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
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own student_portrait content'.
  $permissions['delete own student_portrait content'] = array(
    'name' => 'delete own student_portrait content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own wit_article content'.
  $permissions['delete own wit_article content'] = array(
    'name' => 'delete own wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'wit editor' => 'wit editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own workspan content'.
  $permissions['delete own workspan content'] = array(
    'name' => 'delete own workspan content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own youtube_video content'.
  $permissions['delete own youtube_video content'] = array(
    'name' => 'delete own youtube_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
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
      'wit editor' => 'wit editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
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
      'wit editor' => 'wit editor',
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

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'power user' => 'power user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'power user' => 'power user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any author content'.
  $permissions['edit any author content'] = array(
    'name' => 'edit any author content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any basic_page content'.
  $permissions['edit any basic_page content'] = array(
    'name' => 'edit any basic_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any content_listing_manual bean'.
  $permissions['edit any content_listing_manual bean'] = array(
    'name' => 'edit any content_listing_manual bean',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any entityform'.
  $permissions['edit any entityform'] = array(
    'name' => 'edit any entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'form admin' => 'form admin',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit any event_block bean'.
  $permissions['edit any event_block bean'] = array(
    'name' => 'edit any event_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any featured_book content'.
  $permissions['edit any featured_book content'] = array(
    'name' => 'edit any featured_book content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any filtered_courses bean'.
  $permissions['edit any filtered_courses bean'] = array(
    'name' => 'edit any filtered_courses bean',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
      'form admin' => 'form admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any html bean'.
  $permissions['edit any html bean'] = array(
    'name' => 'edit any html bean',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'power user' => 'power user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any mega_menu bean'.
  $permissions['edit any mega_menu bean'] = array(
    'name' => 'edit any mega_menu bean',
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
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any microfilm content'.
  $permissions['edit any microfilm content'] = array(
    'name' => 'edit any microfilm content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
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

  // Exported permission: 'edit any people_profile content'.
  $permissions['edit any people_profile content'] = array(
    'name' => 'edit any people_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'faculty admin' => 'faculty admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any post content'.
  $permissions['edit any post content'] = array(
    'name' => 'edit any post content',
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
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any reflection content'.
  $permissions['edit any reflection content'] = array(
    'name' => 'edit any reflection content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any registration_page content'.
  $permissions['edit any registration_page content'] = array(
    'name' => 'edit any registration_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'form admin' => 'form admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any scheinman_neutral content'.
  $permissions['edit any scheinman_neutral content'] = array(
    'name' => 'edit any scheinman_neutral content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'neutral admin' => 'neutral admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any sdc_class content'.
  $permissions['edit any sdc_class content'] = array(
    'name' => 'edit any sdc_class content',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any sdc_course content'.
  $permissions['edit any sdc_course content'] = array(
    'name' => 'edit any sdc_course content',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any sdc_faculty content'.
  $permissions['edit any sdc_faculty content'] = array(
    'name' => 'edit any sdc_faculty content',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any spotlight content'.
  $permissions['edit any spotlight content'] = array(
    'name' => 'edit any spotlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any student_portrait content'.
  $permissions['edit any student_portrait content'] = array(
    'name' => 'edit any student_portrait content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any tagged_content bean'.
  $permissions['edit any tagged_content bean'] = array(
    'name' => 'edit any tagged_content bean',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any wit_article content'.
  $permissions['edit any wit_article content'] = array(
    'name' => 'edit any wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'wit editor' => 'wit editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any workspan content'.
  $permissions['edit any workspan content'] = array(
    'name' => 'edit any workspan content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any youtube_video content'.
  $permissions['edit any youtube_video content'] = array(
    'name' => 'edit any youtube_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
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

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own author content'.
  $permissions['edit own author content'] = array(
    'name' => 'edit own author content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own basic_page content'.
  $permissions['edit own basic_page content'] = array(
    'name' => 'edit own basic_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own entityform'.
  $permissions['edit own entityform'] = array(
    'name' => 'edit own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'edit own featured_book content'.
  $permissions['edit own featured_book content'] = array(
    'name' => 'edit own featured_book content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'power user' => 'power user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own microfiche content'.
  $permissions['edit own microfiche content'] = array(
    'name' => 'edit own microfiche content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own microfilm content'.
  $permissions['edit own microfilm content'] = array(
    'name' => 'edit own microfilm content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
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

  // Exported permission: 'edit own people_profile content'.
  $permissions['edit own people_profile content'] = array(
    'name' => 'edit own people_profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own post content'.
  $permissions['edit own post content'] = array(
    'name' => 'edit own post content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own promo content'.
  $permissions['edit own promo content'] = array(
    'name' => 'edit own promo content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reflection content'.
  $permissions['edit own reflection content'] = array(
    'name' => 'edit own reflection content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own registration_page content'.
  $permissions['edit own registration_page content'] = array(
    'name' => 'edit own registration_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'form admin' => 'form admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own scheinman_neutral content'.
  $permissions['edit own scheinman_neutral content'] = array(
    'name' => 'edit own scheinman_neutral content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'neutral' => 'neutral',
      'neutral admin' => 'neutral admin',
      'registered user' => 'registered user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sdc_class content'.
  $permissions['edit own sdc_class content'] = array(
    'name' => 'edit own sdc_class content',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sdc_course content'.
  $permissions['edit own sdc_course content'] = array(
    'name' => 'edit own sdc_course content',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sdc_faculty content'.
  $permissions['edit own sdc_faculty content'] = array(
    'name' => 'edit own sdc_faculty content',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own spotlight content'.
  $permissions['edit own spotlight content'] = array(
    'name' => 'edit own spotlight content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own student_portrait content'.
  $permissions['edit own student_portrait content'] = array(
    'name' => 'edit own student_portrait content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own wit_article content'.
  $permissions['edit own wit_article content'] = array(
    'name' => 'edit own wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'wit editor' => 'wit editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own workspan content'.
  $permissions['edit own workspan content'] = array(
    'name' => 'edit own workspan content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own youtube_video content'.
  $permissions['edit own youtube_video content'] = array(
    'name' => 'edit own youtube_video content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
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
      'wit editor' => 'wit editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
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
      'wit editor' => 'wit editor',
    ),
    'module' => 'taxonomy',
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

  // Exported permission: 'import sdc_course_importer feeds'.
  $permissions['import sdc_course_importer feeds'] = array(
    'name' => 'import sdc_course_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import wysiwyg templates'.
  $permissions['import wysiwyg templates'] = array(
    'name' => 'import wysiwyg templates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'wysiwyg_template',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'menu view unpublished'.
  $permissions['menu view unpublished'] = array(
    'name' => 'menu view unpublished',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'neutral admin' => 'neutral admin',
    ),
    'module' => 'menu_view_unpublished',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'override author published option'.
  $permissions['override author published option'] = array(
    'name' => 'override author published option',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override basic_page published option'.
  $permissions['override basic_page published option'] = array(
    'name' => 'override basic_page published option',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override news_item published option'.
  $permissions['override news_item published option'] = array(
    'name' => 'override news_item published option',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override people_profile published option'.
  $permissions['override people_profile published option'] = array(
    'name' => 'override people_profile published option',
    'roles' => array(
      'administrator' => 'administrator',
      'faculty admin' => 'faculty admin',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override post published option'.
  $permissions['override post published option'] = array(
    'name' => 'override post published option',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override promo published option'.
  $permissions['override promo published option'] = array(
    'name' => 'override promo published option',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override reflection published option'.
  $permissions['override reflection published option'] = array(
    'name' => 'override reflection published option',
    'roles' => array(
      'administrator' => 'administrator',
      'reflection admin' => 'reflection admin',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override registration_page published option'.
  $permissions['override registration_page published option'] = array(
    'name' => 'override registration_page published option',
    'roles' => array(
      'administrator' => 'administrator',
      'form admin' => 'form admin',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override scheinman_neutral published option'.
  $permissions['override scheinman_neutral published option'] = array(
    'name' => 'override scheinman_neutral published option',
    'roles' => array(
      'administrator' => 'administrator',
      'neutral admin' => 'neutral admin',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override sdc_class published option'.
  $permissions['override sdc_class published option'] = array(
    'name' => 'override sdc_class published option',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override sdc_course published option'.
  $permissions['override sdc_course published option'] = array(
    'name' => 'override sdc_course published option',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override sdc_faculty published option'.
  $permissions['override sdc_faculty published option'] = array(
    'name' => 'override sdc_faculty published option',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override student_portrait published option'.
  $permissions['override student_portrait published option'] = array(
    'name' => 'override student_portrait published option',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override wit_article published option'.
  $permissions['override wit_article published option'] = array(
    'name' => 'override wit_article published option',
    'roles' => array(
      'administrator' => 'administrator',
      'wit editor' => 'wit editor',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'reorder pages'.
  $permissions['reorder pages'] = array(
    'name' => 'reorder pages',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'submenu_reorder',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
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

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'course admin' => 'course admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any content_listing_manual bean'.
  $permissions['view any content_listing_manual bean'] = array(
    'name' => 'view any content_listing_manual bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any course_manual_listing bean'.
  $permissions['view any course_manual_listing bean'] = array(
    'name' => 'view any course_manual_listing bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'form admin' => 'form admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any entityform'.
  $permissions['view any entityform'] = array(
    'name' => 'view any entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'form admin' => 'form admin',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view any event_block bean'.
  $permissions['view any event_block bean'] = array(
    'name' => 'view any event_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any filtered_courses bean'.
  $permissions['view any filtered_courses bean'] = array(
    'name' => 'view any filtered_courses bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'course admin' => 'course admin',
      'form admin' => 'form admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any html bean'.
  $permissions['view any html bean'] = array(
    'name' => 'view any html bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any mega_menu bean'.
  $permissions['view any mega_menu bean'] = array(
    'name' => 'view any mega_menu bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any tagged_content bean'.
  $permissions['view any tagged_content bean'] = array(
    'name' => 'view any tagged_content bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any unpublished author content'.
  $permissions['view any unpublished author content'] = array(
    'name' => 'view any unpublished author content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished basic_page content'.
  $permissions['view any unpublished basic_page content'] = array(
    'name' => 'view any unpublished basic_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished content'.
  $permissions['view any unpublished content'] = array(
    'name' => 'view any unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished news_item content'.
  $permissions['view any unpublished news_item content'] = array(
    'name' => 'view any unpublished news_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished people_profile content'.
  $permissions['view any unpublished people_profile content'] = array(
    'name' => 'view any unpublished people_profile content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished post content'.
  $permissions['view any unpublished post content'] = array(
    'name' => 'view any unpublished post content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished promo content'.
  $permissions['view any unpublished promo content'] = array(
    'name' => 'view any unpublished promo content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished reflection content'.
  $permissions['view any unpublished reflection content'] = array(
    'name' => 'view any unpublished reflection content',
    'roles' => array(
      'administrator' => 'administrator',
      'reflection admin' => 'reflection admin',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished registration_page content'.
  $permissions['view any unpublished registration_page content'] = array(
    'name' => 'view any unpublished registration_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'form admin' => 'form admin',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished scheinman_neutral content'.
  $permissions['view any unpublished scheinman_neutral content'] = array(
    'name' => 'view any unpublished scheinman_neutral content',
    'roles' => array(
      'administrator' => 'administrator',
      'neutral admin' => 'neutral admin',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished sdc_class content'.
  $permissions['view any unpublished sdc_class content'] = array(
    'name' => 'view any unpublished sdc_class content',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished sdc_course content'.
  $permissions['view any unpublished sdc_course content'] = array(
    'name' => 'view any unpublished sdc_course content',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished sdc_faculty content'.
  $permissions['view any unpublished sdc_faculty content'] = array(
    'name' => 'view any unpublished sdc_faculty content',
    'roles' => array(
      'administrator' => 'administrator',
      'course admin' => 'course admin',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished student_portrait content'.
  $permissions['view any unpublished student_portrait content'] = array(
    'name' => 'view any unpublished student_portrait content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished wit_article content'.
  $permissions['view any unpublished wit_article content'] = array(
    'name' => 'view any unpublished wit_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'wit editor' => 'wit editor',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
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

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'faculty admin' => 'faculty admin',
      'neutral' => 'neutral',
      'neutral admin' => 'neutral admin',
      'registered user' => 'registered user',
      'wit editor' => 'wit editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own entityform'.
  $permissions['view own entityform'] = array(
    'name' => 'view own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'course admin' => 'course admin',
      'neutral admin' => 'neutral admin',
      'registered user' => 'registered user',
      'wit editor' => 'wit editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view page advanced menu settings'.
  $permissions['view page advanced menu settings'] = array(
    'name' => 'view page advanced menu settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ilr_sub_pages',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'course admin' => 'course admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'course admin' => 'course admin',
      'faculty admin' => 'faculty admin',
      'form admin' => 'form admin',
      'neutral admin' => 'neutral admin',
      'power user' => 'power user',
      'reflection admin' => 'reflection admin',
      'wit editor' => 'wit editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
