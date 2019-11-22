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
  $content['field_image'][0]['#item']['alt'] = '';
?>
<div class="cu-card__content">
  <p><?php print $description; ?></p>
  <div class="cu-card__button">
    <a href="<?php print $instagram_url; ?>" class="cu-button--overlay cu-button">View </a>
  </div>
</div>
<div class="cu-card__media">
  <?php print render($content['field_image']); ?>
</div>
<?php print render($title_suffix); ?>
