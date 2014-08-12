<article role="article" id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>>
      <?php if (empty($remove_title_link)): ?>
        <a href="<?php print $node_url; ?>">
      <?php endif; ?>
      <?php print $title; ?>
      <?php if (empty($remove_title_link)): ?>
        </a>
      <?php endif; ?>
    </h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
  ?>

  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

</article>
