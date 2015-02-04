(function ($) {
  Drupal.behaviors.ilr_theme_google_trans = {
    attach: function (context, settings) {
      currentURL = location.href.replace('https','http');
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
          var title = $('.subsite-header').text();
          $subsiteTitlePercentageWidth = Math.round(title.length / menuText.length * 100);
          var maxWidth = menuText.length * 15;
          $('.menu-block-ilr-primary-menu ul').css('max-width', maxWidth);
          if ($subsiteTitlePercentageWidth < 20) {
            $subsiteTitlePercentageWidth = 35;
          } else {
            $('.subsite-header').css('width',$subsiteTitlePercentageWidth + '%');
          }

        }
      };

      // // Read
      // var h1 = element1.clientHeight;

      // // Write
      // requestAnimationFrame(function() {
      //   element1.style.height = (h1 * 2) + 'px';

      //   // We may want to read the new
      //   // height after it has been set
      //   var height = element1.clientHeight;
      // });
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
        return (Math.floor($currentWidth - $subsiteNavDefaultWidth) / $currentWidth * 100) > $subsiteTitlePercentageWidth;
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
        if(isSubsite()) {
          $links = $(".tagged-content a, .bean-content-listing-manual a, .view-course-manual-listings a");
          $links.each(function(){
            $href = $(this).attr('href');
            if ($href.substring(0,5) == '/news' || $href.substring(0,22) == '/professional-programs') {
              $(this).attr('href', '/' + currentSubsitePath() + $href);
            }
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
    }
  };
  Drupal.behaviors.ilr_css_animations = {
    attach: function (context, settings) {
      $(window).load(function() {
        $("body").removeClass("preloading");

        // Check if browser can handle SVG
        if(!Modernizr.svg){
          src = $('#logo img').attr('src');
          src = src.slice(0,-3) + 'png';
          $('#logo img').attr('src', src);
        }
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
        // var $content = $('#content .tagged-content');
        // $content.isotope({
        //   itemSelector: 'article',
        //   layoutMode: 'masonry',
        // });
      });
    }
  };
}(jQuery));
