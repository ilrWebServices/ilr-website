<?php
/**
 * @file
 * Theme implementation to display an instagram post teaser.
 *
 * Available variables:
 * - see node.tpl.php
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<article role="article" class="<?php print $classes; ?> instagram-post node-<?php print $node->nid; ?>"<?php print $attributes; ?>>
  <a class="instagram-post__image" href="<?php print $instagram_url; ?>">
    <?php print render($content['field_image']); ?>
  </a>
  <?php print render($title_suffix); // For contextual links ?>
</article>
