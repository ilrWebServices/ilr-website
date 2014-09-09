<div id="page-wrapper"  <?php print render($page['nav_trigger_pts']); ?>>
  <div id="bg"><div class="search-bg"></div></div>
  <div id="page">
    <div class="container">
      <header role="banner" <?php print render($page['page_width_eq_points']); ?>>

          <div class="logo-wrapper">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
              <?php print '<img src="/' . drupal_get_path('theme', 'ilr_theme') . '/images/logo.svg" alt="Cornell University | ILR School" title="Cornell University | ILR School">';?>
            </a>
          </div>
          <div id="search-button">
            <a href="#">
              <?php print '<img src="/' . drupal_get_path('theme', 'ilr_theme') . '/images/search.svg" alt="search" title="search">';?>
            </a>
          </div>
          <div class="jpanel-trigger-container"><a href="#" class="jpanel-trigger">MENU</a></div>
          <div id="search-form">
            <form action="/search" method="get" id="cu-search-form" accept-charset="UTF-8">
              <input id="search-form-query" type="text" name="s" placeholder="Search ILR . . ." value="" size="20" maxlength="128" class="form-text" />
            </form>
          </div>
          <?php if ($main_menu): ?>
          <nav role="navigation" class="main">
            <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')), 'heading' => t('Main menu'))); ?>
          </nav> <!-- / nav -->
          <?php endif; ?>
          <?php print render($page['header']); ?>
      </header> <!-- / header -->

      <?php print $messages; ?>

      <!-- highlighted location -->
      <!-- Add subsite nav region here -->

      <div id="main" role="main" <?php print render($page['page_width_eq_points']); ?>>

        <?php if ($page['highlighted']): ?>
        <div id="highlighted">
          <div class="section">
          <?php print render($page['highlighted']); ?>
          </div>
        </div><?php endif; ?>
        <div id="content" class="column">
          <?php if ($breadcrumb): ?>
          <div id="breadcrumb"><?php print $breadcrumb; ?></div>
          <?php endif; ?>
          <div class="section">
            <a id="main-content"></a>
            <?php print render($title_prefix); ?>
            <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
            <?php print render($title_suffix); ?>
            <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
            <?php print render($page['help']); ?>
            <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
            <?php print render($page['content']); ?>
            <?php print $feed_icons; ?>
          </div>
        </div> <!-- /.section, /#content -->

        <div id="sidebar-first" class="column sidebar">
          <div class="section">
            <div class="main-nav">
              <?php print render($variables['main_menu_expanded']); ?>
            </div>
        </div></div> <!-- /.section, /#sidebar-first -->

        <?php if ($page['sidebar_second']): ?>
          <div id="sidebar-second" class="column sidebar">
            <div class="section">
            <?php print render($page['sidebar_second']); ?>
            </div>
          </div> <!-- /.section, /#sidebar-second -->
        <?php endif; ?>

        <?php if ($page['content_bottom']): ?>
          <div id="content-bottom" <?php print render($page['page_width_eq_points']); ?>>
            <div class="section">
            <?php print render($page['content_bottom']); ?>
            </div>
          </div> <!-- /.section, /#content-bottom -->
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
