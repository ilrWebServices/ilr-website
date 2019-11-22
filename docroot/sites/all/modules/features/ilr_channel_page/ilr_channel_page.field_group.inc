<?php

/**
 * @file
 * ilr_channel_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ilr_channel_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_fields|node|channel_page|form';
  $field_group->group_name = 'group_summary_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summary Fields',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
      1 => 'field_teaser',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Summary Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-summary-fields field-group-fieldset',
        'description' => 'These fields do not appear on the page itself, but are required to ensure that this page is well represented when it appears as a card or thumbnail in lists of featured content on the ILR Web Site and in promotional emails, or when it is shared in social channels such as Facebook. ',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_summary_fields|node|channel_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Summary Fields');

  return $field_groups;
}
