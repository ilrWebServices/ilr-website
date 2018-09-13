<?php

/**
 * Implements hook_preprocess_html()
 *
 * Adds sitewide javascript files
 */
function ilr_theme_preprocess_html(&$variables) {
  if (isset($_GET['layout']) && $_GET['layout'] == '0' ) {
    $variables['classes_array'][] = 'no-layout';
  }
  // Header
  drupal_add_js('//use.typekit.net/cal2bhk.js', array('type' => 'external'));
  drupal_add_js($variables['directory'] . '/js/vendor/modernizr-2.6.2.min.js');

  // Footer
  drupal_add_js('try{Typekit.load();}catch(e){}', array('type' => 'inline', 'scope' => 'footer'));
  drupal_add_js($variables['directory'] . '/js/vendor/eq.min.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_js('//embanner.univcomm.cornell.edu/OWC-emergency-banner.js', array('type' => 'external', 'scope' => 'footer'));
  $gsap_path = libraries_get_path('greensock') . '/src/minified';
  drupal_add_js($gsap_path . '/TweenLite.min.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_js($gsap_path . '/TimelineLite.min.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_js($gsap_path . '/easing/EasePack.min.js', array('type' => 'file', 'scope' => 'footer'));
  drupal_add_js($gsap_path . '/plugins/CSSPlugin.min.js', array('type' => 'file', 'scope' => 'footer'));
  $isotope_js = libraries_get_path('isotope') . '/isotope.pkgd.min.js';
  drupal_add_js($isotope_js, array('type' => 'file', 'scope' => 'footer'));
  $hoverintent_js = libraries_get_path('hoverintent') . '/jquery.hoverIntent.minified.js';
  drupal_add_js($hoverintent_js, array('type' => 'file', 'scope' => 'footer'));

  $variables['production_site'] = ilr_is_production_site();
}

/**
 * Implements hook_preprocess_hook()
 * Adds relevant data-eq-pts
 * Sets up bare-bones template for pages without layout
 * @see _ilr_alumni_events_payment_page()
 */
function ilr_theme_preprocess_page(&$variables) {
  $variables['page']['page_width_eq_points'] =  array('#markup' => 'data-eq-pts="320: 320, 550: 550, 768: 768, widescreen: 1280"');
  $variables['page']['nav_trigger_pts'] =  array('#markup' => 'data-eq-pts="mobile-nav: 300, regular-nav: 1045"');

  $wordmark = ilr_block_view('ilr_wordmark');

  $wordmark_render = [
    'wordmark' => [
      '#markup' => $wordmark['content']
    ]
  ];

  $variables['page']['footer'] =  $wordmark_render + $variables['page']['footer'];

  if (!isset($variables['logo_link'])) {
    $variables['logo_link'] = '<a class="cornell" title="Visit Cornell.edu" href="https://cornell.edu"></a>';
  }

  if ( isset($_GET['layout']) && $_GET['layout'] == '0' ) {
    $variables['theme_hook_suggestions'][] = 'page__content_only';
  }
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
      _ilr_theme_process_field_blocks($page, $node);
    }
  }
}

/**
 * Moves content from field_blocks on node to appropriate regions
 * Assumes a naming convention that is field_[region_name]_region
 * for the field in the field collection
 */
function _ilr_theme_process_field_blocks(&$page, $node) {
  $fields = current($node['field_blocks'][0]['entity']['field_collection_item']);
  // create a foreach loop to handle this
  foreach ($fields as $field_name => $value) {
    $pattern = "/(field_)([a-z_]*)(_region)/";
    if (preg_match($pattern, $field_name, $matches)) {
      $region_name = $matches[2];
      if (isset($fields[$field_name])) {
        $page[$region_name][] = $fields[$field_name];
        $page[$region_name]['#theme_wrappers'][] = 'region';
        $page[$region_name]['#region'] = $region_name;
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
  if ($variables['block']->module == 'bean' && isset($variables['elements']['bean'])) {
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
}

/**
 * Modifies the output of portraits
 * Adds data-eq-pts
 * @see generate_event_item_markup() for hard-coded data-eq-pts
 */
function ilr_theme_preprocess_node(&$variables) {
  if ($variables['view_mode'] == 'teaser') {
    if (in_array($variables['type'], array('student_portrait'))) {
      $title = $variables['title'];
      $variables['title'] = truncate_utf8(strip_tags($variables['body'][0]['summary']), 55, FALSE, TRUE);
      $grad_year = _ilr_theme_get_class_year_from_date($variables['node'], 'field_expected_graduation_date');
      $variables['content']['student_name'] = array(
        '#markup' => '<h4 class="student-name">' . $title . $grad_year .'</h4>',
      );
    }
    // See note above about hard-coded eq-pts
    $variables['attributes_array']['data-eq-pts'] = 'small: 100, medium: 275, large: 350';
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
    // Check menu name to see if we're on a subsite
    if (module_exists('ilr_sub_sites') && _ilr_sub_sites_get_menu_name() != 'main-menu') {
      $home_link = array_shift($breadcrumb); // Remove the home link
    }
    return '<div class="breadcrumb">' . implode('<span> / </span>', $breadcrumb) . '</div>';
  }
}

function ilr_theme_format_city_state_zip($city, $state, $zip) {
  return $city . ', ' . $state . ' ' . $zip;
}

/**
 * Implements hook_preprocess_field().
 *
 */
function ilr_theme_preprocess_field(&$variables) {
  _ilr_theme_add_line_breaks($variables);
}

/**
 * Add HTML line breaks to plain text fields.
 *
 * Fixs Drupal core bug.
 * @link https://www.drupal.org/node/1152216#comment-8575081
 * @param $variables
 */
function _ilr_theme_add_line_breaks(&$variables) {
  if (
    isset($variables['element']['#items'][0]) &&
    (
      !isset($variables['element']['#items'][0]['format']) ||
      $variables['element']['#items'][0]['format'] === 'text_plain'
    )
  ) {
    foreach ($variables['items'] as $index => $value) {
      $markup = isset($variables['items'][$index]['#markup']) ? $variables['items'][$index]['#markup'] : '';
      if (!empty($markup)) {
        $variables['items'][$index]['#markup'] = nl2br($markup);
      }
    }
  }
}

function _ilr_theme_get_class_year_from_date($node, $field) {
  $formatted_year = '';
  if (isset($node->{$field})) {
    $year = $node->{$field}[LANGUAGE_NONE][0]['value'];
    $formatted_year = " '" . substr($year, 2, 2);
  }
  return $formatted_year;
}
