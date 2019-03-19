# Installation

This installation guide assumes that you've already followed the [Quickstart Guide](https://github.com/ilrWebServices/drupal-dev-vm#quick-start-guide) for the Dev VM.
  1. `git clone git@github.com:ilrWebServices/ilr-website.git`
  2. Run `composer install`.
  3. Add a `settings.local.php` file to `docroot/sites/default/` with the following info:

```
// Include the composer autoloader. @see composer.json. This is mainly for .env
// support as of 2019-03.
require_once __DIR__ . '/../../../vendor/autoload.php';

// Update values as needed.
$databases['default']['default'] = [
  'database' => 'ilr',
  'username' => 'drupal',
  'password' => 'drupal',
  'host' => '192.168.88.89',
  'port' => '',
  'driver' => 'mysql',
  'prefix' => '',
];

$conf['install_profile'] = 'ilr';
$conf['preprocess_css'] = 0;
$conf['preprocess_js'] = 0;
$conf['habitat_environment'] = 'local';
error_reporting(E_ALL);
ini_set('display_errors', TRUE);
ini_set('display_startup_errors', TRUE);
```

  4. Assuming you can SSH into the Acquia server, install the production database from the docroot folder with `drush sql-sync @ilr.live @ilr.ilr.local --sanitize -y`.
  5. Once you have the database, enable the ilr development module with `drush en ilr_dev -y`.
  6. Confirm that the site loads at [http://ilr-website.test](http://ilr-website.test).
  7. If you'll be compiling the stylesheet, follow the "Simplifying CSS compilation" in the [theming readme](/docs/theming.md).
