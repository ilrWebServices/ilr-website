# Sensitive Information

Some data (such as api keys, passwords) needs to be available to Drupal without being added to the repository. In those cases, you should follow the pattern in the config folder for secrets.

The current version of the secrets file is on the ILR Box account, where it can be versioned. If you are setting up secrets for the first time, then download secrets.php from Box.

If you've added a new secret, you will need to manually upload the secrets.php file to the config folder on Acquia since it does not get deployed with the site. The path is `/mnt/gfs/home/ilr/config`. Also, be sure to update the secrets.php file in Box as well, so your changes don't get overridden.

To make the secrets file available to a module, simply add the following line to the .module file:

    require_once DRUPAL_ROOT . '/../config/get_secrets.php';
