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

* wysiwyg
  * Fixes "Warning: file_get_contents(...) [function.file-get-contents]: failed to open stream: no suitable wrapper could be found in drupal_build_js_cache()"
  * from: https://drupal.org/node/1802394#comment-6556656
  * https://drupal.org/files/wysiwyg-1802394-4.patch

* simplesamlphp_auth
  * Fixes error when creating new users via simplesamlphp_auth
  * from: https://drupal.org/node/1824194#comment-7619281
  * https://drupal.org/files/simplesamlphp_auth-fixnewdrupalusers-1824194-6.patch

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
