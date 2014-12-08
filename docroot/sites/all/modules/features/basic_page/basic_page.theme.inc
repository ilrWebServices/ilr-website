<?php
/**
 * @file
 * Theme callbacks for the basic_page module.
 */

/**
 * Copy of theme_file_entity_download_link() for linking to the file download URL.
 *
 * Provides mime type and size in link text.
 *
 * @see theme_file_entity_download_link()
 */
function theme_basic_page_file_entity_download_link($variables) {
  $file = $variables['file'];

  $uri = file_entity_download_uri($file);

  // Set options as per anchor format described at
  // http://microformats.org/wiki/file-format-examples
  $uri['options']['attributes']['type'] = $file->filemime . '; length=' . $file->filesize;

  $uri['options']['html'] = TRUE;
  list($mime, $ext) = explode('/', file_get_mimetype($file->uri));
  $ext = drupal_strtoupper($ext);
  $link_text = $variables['text'];
  // Don't put file info in link if in WYSIWYG editor(messes up Media tag).
  if (!$variables['wysiwyg']) {
    $link_text  .= ' '  . "<span class=\"file-info\">($ext, " . ilr_format_file_size($file->filesize) . ')</span>';
  }
  $output = '<span class="file"> ' . l($link_text, $uri['path'], $uri['options']);
  $output .= '</span>';

  return $output;
}