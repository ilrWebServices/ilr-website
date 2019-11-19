<?php
/**
 * @file
 * Platform.sh example settings.php file for Drupal 7.
 */

$conf['install_profile'] = 'ilr';

// Recommended PHP settings.
ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);
ini_set('session.gc_maxlifetime', 200000);
ini_set('session.cookie_lifetime', 2000000);
ini_set('pcre.backtrack_limit', 200000);
ini_set('pcre.recursion_limit', 200000);

// Include the composer autoloader if found. As of 2019-03, this is use to load
// environment variables from the `.env` file in the project root.
$composer_autoload_file = __DIR__ . '/../../../vendor/autoload.php';
if (file_exists($composer_autoload_file)) {
  require_once $composer_autoload_file;
}

// Default Drupal 7 settings.
//
// These are already explained with detailed comments in Drupal's
// default.settings.php file.
//
// See https://api.drupal.org/api/drupal/sites!default!default.settings.php/7
$update_free_access = FALSE;
$drupal_hash_salt = '';

// Set Drupal not to check for HTTP connectivity.
$conf['drupal_http_request_fails'] = FALSE;

$conf['config_dir'] = DRUPAL_ROOT . '/../config';

// Include local settings. These come last so that they can override anything.
$on_platformsh = !empty($_ENV['PLATFORM_PROJECT']);

if (!$on_platformsh) {
  $databases['default']['default'] = [
    'database' => getenv('MYSQL_DATABASE'),
    'driver' => 'mysql',
    'host' => getenv('MYSQL_HOSTNAME'),
    'password' => getenv('MYSQL_PASSWORD'),
    'port' => getenv('MYSQL_PORT'),
    'prefix' => '',
    'username' => getenv('MYSQL_USER'),
  ];
}

// Set the base url of the forwarded host if behind a proxy.
if (!empty($_SERVER['HTTP_X_FORWARDED_HOST'] && !empty($_SERVER['HTTP_X_FORWARDED_PROTO']))) {
  $base_url = $_SERVER['HTTP_X_FORWARDED_PROTO'] . '://' . $_SERVER['HTTP_X_FORWARDED_HOST'];
}

// Include automatic Platform.sh settings.
if ($on_platformsh) {
  require_once(__DIR__ . '/settings.platformsh.php');
}

if (file_exists(__DIR__ . '/settings.local.php')) {
  require_once(__DIR__ . '/settings.local.php');
}
