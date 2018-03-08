#!/bin/bash

# This script runs in the aegir user's home directory on featuretest and
# enables simple syncing of the prod db
drush sql-sync @ilr.prod @prod.ilr.featuretest.org --sanitize --structure-tables-list=cache,cache_*,sessions -y

drush cc all

drush en featuretest -y

echo "Sync complete."
