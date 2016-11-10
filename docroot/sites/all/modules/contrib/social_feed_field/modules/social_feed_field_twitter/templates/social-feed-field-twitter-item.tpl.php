<?php
/**
 * @file
 * The template file for tweets.
 */
?>

<?php if (!empty($videos)) : ?>
  <?php foreach ($videos as $video) : ?>
    <div class="media"><?php print $video; ?></div>
  <?php endforeach; ?>
<?php endif; ?>
<?php if (!empty($photos)) : ?>
  <?php foreach ($photos as $photo) : ?>
    <div class="media"><?php print $photo; ?></div>
  <?php endforeach; ?>
<?php endif; ?>
<div class="text"><?php print $text; ?></div>
<div class="user twitter"><?php print t('!username via', array('!username' => $username)); ?></div>
<div class="time"><?php print $ts; ?></div>
