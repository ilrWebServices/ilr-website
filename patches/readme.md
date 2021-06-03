#Patches

Patch documentation should be in the following format:

* module name
  * brief description
  * issue link (if exists)
  * patch file location

Example:

* views
  * Add CSS class to read-more link on trimmed text field
  * http://drupal.org/node/1557926
  * http://drupal.org/files/views-more_link_class-1557926.patch

## Steps to apply patches:
  1) Search the issue queue for the project to see if a patch already exists
  2) Download the patch (or create it if required), then add it to this folder
  3) Follow the instructions above to document the patch
  4) Take the patch file and move it to the directory of the module to be patched
  5) cd into that directory
  6) apply the patch, typically using `patch -p1 < [filename]
  7) Remove the patch file from the module folder
  8) Commit the patched module
  9) If you created the patch, add it to the project issue queue so that it might be included in a future release

* social_feed_field
  * The patch ensures that urls included in Twitter status messages are properly linked.
  * Fron https://www.drupal.org/node/2823870
  * https://www.drupal.org/files/issues/2823870-twitter-urls-have-no-anchors-4.patch

* borealis
  * Switches from window.onload to the Drupal.behaviors system
  * From https://www.drupal.org/node/2110245
  * https://www.drupal.org/files/issues/borealis.drupal_behaviors_2110245.patch

* field_formatter_label
  * The module didn't work, but a tweak to the preprocess hook fixed it, per the patch page.
  * https://www.drupal.org/node/2167309
  * https://www.drupal.org/files/issues/field_formatter_label-not_working-2167309-4.patch

* redirect
  * Adds global redirect functionality to redirect module
  * https://www.drupal.org/node/905914#comment-11186657
  * https://www.drupal.org/files/issues/redirect-n905914-227.patch

* bean
  * Rendered bean respects title display settings
  * https://www.drupal.org/node/1858416
  * https://www.drupal.org/files/issues/bean-1858416-28-title-display.patch

* views_beans
  * Rendered bean works after ctools security update 1.7
  * https://www.drupal.org/node/2484063
  * https://www.drupal.org/files/issues/php_undefined_function-2484063-1.patch

* media_youtube
  * Fixes issues with youtube api v3
  * https://www.drupal.org/node/2410027
  * https://www.drupal.org/files/issues/media_youtube_apiv3_v4.patch

* views_data_export
  * Fixes UTF-8 file settings when opening CSV downloads on Excel for Windows
  * https://www.drupal.org/node/1701018
  * https://www.drupal.org/files/issues/views_data_export-set_utf8_bom-1701018-13.patch

* simplesamlphp_auth
  * Fixes Undefined value: $user_allowed_default_login
  * https://www.drupal.org/node/2717473#comment-11209925
  * https://www.drupal.org/files/issues/init-logout-notice-2717473-5.patch

* conditional_fields
  * Fixes issue with resetting default values on dependent fields
  * https://www.drupal.org/node/2781493
  * Patch not pushed to D.O., as root cause and fix not yet found

* mailchimp-api-php
  * Adds support and tests for removeSegmentMember
  * https://github.com/thinkshout/mailchimp-api-php/pull/67

* entity api
  * Adds entity cloning support for fields
  * https://www.drupal.org/project/entity/issues/1513812
  * https://www.drupal.org/files/issues/1513812-entity-added-cloned-from-fixed-comments-till-67_0.patch

* menu_block
  * Allows menu to show only children of active item
  * https://www.drupal.org/project/menu_block/issues/927380#comment-9742591

* menu_block
  * Prevent `Trying to access array offset on value of type bool in menu_tree_add_active_path` PHP warnings on 404 page
  * ./menu_block-php-array-warnings.patch

* feeds
  * Enclosure support in Feeds
  * https://www.drupal.org/project/feeds/issues/952878
  * https://www.drupal.org/files/issues/feeds-952878.patch
