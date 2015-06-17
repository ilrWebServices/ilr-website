# Featuretest

As of June, 2015, all pull requests via github are set to build a test environment at featuretest.org so we can test feature branches with our various stakeholders. Featuretest.org is built upon the [devshop](https://github.com/opendevshop/devshop) infrastructure. Currently, [prod.ilr.featuretest.org](http://prod.ilr.featuretest.org) is set as a clone of the live, production environment on Acquia.

## Requirements

In order to deploy the css files and run drush commands on the featuretest server, you will need to add the server key to your .ssh folder, and configure your ssh connection with the appropriate settings as follows:

1. Open the Featuretest SSH creds boxnote in the ILR Web Team folder of [Box](http://cornell.box.com).
2. Copy the string to your clipboard
3. Create a new file with the private key data in your ssh folder (at ~/.ssh/Featuretest.pem).
4. Edit your local ssh config file (~/.ssh/config), adding the following lines:

        Host featuretest.org
        IdentityFile ~/.ssh/Featuretest.pem
        User ubuntu
5. From the docroot folder, type `drush @featuretest.prod status`. Drush should return configuration data related to the prod environment on featuretest.

## Workflow

1. Attempt to create short branch names for any branches that will be going through the pull request process. The pattern that featuretest uses to build new environments is `branch-[branchname].ilr.featuretest.org`.
2. After initiating a pull request, CSS will need to be deployed to the server. There is a bin script that automates that process. Run from the repository root with `bin/featuretest-css-deploy -e branch-[branchname]`. This script also confirms that the custom featuretest module has been enabled for that environment.
