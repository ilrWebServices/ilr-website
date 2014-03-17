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
      'query_type'    => 'inclusive',
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

    $form['query_type'] = array(
      '#type' => 'radios',
      '#title' => t('Keyword filtering'),
      '#default_value' => $bean->query_type,
      '#options' => array('inclusive' => 'Any', 'exclusive' => 'All'),
      '#description' => t('Select events with all the chosen keywords or any of them?'),
    );

    $form['#submit'][] = 'localist_block_clear_cache';
    return $form;
  }

  /**
   * Displays the bean.
   */
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {
    $event_json = $this->get_event_json($bean);

    $content['events'] = $this->generate_events_view($bean, $event_json);
    $content['events']['#weight'] = '-1';
    return $content;
  }

  public static function get_cache_key($keywords) {
    return str_replace(',', '-', rawurlencode(strtolower($keywords)));
  }
  /**
   * Retrieves the json from localist or the cache
   */
  private function get_event_json($bean) {
    $keyword_params = $this->generate_keyword_params($bean);
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
    return $event_json;
  }

  /**
   * Loops through the json items or returns empty message
   * @param  [json] $event_json The json that was returned from localist or the cache
   * @return [array] $content The render array with #markup
   */
  private function generate_events_view($bean, $event_json) {
    $event_count = 1;
    $events = array();
    if (!empty($event_json)) {
      foreach($event_json as $event_data) {
        if ($event_count <= $bean->events_shown || $bean->events_shown == 0) {
          $markup = $this->generate_event_item_markup($event_data, $event_count);
          // Add the markup to the render array
          $events[] = array('#markup' => $markup);
          $event_count++;
        }
      }
    } // There were no events
    else {
      $events[] = array('#markup' => '<p>Sorry, but we were unable to retrieve any events at this time.</p>');
    }


    return $events;
  }

  /**
   * Generates the markup for each event item
   * @param  [json] $event_data The data from the event json object
   * @param  [current_count] The number of event items that have been processed
   * @return [string] $markup
   */
  private function generate_event_item_markup($event_data, $current_count) {
    // Deal with localist's funky json structure
    $event = $event_data['event'];

    $event_start_datetime = strtotime($event['event_instances'][0]['event_instance']['start']);
    $event_start_date = format_date($event_start_datetime, 'custom', 'M j');
    $event_start_time = format_date($event_start_datetime, 'custom', 'g:i a');

    // Create the short formatted date from the first event instance
    $event_date = $event_start_date . ($event_start_time != '12:00 am' ? ' <span class="event-pipe">|</span> ' . $event_start_time : '');

    // Format some field output
    $event_date = $this->format_event_date($event['event_instances'][0]['event_instance']['start']);
    $event_description = $this->format_event_description($event['description']);
    $event_type_info = $this->format_event_type_info($event['filters']);
    $event_localist_url = $this->format_localist_event_url($event['localist_url']);

    // Create the markup
    //Event fields include Title, Localist Link, Start Date, Start Time, Description, Location, and Event Type
    $markup = "<div class='event-item " . ($current_count % 2 ? "odd" : "even") . "'>\n";
    $markup .= "<h3 class='event-title'><a href='{$event_localist_url}'>{$event['title']}</a></h3>";
    $markup .= "<h4 class='event-date'>{$event_date}</h4>";
    $markup .= "<p class='event-description'>{$event_description}</p>";
    $markup .= "<p class='event-detail'>Location: <strong>{$event['location_name']}</strong>";
    $markup .= "{$event_type_info}</p>\n";
    $markup .= "</div><!-- end event-item -->\n\n";

    return $markup;
  }

  /**
   * Formats the date string from the json
   */
  private function format_event_date($start_date) {
    $event_start_datetime = strtotime($start_date);
    $event_start_date = format_date($event_start_datetime, 'custom', 'M j');
    $event_start_time = format_date($event_start_datetime, 'custom', 'g:i a');

    // Create the short formatted date from the first event instance
    $formatted_event_date = $event_start_date . ($event_start_time != '12:00 am'
      ? ' <span class="event-pipe">|</span> ' . $event_start_time
      : ''
    );

    return $formatted_event_date;
  }

  /**
   * Strips tags from description and truncates it
   * to 200 characters (roughly 35 words)
   */
  private function format_event_description($event_description) {
    //truncate_utf8($string, $max_length, $wordsafe = FALSE, $add_ellipsis = FALSE, $min_wordsafe_length = 1)
    return truncate_utf8(strip_tags($event_description), 200, TRUE, TRUE);
  }

  /**
   * Looks for event type info, and adds it to the markup if found
   */
  private function format_event_type_info($filters) {
    $markup = '';
    if (isset($filters['event_types']['0']['name'])) {
      $type = $filters['event_types']['0']['name'];
      $markup = "<span class='event-pipe'>&nbsp;|&nbsp;</span>Event type: <strong>{$type}</strong>";
    }
    return $markup;
  }

  /**
   * Formats the localist link url to point to the cornell event site
   */
  private function format_localist_event_url($url) {
    return str_replace('//cornell.localist.com', '//events.cornell.edu', $url);
  }

  /**
   * Generates the keyword params that localist expects
   * Also formats "exclusive" matches
   */
  private function generate_keyword_params($bean){
    $keywords = rawurlencode(str_replace(', ',',',$bean->keywords));
    $keyword_array = explode("%2C", $keywords);
    $param_string = '';
    foreach($keyword_array as $keyword) {
      $param_string .= "&keyword[]={$keyword}";
    }
    if ($bean->query_type == 'exclusive') {
      $param_string .='&match=all';
    }
    return $param_string;
  }
}
