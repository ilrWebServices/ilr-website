<?php

/**
 * Implements theme_youtube_thumbnail()
 */
function ilr_theme_youtube_thumbnail(&$variables) {
  $video_id = $variables['video_id'];
  $style = $variables['image_style'];
  $uri = youtube_build_thumbnail_uri($video_id);

  // Check to see if a thumbnail exists locally.
  if (!file_exists($uri)) {
    // Retrieve the image from YouTube.
    if (!youtube_get_remote_image($video_id)) {
      // Use the remote source if local copy fails.
      $src = youtube_build_remote_image_path($video_id);
      return theme('image', array('path' => $src));
    }
  }

  // Ensure unique value for alt for videos without titles
  $alt = t('Embedded YouTube video with id ' . $video_id);
  if (!empty($variables['entity_title'])) {
    $alt .= t(' for @entity_title', array(
      '@entity_title' => $variables['entity_title'],
    ));
  }

  if ($style) {
    $image = theme('image_style', array(
      'style_name' => $style,
      'path' => $uri,
      'alt' => $alt,
    ));
  }
  else {
    $image = theme('image', array(
      'path' => $uri,
      'alt' => $alt
    ));
  }

  // Check if an url path is provided
  if ($variables['image_link'] != NULL) {
    $url_path = $variables['image_link']['path'];
    $options = $variables['image_link']['options'];
    $image = l($image, $url_path, $options);
  }

  return $image;
}

/**
 * Implements theme_youtube_video().
 */
function ilr_theme_youtube_video($variables) {
  $video_id = $variables['video_id'];

  // Get field display settings.
  $size = $variables['size'];
  $width = array_key_exists('width', $variables) ? $variables['width'] : NULL;
  $height = array_key_exists('height', $variables) ? $variables['height'] : NULL;
  $autoplay = array_key_exists('autoplay', $variables) ? $variables['autoplay'] : FALSE;
  $loop = array_key_exists('loop', $variables) ? $variables['loop'] : FALSE;
  $showinfo = array_key_exists('showinfo', $variables) ? $variables['showinfo'] : FALSE;
  $controls = array_key_exists('controls', $variables) ? $variables['controls'] : FALSE;
  $autohide = array_key_exists('autohide', $variables) ? $variables['autohide'] : FALSE;
  $iv_load_policy = array_key_exists('iv_load_policy', $variables) ? $variables['iv_load_policy'] : FALSE;

  // Get YouTube settings.
  $suggest = variable_get('youtube_suggest', TRUE);
  $privacy = variable_get('youtube_privacy', FALSE);
  $modestbranding = variable_get('youtube_modestbranding', FALSE);
  $theme = variable_get('youtube_theme', FALSE);
  $color = variable_get('youtube_color', FALSE);
  $enablejsapi = variable_get('youtube_enablejsapi', FALSE);
  $player_class = variable_get('youtube_player_class', 'youtube-field-player');
  $wmode = variable_get('youtube_wmode', TRUE);
  $privacy = variable_get('youtube_privacy', FALSE);
  $dimensions = youtube_get_dimensions($size, $width, $height);

  // Query string changes based on setings.
  $query = array();
  if (!$suggest) {
    $query['rel'] = '0';
  }
  if ($modestbranding) {
    $query['modestbranding'] = '1';
  }
  if ($theme) {
    $query['theme'] = 'light';
  }
  if ($color) {
    $query['color'] = 'white';
  }
  if ($enablejsapi) {
    global $base_root;
    $query['enablejsapi'] = '1';
    $query['origin'] = $base_root;
  }
  if ($wmode) {
    $query['wmode'] = 'opaque';
  }
  if ($autoplay) {
    $query['autoplay'] = '1';
  }
  if ($loop) {
    $query['loop'] = '1';
    $query['playlist'] = $video_id;
  }
  if ($showinfo) {
    $query['showinfo'] = '0';
  }
  if ($controls) {
    $query['controls'] = '0';
  }
  if ($autohide) {
    $query['autohide'] = '1';
  }
  if ($iv_load_policy) {
    $query['iv_load_policy'] = '3';
  }

  // Domain changes based on settings.
  $domain = ($privacy) ? 'youtube-nocookie.com' : 'youtube.com';

  $path = 'https://www.' . $domain . '/embed/' . $video_id;
  $src = url($path, array('query' => $query));

  $player_title = t('Embedded video');
  if (!empty($variables['entity_title'])) {
    $player_title .= t(' for @entity_title', array(
      '@entity_title' => $variables['entity_title'],
    ));
  }

  // Alternative content for browsers that don't understand iframes (WCAG).
  $alternative_content = l($player_title, $src);

  $output = '<iframe id="' . drupal_html_id($player_class) . '" class="' . $player_class . '"
    width="' . $dimensions['width'] . '" height="' . $dimensions['height'] . '"
    src="' . $src . '" title="' . $player_title . '"
    allowfullscreen style="border: none;">' . $alternative_content . '</iframe>';

  if ($size == 'responsive') {
    $output = '<div class="youtube-container--responsive">' . $output . '</div>';
  }

  return $output;
}

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

  if ($node = menu_get_object()) {
    if (module_exists('ilr_social_sharing')) {
      $variables['description'] = _ilr_social_sharing_get_description($node);
    }
  }
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

  if (!isset($variables['logo_link'])) {
    $variables['logo_link'] = '<a class="cornell" title="Visit Cornell.edu" alt="Cornell University" href="https://cornell.edu"><span class="sr-only">Cornell University</span></a>';
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
 * Implements hook_preprocess_image().
 */
function ilr_theme_preprocess_image(&$variables) {
  // If the alt attribute is not set, set it to the empty string.
  if (!isset($variables['alt'])) {
    $variables['alt'] = '';
  }
}


/**
 * Modifies the output of portraits
 * Adds data-eq-pts
 * @see generate_event_item_markup() for hard-coded data-eq-pts
 */
function ilr_theme_preprocess_node(&$variables) {
  // Add a theme suggestion for view modes, too.
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];

  // Enable content-type-specific preprocess functions.
  // Example: ilr_theme_preprocess_node__instagram_post().
  $function = __FUNCTION__ . '__' . $variables['type'];
  if (function_exists($function)) {
    $function($variables);
  }

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

  $variables['theme_hook_suggestions'][] = 'node__' . $variables['view_mode'];
}

/**
 * Preprocess instagram post nodes.
 */
function ilr_theme_preprocess_node__instagram_post(&$variables) {
  $wrapper = ilr_get_node_wrapper($variables['node']);

  if ($url = $wrapper->field_website_url->value()) {
    $variables['instagram_url'] = (isset($url['url']))
      ? $url['url']
      : $url[0]['url'];
  }

  // Fix rendering issues when displaying via union styles.
  $variables['description'] = $wrapper->body->value->value(array('decode' => TRUE));
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
    return '<nav class="breadcrumb" aria-label="Breadcrumb">' . implode(' ', $breadcrumb) . '</nav>';
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
