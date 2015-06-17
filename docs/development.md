# Development

This repository contains the entire Drupal install (in 'docroot'), along with tests and other related files. Accordingly, if you want to run Drush commands, you should be in the `docroot/` folder below.

Contributed modules are stored in the sites/all/modules/contrib/ directory, purely custom modules live in sites/modules/custom/, and [Features](http://drupal.org/project/features)-based modules (some of which contain extensive custom code) are stored in sites/all/modules/features/.

## System Requirements

See the [Installation doc](/docs/installation.md) for further info about getting your local dev environment setup.

## Development Process

Before beginning work on a new feature, please observe the following procedures:

    1. `git checkout master` to make sure you are on the master branch
    2. `git pull origin master` to confirm that your master branch is up to date
    3. `git checkout -b [branch_name]` to create and checkout a new branch
    4. All features live in sites/all/modules/features.

### Updating Existing Features (using the Features module)

    1. Go to /admin/structure/features and check the status of the Feature.
    2. If “overridden” or “needs review”, check the diff tab to see if your Feature needs to be reverted (drush fr [feature_name]) or updated (drush fu [feature_name]).
    3. Once the Feature state is “Default”, proceed to make your updates through the admin interface.
    4. Export your updates to the Feature code with `drush fu [feature_name]`.

### Creating a New Feature

In this example, you are creating a new content type feature.

    1. Create your content type in the Drupal interface.
    2. Go to /admin/structure/features/create and add your content type and dependencies
    3. Under “Advanced Options”, set the “Path to Generate feature module” to “sites/all/modules/features”.
    4. Select the relevant dependencies for the feature (the new content type, etc.).
    5. Click “Generate feature” to create the feature module in code.
    6. Add the new module or files to your branch using `git add [path(s)]`.
    7. Commit the new module using `git commit -m '[message here]'`.

### Pull Requests

When you think your work is ready to be reviewed (and possibly merged into the master branch), push your feature branch up to origin and create a pull request. Note that these steps assume you are not collaborating on the branch with anyone else. Rebasing should only be done in branches on which others are not also working.

    1. Update your local copy of the master branch by `git checkout master`, then  `git pull`.
    2. Checkout your feature branch `git checkout [branch_name]`
    3. Rebase your branch with the master branch using `git rebase master`. (This rebases your current branch with the most up-to-date code in master.)
    4. Fix any merge conflicts by fixing them manually and committing the changes.
    5. Push your work with `git push origin [branch_name]`
    6. Create a pull request using the github interface.
    7. Update your local code with the requested changes/updates, then push to origin again and add another comment to the pull request.
    8. Repeat until the pull request is ready to be merged. The project lead is generally responsible for merging and then deleting the branch.
    9. Deploy the CSS to [featuretest](/docs/featuretest.md) if you are able to compile it, or request that a team member do it if not.
    10. Run any required updates on the feeaturetest environment.
    11. Once the feature is deployed to featuretest, the project lead will either deliver the story in Tracker, or will ask you to deliver it along with any relevant comments/instructions so that the Project Manager and/or stakeholders can test it.

## Featuretest

As noted above, as of June, 2015, pull requests get deployed to their own environment at branch-[branchname].ilr.featuretest.org. See [additional documentation](/docs/featuretest.md) if applicable.

## Choosing Contributed Modules

Some or all of the functionality of a site feature you are working on may be fulfilled with a contributed module from drupal.org.

Use the following selection criteria as guiding principles

* The module should provide a robust API (i.e. we can use it without the admin UI)
* We should not need to push the module beyond it's original intent
* The module should not try to solve too many problems
* The module should have a significant number of reported installs (>5,000), or have a compelling business reason and deeper code evaluation
* The module should have a stable release
* The module should be actively developed (bugs addressed, recent releases and commits, etc.)
