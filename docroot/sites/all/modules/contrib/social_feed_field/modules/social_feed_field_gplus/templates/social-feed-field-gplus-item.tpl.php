<?php
/**
 * @file
 * The template file for gplus messages.
 */
?>

<?php if (!empty($photo)) : ?>
  <div class="media"><?php print $photo; ?></div>
<?php endif; ?>
<div class="text"><?php print $caption; ?></div>
<div class="user gplus"><?php print t('!username via', array('!username' => $username)); ?></div>
<div class="time"><?php print $ts; ?></div>
