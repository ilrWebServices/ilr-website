<?php

/**
 * Implements hook_preprocess_hook()
 *
 * Adds custom markup to footer.
 * Adds modernizr.js
 */
function ilr_theme_preprocess_page(&$variables) {
  // Google fonts
  drupal_add_css('http://fonts.googleapis.com/css?family=Open+Sans', array('type' => 'external'));

  // Footer content
  $variables['page']['footer'][] = array('#markup' => '<div class="copyright">&copy; ' . date('Y') . ' Cornell University | ILR School </div>');

  drupal_add_js($variables['directory'] . '/js/vendor/modernizr-2.6.2.min.js');
}

/**
 * Implements hook_js_alter().
 *
 * Disables sticky table headers FTW!
 */
function ilr_theme_js_alter(&$js) {
  unset($js['misc/tableheader.js']);
}
