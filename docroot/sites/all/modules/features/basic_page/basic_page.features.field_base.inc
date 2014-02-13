<?php
/**
 * @file
 * basic_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function basic_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_blocks'
  $field_bases['field_blocks'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_blocks',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_content_region'
  $field_bases['field_content_region'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_content_region',
    'foreign keys' => array(
      'bid' => array(
        'columns' => array(
          'bid' => 'bid',
        ),
        'table' => 'block',
      ),
    ),
    'indexes' => array(
      'bid' => array(
        0 => 'bid',
      ),
    ),
    'locked' => 0,
    'module' => 'blockreference',
    'settings' => array(
      'referenceable_modules' => array(
        'bean' => 'bean',
        'block' => 0,
        'context_ui' => 0,
        'devel' => 0,
        'diff' => 0,
        'menu' => 0,
        'menu_block' => 0,
        'node' => 0,
        'simplesamlphp_auth' => 0,
        'system' => 0,
        'user' => 0,
        'views' => 'views',
      ),
      'referenceable_operator' => 'AND',
      'referenceable_regions' => array(
        '' => 0,
        'content' => 0,
        'footer' => 0,
        'header' => 0,
        'help' => 0,
        'highlighted' => 0,
        'page_bottom' => 0,
        'page_top' => 0,
        'sidebar_first' => 0,
        'sidebar_second' => 0,
      ),
      'referenceable_theme' => 'default',
      'respect_visibility' => 0,
    ),
    'translatable' => 0,
    'type' => 'blockreference',
  );

  // Exported field_base: 'field_highlighted_region'
  $field_bases['field_highlighted_region'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_highlighted_region',
    'foreign keys' => array(
      'bid' => array(
        'columns' => array(
          'bid' => 'bid',
        ),
        'table' => 'block',
      ),
    ),
    'indexes' => array(
      'bid' => array(
        0 => 'bid',
      ),
    ),
    'locked' => 0,
    'module' => 'blockreference',
    'settings' => array(
      'referenceable_modules' => array(
        'bean' => 'bean',
        'block' => 0,
        'context_ui' => 0,
        'devel' => 0,
        'diff' => 0,
        'menu' => 0,
        'menu_block' => 0,
        'node' => 0,
        'simplesamlphp_auth' => 0,
        'system' => 0,
        'user' => 0,
        'views' => 'views',
      ),
      'referenceable_operator' => 'AND',
      'referenceable_regions' => array(
        '' => 0,
        'content' => 0,
        'footer' => 0,
        'header' => 0,
        'help' => 0,
        'highlighted' => 0,
        'page_bottom' => 0,
        'page_top' => 0,
        'sidebar_first' => 0,
        'sidebar_second' => 0,
      ),
      'referenceable_theme' => 'default',
      'respect_visibility' => 0,
    ),
    'translatable' => 0,
    'type' => 'blockreference',
  );

  // Exported field_base: 'field_sidebar_region'
  $field_bases['field_sidebar_region'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sidebar_region',
    'foreign keys' => array(
      'bid' => array(
        'columns' => array(
          'bid' => 'bid',
        ),
        'table' => 'block',
      ),
    ),
    'indexes' => array(
      'bid' => array(
        0 => 'bid',
      ),
    ),
    'locked' => 0,
    'module' => 'blockreference',
    'settings' => array(
      'referenceable_modules' => array(
        'bean' => 'bean',
        'block' => 0,
        'context_ui' => 0,
        'devel' => 0,
        'diff' => 0,
        'menu' => 0,
        'menu_block' => 0,
        'node' => 0,
        'simplesamlphp_auth' => 0,
        'system' => 0,
        'user' => 0,
        'views' => 'views',
      ),
      'referenceable_operator' => 'AND',
      'referenceable_regions' => array(
        '' => 0,
        'content' => 0,
        'footer' => 0,
        'header' => 0,
        'help' => 0,
        'highlighted' => 0,
        'page_bottom' => 0,
        'page_top' => 0,
        'sidebar_first' => 0,
        'sidebar_second' => 0,
      ),
      'referenceable_theme' => 'default',
      'respect_visibility' => 0,
    ),
    'translatable' => 0,
    'type' => 'blockreference',
  );

  return $field_bases;
}
