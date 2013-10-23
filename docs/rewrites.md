# Enabling Rewrites

Assuming that you're using a VirtualDocumentRoot, you'll need to make a couple of modifications for clean ulrs to work correctly. The following steps should fix any server configuration issues:

  1. Open the docroot/.htaccess file of your Drupal site
  2. Uncomment the `RewriteBase /` line (around 110)
  3. Since this file comes from Drupal and we don't want to commit it to the repository, tell git to ignore your local changes*  with `git update-index --skip-worktree docroot/.htaccess`
  4. Make sure you're in the docroot directory.
  5. Enable clean URLs: `drush vset clean_url 1`

* If you ever need to see a list of files that git is skipping in the worktree, you can run `git ls-files -v | grep ^[S]` 