<?php

if (!defined('CONFIG_PATH')) {
  if (!empty($_ENV['PLATFORM_PROJECT'])) {
    // We're on Platform.sh
    define('CONFIG_PATH', '/ilr_config');
  } // We're developing locally
  else {
    define('CONFIG_PATH', dirname(__FILE__));
  }
}
// Load the departments file
if (file_exists(CONFIG_PATH . '/ilr_departments.php')) {
  require_once(CONFIG_PATH . '/ilr_departments.php');
}
