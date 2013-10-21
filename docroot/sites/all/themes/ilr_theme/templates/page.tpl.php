<div id="page-wrapper">
  <div id="page">
    <div class="container">
      <header role="banner">

          <?php if ($logo): ?>
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
              <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
            </a>
          <?php endif; ?>

          <?php print render($page['header']); ?>

      </header> <!-- / header -->

      <?php /* TODO: Consider replacing this with a fully expanded suckerfish menu */ ?>
      <?php if ($main_menu): ?>
        <nav role="navigation" class="main">
          <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')), 'heading' => t('Main menu'))); ?>
        </nav> <!-- / nav -->
      <?php endif; ?>

      <?php if ($is_front): ?>
        <div id="banner" class="clearfix">
          <div class="img"><img src="<?php print base_path() . drupal_get_path('theme', 'ilr_theme') . '/images/banner-about.jpg'; ?>"/></div>
        </div> <!-- / banner -->
      <?php endif; ?>

      <?php print $messages; ?>

      <div id="main" class="clearfix" role="main">

        <?php if ($breadcrumb): ?>
          <div id="breadcrumb"><?php print $breadcrumb; ?></div>
        <?php endif; ?>

        <div id="content" class="column"><div class="section">
          <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
          <a id="main-content"></a>
          <?php print render($title_prefix); ?>
          <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
          <?php print render($title_suffix); ?>
          <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
          <?php print render($page['help']); ?>
          <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
          <?php print render($page['content']); ?>
          <?php print $feed_icons; ?>
        </div></div> <!-- /.section, /#content -->

        <?php if ($page['sidebar_first']): ?>
          <div id="sidebar-first" class="column sidebar"><div class="section">
            <?php print render($page['sidebar_first']); ?>
          </div></div> <!-- /.section, /#sidebar-first -->
        <?php endif; ?>

        <?php if ($page['sidebar_second']): ?>
          <div id="sidebar-second" class="column sidebar"><div class="section">
            <?php //include 'temp-sidebar.php'; ?>
            <?php print render($page['sidebar_second']); ?>
          </div></div> <!-- /.section, /#sidebar-second -->
        <?php endif; ?>

      </div> <!-- /#main -->
    </div><!-- /.container -->
    <footer role="contentinfo">
      <div class="section">
        <?php if ($secondary_menu): ?>
          <nav role="navigation" class="secondary">
            <?php print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary-menu', 'class' => array('links', 'inline', 'clearfix')), 'heading' => t('Secondary menu'))); ?>
          </nav> <!-- / nav -->
        <?php endif; ?>
        <?php print render($page['footer']); ?>
      </div>  <!-- /.section -->
    </footer> <!-- / footer -->
  </div><!-- /#page -->
</div> <!-- /#page-wrapper -->
