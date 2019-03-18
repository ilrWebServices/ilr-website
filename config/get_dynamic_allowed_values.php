<?php

if (!defined('CONFIG_PATH')) {
  if (isset($_ENV['PLATFORM_PROJECT'])) {
    // We're on Acquia
    define('CONFIG_PATH', '/config');
  } // Check for featuretest
  else if (strpos($_SERVER['SERVER_NAME'], 'featuretest.org') > 0) {
    define('CONFIG_PATH', '/var/aegir/projects/ilr/prod/config');
  } // We're developing locally
  else {
    define('CONFIG_PATH', dirname(__FILE__));
  }
}

// Load the secrets file
if (file_exists(CONFIG_PATH . '/dynamic_allowed_values.php')) {
  require_once(CONFIG_PATH . '/dynamic_allowed_values.php');
}
