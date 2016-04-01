<?php
/**
 * @file
 * ilr_field_bases.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function ilr_field_bases_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'link_fields';
  $linkit_profile->admin_title = 'Link Fields';
  $linkit_profile->admin_description = 'Use this profile to add LinkIt to Drupal link fields';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:bean' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:freedompay_hpp' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:bean' => array(
      'result_description' => '',
      'bundles' => array(
        'html' => 0,
        'content_listing_manual' => 0,
        'mega_menu' => 0,
        'event_block' => 0,
        'tagged_content' => 0,
        'bean_default' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:freedompay_hpp' => array(
      'result_description' => '',
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'basic_page' => 'basic_page',
        'channel_page' => 'channel_page',
        'experience_report' => 'experience_report',
        'news_item' => 'news_item',
        'people_profile' => 'people_profile',
        'post' => 'post',
        'registration_page' => 'registration_page',
        'sdc_course' => 'sdc_course',
        'student_portrait' => 'student_portrait',
        'author' => 0,
        'promo' => 0,
        'reflection' => 0,
        'sdc_class' => 0,
        'sdc_faculty' => 0,
        'scheinman_neutral' => 0,
        'workspan' => 0,
        'youtube_video' => 0,
      ),
      'group_by_bundle' => 0,
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'document' => 0,
        'image' => 0,
        'video' => 0,
        'audio' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'url_type' => 'entity',
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'tags' => 0,
        'areas_of_expertise' => 0,
        'course_keywords' => 0,
        'category_type' => 0,
        'continuing_education_credits' => 0,
        'course_format' => 0,
        'course_sponsor' => 0,
        'course_topic' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'plugin' => 'raw_url',
      'url_method' => '3',
    ),
    'attribute_plugins' => array(
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['link_fields'] = $linkit_profile;

  return $export;
}
