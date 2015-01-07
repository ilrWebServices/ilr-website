<header role="banner" <?php print render($page['nav_trigger_pts']); ?>>
  <div class="container">
    <div class="logo-wrapper">
      <a class='cornell' href="http://cornell.edu"></a>
      <a class="ilr" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
        <?php print '<img src="/' . drupal_get_path('theme', 'ilr_theme') . '/images/logo.svg" alt="Cornell University | ILR School" title="Cornell University | ILR School">';?>
      </a>
    </div>
    <div class='buttons'>
      <div class="jpanel-trigger-container">
        <a href="#" class="jpanel-trigger"></a>
      </div>
      <div class="search-button">
        <a href="#"></a>
      </div>
    </div>
    <div id="search-form">
      <form action="/search" method="get" id="cu-search-form" accept-charset="UTF-8">
        <input id="search-form-query" type="text" name="s" placeholder="Search" value="" size="20" maxlength="128" class="form-text" />
      </form>
    </div>
  </div>
  <div id="header-region">
    <?php print render($page['header']); ?>
  </div>
</header>
<div id="page">
  <div class="container" <?php print render($page['nav_trigger_pts']); ?>>
    <div id="main" role="main" <?php print render($page['page_width_eq_points']); ?>>
      <?php print $messages; ?>
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
          <?php print render($page['sidebar_first']); ?>
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
</div><!-- /#page -->
<footer role="contentinfo">
  <div class="container" <?php print render($page['page_width_eq_points']); ?>>
    <?php print render($page['footer']); ?>
  </div>  <!-- /.container -->
</footer> <!-- / footer -->
