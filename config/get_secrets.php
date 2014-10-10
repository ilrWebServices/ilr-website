<?php

if (isset($_ENV['AH_SITE_ENVIRONMENT'])) {
  // We're on Acquia
  define('CONFIG_PATH', '/mnt/gfs/home/ilr/config');
} // We're developing locally
else {
  define('CONFIG_PATH', dirname(__FILE__));
}
// Load the secrets file
if (file_exists(CONFIG_PATH) . '/secrets.php') {
  require_once(CONFIG_PATH . '/secrets.php');
}
