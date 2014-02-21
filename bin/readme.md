## Executable files in this folder

  1. deploy: Deploys the current branch to Acquia dev, or optionally, to test (with `bin/deploy -e test`). Requires that livedev be enabled in the appropriate remote environment, as well as being configured in sites/[uri].
  2. get-current-branch: A script that gets included in backups and deployment to keep logic DRY
  3. reinstall: Makes a snapshot of the db and reinstalls the site with the ILR profile. You might want to modify this on your install and [skip the worktree](http://git-scm.com/docs/git-update-index#_skip-worktree_bit) to use your email, etc.
  4. snapshot: A simple bash script that snapshots the current database with the branch name, optional message and a timestamp
  5. set-backup-name: A script that gets included to keep db backup logic DRY
  6. themify: A bash script (Unix only) that enables livereload and uses Guard to start watching and compiling scss files. Also starts the livereload server for theming goodness.
