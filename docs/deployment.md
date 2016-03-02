# Deployment
Acquia provides three environments for each bucket, which they generally call "Dev", "Stage" and "Prod" (though "stage" and "test" refer to the same environement). The procedures are slightly different depending on which environment you are deploying to, as outlined below.

## Conceptual Differences Between Environments
* **Dev** - Dev is the environment where feature branches are tested, and is therefore inherently less stable than test or prod. Content added to dev should be considered placeholder, and may be overwritten by the prod database at any time.
* **Test** - The test environment has two primary purposes: 1) confirming that the master branch is ready to be merged into production, and 2) allowing stakeholders to review new features or updates before deploying to prod. Nathan will be responsible for moving the database from production to staging, in conjunction with developers who may be in the middle of testing new features with stakeholders.
* **Prod** - The production environement is now locked into production mode, which prevents accidentally dragging a database or files from dev or test. We deploy using tags off of the production branch, which never gets pushed to github. More deployment instructions to follow.

## Deploying to Dev and/or Staging
"Livedev" has been enabled on both dev and test so that we can push css files up directly to the server. This setting is managed in the Acquia Cloud "Workflow" interface, with the dropdown next to the name of the specific environment. Livedev is not available for prod.

In short, there is a [deploy script](/bin/deploy) in the bin folder that handles deployment to dev and test. You run this script from the repository root, ie `$ bin/deploy`, which deploys the site to dev. For staging, pass the "-e" flag, as in `$ bin/deploy -e test`. We use "test" rather than "stage" because it mirrors the server structure and naming conventions. As mentioned above, we always deploy the master branch to test, though any branch can be deployed to dev. Note that the script assumes you've created a remote called "ac" and that your key has been added to the Acquia Cloud interface. You can retrieve the git remote address using the "Git URL" button in the top right of the Workflow page, then [add your remote](https://git-scm.com/docs/git-remote).

Generally, you are able to deploy any local branch to livedev on Acquia dev without additional consequences. However, at times, it happens that a conflict between the branches arises (typically as the result of an ammended commit or rebase). The easiest way to resolve this issue is to delete the branch you were trying to deploy and try again:

    1. ssh into the Acquia server (key required)
    2. `cd dev/livedev/`
    3. `git checkout .`
    4. `git clean -fd` // Removes any untracked files that may prevent checkout out another branch
    5. `git checkout master`
    6. `git branch -D [branch you were trying to deploy]`
    7. `exit`
    8. `bin/deploy`

You can also log into the irldev db server with [sequel pro](http://www.sequelpro.com/) or another db administration program. You can find the login credentials in the Acquia Cloud interface, on the "Databases" menu item on the left.


## Deploying to Prod

Acquia currently requires that all files get deployed via git. While this is generally a good practice, it does make CSS deployments trickier, since we are not including compiled CSS files in the repo. To work around this limitation, we can use a git post-merge hook to trigger CSS deployment when appropriate. The following hook runs each time a branch is merged, and if the current branch is production, it will first check for differences in the compiled CSS, then add an additional commit if necessary.

The following is an example of the post-merge hook currently used to compile and commit the stylesheet to the production branch. Please note that this command will only work as expected if you have already bundled the gemfile and your local system is able to run compass compile.

      #! /bin/sh

      BRANCH_NAME="$(git symbolic-ref HEAD 2>/dev/null)" ||
      BRANCH_NAME="detached"
      BRANCH_NAME=${BRANCH_NAME##refs/heads/}

      if [ "$BRANCH_NAME" = "production" ]; then
        compass compile
        git add docroot/sites/all/themes/ilr_theme/css/ -f
        git diff --cached --exit-code > /dev/null
        if [ "$?" -eq 1 ]; then
          git commit -m 'Adding compiled css to production'
        fi
      fi

It is recommended that the CSS cache is cleared on production after deployment since the Acquia server does not clear the cache immediately.

### Production Tags

The Acquia Cloud Workflow interface makes it really easy to deploy a specific tag to production. Note that we do not push the production branch to github, but work to keep the current production branch on Acquia up-to-date. The typical deployment workflow is as follows:

    1. Work on a feature branch and submit a pull request
    2. Move the current prod db to staging if applicable.
    3. After a PR has been merged into master, it should be deployed to staging with `../bin/deploy -e test` when on the master branch.
    4. Run any update hooks and/or manual tests.
    5. When ready, checkout the production branch locally with `git checkout production`.
    6. `git pull ac production`
    7. `git merge master`
    8. `git push ac production` (this assumes you have "ac" designated as your Acquia git remote).
    9. `git tag YYYY.MM.DD`
    10. `git push ac YYYY.MM.DD`
    11. In the [Acquia Cloud interface](https://insight.acquia.com/cloud/workflow?s=899706), deploy the tag you just pushed to the production ENV.
    12. Run any necessary update hooks, feature-reverts, cache-clearing, etc.

** TODO: Create an Acquia cloud hook to trigger a db backup when a tag is pushed. **

## Pushing Content from Prod to Dev and/or Staging

To push the most recent content from prod to dev or test, the Acquia Cloud tools are sufficeint for moving the database down stream. However, those same tools do not work when pushing down files.

After moving the database down stream to Staging and/or Dev, to move the files, ssh into our server on Acquia and issue one or both of the following commands:

`rsync -rltDvPh /mnt/files/ilr.prod/sites/ilr.cornell.edu/files/ ~/test/livedev/docroot/sites/ilr.cornell.edu/files`

`rsync -rltDvPh /mnt/files/ilr.prod/sites/ilr.cornell.edu/files/ ~/dev/livedev/docroot/sites/ilr.cornell.edu/files`

