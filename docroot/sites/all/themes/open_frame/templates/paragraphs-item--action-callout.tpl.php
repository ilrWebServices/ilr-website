<?php
/**
 * @file
 * Theme implementation for action callouts.
 *
 * @see ilr_paragraphs_preprocess_entity().
 */
?>
<div class="action-callout">
  <div class="action-callout__background">
    <div class="action-callout__overlay" style="background-color: <?php echo $overlay;?>"></div>
    <div class="action-callout__image" style="background-image: url(<?php echo $background_image; ?>)"></div>
  </div>
  <div class="action-callout__content">
    <h3 class="action-callout__tagline"><?php echo $tagline;?></h3>
    <a class="action-callout__button" href="<?php echo $href; ?>"><?php echo $cta; ?></a>
  </div>
</div>
