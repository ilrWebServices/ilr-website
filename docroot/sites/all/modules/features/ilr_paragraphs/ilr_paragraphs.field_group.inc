<?php
/**
 * @file
 * ilr_paragraphs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ilr_paragraphs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_promo_story|paragraphs_item|featured_promo|default';
  $field_group->group_name = 'group_featured_promo_story';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_promo';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promo Story',
    'weight' => '2',
    'children' => array(
      0 => 'field_header',
      1 => 'field_teaser',
      2 => 'field_multiple_links',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Promo Story',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-featured-promo-story field-group-fieldset',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_featured_promo_story|paragraphs_item|featured_promo|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_or_video|paragraphs_item|featured_promo|form';
  $field_group->group_name = 'group_image_or_video';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'featured_promo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add either an image or a video, not both',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'field_youtube_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Add either an image or a video, not both',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-image-or-video field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_image_or_video|paragraphs_item|featured_promo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unit_information|paragraphs_item|unit_contact_info|default';
  $field_group->group_name = 'group_unit_information';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'unit_contact_info';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unit information',
    'weight' => '1',
    'children' => array(
      0 => 'field_social_channels',
      1 => 'field_multiple_links',
      2 => 'group_unit_name_and_address',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Unit information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group_unit_information',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_unit_information|paragraphs_item|unit_contact_info|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unit_name_and_address|paragraphs_item|unit_contact_info|default';
  $field_group->group_name = 'group_unit_name_and_address';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'unit_contact_info';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_unit_information';
  $field_group->data = array(
    'label' => 'Unit name and address',
    'weight' => '6',
    'children' => array(
      0 => 'field_organization',
      1 => 'field_text_paragraph',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Unit name and address',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group_unit_name_and_address',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_unit_name_and_address|paragraphs_item|unit_contact_info|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add either an image or a video, not both');
  t('Promo Story');
  t('Unit information');
  t('Unit name and address');

  return $field_groups;
}
