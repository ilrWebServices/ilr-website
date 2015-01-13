# Drupal Core and Contrib Module Updates

Occasionally, both Drupal Core and various contributed modules require either security or bug-fixing updates. You can check the update status on any site deployed to the platform by visiting Reports > Available updates.

## Drupal Core

Ensure that your working directory is clean, then run the following commands. You'll be updating master, creating a new branch, updating Drupal, running tests, and then merging the updated Drupal into the master branch.

    $ git checkout master
    $ git pull
    $ cd docroot
    $ drush upc drupal
    $ rm -rf profiles/minimal/
    $ rm -rf profiles/testing/
    $ git add .
    $ git commit -m 'Updates Drupal core'

## Contributed Modules

Third-party modules also release updates from time to time. In general, they are slightly less reliable than core updates, so manual testing might also be a good idea when updating them.

### Beware of patches!

Some of the contributed modules we use have been patched to add new or fix existing functionality required for the platform. Some of these patches eventually make it into a release of the module, but some take a while or never make it.

Be sure to look in the root `patches/` folder for contributed modules that have been patched, and then check to see if the new version of a patched module includes those changes. If not, you'll need to re-apply the patch (look at the [patches readme](../patches/readme.md) or the [reference at Drupal.org](https://drupal.org/patch/apply) for help with this).

The process of updating contributed modules is similar to Drupal core. We add the `--no-backup` option to `drush upc` since we use version control and can always revert mistakes:

    $ git checkout master
    $ git pull
    $ git checkout -b ctools_update
    $ cd docroot
    $ drush upc --no-backup ctools
    $ git add .
    $ git commit -m 'Updates ctools module'

Manually test the update, fix any issues, and once everything looks good:

    $ git checkout master
    $ git merge ctools_update
    $ git push
    $ git branch -d ctools_update

## Update the Drupal Database on Deployed Sites

Remember that Drupal core and contrib module updates sometimes require database updates. Only existing sites deployed on the platform would need to do this, generally via update.php or using a drush alias with `drush @alias -l http://siteurl.org updb`.
