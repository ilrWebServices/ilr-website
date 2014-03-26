<?php

// ILR site, dev env
// Access with @ilr.ilr.dev
$aliases['ilr.dev'] = array(
  'parent' => '@parent',
  'site' => 'ilr',
  'env' => 'dev',
  'uri' => 'http://drupal-dev.ilr.cornell.edu',
  'root' => '/var/www/html/ilr.dev/docroot',
  'remote-host' => 'srv-2136.devcloud.hosting.acquia.com',
  'remote-user' => 'ilr',
  'path-aliases' => array (
    '%dump-dir' => '/mnt/files/ilrdev/import',
    '%files' => '/var/www/html/ilr.dev/docroot/sites/drupal-dev.ilr.cornell.edu/files',
  ),
);

// ILR site, test env
// Access with @ilr.ilr.test
$aliases['ilr.test'] = array(
  'parent' => '@parent',
  'site' => 'ilr',
  'env' => 'test',
  'uri' => 'http://stage.ilr.cornell.edu',
  'root' => '/var/www/html/ilr.test/docroot',
  'remote-host' => 'srv-2136.devcloud.hosting.acquia.com',
  'remote-user' => 'ilr',
  'path-aliases' => array (
    '%dump-dir' => '/mnt/files/ilrtest/import',
    '%files' => '/var/www/html/ilr.test/docroot/sites/stage.ilr.cornell.edu/files',
  ),
);

// Local
$aliases['ilr.local'] = array(
  'parent' => '@parent',
  'site' => 'ilr',
  'env' => 'local',
  'uri' => 'http://www.ilr-website.dev',
  'root' => '/Users/aaron/Vagrant/ilr-website/docroot',
  'path-aliases' => array(
    '%dump-dir' => '/tmp',
    '%files' => 'sites/default/files',
  ),
);
