<?php
/**
 * @file
 * basic_page.features.wysiwyg_template.inc
 */

/**
 * Implements hook_wysiwyg_template_default_templates().
 */
function basic_page_wysiwyg_template_default_templates() {
  $templates = array();
  $templates['faq'] = array(
    'title' => 'FAQ',
    'description' => 'Provides a simple FAQ starting template',
    'fid' => 0,
    'body' => '<dl class=\'faq\'>
  <dt>Is this how I add an FAQ to the page?</dt>
  <dd>It sure is! And once it\'s added, just edit my content.</dd>
  <dt>What if I want to add more than two?</dt>
  <dd>You can just copy and paste them within the wysiwyg for more.</dd>
</dl>
',
    'name' => 'faq',
  );
  return $templates;
}
