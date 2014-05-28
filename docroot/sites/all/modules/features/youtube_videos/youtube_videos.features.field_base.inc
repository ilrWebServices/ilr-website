<?php
/**
 * @file
 * youtube_videos.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function youtube_videos_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_youtube_video'
  $field_bases['field_youtube_video'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_youtube_video',
    'foreign keys' => array(),
    'indexes' => array(
      'video_id' => array(
        0 => 'video_id',
      ),
    ),
    'locked' => 0,
    'module' => 'youtube',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'youtube',
  );

  return $field_bases;
}
