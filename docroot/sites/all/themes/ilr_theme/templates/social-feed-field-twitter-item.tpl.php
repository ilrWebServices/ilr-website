<?php
/**
 * @file
 * The template file for tweets.
 */
?>

<article class="social-feed" role="article">
  <div class="field-name-group">
    <div class="field-name-icon">
      <ul class="social">
        <li><a class="follow-twitter" href="https://twitter.com/<?php print $tweet->user_screenname; ?>" title="Twitter"><span>twitter</span></a></li>
      </ul>
    </div>
    <div class="field-name-twitter-handle"><a href="https://twitter.com/<?php print $tweet->user_screenname; ?>">@<?php print $tweet->user_screenname; ?></a></div>
    <div class="field-name-tweet">
      <?php print $text; ?>
    </div>
  </div>
</article>
