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
        User aegir
6. From the docroot folder, type `drush @featuretest.prod status`. After agreeing to add the server to the known_hosts file, drush should return configuration data related to the prod environment on featuretest. The two important lines you want to look for are:

        Database                        :  Connected
        Drupal bootstrap                :  Successful

## Workflow

1. Attempt to create short branch names for any branches that will be going through the pull request process. The pattern that featuretest uses to build new environments is `branch-[branchname].ilr.featuretest.org`.
2. After initiating a pull request, CSS will need to be deployed to the server. There is a bin script that automates that process. Run from the repository root with `bin/featuretest-css-deploy -e branch-[branchname]`. It's not uncommon to need to `drush @featuretest.[branch] cc all` to get the styles to load after deploying the CSS. This script also confirms that the custom featuretest module has been enabled for that environment.
3. As of March, 2016, Cornell is removing the ability for anonymous shibboleth access. This means that most it will no longer be possible to log in with your NetID on featuretest environments. Please talk with a project lead to find alternative ways to log into the sites on featuretest.

## Rebasing Issues

Our typical workflow involves rebasing master as a part of the pull request. However, developers should avoid rebasing if the featuretest environment has already been created, as it affects the auto-updating functionality of the branch. For that reason, please merge master into the branch rather than rebasing, such as `git checkout [feature-branch] && git merge master`. This will avoid any conflicts.

If, however, the branch has already been rebased, then the simplest workaround is to ssh into featuretest, cd to the directory of the branch environment, then `git checkout master && git branch -D [feature-branch] && git checkout -b [feature-branch] origin/[feature-branch]`
