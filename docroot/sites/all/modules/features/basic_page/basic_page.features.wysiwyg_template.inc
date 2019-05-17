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
    'weight' => 0,
    'fid' => 0,
    'body' => '<ul class="faq-list">
	<li>
		<div class="faq-q">Is this how I add an FAQ to the page?</div>

		<div class="faq-a">It sure is! And once it’s added, just edit my content.</div>
	</li>
	<li>
		<div class="faq-q">What if I want to add more than two?</div>

		<div class="faq-a">You can just copy and paste them within the wysiwyg for more.</div>
	</li>
</ul>
',
    'format' => 'full_html',
    'name' => 'faq',
    'content_types' => array(),
  );
  return $templates;
}
