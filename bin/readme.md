## Executable files in this folder

  1. reinstall: Makes a snapshot of the db and reinstalls the site with the ILR profile. You might want to modify this on your install and [skip the worktree](http://git-scm.com/docs/git-update-index#_skip-worktree_bit) to use your email, etc.
  2. snapshot: A simple bash script that snapshots the current database with the branch name, optional message and a timestamp
  3. set-backup-name: A script that gets included to keep db backup logic DRY
  4. themify: A bash script (Unix only) that enables livereload and uses Guard to start watching and compiling scss files. Also starts the livereload server for theming goodness.
