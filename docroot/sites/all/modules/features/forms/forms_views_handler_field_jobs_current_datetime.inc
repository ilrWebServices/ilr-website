<?php
/**
 * @file
 * Class definition of forms_views_handler_field_jobs_current_datetime
 */
class forms_views_handler_field_jobs_current_datetime extends forms_views_handler_field_custom{
  function render($values) {
    // Store as static so the same for all rows
    static $download_datetime;
    if (!$download_datetime) {
      $download_datetime = date('Y-m-d H:i:s');
    }
    // Return the text, so the code never thinks the value is empty.
    return "{ts '$download_datetime'}";
  }
}

