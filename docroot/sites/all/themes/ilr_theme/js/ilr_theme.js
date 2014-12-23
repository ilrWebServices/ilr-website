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
      var initialized;
      var $isAdmin;
      var $triggerClicked;
      var widthChanged = true;
      var stickyEngaged = false;
      var $stickyContainers = [];
      var $body = $('body');
      var timeout;

      /**
       * Initializes containers, submenuContenDiff, submentOffset
       * Create scroll listener
       */
      var initialize = function() {
        $(window).load(function() {
          configureContainers();
          setMenuMaxWidth();
          $isAdmin = $('body').hasClass('admin-menu');

          menuHeight = $('.menu-block-ilr-subnav > ul.menu').height();
          contentHeight = $('#content').height();
          $submenuContentDiff = contentHeight - menuHeight;
          $submenuOffset = (subsite) ? 50 : 85;

          // Event Listeners
          $('.jpanel-trigger').click(function(){
            $triggerClicked = true;
            positionSubsiteNav();
          });

          $(window).scroll(function() {
            handleStickyElements();
          });

          $currentWidth = $(window).width();
          $(window).resize(function(){
            if($(this).width() != $currentWidth){
              widthChanged = true;
              $currentWidth = $(this).width();
              positionSubsiteNav();
              clearStickyContainers();
              clearTimeout(timeout);
              timeout = setTimeout(setStickyHeaderContainers, 200);
            }
          });
          // Force a re-evaluation of the current sticky state
          stickyEngaged = false;
          handleStickyElements();
          widthChanged = true; // Set this to true to force the positioner to run on load
          positionSubsiteNav();
          initialized = true;
        });
      }

      var setMenuMaxWidth = function() {
        if (isSubsite()) {
          // Set the max-width of the menu dynamically based on the number of items
          var maxWidth = $('.menu-block-ilr-primary-menu li').text().length * 15;
          $('.menu-block-ilr-primary-menu ul').css('max-width', maxWidth);
        }
      }

      /**
       * Scroll function
       * Compare scrolltop to offset (offset changes on subsite desktop version)
       *
       */
      var handleStickyElements = function(){
        var scrollTop = $(window).scrollTop();
        $offset = getCurrentOffset();
        if ($($submenuContainer).is(":visible") && scrollTop < $submenuContentDiff) {
          updateSidebarPosition(scrollTop);
        }
        if (scrollTop > $offset && !stickyEngaged) {
          $stickyContainers.forEach(function(container) {
            container.addClass('sticky');
          });
          if (isSubsite() && !mobileNavActive()) {
            if ($headerButtons) {
              positionSearchBox();
              $headerButtons.appendTo('#header-region');
            }
          }
          stickyEngaged = true;
        } else if (scrollTop <= $offset && stickyEngaged) {
          clearStickyContainers();
          $('#sidebar-first').css('margin-top', 0);
          stickyEngaged = false;
        }
      };

      var positionSearchBox = function() {
        if (isSubsite() && !mobileNavActive()) {
          $searchForm.appendTo('#header-region');
        }
      }

      var updateSidebarPosition = function(scrollTop) {
        var difference, position;
        difference = scrollTop - $submenuOffset;
        var position = (difference > 0) ? difference : 0;
        $('#sidebar-first').css('margin-top', position);
      }

      /**
       * Positions the mobile nav
       * or the subsite main menu (based on width of title and menu)
       * Called onpageload, when trigger clicked, when width changes
       */
      var positionSubsiteNav = function() {
        if (mobileNavActive()) {
          if (!$triggerClicked) {
            return;
          }
          if ($body.hasClass('sticky')) {
            $navOffset = $('header').outerHeight()
            $navOffset += ($isAdmin) ? 29 : 0; // the admin menu is 29px tall
          } else {
            $navOffset = $('#page').offset().top;
          }
          $('#jPanelMenu-menu').css('margin-top',$navOffset);
          $triggerClicked = false;
        } else if (widthChanged) {
          $navOffset = $('.menu-block-ilr-primary-menu').offset().top;
          if ($navOffset > 150) {
            $stickyContainers.forEach(function(container) {
              container.addClass('wrapped');
            });
          } else {
            $stickyContainers.forEach(function(container) {
              container.removeClass('wrapped');
            });
          }
        }
      }

      var mobileNavActive = function() {
        return $('header').attr('data-eq-state') == 'mobile-nav';
      }

      var getCurrentOffset = function() {
        if (widthChanged) {
          if (subsite && !mobileNavActive()) {
            $offset = $('#header-region').offset().top;
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
        $searchForm = $('#search-form');
        $headerButtons = $('header .buttons');
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
  Drupal.behaviors.ilr_css_animations = {
    attach: function (context, settings) {
      $("body").removeClass("preloading");
    }
  };
  Drupal.behaviors.masonry = {
    attach: function (context, settings) {
      var $contentBottom = $('#content-bottom .tagged-content');
      $contentBottom.isotope({
        itemSelector: 'article',
        layoutMode: 'masonry',
      });
    }
  };
}(jQuery));
