<?php
/**
 * @file
 * Theme implementation to display an instagram post teaser.
 *
 * Available variables:
 * - see node.tpl.php
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div class="cu-card__content">
  <p><?php print $description; ?></p>
  <div class="cu-card__button">
    <a href="<?php print $instagram_url; ?>" class="cu-button--overlay cu-button">View </a>
  </div>
</div>
<div class="cu-card__media">
  <a class="cu-card__media-link" href="<?php print $instagram_url; ?>">
    <?php print render($content['field_image']); ?>
  </a>
</div>
<?php print render($title_suffix); ?>
