<?php if ($rows): ?>
<div class="cu-grid--3col-lead cu-grid">
  <?php print $rows; ?>
</div>
<?php elseif ($empty): ?>
<div class="view-empty">
  <?php print $empty; ?>
</div>
<?php endif; ?>
