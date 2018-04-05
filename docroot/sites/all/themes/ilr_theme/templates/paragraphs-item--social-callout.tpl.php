<?php
/**
 * @file
 * Theme implementation for social callouts.
 *
 * @see ilr_paragraphs_preprocess_entity().
 */
?>
<div class="social-callout" style="background-color:#<?php echo $bg_color; ?>;">
  <h3 class="social-callout__heading"><?php echo $heading; ?></h3>

  <ul class="social social-callout__links">
    <?php foreach ($channels as $name => $url): ?>
    <li class="social-callout__item"><a class="follow-<?php echo strtolower($name); ?> social-callout__link" href="<?php echo $url; ?>" title="<?php echo $name; ?>" style="color:#<?php echo $bg_color; ?>;"><span><?php echo $name; ?></span></a></li>
    <?php endforeach; ?>
  </ul>
  <p class="social-callout__hashtag"><a class="social-callout__hashtag-link" href="//twitter.com/hashtag/<?php echo $hashtag; ?>">#<?php echo $hashtag; ?></a></p>
</div>
