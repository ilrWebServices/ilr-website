(function ($) {
  Drupal.behaviors.ilr_theme_google_trans = {
    attach: function (context, settings) {
      currentURL = window.location.href.split('#')[0].replace('https','http');
      $('#google-translation').append('<input name="u" value="'+currentURL+'" type="hidden" />');
      $('#google-translation input').click(function(){
        $('#google-translation input[name="langpair"]').val($(this).val());
      });
    }
  };
  Drupal.behaviors.ilr_theme_collapse_list = {
    attach: function (context, settings) {
      var title_links = $('.collapse-list article h2');
      title_links.siblings().slideToggle();
      title_links.click(function(e){
        e.preventDefault();
        $(this).siblings().slideToggle(200);
      });

    }
  };
  Drupal.behaviors.ilr_theme_sticky_scroll = {
    attach: function (context, settings) {
      var $searchForm;
      var $headerButtons;
      var $offset;
      var $currentWidth;
      var $submenuContainer;
      var $stickyHeaderContainer;
      var $stickyButtonContainer;
      var $submenuContentDiff;
      var $submenuOffset;
      var subsite;
      var $subsiteNavDefaultWidth;
      var $subsiteTitlePercentageWidth;
      var initialized;
      var $isAdmin;
      var widthChanged = true;
      var stickyEngaged = false;
      var $stickyContainers = [];
      var thrashRiskFlag = false;
      var $body = $('body');
      var timeout;

      /**
       * Initializes containers, submenuContenDiff, submentOffset
       * Create scroll listener
       */
      var initialize = function() {
        $(window).load(function() {
          configureContainers();
          makeMenuWidthCalculations();
          checkForLayoutThrashing();
          $isAdmin = $('body').hasClass('admin-menu');

          menuHeight = $('.menu-block-ilr-subnav > ul.menu').height();
          contentHeight = $('#content').height();
          $submenuContentDiff = contentHeight - menuHeight;
          $submenuOffset = (subsite) ? 50 : 85;

          // Event Listeners
          $('.jpanel-trigger').click(function(){
            positionMobileNav();
          });

          if (!thrashRiskFlag) {
            $(window).scroll(function() {
              handleStickyElements();
            });
          }

          $currentWidth = $(window).width();
          $(window).resize(function(){
            if($(this).width() != $currentWidth){
              widthChanged = true;
              $currentWidth = $(this).width();
              positionSubsiteNav();
              clearTimeout(timeout);
              timeout = setTimeout(setStickyHeaderContainers, 200);
            }
          });
          // Force a re-evaluation of the current sticky state
          stickyEngaged = false;
          positionSubsiteNav();
          widthChanged = true;
          handleStickyElements();
          initialized = true;
        });
      };

      var checkForLayoutThrashing = function(){
        var requiredDifference;
        var heightDifference = $('#page').height() - $(window).height();
        requiredDifference = (isSubsite()) ? 0 : -200; //these values are based on testing; further edits may be required
        if (heightDifference < requiredDifference) {
          thrashRiskFlag = true;
        }
      };

      /**
       * Sets the max width for subsite menus (used when sticky)
       * Sets the best % width for the title
       */
      var makeMenuWidthCalculations = function() {
        if (isSubsite()) {
          var menuText = $('.menu-block-ilr-primary-menu li').text();
          var title = $('.subsite-header h2').text();
          $subsiteTitlePercentageWidth = Math.round(title.length / menuText.length * 100);
          var maxWidth = menuText.length * 15;
          $('.menu-block-ilr-primary-menu ul').css('max-width', maxWidth);
          if ($subsiteTitlePercentageWidth < 25) {
            $subsiteTitlePercentageWidth = 35;
          }
          $('.subsite-header').css('width',$subsiteTitlePercentageWidth + '%');
        }
      };

      /**
       * Scroll function
       * Compare scrolltop to offset (offset changes on subsite desktop version)
       *
       */
      var handleStickyElements = function(){
        var scrollTop = $(window).scrollTop();
        $offset = getCurrentOffset();

        if (thrashRiskFlag) {
          return;
        }
        if (scrollTop > $offset && !stickyEngaged) {
          $stickyContainers.forEach(function(container) {
            container.addClass('sticky');
          });
          if (isSubsite() && !mobileNavActive()) {
            if ($headerButtons) {
              positionSearchBox();
              $headerButtons.appendTo('.region-header');
            }
          }
          stickyEngaged = true;
        } else if (scrollTop <= $offset && stickyEngaged) {
          clearStickyContainers();
          $('#sidebar-first').css('margin-top', 0);
          stickyEngaged = false;
          setTimeout(positionSubsiteNav, 500);
        }
      };

      var positionSearchBox = function() {
        if (isSubsite() && !mobileNavActive()) {
          $searchForm.appendTo('#header-region');
        }
      }

      /**
       * Positions the mobile nav
       * or the subsite main menu (based on width of title and menu)
       * Called onpageload, when trigger clicked, when width changes
       */
      var positionSubsiteNav = function() {
        if (isSubsite()) {
          if (mobileNavActive()) {
            $('.subsite-header').removeAttr('style');
          }
          $navOffset = $('.menu-block-ilr-primary-menu').offset().top;
          if ($navOffset > 150) {
            if (!$subsiteNavDefaultWidth) {
              $subsiteNavDefaultWidth = $('.menu-block-ilr-primary-menu').width();
            }
            if(!$('.wrapped').length) {
              $stickyContainers.forEach(function(container) {
                container.addClass('wrapped');
              });
            }
            if (menuHasEnoughSpace()) {
              $('.wrapped').removeClass('wrapped');
              $('.subsite-header').removeAttr('style');
            }
          } else if ($navOffset != 0) {
            $('.wrapped').removeClass('wrapped');
          }
        }
      }

      /**
       * Dynamic calculation of how much space the menu needs in order
       * to stop the clear provided by positionSubsiteNav (.wrapped) class
       */
      var menuHasEnoughSpace = function() {
        return (Math.floor($currentWidth - $subsiteNavDefaultWidth) / $currentWidth * 100) > $subsiteTitlePercentageWidth + 15;
      }

      var positionMobileNav = function() {
        $navOffset = $('header').outerHeight();
        $navOffset += ($isAdmin) ? 29 : 0; // the admin menu is 29px tall
        $('#jPanelMenu-menu').css('margin-top',$navOffset);
      }

      var mobileNavActive = function() {
        return $('header').attr('data-eq-state') == 'mobile-nav';
      }

      var getCurrentOffset = function() {
        if (widthChanged) {
          if (subsite && !mobileNavActive()) {
            $offset = $('.menu-block-ilr-primary-menu ul.menu').offset().top;
            $offset -= ($isAdmin) ? 29 : 0; // the admin menu is 29px tall
          } else {
            $offset = 0;
          }
          widthChanged = false;
        }
        return $offset;
      }

      var isSubsite = function() {
        if (!initialized) {
          subsite = $body.hasClass('subsite');
        }
        return subsite;
      }

      var setStickyHeaderContainers = function() {
        clearStickyContainers();
        if (isSubsite()) {
          $stickyHeaderContainer = (mobileNavActive())
            ? $('header')
            : $('#header-region')
        } else {
          $stickyHeaderContainer = $('header');
        }
        $stickyContainers = [
          $('#block-menu-block-ilr-subnav'),
          $body,
          $stickyHeaderContainer,
        ];
        // Force a re-evaluation of the current sticky state
        stickyEngaged = false;
        handleStickyElements();
      }

      var clearStickyContainers = function() {
        if($stickyContainers.length) {
          $stickyContainers.forEach(function(container) {
            container.removeClass('sticky');
          });
        }
        if (isSubsite() && $headerButtons) {
          $headerButtons.appendTo('header .container');
          $searchForm.appendTo('header .container');
        }
      }

      var configureContainers = function() {
        setStickyHeaderContainers();
        $submenuContainer = $('#sidebar-first .menu-block-ilr-subnav');
        if (isSubsite()) {
          $searchForm = $('#search-form');
          $headerButtons = $('header .buttons');
        }
      };
      initialize();
    }
  };

  Drupal.behaviors.ilr_theme_search = {
    attach: function (context, settings) {
      $('.search-button a').click(function(e){
        e.preventDefault();
        $('header').toggleClass('search-engaged');
        $('#search-form-query').focus();
        if($('#search-form-query').val() != '') {
          $('#cu-search-form').submit();
        }
      });
    }
  };
  Drupal.behaviors.ilr_theme_subsite_wrapper = {
    attach: function (context, settings) {
      $(window).load(function() {
        // @todo Alter links on server side via hook_url_outbound_alter?
        // @todo Add client-side validation to avoid the stop at a form's "canonical" location when server validation finds errors
        if(isSubsite()) {
          $links = $(".tagged-content a, .bean-content-listing-manual a, .view-course-manual-listings a, a.course_details");
          $links.each(function(){
            $href = $(this).attr('href');
            if (typeof $href !== 'undefined' && isWrappableHref($href)) {
              $(this).attr('href', '/' + currentSubsitePath() + $href);
            }
          });
          $forms = $("#ilr-sdc-listings-class-reg-form");
          $forms.each(function(){
            $action = $(this).attr('action');
            $(this).attr('action', $action.replace('/' + currentSubsitePath(), ''));
          });
        }
      });

      var isSubsite = function() {
        return $('body').hasClass('subsite');
      }

      var currentSubsitePath = function() {
        var pathArray = window.location.pathname.split( '/' );
        return pathArray[1];
      }

      /**
       * Checks to see if the href points to a path we want
       * to wrap with the subsite URL
       */
      var isWrappableHref = function($href) {
        var wrappablePaths = ['/news','/post','/professional-programs'];
        for (var i = 0; i < wrappablePaths.length; i++) {
          if ($href.indexOf(wrappablePaths[i]) == 0) {
            return true;
          }
        }
        return false;
      }
    }
  };
  Drupal.behaviors.sls = {
    attach: function (context, settings) {
      $('.speaker,.moderator,.featured-speaker').click(function(){
        var $content = $(this).find('.modal').html();
        if ($('#main').attr('data-eq-state') != 320) {
          if ($content) {
            $.fancybox({
              'type': 'inline',
              'content': $content,
            });
          }
        }
      });
      $('.show-hide-bio').click(function(){
        if ($(this).closest('article').find('.sls-bio').hasClass('show')) {
          $(this).closest('article').find('.sls-bio').removeClass('show');
          $(this).html('View biography');
        }
        else {
          $(this).closest('article').find('.sls-bio').addClass('show');
          $(this).html('Hide biography');
        }
      });
    }
  };
  // @todo: refactor microsite interest and sports-leadership interest
  Drupal.behaviors.microsite = {
    attach: function (context, settings) {
      $('.action-callout__button').click(function() {
        // Check whether it's a link for the modal
        if ($(this).attr('href').length == 1) {
          var interest = $(this).text();
          var shortlink = $('link[rel=shortlink]').eq(0).attr('href');
          var lastslashindex = shortlink.lastIndexOf('/');
          var nid= shortlink.substring(lastslashindex  + 1);
          var $path = '/microsite-interest/'+interest+'/'+nid
          $path += '?layout=0';
          $.fancybox({
            'type': 'iframe',
            'autoDimensions' : true,
            'autoScale' : true,
            'href' : $path,
          });
          return false;
        }
      });

      if ($('body').hasClass('page-eform-microsite-interest-confirm')) {
        parent.jQuery.fancybox.close();
      }
    }
  };
  Drupal.behaviors.ilr_css_animations = {
    attach: function (context, settings) {
      $(window).load(function() {
        $("body").removeClass("preloading");

        // Check if browser can handle SVG
        // Checking for "no-flexbox" since IE9 doesn't handle svg scaling
        if($('html').hasClass('no-flexbox')){
          src = $('#logo img').attr('src');
          src = src.slice(0,-3) + 'png';
          $('#logo img').attr('src', src);
        }
      });
    }
  };
  Drupal.behaviors.microsite_nav = {
    attach: function (context, settings) {
      $('.microsite-nav a').click(function(){
        var $target = $(this.hash);
        $('html, body').stop().animate({
            'scrollTop': $target.offset().top - 175
        }, 900, 'swing', function () {
            window.location.hash = $target;
        });
      });
    }
  };
  Drupal.behaviors.masonry = {
    attach: function (context, settings) {
      $(window).load(function() {
        var $contentBottom = $('#content-bottom .tagged-content');
        $contentBottom.isotope({
          itemSelector: 'article',
          layoutMode: 'masonry',
        });

        if ($('article.node-reflection').length) {
          var $wrapper = $('#content .tagged-content');
          $wrapper.isotope({
            itemSelector: 'article',
            layoutMode: 'masonry',
          });
        }

        // var $content = $('#content .tagged-content');
        // $content.isotope({
        //   itemSelector: 'article',
        //   layoutMode: 'masonry',
        // });
      });
    }
  };

  Drupal.behaviors.change_hover_color = {
    attach: function (context, settings) {
      $(window).load(function() {
        if (typeof settings.change_hover_color !== 'undefined') {
          var $selector = settings.change_hover_color.selector;
          if ($($selector)) {
            $('#content-bottom article').each(function(){
              $(this).find('.field-name-field-image').append($(this).find('h2'));
            });
            if ($('html').hasClass('touch')) { // Note this is not 100% accurate. See https://github.com/Modernizr/Modernizr/issues/548
              $('.node-'+$selector+' h2').css('opacity',1);
            } else {
              if (($('#content-bottom').attr('data-eq-state') == 'widescreen') || ($('#content-bottom').attr('data-eq-state') == '768')) {
                var easing = 'Expo.easeOut';
                $('#content-bottom .field-name-field-image').mouseover(function() {
                  TweenLite.to($(this).closest('article').find('h2'), .6, {opacity:1, ease: easing });
                  TweenLite.to($(this).closest('article').find('.image-style-main_portrait_image'), .6, {opacity:0.05, ease: easing });
                });

                $('#content-bottom .field-name-field-image').mouseout(function() {
                  TweenLite.to($(this).closest('article').find('h2'), .6, {opacity:0, ease: easing });
                  TweenLite.to($(this).closest('article').find('.image-style-main_portrait_image'), .6, {opacity:1, ease: easing });
                });
              }
            }
          }
        }
      });
    }
  };

  Drupal.behaviors.ilr_theme_trigger_called = {
    attach: function (context, settings) {
      $('.trigger').each(function(){
        var $classes = $(this).prop('class');
        var $triggerModifier = $classes.split('trigger--')[1];
        switch ($triggerModifier) {
          case 'hide-denied':
            $('#page-title, #block-system-main').hide();
            $('.messages').appendTo($('.region-content'));
            break;
          default:
            break;
        }
      });
    }
  };

}(jQuery));
