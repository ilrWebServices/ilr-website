<?php
/**
 * @file
 * settings_and_permissions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function settings_and_permissions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 1;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_block_rebuild_needed';
  $strongarm->value = TRUE;
  $export['context_block_rebuild_needed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = '_Ur8qUx3y_xP0GOd5Zdo-ZK5KC8PMZjzGmEgqjQZS2U';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1389299969;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_version';
  $strongarm->value = '7.2';
  $export['date_api_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/New_York';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_css_cache_files';
  $strongarm->value = array(
    '823ba1006db72809515d2221cd02ec1075d7b49b0c07f49307b3a7930bfdd9e4' => 'public://css/css_pbm0lsQQJ7A7WCCIMgxLho6mI_kBNgznNUWmTWcnfoE.css',
    '3d8b19e3baae49983c175669e02e59626e10b86d4968b54f5fe1c31d8b06f0eb' => 'public://css/css_RJzktkbKM6l24mzNYtYBIDt6bvsdsFW9H_VcmY5p5TU.css',
    '20f8eaf5847d9a8a6df28ecc9bcf2cd47f2354023590585b97ca5c054ae0e0a5' => 'public://css/css_Wu8npAzy16WmnnnWKxpexfgsAryolGGaX6yO3GWA5bU.css',
    '296978e5c07408bf9c0fd87ab2c6225d4713c5a642778ebe0bc3613972453313' => 'public://css/css_mUZKsGWznqphHfsLYn2415J9A1c4si7bJPXYacRRJ_E.css',
    'a063dba21d321c166b8d1c54b2abb74e3c3ed61802ebdd1387cc4fbdf8887e4d' => 'public://css/css__QReioEs1Pyxn6tD-5LHRH7uIE6idfxnStf4Mex-Ld4.css',
    '160ff6e189f45b6f1e60d2aac6424e3d80426a45ef55d48b09e5c6649e88fb25' => 'public://css/css_t3vZ5FrHQfGbYRWUcQp0G51iyBRSsP6AsuN5qfaVYiM.css',
    '592db66916e1dd3416cbe95bcb34a5a68775eb0b7cf95e4c858671de35290cc9' => 'public://css/css_LS9OUalDR9-d_lCAvF3yUWjNU6yF8ZBm84jEPRvoyuQ.css',
    '4b5669477f4da53702ab1c5944f073f765cabd73b0506940e8af7242c3c8d564' => 'public://css/css_tgd-HEBsCmcZaMjjYAdefSPzx57bEYIXh0ts23VxANg.css',
    'bc75faed12fd1dc4cf23ef631b9cef18bd5ffdd3f0a8a4fecd6d38d2ec9e2278' => 'public://css/css_hI3pvAcW0YhNZBWhqEWHFFsBuR1EAD967LxMUpmF0h0.css',
    '0e8ff6fe38309d329ad04550284e9d63b3f3eb8e7a4f19898994130650501c3f' => 'public://css/css_s6ygM7XUDrMaYmzk1WN5t4Nl4c5apXpTVB7VkwTVO9U.css',
    'fbcfa737fcce56b4e342b83f836150eab278d6a824b6a58b8adcbc3d8a284a45' => 'public://css/css_VTQmQkwaM0aH4jGDBdAZ0jaMYonWa2ScZuh9vPA5Lrw.css',
    'c9cb56ee63c345b4b21ff3ae8f38395bc01e6ccceafa8dcf5c9cd32315287068' => 'public://css/css_5-gtYRBHvz0bYXC0t4o-uVwv4f9IOuP2oAaf-SXIvoI.css',
  );
  $export['drupal_css_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_js_cache_files';
  $strongarm->value = array(
    'a571bc4156d0556568d7f04bc93f81c658b2e21fef9bb8229528c077ce9a0ccf' => 'public://js/js_xAPl0qIk9eowy_iS9tNkCWXLUVoat94SQT48UBCFkyQ.js',
    'd7c4ba62d89f2659504dc30a0e50401272b52d4f9018d90490f8d171369d1b7c' => 'public://js/js_l0VWEJ2wjoYg3TJv1gMH1uDRZX6EeOAiuvYJhgAVuz8.js',
    'bc444808011c8bfa2d33933c8961e01c28e39f6836acc8290279da87c4d5c61e' => 'public://js/js_gsRojzcXYRtFv8QHp89dxyJVklpAK8YiSqSpCQgUdak.js',
    'a9e59ee9b42bae5cd9eedce9d81a13b99459f43ebab10cb36c7174bc2e3ba4a5' => 'public://js/js_PJPaPfjlIWj0dviVRqpMkR4tk2Vt4gXQ5yXZrz7FJjM.js',
    '1a30c351624a627553d78983ad986922fa2576d2391858497e3ca6bb022b6015' => 'public://js/js_CC-zfeuQHcDhFtVRuKW53h30TL7j_105J32Nz8b8R38.js',
    '46721bdaf4b78a98fe19802bc152934edf5f62333a3014f90cab0d690fb360a2' => 'public://js/js_p2q22CWMorOCoNjg38CnnH8jesN6OZP7b7OlsVkkBzE.js',
    '45c1a80cbecf4759638a2028e841f917a306a1ee730aa6c7ecb5dcf3ea35d8f0' => 'public://js/js_4XRj-yLtRdquyIgPsuAKsX1QeAPKTwu31fXllto-3KU.js',
    '0368da3869b328157de809630b4ed7d1f1e4539e300b856bdd2bf2bdc76fc8b9' => 'public://js/js_loJJMZ-yLpCFnc5Htc8xgIMfdfNbw5E30CdocHWSiaM.js',
    '25e7ae15aed10b9fe7d85c12a724f47b1847d56f4ea604b8e63eb524756a4e28' => 'public://js/js_Zz-D3t1qvsuc7JK3mMBTwD1xECy5l2wFB_3RNjBlMOU.js',
    '2dd6a19ef8f59c733c46c9623b6af0310fdd22431130c9dbc15ff3491f8bc64d' => 'public://js/js_tvUYtsmhlweimVSSwkTx5kkgfAZpQNFyS2mbW__YI9o.js',
    '594d0b0a81c7fe694bd4061ff7ba302183fd02ac8551b1971257cc348fe07d27' => 'public://js/js_XSrlb0t8JWl1k1OadQTmSyyXyZiQdzcYMfHvWmjVbvk.js',
    'f1f0de36457e09f6551e0b85def6a213453ca4268be213a1e5476b82eacbad33' => 'public://js/js_Sl13B_IsdPfgQuauQrLxjybyP9eiCTK3SJ1ZS_KSDWE.js',
    '705e45a819380f43d5be35f10a06ba0ff9911cd0ba6d41d64cb3a1bf79f5f1d3' => 'public://js/js_0WA8K0SWxfj5mdGFRcGf1YhNOmarjsv8hj779iBwS8M.js',
    '816ac0e8664fd2e96a9f6ab256b6bac016a1f7f772417b78aee8a3c7358399b0' => 'public://js/js_tlNnbE6ZThCTLXLCDiAJEVlqw1vsIVTka9_nU8XkxsQ.js',
    'c8f5a016679d2652dce01ae8f722a9c96a545876ccb7c95c9d3cded378e8b913' => 'public://js/js_-fZmkZvSTwzPU1PZkj9nZ_oY3ylDchLTh9p6FqB1WAE.js',
    '3ad2524fb846ce00aad97e9e202fbccc24f53e214f54c5a1a96cb852de769216' => 'public://js/js_p15o7Yp1DvOlao-isyk-Dt0pnSOw9Q_jGsuZU2I1FXA.js',
    '4670b5f5336108eef28cd4228f6c0b0c22a3f98354e50608c1559160acebd421' => 'public://js/js_cosiRA2I8gGvG6xutIHbSRPPvI94B6VSXlROB3gO-B0.js',
    'edade03d6825b725a186f257ac5f065f88e4d14713b7d5f4f786047725371ffc' => 'public://js/js_LvPWyC-w_YYSFejY9pUZpHpczPAVEGXxHcLFLY52oYo.js',
    '592f1af01c739fe614a41c674e5b9c335dead565891200210a79611e7f4f6cb3' => 'public://js/js_rKDGtn5lIrQaaq_g5P2oK-MA-XK86gskB4Ld2Uh30gE.js',
    '366d6079dd61d51d1249065ea4fdcf00169ec89184f89e398681352ac35183c5' => 'public://js/js_HtBBtt-LmxzsG910bHeuMylRtDCe1ziRgFmIGDPZiRU.js',
    '717b078ca6bfcaa5197d4ebdec72cbf77a78f1b593814bf80ba8446ee327ff16' => 'public://js/js_S8qcCkMzoP3JAmFRMs_aa9_EF_XgbpFmpSlDQr-JBQo.js',
  );
  $export['drupal_js_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'basic_page' => array(
      'variable' => '5965cf2e54deaf3e04a40c2dadb510d2',
      'field_base' => '7c566aa7bf58e9f7c881d592b9cf6281',
      'field_instance' => 'a3924dcae3a7e97b77b090de638f2227',
      'filter' => '9f4ed7bef8c4b57a65798270dfd9808b',
      'user_permission' => 'cda43837333bda800e848904159c28e3',
      'wysiwyg' => 'ad05de4abb8c8f69e5c2de93d8f800f0',
      'wysiwyg_template' => 'a900ceae15f7e14b160d1192ba13b107',
      'dependencies' => 'e18a227fa376e91112f9de0b6b1fab8b',
      'node' => '9f5927c23bba21dedf73edad35be4f5f',
    ),
    'ilr_footer_menu' => array(
      'variable' => '3c8a9a27550b90accbb2514ee1924fd0',
      'menu_custom' => '453e2a94b49b35a5135b6a3d1ff14225',
      'menu_links' => '00d9b70f32aaa9d876020040974af719',
      'dependencies' => '2c025f9cf76aabe3046d4c59e2859585',
    ),
    'localist_block' => array(
      'field_base' => '6f89833c59ffccc0d264ae84db8b0298',
      'field_instance' => 'eae4fe40ffdb638d8fcd6208511815d5',
      'user_permission' => '47475239223d4ae9ad0c8ca4272bd020',
      'dependencies' => '6d9b67c3516638899e4b7dc76f13398f',
    ),
    'scheinman_neutral' => array(
      'variable' => 'a82a2a17efbedcb3c09b9421f61b0625',
      'field_base' => '6a49444f93cda9f51234b55041f30334',
      'field_instance' => 'b566c92a5dacce87ed0255e15f0b55b9',
      'user_permission' => 'a84f94f0ef2215b1bdb66036a0df4674',
      'dependencies' => 'ebba76c15cd9539298e4bc3dddeae5be',
      'node' => 'd3a2e4498fe396e9ed3b2da6f7aeb609',
    ),
    'news' => array(
      'variable' => '4d117b675f4ee84a9d000a18d47d4c51',
      'field_base' => '5e51bd2dbe4d5f6fd64367df336b4398',
      'field_instance' => 'bf1bd91bea11bf7eef29907ee7bf8a49',
      'taxonomy' => '486fc037d16fc6d76235fa56e0b06e60',
      'user_permission' => '3198eae2a7c791f539b4793f4105a8d8',
      'dependencies' => 'c46d2833565d9534dc51d9e8af791d54',
      'bean_type' => 'ed343c379912f75886735ec686f4fa44',
      'node' => '30ebb2c8a60efa1cf421333630558fb2',
    ),
    'wit' => array(
      'variable' => '3e596c25c9a914be7cdbd07e72069048',
      'field_base' => '95e9056e50187a82655721c94d639dfe',
      'field_instance' => 'e70adba0e4705df3b88e0e902d513c86',
      'taxonomy' => '59583d2013ceee83a6d33444c4c05d95',
      'dependencies' => '73fdcb6138e7e234a98e72081b7d77ea',
      'node' => '1298640271864a0fdb8162da8645ecc9',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'ilr';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = 1800;
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = 1;
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'user' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 1;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 1;
  $export['preprocess_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'US';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'admin@example.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'ILR Dev Site | Cornell University';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'ilr_theme';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1389299999;
  $export['update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_notify_emails';
  $strongarm->value = array(
    0 => 'aaronf@cornell.edu',
  );
  $export['update_notify_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = 1;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_notify';
  $strongarm->value = 0;
  $export['user_mail_status_activated_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = 1;
  $export['user_register'] = $strongarm;

  return $export;
}
