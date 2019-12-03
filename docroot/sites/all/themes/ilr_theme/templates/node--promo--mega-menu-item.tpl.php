<div  class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
      <?php if (empty($remove_title_link)): ?>
        <a href="<?php print $node_url; ?>" class="mega-menu-sublinks">
      <?php endif; ?>
      <?php print $title; ?>
      <?php if (empty($remove_title_link)): ?>
        </a>
      <?php endif; ?>
  <?php endif; ?>

</div>
