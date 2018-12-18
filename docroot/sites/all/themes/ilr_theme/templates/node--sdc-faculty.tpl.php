<?php
/**
 * @file
 * Theme implementation to display an sdc faculty node.
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
<article role="article" id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> class-faculty"<?php print $attributes; ?>>
  <div class="class-faculty__image">
    <?php print render($content['field_thumbnail']); ?>
  </div>
  <div class="class-faculty__content">
    <h2<?php print $title_attributes; ?>>
      <?php print $title; ?>
    </h2>
    <?php
      print render($content);
    ?>
  </div>
  <?php print render($title_suffix); // For contextual links?>
</article>
