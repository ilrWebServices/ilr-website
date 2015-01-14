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
