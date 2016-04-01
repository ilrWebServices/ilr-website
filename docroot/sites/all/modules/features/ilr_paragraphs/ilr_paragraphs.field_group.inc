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

  // Translatables
  // Included for use with string extractors like potx.
  t('Add either an image or a video, not both');

  return $field_groups;
}
