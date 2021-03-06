<header role="banner" <?php print render($page['nav_trigger_pts']); ?>>
  <a class="skip-link" href="#main" tabindex="1">Skip to content</a>
  <div id="search-form">
    <?php if (empty($is_pdf_host)): ?>
    <form action="/search" method="get" id="cu-search-form" accept-charset="UTF-8">
      <label class="sr-only" for="search-form-query">Search</label>
      <input id="search-form-query" type="text" name="s" placeholder="Search" value="" size="20" maxlength="128" class="form-text" tabindex="-1" />
      <button type="submit" class="searchBtn" value="">
        <span class="sr-only">Search</span>
      </button>
      <button type="button" class="closeSearch"><span class="sr-only">Close Search</span></button>

    </form>
    <?php endif; ?>
  </div>
  <div id="header-region">
    <div class="container">
    <?php if (isset($logo_override)): ?>
      <?php print $logo_override['#markup']; ?>
    <?php else: ?>
    <div class="logo-wrapper">
      <?php print $logo_link ?>
      <a class="ilr" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
         <img src="<?php echo $logo?>" alt="Cornell University | ILR School" title="Cornell University | ILR School">
      </a>
    </div>
    <?php endif; ?>
    <div class="region-header__wrapper">
      <?php print render($page['header']); ?>
    </div>
    <div class='buttons'>
       <div class="jpanel-trigger-container">
        <a class="jpanel-trigger"></a>
      </div>
      <?php if (empty($is_pdf_host)): ?>
      <div class="search-button">
        <button class="searchBtn fas fa-search"><span class="sr-only">Toggle Searchers</span></button>
      </div>
      <?php endif; ?>
    </div>
  </div>
  </div>
</header>
<div id="page">
  <div class="container" <?php print render($page['nav_trigger_pts']); ?>>
    <?php if ($page['highlighted']): ?>
    <div id="highlighted">
      <div class="section">
      <?php print render($page['highlighted']); ?>
      </div>
    </div><?php endif; ?>
    <div id="main" role="main" <?php print render($page['page_width_eq_points']); ?>>
      <div id="content" class="column">
        <?php print render($title_prefix); ?>
        <?php if (!empty($section_title)): ?><h1 class="title tile--section"><?php print $section_title; ?></h1>
        <?php elseif ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php if ($breadcrumb && empty($is_pdf_host)): ?>
        <nav id="breadcrumb" aria-label="breadcrumb"><?php print $breadcrumb; ?></nav>
        <?php endif; ?>
        <?php print $messages; ?>
        <div class="section">
          <a id="main-content"></a>
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
    </div> <!-- /#main -->
  </div><!-- /.container -->
</div><!-- /#page -->
<?php if ($page['content_bottom']): ?>
  <div id="content-bottom" <?php print render($page['page_width_eq_points']); ?>>
    <div class="section">
    <?php print render($page['content_bottom']); ?>
    </div>
  </div> <!-- /.section, /#content-bottom -->
<?php endif; ?>
<footer role="contentinfo">
  <div class="container" <?php print render($page['page_width_eq_points']); ?>>
    <?php print render($page['footer']); ?>
    <div class="copyright"><p>&copy; <?php echo date('Y')?> Cornell University | ILR School</p></div>
  </div>  <!-- /.container -->
</footer> <!-- / footer -->
