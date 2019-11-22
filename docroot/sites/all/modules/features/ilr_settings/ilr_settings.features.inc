<?php

/**
 * @file
 * ilr_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ilr_settings_image_default_styles() {
  $styles = array();

  // Exported image style: certificate_programs_image.
  $styles['certificate_programs_image'] = array(
    'label' => 'certificate_programs_image',
    'effects' => array(
      6 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 320,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: email_optimized.
  $styles['email_optimized'] = array(
    'label' => 'Email optimized',
    'effects' => array(
      3 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 540,
          'height' => 360,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_image.
  $styles['featured_image'] = array(
    'label' => 'featured_image',
    'effects' => array(
      3 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: focussed_hero.
  $styles['focussed_hero'] = array(
    'label' => 'Focussed Hero',
    'effects' => array(
      2 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 612,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: focussed_main_image.
  $styles['focussed_main_image'] = array(
    'label' => 'Focussed Main Image',
    'effects' => array(
      3 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 533,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: focussed_portrait.
  $styles['focussed_portrait'] = array(
    'label' => 'Focussed portrait',
    'effects' => array(
      8 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 530,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: focussed_thumbnail.
  $styles['focussed_thumbnail'] = array(
    'label' => 'Focussed thumbnail',
    'effects' => array(
      7 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 200,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_portrait_image.
  $styles['main_portrait_image'] = array(
    'label' => 'main portrait image',
    'effects' => array(
      2 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
