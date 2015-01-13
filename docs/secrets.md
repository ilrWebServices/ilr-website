# Sensitive Information

Some data (such as api keys, passwords) needs to be available to Drupal without being added to the repository. In those cases, you should follow the pattern in the config folder for secrets.

The current version of the secrets file is on the ILR Box account, where it can be versioned. If you are setting up secrets for the first time, then download secrets.php from Box and add it to the config folder in the root of the project.

Each time you modify the secrets file, you will need to do these things:

    1. Manually upload the secrets.php file to the config folder on Acquia since it does not get deployed with the site. See the secrets file itself for more info on this.
    2. Update the secrets.php file in Box as well, so your changes don't get overridden.

To make the secrets file available to a module, simply add the following line to the .module file:

    require_once DRUPAL_ROOT . '/../config/get_secrets.php';

Then, within the hook or function you need the variable, you can access the global secret with:

    global $ILR_SECRETS;
    $ILR_SECRETS['key'];
