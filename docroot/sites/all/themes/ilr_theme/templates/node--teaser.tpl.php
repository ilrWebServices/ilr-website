<article role="article" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h2<?php print $title_attributes; ?>>
      <?php print $title; ?>
    </h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['links']);
    print render($content);
  ?>

  <a class="teaser__link" href="<?php $node_url; ?>">Read more about <?php print $title; ?></a>
</article>
