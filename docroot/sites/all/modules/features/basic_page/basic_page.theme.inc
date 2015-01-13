<?php
/**
 * @file
 * Theme callbacks for the basic_page module.
 */

/**
 * Copy of theme_file_link() for linking to the file download URL.
 *
 * Provides mime type and size in link text.
 *
 * @see theme_file_entity_download_link()
 */
function theme_basic_page_file_entity_download_link($variables) {
  $file = $variables['file'];

  $url = file_create_url($file->uri);

  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples
  $options = array(
    'attributes' => array(
      'type' => $file->filemime . '; length=' . $file->filesize,
    ),
  );

  // Use the description as the link text if available.
  if (empty($file->description)) {
    $link_text = $file->filename;
  }
  else {
    $link_text = $file->description;
    $options['attributes']['title'] = check_plain($file->filename);
  }
  list($mime, $ext) = explode('/', file_get_mimetype($file->uri));
  $ext = drupal_strtoupper($ext);
  if (!$variables['wysiwyg']) {
    $link_text  .= ' '  . "<span class=\"file-info\">($ext, " . ilr_format_file_size($file->filesize) . ')</span>';
    $options['html'] = TRUE;
  }

  return '<span class="file">' . l($link_text, $url, $options) . '</span>';
}