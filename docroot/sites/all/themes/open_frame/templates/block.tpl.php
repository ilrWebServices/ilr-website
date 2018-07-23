<?php

/**
 * @file
 * Custom theme implementation to display a block.
 * Removes the content div from blocks
 * Based on modules/block.tpl.php
 */
?>
<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
<?php if ($block->subject): ?>
  <h2<?php print $title_attributes; ?>><?php print $block->subject ?></h2>
<?php endif;?>
  <?php print render($title_suffix); ?>
  <?php print $content ?>
</div>
