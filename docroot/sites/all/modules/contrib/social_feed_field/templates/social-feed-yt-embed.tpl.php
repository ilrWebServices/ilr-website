<?php
/**
 * @file
 * This file generates the youtube embed html.
 */
?>

<object width="<?php print $width; ?>" height="<?php print $height; ?>">
  <param name="movie" value="http://www.youtube.com/v/<?php print $id; ?>&amp;hl=en_US&amp;fs=1?rel=0"></param>
  <param name="allowFullScreen" value="true"></param>
  <param name="allowscriptaccess" value="always"></param>
  <embed
    src="http://www.youtube.com/v/<?php print $id; ?>&amp;hl=en_US&amp;fs=1?rel=0"
    type="application/x-shockwave-flash" allowscriptaccess="always"
    allowfullscreen="true" width="<?php print $width; ?>"
    height="<?php print $height; ?>"></embed>
</object>
