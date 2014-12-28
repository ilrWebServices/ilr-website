<?php

if (!defined('CONFIG_PATH')) {
  if (isset($_ENV['AH_SITE_ENVIRONMENT'])) {
    // We're on Acquia
    define('CONFIG_PATH', '/mnt/gfs/home/ilr/config');
  } // We're developing locally
  else {
    define('CONFIG_PATH', dirname(__FILE__));
  }
}
// Load the departments file
if (file_exists(CONFIG_PATH . '/ilr_departments.php')) {
  require_once(CONFIG_PATH . '/ilr_departments.php');
}
