<?php foreach ($items as $delta => $item): ?>
  <a class="compare-three-item__link" href="<?php print $item['#url']?>">
    <article class="<?php print $classes; ?>"<?php print $attributes; ?>>
      <?php print render($item); ?>
    </article>
  </a>
<?php endforeach; ?>
