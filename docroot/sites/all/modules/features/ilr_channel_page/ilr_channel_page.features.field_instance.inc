<?php

/**
 * @file
 * ilr_channel_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ilr_channel_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-channel_page-field_category_type'.
  $field_instances['node-channel_page-field_category_type'] = array(
    'bundle' => 'channel_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Category types are used in the theme as [category_type] / [primary_tag] ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'mega_menu_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_category_type',
    'label' => 'Category Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-channel_page-field_image'.
  $field_instances['node-channel_page-field_image'] = array(
    'bundle' => 'channel_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'mega_menu_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_formatter_label' => '',
          'image_link' => '',
          'image_style' => 'focussed_thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_image',
    'label' => 'Main image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '2MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'ilr_media_browser--media_browser_1' => 'ilr_media_browser--media_browser_1',
          'ilr_media_browser--media_browser_my_files' => 'ilr_media_browser--media_browser_my_files',
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
          'youtube' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-channel_page-field_para_main_page_content'.
  $field_instances['node-channel_page-field_para_main_page_content'] = array(
    'bundle' => 'channel_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'field_formatter_label' => '',
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'mega_menu_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_para_main_page_content',
    'label' => 'Main page content',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'action_callout' => -1,
        'compare_three' => -1,
        'display_a_block' => -1,
        'featured_promo' => -1,
        'just_image' => -1,
        'just_text' => -1,
        'side_by_side_text' => -1,
        'social_feed' => -1,
        'sponsor_message' => -1,
        'unit_contact_info' => -1,
      ),
      'bundle_weights' => array(
        'action_callout' => 13,
        'compare_three' => 11,
        'display_a_block' => 6,
        'featured_promo' => 9,
        'just_image' => 2,
        'just_text' => 3,
        'side_by_side_text' => -16,
        'social_feed' => -18,
        'sponsor_message' => 4,
        'unit_contact_info' => -12,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-channel_page-field_tags'.
  $field_instances['node-channel_page-field_tags'] = array(
    'bundle' => 'channel_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Tags are used internally for content placement and organization. Note that the first tag is considered the primary tag and will be visible to the public.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'mega_menu_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-channel_page-field_teaser'.
  $field_instances['node-channel_page-field_teaser'] = array(
    'bundle' => 'channel_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please supply a short description (255 characters or less) for use when this page is listed in featured links or shared on social networks. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'mega_menu_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_label' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_teaser',
    'label' => 'Teaser',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Category Type');
  t('Category types are used in the theme as [category_type] / [primary_tag] ');
  t('Main image');
  t('Main page content');
  t('Please supply a short description (255 characters or less) for use when this page is listed in featured links or shared on social networks. ');
  t('Tags');
  t('Tags are used internally for content placement and organization. Note that the first tag is considered the primary tag and will be visible to the public.');
  t('Teaser');

  return $field_instances;
}
