<?php
/**
 * @file
 * Listing bean plugin.
 */

class EventBlockBean extends BeanPlugin {
  /**
   * Declares default block settings.
   */
  public function values() {
    $values = array(
      'events_shown'  => 3,
      'keywords'      => '',
    );

    return array_merge(parent::values(), $values);
  }

  /**
   * Builds extra settings for the block edit form.
   */
  public function form($bean, $form, &$form_state) {
    $form = array();
    $form['events_shown'] = array(
      '#type' => 'textfield',
      '#title' => t('Number of events'),
      '#size' => 5,
      '#default_value' => $bean->events_shown,
      '#description' => t('Use 0 (zero) to show all events.'),
      '#required' => TRUE,
    );
    $form['keywords'] = array(
      '#type' => 'textfield',
      '#title' => t('Keywords'),
      '#default_value' => $bean->keywords,
      '#description' => t('Try "ilr". Separate multiple keywords with commas.'),
      '#required' => TRUE,
    );
    $form['#submit'][] = 'localist_block_clear_cache';
    return $form;
  }

  /**
   * Displays the bean.
   */
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {
    $keyword_params = EventBlockBean::generate_keyword_params($bean->keywords);
    $cache_key = EventBlockBean::get_cache_key($bean->keywords);
    // Caching strategies based on http://www.lullabot.com/articles/beginners-guide-caching-data-drupal-7
    if ($cache = cache_get('bean_localist_events-' . $cache_key)) {
      $event_json = $cache->data;
    } else {
      $url = "http://cornell.localist.com/api/2/events?days=364&pp=999{$keyword_params}";
      $data = file_get_contents($url);
      $json = json_decode($data, true);
      $event_json = $json['events'];
      cache_set('bean_localist_events-' . $cache_key, $event_json, 'cache', time() + 360);
    }
    $event_count = 0;

    $content['events'] = array();

    foreach($event_json as $event_data) {
      if ($event_count < $bean->events_shown || $bean->events_shown == 0) {
        // Deal with localist's funky json structure
        $event = $event_data['event'];

        $event_start_datetime = strtotime($event['event_instances'][0]['event_instance']['start']);
        $event_start_date = format_date($event_start_datetime, 'custom', 'M j');
        $event_start_time = format_date($event_start_datetime, 'custom', 'g:i a');

        // Create the short formatted date from the first event instance
        $event_date = $event_start_date . ($event_start_time != '12:00 am' ? ' <span class="event-pipe">|</span> ' . $event_start_time : '');

        // Create a shortened description
        $event_description = truncate_utf8($event['description'], 200, TRUE, TRUE);
        // Get the event type if there is one
        $event_type_info = (isset($event['filters']['event_types']['0']['name'])) ? "<span class='event-pipe'>&nbsp;|&nbsp;</span>Event type: <strong>{$event['filters']['event_types']['0']['name']}</strong>" : '';
        // Replace event url string with correct url.
        $event_localist_url = str_replace('//cornell.localist.com', '//events.cornell.edu', $event['localist_url']);

        // Create the markup
        //Event fields include Title, Localist Link, Start Date, Start Time, Description, Location, and Event Type

        $markup = "<div class='event-item " . ($event_count % 2 ? "odd" : "even") . "'>\n";
        $markup .= "<h3 class='event-title'><a href='{$event_localist_url}'>{$event['title']}</a></h3>";
        $markup .= "<h4 class='event-date'>{$event_date}</h4>";
        $markup .= "<p class='event-description'>{$event_description}</p>";
        $markup .= "<p class='event-detail'>Location: <strong>{$event['location_name']}</strong>";
        if ($event_type_info) {
          $markup .= "{$event_type_info}</p>\n";
        }
        $markup .= "</div><!-- end event-detail -->\n\n";

        // Add the markup to the render array
        $content['events'][] = array('#markup' => $markup);
        $event_count++;
      }
    }

    // Consider caching the render array in the future if event renedering is slow
    // See http://omnifik.com/blog/render-arrays-and-cache-drupal-7

    $content['events']['#weight'] = '-1';
    return $content;
  }

  public function get_cache_key($keywords) {
    return str_replace(',', '-', EventBlockBean::strip_spaces(strtolower($keywords)));
  }

  private function strip_spaces($str) {
    return str_replace(' ', '', $str);
  }

  private function generate_keyword_params($keywords){
    $keywords = EventBlockBean::strip_spaces($keywords);
    $keyword_array = explode(",", $keywords);
    $param_string = '';
    foreach($keyword_array as $keyword) {
      $param_string .= "&keyword[]={$keyword}";
    }
    return $param_string;
  }
}
