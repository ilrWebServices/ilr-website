<?php
/**
 * @file
 * Theme implementation to display the views instagram block.
 *
 * Available variables:
 * - See block.tpl.php
 *
 * @see template_preprocess()
 * @see template_preprocess_block()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div class="<?php print $classes; ?> <?php print $block_html_id; ?>"<?php print $attributes; ?>>
  <?php print $content ?>

  <a class="instagram-post__button button button--framed" href="https://www.instagram.com/cornellilr" title="ILRstagram"><?php print t('ILR on Instagram') ?></a>

  <?php print render($title_suffix); ?>
</div>
