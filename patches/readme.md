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
  * Fixes "The version of CKEditor could not be detected." when installing ckeditor for wywsiwyg.
  * from: https://drupal.org/node/1853550#comment-6919236
  * https://drupal.org/files/wysiwyg-support_v4_ckeditor-1853550-46.patch
  
* wysiwyg
  * Fixes "Warning: file_get_contents(...) [function.file-get-contents]: failed to open stream: no suitable wrapper could be found in drupal_build_js_cache()"
  * from: https://drupal.org/node/1802394#comment-6556656
  * https://drupal.org/files/wysiwyg-1802394-4.patch   