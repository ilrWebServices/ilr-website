<?php
/**
 * @file
 * Class definition of forms_views_handler_field_netid
 */

class forms_views_handler_field_netid extends forms_views_handler_field_custom{

  function render($values) {
    $netid = ilr_get_netid_of_current_user();
    return $netid ? $netid : 'anonymous';
  }
}