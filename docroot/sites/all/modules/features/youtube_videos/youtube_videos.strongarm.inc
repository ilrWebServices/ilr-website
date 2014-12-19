<?php
/**
 * @file
 * youtube_videos.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function youtube_videos_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fancybox_settings';
  $strongarm->value = array(
    'settings' => array(
      'selectors' => '',
      'deactivated_pages' => 'admin*
img_assist*
imce*
node/add*
node/*/edit',
    ),
    'options' => array(
      'padding' => 2,
      'margin' => 20,
      'width' => 800,
      'height' => 600,
      'minWidth' => 100,
      'minHeight' => 100,
      'maxWidth' => 9999,
      'maxHeight' => 9999,
      'autoSize' => 1,
      'autoHeight' => 0,
      'autoWidth' => 0,
      'autoResize' => 1,
      'autoCenter' => 1,
      'fitToView' => 1,
      'aspectRatio' => 0,
      'topRatio' => 0.5,
      'leftRatio' => 0.5,
      'scrolling' => 'auto',
      'wrapCSS' => '',
      'arrows' => 1,
      'closeBtn' => 1,
      'closeClick' => 0,
      'nextClick' => 0,
      'mouseWheel' => 1,
      'autoPlay' => 0,
      'playSpeed' => 3000,
      'preload' => 3,
      'modal' => 0,
      'openEffect' => 'fade',
      'closeEffect' => 'fade',
      'nextEffect' => 'elastic',
      'prevEffect' => 'elastic',
      'openSpeed' => 250,
      'closeSpeed' => 250,
      'nextSpeed' => 250,
      'prevSpeed' => 250,
      'openEasing' => 'swing',
      'closeEasing' => 'swing',
      'nextEasing' => 'swing',
      'prevEasing' => 'swing',
      'openOpacity' => 1,
      'closeOpacity' => 1,
      'openMethod' => 'zoomIn',
      'closeMethod' => 'zoomOut',
      'nextMethod' => 'changeIn',
      'prevMethod' => 'changeOut',
    ),
    'helpers' => array(
      'title_enabled' => 1,
      'title' => array(
        'type' => 'float',
        'position' => 'bottom',
      ),
      'overlay_enabled' => 1,
      'overlay' => array(
        'closeClick' => 1,
        'speedOut' => 200,
        'showEarly' => 1,
        'locked' => 1,
        'fixed' => 1,
      ),
      'thumbs_enabled' => 0,
      'thumbs' => array(
        'width' => 50,
        'height' => 50,
        'position' => 'bottom',
      ),
      'media_enabled' => 0,
      'buttons_enabled' => 0,
      'buttons' => array(
        'position' => 'top',
      ),
    ),
    'callbacks' => array(
      'onCancel' => '',
      'beforeLoad' => '',
      'afterLoad' => '',
      'beforeShow' => '',
      'afterShow' => '',
      'beforeClose' => '',
      'afterClose' => '',
      'onUpdate' => '',
      'onPlayStart' => '',
      'onPlayEnd' => '',
    ),
  );
  $export['fancybox_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__youtube_video';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'reference_field' => array(
        'custom_settings' => TRUE,
      ),
      'basic_teaser' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__youtube_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.7';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_youtube_video';
  $strongarm->value = array();
  $export['menu_options_youtube_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_youtube_video';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_youtube_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_youtube_video';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_youtube_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_youtube_video';
  $strongarm->value = '0';
  $export['node_preview_youtube_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_youtube_video';
  $strongarm->value = 0;
  $export['node_submitted_youtube_video'] = $strongarm;

  return $export;
}
