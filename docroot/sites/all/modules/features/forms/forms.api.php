<?php

/**
 * Dynamic form options alter example
 * Allows a form field using dynamic allowed values to alter
 * options based on custom logic
 * @see config/get_dynamic_allowed_values.php and
 * @see config/dynamic_allowed_values.php
 */
function hook_dynamic_allowed_values_alter(&$options, $type, $field_name) {
  foreach ($options as $key => $value) {
    $full = forms_pseudo_code_to_check_if_full($type, $field_name);
    unset($options[$key]);
  }
  return $options;
}
