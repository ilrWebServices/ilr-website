# Installation

This installation guide assumes that you've already followed the [Quickstart Guide](https://github.com/ilrWebServices/drupal-dev-vm#quick-start-guide) for the Dev VM.
  1. `git clone git@github.com:ilrWebServices/ilr-website.git`
  2. Add the settings.php file to docroot/sites/default with the following info (assuming you haven't modified the mysql user and pw in the dev vm config file):

          $databases = array (
            'default' =>
            array (
              'default' =>
              array (
                'database' => 'ilr',
                'username' => 'drupal',
                'password' => 'drupal',
                'host' => '192.168.88.89',
                'port' => '',
                'driver' => 'mysql',
                'prefix' => '',
              ),
            ),
          );

          $conf['install_profile'] = 'ilr';
          $conf['preprocess_css'] = 0;
          $conf['preprocess_js'] = 0;
          $conf['habitat_environment'] = 'local';
          error_reporting(E_ALL);
          ini_set('display_errors', TRUE);
          ini_set('display_startup_errors', TRUE);

  3. Assuming you can SSH into the Acquia server, install the production database from the docroot folder with `drush sql-sync @ilr.live @ilr.ilr.local --sanitize -y`.
  4. Once you have the database, enable the ilr development module with `drush en ilr_dev -y`.
  5. Confirm that the site loads at [http://ilr-website.test](http://ilr-website.test).
  6. If you'll be compiling the stylesheet, follow the "Simplifying CSS compilation" in the [theming readme](/docs/theming.md).
