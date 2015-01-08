<?php
/**
 * @file
 * Class definition of forms_views_handler_field_userid
 */

class forms_views_handler_field_userid extends forms_views_handler_field_custom{
  function render($values) {
    global $user;
    return $user->name;
  }
}