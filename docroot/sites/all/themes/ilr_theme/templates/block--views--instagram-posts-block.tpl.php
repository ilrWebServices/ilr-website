<?php
/**
 * @file
 * Theme implementation to display the views instagram block.
 *
 * Available variables:
 * - See block.tpl.php
 *
 * @see template_preprocess()
 * @see template_preprocess_block()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div class="<?php print $classes; ?> <?php print $block_html_id; ?>" <?php print $attributes; ?>>
  <div class="cu-section-heading--framed cu-section-heading">
    <h2 class="cu-section-heading__heading">Campus Life</h2>
    <h3 class="cu-section-heading__subheading">A view of student life at Cornell University's ILR School in Ithaca, NY.</h3>
    <a href="https://www.instagram.com/cornellilr/" class="cu-section-heading__link">
      <div class="cu-icon--inline cu-icon cu-icon--instagram">
        <svg class="cu-icon__image cu-icon__image" width="2em" viewBox="0 0 100 100" xmlns="http://www.w3.org/2000/svg">
          <title>Instagram Icon</title>
          <use href="/sites/all/themes/ilr_theme/images/icons.svg#instagram" />
        </svg>
        <div class="cu-icon__label">@cornellilr</div>
      </div>
    </a>
  </div>
  <?php print $content ?>
  <?php print render($title_suffix); ?>
</div>
