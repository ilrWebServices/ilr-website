<div class="component component--tabs">
  <div class="tabs__triggers">
    <?php foreach ($tab_headings as $id => $heading): ?>
      <div class="tab__trigger" data-toggle="<?php print $id ?>"><?php print $heading ?></div>
    <?php endforeach; ?>
  </div>
  <div class="tabs__contents">
    <?php foreach ($tab_content as $id => $content): ?>
      <div id="<?php print $id ?>" class="tab__content"><?php print render($content) ?></div>
    <?php endforeach; ?>
  </div>

</div>
