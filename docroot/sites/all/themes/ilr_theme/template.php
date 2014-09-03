<?php

/**
 * Implements hook_preprocess_html()
 *
 * Adds sitewide javascript files
 */
function ilr_theme_preprocess_html(&$variables) {
  // Header
  drupal_add_js('//use.typekit.net/bva6ofm.js', array('type' => 'external'));
  drupal_add_js($variables['directory'] . '/js/vendor/modernizr-2.6.2.min.js');

  // Footer
  drupal_add_js('try{Typekit.load();}catch(e){}', array('type' => 'inline', 'scope' => 'footer'));
  drupal_add_js($variables['directory'] . '/js/vendor/eq.min.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_js('https://embanner.univcomm.cornell.edu/OWC-emergency-banner.js', array('type' => 'external', 'scope' => 'footer'));
  drupal_add_js($variables['directory'] . '/js/vendor/rNav.js', array('type' => 'file', 'scope' => 'footer'));
}

/**
 * Implements hook_preprocess_hook()
 *
 * Adds custom markup to footer.
 * Adds modernizr.js
 */
function ilr_theme_preprocess_page(&$variables) {
  // Footer content
  $variables['page']['footer'][] = array('#markup' => '<div class="copyright">&copy; ' . date('Y') . ' Cornell University | ILR School </div>');
  $variables['page']['page_width_eq_points'] =  array('#markup' => 'data-eq-pts="mobile-v: 320, mobile-h:450, tablet-v: 768, tablet-h: 900, desktop: 1025"');
  $variables['page']['nav_trigger_pts'] =  array('#markup' => 'data-eq-pts="regular-nav: 940"');
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
      _ilr_process_field_blocks($page, $node);
    }
  }
}

/**
 * Moves content from field_blocks on node to appropriate regions
 * Assumes a naming convention that is field_[region_name]_region
 * for the field in the field collection
 */
function _ilr_process_field_blocks(&$page, $node) {
  $fields = current($node['field_blocks'][0]['entity']['field_collection_item']);
  // create a foreach loop to handle this
  foreach ($fields as $field_name => $value) {
    $pattern = "/(field_)([a-z_]*)(_region)/";
    if (preg_match($pattern, $field_name, $matches)) {
      $region_name = $matches[2];
      if (isset($fields[$field_name])) {
        $page[$region_name][] = $fields[$field_name];
      }
    }
  }
  // Remove the blocks from the page render
  unset($page['content']['system_main']['nodes'][$node['#node']->nid]['field_blocks']);
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

      // Check to see if the item_count has been added
      // (via tagged_content.inc for theming purposes)
      if (isset($bean['#entity']->item_count)) {
        $variables['attributes_array']['data-items'] = $bean['#entity']->item_count;
      }
    }
  }

  // Wrap the menu block in the expected wrapper
  if ($variables['block']->delta == 'ilr-subnav') {
    $variables['content'] = '<div id="rNav-wrap">' . $variables['content'] . '</div><!-- /#rNav-wrap -->';
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
