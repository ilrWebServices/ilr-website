<?php

// ILR site, dev env
// Access with @ilr.ilr.dev
$aliases['ilr.dev'] = array(
  'parent' => '@parent',
  'site' => 'ilr',
  'env' => 'dev',
  'uri' => 'http://drupal-dev.ilr.cornell.edu',
  'root' => '/vol/ebs1/gfs/home/ilr/dev/livedev/docroot',
  'remote-host' => 'srv-2136.devcloud.hosting.acquia.com',
  'remote-user' => 'ilr',
  'path-aliases' => array (
    '%dump-dir' => '/mnt/files/ilrdev/import',
    '%files' => '/vol/ebs1/gfs/home/ilr/dev/livedev/docroot/sites/default/files',
  ),
);

// ILR site, test env
// Access with @ilr.ilr.test
$aliases['ilr.test'] = array(
  'parent' => '@parent',
  'site' => 'ilr',
  'env' => 'test',
  'uri' => 'http://stage.ilr.cornell.edu',
  'root' => '/vol/ebs1/gfs/home/ilr/test/livedev/docroot',
  'remote-host' => 'srv-2136.devcloud.hosting.acquia.com',
  'remote-user' => 'ilr',
  'path-aliases' => array (
    '%dump-dir' => '/mnt/files/ilrtest/import',
    '%files' => '/vol/ebs1/gfs/home/ilr/test/livedev/docroot/sites/default/files',
  ),
);

// Local
$aliases['ilr.local'] = array(
  'parent' => '@parent',
  'site' => 'ilr',
  'env' => 'local',
  'uri' => 'http://www.ilr-website.dev',
  'root' => getenv("HOME") . '/Vagrant/ilr-website/docroot',
  'path-aliases' => array(
    '%dump-dir' => '/tmp',
    '%files' => 'sites/default/files',
  ),
);

// Live
$aliases['live'] = array(
  'root' => '/var/www/html/ilr.prod/docroot',
  'ac-site' => 'ilr',
  'ac-env' => 'prod',
  'ac-realm' => 'devcloud',
  'uri' => 'ilr.devcloud.acquia-sites.com',
  'remote-host' => 'srv-2136.devcloud.hosting.acquia.com',
  'remote-user' => 'ilr.prod',
  'path-aliases' => array(
    '%drush-script' => 'drush' . $drush_major_version,
  ),
  'source-command-specific' => array(
    'sql-sync' => array(
      'create-db',
      'no-cache',
      'skip-tables-key' => array('*cache*'),
    ),
  ),
);
