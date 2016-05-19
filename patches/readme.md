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

* feeds_tamper
  * Checks if import value is an array before every plugin callback instead of only once
  * https://drupal.org/node/2119745
  * https://drupal.org/files/feeds_tamper_is_array_error-2119745-1.patch

* borealis
  * Switches from window.onload to the Drupal.behaviors system
  * From https://www.drupal.org/node/2110245
  * https://www.drupal.org/files/issues/borealis.drupal_behaviors_2110245.patch

* field_formatter_label
  * The module didn't work, but a tweak to the preprocess hook fixed it, per the patch page.
  * https://www.drupal.org/node/2167309
  * https://www.drupal.org/files/issues/field_formatter_label-not_working-2167309-4.patch

* file_entity **Note** Patch was failing, so it's been modified slightly and requires manually removing file_entity.file_default_displays.inc
  * Default file entities are not exportable by features
  * https://www.drupal.org/node/2192391
  * https://www.drupal.org/files/issues/file_entity_remove_file_display-2192391-16.patch

* redirect
  * Adds global redirect functionality to redirect module
  * https://www.drupal.org/node/905914
  * https://www.drupal.org/files/issues/globalredirect-905914-171.patch

* features
  * Removes unhelpful mtime line from .info files
  * https://www.drupal.org/node/2381739
  * https://www.drupal.org/files/issues/2381739-features-mtime.patch

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
