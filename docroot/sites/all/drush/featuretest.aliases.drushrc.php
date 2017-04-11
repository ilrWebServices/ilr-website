<?php
$env = NULL;
// The command you just typed in shell.
$command = $_SERVER['argv'];
foreach ($command as $arg){
  $test = explode('.',$arg);
  if($test[0]=="@featuretest"){
    $env = $test[1];
    $folder = str_replace("-", "_", $env);
  }
}

if ($env) {
  $aliases[$env] = array(
    'parent' => '@parent',
    'uri' => $env.'.ilr.featuretest.org',
    'root' => '/var/aegir/projects/ilr/'.$folder.'/docroot',
    'remote-host' => 'featuretest.org',
    'remote-user' => 'aegir',
    'path-aliases' => array (
      '%dump-dir' => '/tmp',
      '%files' => '/var/aegir/projects/ilr/'.$folder.'/docroot/sites/'.$env.'.ilr.featuretest.org/files',
    ),
  );
}
