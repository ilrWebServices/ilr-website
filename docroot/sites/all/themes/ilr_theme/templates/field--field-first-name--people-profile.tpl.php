Read more about
<?php foreach ($items as $delta => $item): ?>
  <div class="<?php print $classes; ?>"<?php print $attributes; ?>>
    <?php print render($item); ?>
  </div>
<?php endforeach; ?>
