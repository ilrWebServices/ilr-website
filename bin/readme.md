## Executable files in this folder

  1. initializer.rb: This ruby class prodedurally initializes new projects. You provide the profile name and client name, and the script builds a new Drupal install and performs a set of initial housekeeping for project setup. It also initializes the git repo if desired.
  2. init.rb: This ruby script checks to make sure that the make file is present and then instantiates the initializer.
  3. reinstall: Makes a snapshot of the db and reinstalls the site with the ILR profile. You might want to modify this on your install and [skip the worktree](http://git-scm.com/docs/git-update-index#_skip-worktree_bit) to use your email, etc.
  4. Snapshot: A simple bash script that snapshots the current database with the branch name and a timestamp
