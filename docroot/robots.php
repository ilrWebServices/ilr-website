<?php
if (isset($_ENV["PLATFORM_ENVIRONMENT"]) && $_ENV['PLATFORM_ENVIRONMENT'] == 'master') {
  echo file_get_contents('./robots.txt');
  exit;
}
echo "User-agent: *\n";
echo "Disallow: /";
exit;

