<?php
$env = NULL;
// The command you just typed in shell.
$command = $_SERVER['argv'];
foreach ($command as $arg){
  $test = explode('.',$arg);
  if($test[0]=="@featuretest"){
    $env = $test[1];
  }
}

if ($env) {
  $aliases[$env] = array(
    'parent' => '@parent',
    'uri' => $env.'.ilr.featuretest.org',
    'root' => '/var/aegir/projects/ilr/'.$env.'/docroot',
    'remote-host' => 'featuretest.org',
    'remote-user' => 'ubuntu',
    'path-aliases' => array (
      '%dump-dir' => '/tmp',
      '%files' => '/var/aegir/projects/ilr/'.$env.'/docroot/sites/'.$env.'.ilr.featuretest.org/files',
    ),
  );
}
