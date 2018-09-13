<?php $helpers = ['first', 'second', 'third']; ?>
<?php $count = 0; ?>
<div class="component component--tabs">
  <?php foreach ($tab_headings as $id => $heading): ?>
    <div class="tab__trigger tab__trigger--<?php print $helpers[$count] ?> tab__trigger--<?php print $id ?>" data-toggle="<?php print $id ?>">
      <?php print $heading; ?>
    </div>
    <div id="<?php print $id ?>" class="tab__content tab__content--<?php print $helpers[$count] ?>">
      <?php print render($tab_content[$id]) ?>
    </div>
    <?php $count++; ?>
  <?php endforeach; ?>
</div>
