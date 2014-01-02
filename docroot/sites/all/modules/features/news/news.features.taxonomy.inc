<?php
/**
 * @file
 * news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function news_taxonomy_default_vocabularies() {
  return array(
    'news_category' => array(
      'name' => 'News Category',
      'machine_name' => 'news_category',
      'description' => 'Provides news category tags',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
