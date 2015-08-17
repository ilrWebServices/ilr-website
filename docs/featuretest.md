# Featuretest

As of June, 2015, all pull requests via github are set to build a test environment at featuretest.org so we can test feature branches with our various stakeholders. Featuretest.org is built upon the [devshop](https://github.com/opendevshop/devshop) infrastructure. Currently, [prod.ilr.featuretest.org](http://prod.ilr.featuretest.org) is set as a clone of the live, production environment on Acquia.

## Requirements

In order to deploy the css files and run drush commands on the featuretest server, you will need to add the server key to your .ssh folder, and configure your ssh connection with the appropriate settings as follows:

1. Open the Featuretest SSH creds boxnote in the ILR Web Team folder of [Box](http://cornell.box.com).
2. Copy the string to your clipboard
3. Create a new file with the private key data in your ssh folder (at ~/.ssh/Featuretest.pem).
4. Restrict permissions to the key with `chmod 400 ~/.ssh/Featuretest.pem`
5. Edit your local ssh config file (~/.ssh/config), adding the following lines:

        Host featuretest.org
        IdentityFile ~/.ssh/Featuretest.pem
        User ubuntu
6. From the docroot folder, type `drush @featuretest.prod status`. After agreeing to add the server to the known_hosts file, drush should return configuration data related to the prod environment on featuretest.

## Workflow

1. Attempt to create short branch names for any branches that will be going through the pull request process. The pattern that featuretest uses to build new environments is `branch-[branchname].ilr.featuretest.org`.
2. After initiating a pull request, CSS will need to be deployed to the server. There is a bin script that automates that process. Run from the repository root with `bin/featuretest-css-deploy -e branch-[branchname]`. This script also confirms that the custom featuretest module has been enabled for that environment.

## Data and file syncing

As requested, there are times when it is helpful to sync files up to or down from featuretest environments. We use drush to accomplish that. Note that, generally speaking, pushing data and files upstream should be done with caution. We should never push data/files up to Acquia. However, there are times when it simplifies the workflow to be able to create content locally and sync it with a featuretest environment. In those cases, use the following
steps:

1. Confirm that you can connect to the appropriate featuretest database with `drush @featuretest.[branch-name] status`. The output will verify that drush was able to connect to the database.
2. Sync your local database to the server with `drush sql-sync @ilr.ilr.local @featuretest.[branch-name]`
3. Sync the files with `drush rsync @ilr.ilr.local:%files/ @featuretest.[branch-name]:%files` (requires rsync)
4. Enable the featuretest custom module (which is responsible for some featuretest-specific settings with `drush @featuretest.[branch-name] en featuretest -y`

drush sql-sync @ilr.live @ilr.ilr.local -y
drush rsync @ilr.ilr.dev:%files/ @ilr.ilr.local:%files


## Temporary Manual Steps for Featuretest Environments

There is currently an issue with the install profile that forces a few manual steps in addition to uploading the CSS. Once a new envrironment has been created, and seemingly after any database updates get run (unverfied), someone will need to perform the following steps:

1. ssh into the server with `ssh featuretest.org` (assumes pem has been correctly configured; see above)
2. `sudo vi /var/aegir/projects/ilr/[branch-name]/docroot/sites/[site-url]/settings.php`
3. In vi, type `/$conf` to take you to the $conf section of the settings.php file.
4. Modify `$conf['install_profile'] = 'minimal';` to `$conf['install_profile'] = 'ilr';`
5. Save the file by hitting the escape key, then `:wq!`
6. `exit` to return to your local terminal.
7. From the docroot folder, type `drush @featuretest.[branch-name] en ilr -y`

Note that logging in will not work until these steps have been performed. Also, if you are logged in and begin getting white-screens from PHP errors, it is possible that a `drush updb` or something else has reset the profile, requiring the steps above to be run again.
