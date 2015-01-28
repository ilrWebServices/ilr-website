<?php
/**
 * @file
 * Views hooks
 */
/**
 * Implements hook_views_data_alter().
 *
 * Provide custom Views field for Entityform submission downloads
 */
function forms_views_data_alter(&$data) {
  $data['views']['ilr_jobs_current_datetime'] = array(
    'title' => t('Current DateTime Jobs'),
    'help' => t('The current datetime for CSV download for the Alumni Jobs.'),
    'field' => array(
      'handler' => 'forms_views_handler_field_jobs_current_datetime',
    ),
  );
  $data['views']['ilr_userid'] = array(
    'title' => t('Current User'),
    'help' => t('User Id of the current user'),
    'field' => array(
      'handler' => 'forms_views_handler_field_userid',
    ),
  );
  $data['views']['ilr_netid'] = array(
    'title' => t('Current NetId'),
    'help' => t('Netid of the current user'),
    'field' => array(
    'handler' => 'forms_views_handler_field_netid',
  ),
  );
}

/**
 * Implements hook_views_pre_view().
 */
function forms_views_pre_view(&$view, &$display_id, &$args){
  if ($view->name == 'submissions_alumni_postings' && _entityform_get_view_mode_for_view($view, $display_id) == 'download') {
    $fields = &$view->display_handler->display->handler->options['fields'];
    $fields = &_form_move_array_end_offset($fields, 'NumberAds', 1);
    $fields = &_form_move_array_end_offset($fields, 'PostingBlindAd', 3);
  }
}

/**
 * @param $fields
 */
function _form_move_array_end_offset($fields, $label, $offset) {
  $offset *= -1;
  foreach ($fields as $key => $value) {
    if ($value['label'] == $label) {
      //$field_keys = array_keys($fields);
      //$last_key = array_pop($field_keys);
      // $last_value = $fields[$last_key];
      //unset($fields[$last_key]);
      unset($fields[$key]);
      //$fields[$key] = $value;
      return array_slice($fields, 0, $offset, TRUE) +
        array($key => $value) +
        array_slice($fields, $offset, $offset * -1, TRUE);
      break;
    }
  }
}
