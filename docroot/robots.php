<?php
if (isset($_ENV["AH_SITE_ENVIRONMENT"]) && $_ENV['AH_SITE_ENVIRONMENT'] != 'prod') {
  echo nl2br("User-agent: *\n");
  echo "Disallow: /";
  exit;
}
echo nl2br(file_get_contents('./robots.txt'));
