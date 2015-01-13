<?php
/**
 * @file
 * basic_page.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function basic_page_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'full_html_profile';
  $linkit_profile->admin_title = 'Full HTML Profile';
  $linkit_profile->admin_description = 'The linkit profile for the Full HTML Wysiwyg profile';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'full_html' => 'full_html',
      'plain_text' => 0,
    ),
    'search_plugins' => array(
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:bean' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
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
        'filtered_courses' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:node' => array(
      'result_description' => '[node:url]',
      'bundles' => array(
        'basic_page' => 'basic_page',
        'news_item' => 'news_item',
        'people_profile' => 'people_profile',
        'registration_page' => 'registration_page',
        'spotlight' => 'spotlight',
        'sdc_faculty' => 0,
        'featured_book' => 0,
        'microfiche' => 0,
        'microfilm' => 0,
        'promo' => 0,
        'sdc_class' => 0,
        'sdc_course' => 0,
        'scheinman_neutral' => 0,
        'student_portrait' => 'student_portrait',
        'wit_article' => 0,
        'workspan' => 0,
        'youtube_playlist' => 0,
        'youtube_video' => 0,
      ),
      'group_by_bundle' => 0,
      'include_unpublished' => 1,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
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
        'publications' => 0,
        'wire_services' => 0,
        'course_keywords' => 0,
        'sdc_department' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'url_method' => '2',
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
    'imce' => 0,
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['full_html_profile'] = $linkit_profile;

  return $export;
}
