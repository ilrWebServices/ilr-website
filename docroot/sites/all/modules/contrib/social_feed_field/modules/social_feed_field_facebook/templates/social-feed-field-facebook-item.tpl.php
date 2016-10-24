<?php
/**
 * @file
 * The template file for facebook messages.
 */
?>

<?php if (!empty($photo)) : ?>
  <div class="media"><?php print $photo; ?></div>
<?php endif; ?>
<div class="text"><?php print $caption; ?></div>
<div class="user facebook">
  <?php print $username; ?>
  <?php if (!empty($to_username)) : ?>
    <span> > </span>
    <?php print $to_username; ?>
  <?php endif; ?>
  <?php print ' ' . t('via'); ?>
</div>
<div class="time"><?php print $ts; ?></div>
