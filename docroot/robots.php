<?php
if (isset($_ENV["AH_SITE_ENVIRONMENT"]) && $_ENV['AH_SITE_ENVIRONMENT'] == 'prod') {
  echo file_get_contents('./robots.txt');
  exit;
}
echo "User-agent: *\n";
echo "Disallow: /";
exit;

