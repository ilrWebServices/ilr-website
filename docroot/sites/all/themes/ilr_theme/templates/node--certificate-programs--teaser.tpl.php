<?php
/**
 * @file
 * Theme implementation to display a certificate program teaser.
 *
 * Available variables:
 * - see node.tpl.php
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<a href="<?php print $node_url; ?>">
  <article role="article" id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> certificate-program"<?php print $attributes; ?>>
    <div class="certificate-program__image">
      <?php print render($content['field_image']); ?>
    </div>
    <div class="certificate-program__content">
      <h2<?php print $title_attributes; ?>>
        <?php print $title; ?>
      </h2>
      <?php
        print render($content);
      ?>
    </div>
  </article>
</a>
