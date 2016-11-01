<?php
/**
 * @file
 * The template file for instagram messages.
 */
?>

<div class="media"><?php print $photo; ?></div>
<div class="text"><?php print $caption; ?></div>
<div class="user instagram"><?php print t('!username via', array('!username' => $username)); ?></div>
<div class="time"><?php print $ts; ?></div>
