<?php

/**
 * Implements hook_preprocess_html()
 *
 * Adds the `ILR Web Site` kit from TypeKit.
 */
function ilr_theme_preprocess_html(&$variables) {
  drupal_add_js('//use.typekit.net/bva6ofm.js', 'external');
  drupal_add_js('try{Typekit.load();}catch(e){}', 'inline', 'page_bottom');
}

/**
 * Implements hook_preprocess_hook()
 *
 * Adds custom markup to footer.
 * Adds modernizr.js
 */
function ilr_theme_preprocess_page(&$variables) {
  // Google fonts
  drupal_add_css('http://fonts.googleapis.com/css?family=Open+Sans', array('type' => 'external'));
  drupal_add_css('http://fonts.googleapis.com/css?family=Marcellus', array('type' => 'external'));

  // Footer content
  $variables['page']['footer'][] = array('#markup' => '<div class="copyright">&copy; ' . date('Y') . ' Cornell University | ILR School </div>');

  drupal_add_js($variables['directory'] . '/js/vendor/modernizr-2.6.2.min.js');
  drupal_add_js($variables['directory'] . '/js/vendor/eq.min.js');
}

/**
 * Implements hook_page_alter()
 *
 * Moves content from field_blocks
 * into the appropriate theme regions
 */
function ilr_theme_page_alter(&$page) {
  if (isset($page['content']['system_main']['nodes'])) {
    $node = current($page['content']['system_main']['nodes']);
    // Look for blocks on the current node
    if (isset($node['field_blocks']) && $node != -1 && count($node['field_blocks']['#items']) > 0) {
      $fields = current($node['field_blocks'][0]['entity']['field_collection_item']);
      if (isset($fields['field_sidebar_region'])) {
        $page['sidebar_first'][] = $fields['field_sidebar_region'];
      }
      if (isset($fields['field_content_region'])) {
        $page['content'][] = $fields['field_content_region'];
      }
      if (isset($fields['field_highlighted_region'])) {
        $page['highlighted'][] = $fields['field_highlighted_region'];
      }
      // Remove the blocks from the page render
      unset($page['content']['system_main']['nodes'][$node['#node']->nid]['field_blocks']);
    }
  }
}

/**
 * Implements hook_preprocess_hook()
 *
 *  Adds the type to the classes of the bean
 */
function ilr_theme_preprocess_block(&$variables) {
  if ($variables['block']->module == 'bean') {
    // Get the first bean element
    $bean = reset($variables['elements']['bean']);
    // Get the type if there is one
    if (isset($bean['#bundle'])) {
      $variables['classes_array'][] = str_replace('_', '-',$bean['#bundle']);
    }
  }
}

function ilr_theme_preprocess_node(&$variables) {
  if ($variables['view_mode'] == 'teaser') {
    $variables['attributes_array']['data-eq-pts'] = 'small: 100, medium: 300, large: 600, full: 900';
  }
}

/**
 * Implements hook_js_alter().
 *
 * Disables sticky table headers FTW!
 */
function ilr_theme_js_alter(&$js) {
  unset($js['misc/tableheader.js']);
}

/**
 * Implements theme_breadcrumb()
 */
function ilr_theme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  // Check to see if there is a short title
  if ($node = menu_get_object()) {
    $breadcrumb[] = (isset($node->field_short_title) && count($node->field_short_title) > 0) ? $node->field_short_title['und'][0]['value'] : drupal_get_title();
  } // add current page title, if it exists, or the active title from the menu
  else {
    $breadcrumb[] = (drupal_get_title()) ? drupal_get_title() : menu_get_active_title();
  }

  if (!empty($breadcrumb)) {
    return '<div class="breadcrumb">' . implode(' » ', $breadcrumb) . '</div>';
  }
}

function ilr_theme_format_city_state_zip($city, $state, $zip) {
  return $city . ', ' . $state . ' ' . $zip;
}
