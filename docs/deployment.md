# Deployment
Acquia provides three environments for each bucket, which they generally call "Dev", "Stage" and "Prod" (though "stage" and "test" refer to the same environement). The procedures are slightly different depending on which environment you are deploying to, as outlined below.

## Conceptual Differences Between Environments
* **Dev** - Dev is the environment where feature branches are tested, and is therefore inherently less stable than test or prod. Content added to dev should be considered placeholder, and may be deleted after a reinstall at any time. Devel generate is a good way of getting content populated on dev.
* **Test** - As of Auguest 2014, we have committed to keeping the master branch deployed on test and avoiding reinstalling the site. This practice ensures that the content added on staging will remain, and also reinforces the practice of using update hooks to enable features and handling other configuration tasks that could otherwise be handled as a part of the install/reinstall process.
* **Prod** - Before launch, we will be using prod to stage the new content. The plan is to make all necessary changes via update hooks to avoid having to reinstall and re-migrate content.

## Deploying to Dev and/or Staging
"Livedev" has been enabled on both dev and test so that we can push css files up directly to the server. This setting is managed in the Acquia Cloud "Workflow" interface, with the dropdown next to the name of the specific environment. Livedev is not available for prod.

In short, there is a [deploy script](/bin/deploy) in the bin folder that handles deployment to dev and test. You run this script from the repository root, ie `$ bin/deploy`, which deploys the site to dev. For staging, pass the "-e" flag, as in `$ bin/deploy -e test`. We use "test" rather than "stage" because it mirrors the server structure and naming conventions.

Generally, you are able to deploy any local branch to livedev on Acquia dev without additional consequences. However, at times, it happens that a conflict between the branches arises, and the only way to fix it is to disable livedev on that environment, switch to the desired branch in the Workflow interface, then re-enable livedev. In some instances, you will also need to reinstall the site. The easiest way to do that is to run the following drush script from your docroot:

    drush @ilr.ilr.dev si ilr --site-name="ILR Dev Site | Cornell University" --clean-url=1 --account-pass=testing --account-mail=aaronf@cornell.edu --yes

You can also log into the irldev db server with [sequel pro](http://www.sequelpro.com/) or another db administration program. You can find the login credentials in the Acquia Cloud interface, on the "Databases" menu item on the left. After deleting all of the current tables, go to [the installer page](drupal-dev.ilr.cornell.edu/install.php), and choose the ILR profile.


## Deploying to Prod

All prod deployments happen on the production branch. Before the site goes live, we are being more flexible about deploying the branch without using tags to simplify the workflow. More info on tagging is included below, which becomes essential once the new site is live.

Because Acquia currently forces us to commit compiled css files in order to get them into prod, we currently do that with a post-merge hook. The hook runs each time a branch is merged. Since we will merge updates into production, we can check to see if we're on the production branch, and then if there are updates to any files in the css folder. If it finds diffs, then the new files get added in an additional commit.

The following is an example of the post-merge hook currently used to compile and commit the stylesheet to the production branch:

      #! /bin/sh

      BRANCH_NAME="$(git symbolic-ref HEAD 2>/dev/null)" ||
      BRANCH_NAME="detached"
      BRANCH_NAME=${BRANCH_NAME##refs/heads/}

      echo $BRANCH_NAME

      if [ "$BRANCH_NAME" = "production" ]; then
        compass compile
        git add docroot/sites/all/themes/ilr_theme/css/ -f
        git diff --cached --exit-code > /dev/null
        if [ "$?" -eq 1 ]; then
          git commit -m 'Adding compiled css to production'
        fi
      fi

### Production Tags

The Acquia Cloud Workflow interface makes it really easy to deploy a specific tag to production.

First run `git tag` to determine the latest release of the platform. You'll see a list like this:

    $ git tag
    7.x-0.1
    7.x-0.2
    7.x-0.3

In this case `7.x-0.3` is the latest release tag, so the following will create a new tag for deployment (assuming that you have a remote called "ac" that points to Acquia):

    $ git tag 7.x-0.4 -m 'Message about what is in the tag'
    $ git push ac 7.x-0.4

You can then deploy the tag in the [Acquia Cloud interface](https://insight.acquia.com/cloud/workflow?s=899706).

** TODO: Create an Acquia cloud hook to trigger a db backup when a tag is pushed. **
