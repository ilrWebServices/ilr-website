#!/bin/bash

# This script runs in the aegir user's home directory on featuretest and
# enables simple syncing of the prod db
drush sql-sync @ilr.prod @prod.ilr.featuretest.org --sanitize --sanitize-password=SEE_FILE_ON_SERVER --structure-tables-list=cache,cache_*,sessions,entityform -y

drush cc all

drush @ilr.prod.featuretest.org en featuretest -y

# Sanitize form data
drush @ilr.prod.featuretest.org sfd -y

echo "Sync complete."
