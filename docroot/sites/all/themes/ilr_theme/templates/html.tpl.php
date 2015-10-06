<!DOCTYPE html>
  <!--[if IE 8]><html class="no-js ie8" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>" <?php print $rdf_namespaces; ?>> <![endif]-->
  <!--[if (gte IE 9)|!(IE)]><!--> <html class="no-js" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>" <?php print $rdf_namespaces; ?>> <!--<![endif]-->

<head profile="<?php print $grddl_profile; ?>">
  <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">

  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <?php print $scripts; ?>

  <!--[if lt IE 9]><script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <!-- Google Tag Manager -->
  <noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-N966MM"
  height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
  <script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
  new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
  j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
  '//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
  })(window,document,'script','dataLayer','GTM-N966MM');</script>
  <!-- End Google Tag Manager -->
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
