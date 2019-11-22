<article role="article" class="<?php print $classes; ?> article--teaser clearfix"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <h2<?php print $title_attributes; ?>>
      <?php print $title; ?>
    </h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php
    print render($content);
  ?>
  <?php if (empty($remove_title_link)): ?>
    <a class="article__link" href="<?php print $node_url; ?>">Read more about <?php print $title; ?></a>
  <?php endif; ?>
</article>
