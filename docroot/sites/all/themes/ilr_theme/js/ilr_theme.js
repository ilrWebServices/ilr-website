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
          $links = $(".tagged-content a, .bean-content-listing-manual a, .view-course-manual-listings a");
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
        // var $content = $('#content .tagged-content');
        // $content.isotope({
        //   itemSelector: 'article',
        //   layoutMode: 'masonry',
        // });
      });
    }
  };

  Drupal.behaviors.dynamic_circles = {
    attach: function (context, settings) {
      function is_numeric(n) {
        var test = n.replace(',', '');
        return !isNaN(parseFloat(test)) && isFinite(test);
      }

      function format_blurbs() {
        $('.circle-blurb').each(function(index, element) {
          var phrase = $(element);
          var word_array, first_word, last_word, middle_part;

          // split the phrase on spaces.
          word_array = phrase.html().split(/\s+/);

          // Isolate the first word. If it's numeric, mark it.
          first_word = word_array.shift();
          if (is_numeric(first_word)) {
            first_word = '<span class="number">' + first_word + '</span>';
          }
          // first_word += '<br>';
          first_word = '<span class="first-word">' + first_word + '</span>' + '<br>';

          // Isolate the last word, if there is one, and mark it.
          if (word_array.length > 0) {
            last_word = word_array.pop();
            last_word = '<span class="last-word">' + last_word + '</span>';
          }

          // Separate any remaining words in the middle with breaks.
          if (word_array.length > 0) {
            middle_part = word_array.join('<br>') + '<br>';
          }

          phrase.html([first_word, middle_part, last_word].join(''));
        });
      }

      $(window).load(function() {

        format_blurbs();

        var fieldNames = ['.field-name-content-0', '.field-name-content-1', '.field-name-content-2', '.field-name-content-3', '.field-name-content-4', '.field-name-content-5'];
        var fieldCount = fieldNames.length;

        $('.node-slide').mouseenter(function() {
          // $(this).find('.field-name-image').animate({backgroundColor: '#2099b7'}, 500);
          // $(this).find('#animated-content').animate({backgroundColor: '#24afd1'}, 500);
          $(this).find('.field-name-image').animate({backgroundColor: '#b31b1b'}, 500);
          $(this).find('#animated-content').animate({backgroundColor: '#92210f'}, 500);

          $(this).find(fieldNames[0]).animate({opacity: 0}, 500, function() {
            $(this).find('.stage-1').html($(this).find(fieldNames[0]).html())
          });

          $(this).find('.stage-1').animate({opacity: 0}, 900, function() {
            $(this).closest('#animated-content').find('.stage-1').html($(this).closest('article').find(fieldNames[1]).html())
          });

          $(this).find('.stage-1')
          .css('visibility', 'visible')
          .animate({opacity: 1}, 900, function() {})

          .animate({opacity: 0}, 900, function() {
            $(this).closest('#animated-content').find('.stage-1').html($(this).closest('article').find(fieldNames[2]).html())
          })

          .css('visibility', 'visible')
          .animate({opacity: 1}, 900, function() {})

          .animate({opacity: 0}, 900, function() {
            $(this).closest('#animated-content').find('.stage-1').html($(this).closest('article').find(fieldNames[3]).html())
          })

          .css('visibility', 'visible')
          .animate({opacity: 1}, 900, function() {})

          .animate({opacity: 0}, 900, function() {
            $(this).closest('#animated-content').find('.stage-1').html($(this).closest('article').find(fieldNames[4]).html())
          })

          .css('visibility', 'visible')
          .animate({opacity: 1}, 900, function() {})

          .animate({opacity: 0}, 900, function() {
            $(this).closest('#animated-content').find('.stage-1').html($(this).closest('article').find(fieldNames[5]).html())
          })

          .css('visibility', 'visible')
          .animate({opacity: 1}, 900, function() {});

          //Don't use if first item and final item in array have same value
          // .animate({opacity: 0}, 900, function() {})
          // .css('visibility', 'visible');
        });

        $('.node-slide').mouseleave(function() {
          $(this).find('.stage-1').stop(true,true).animate();
          $(this).find('.stage-1').text(' ');
          // $(this).find('.field-name-image').animate({backgroundColor: '#eef6f4'}, 500);
          // $(this).find('#animated-content').animate({backgroundColor: 'white'}, 500);
          $(this).find('.field-name-image').animate({backgroundColor: '#92210f'}, 500);
          $(this).find('#animated-content').animate({backgroundColor: '#b31b1b'}, 500);
          $(this).find('.field-name-content-0').animate({opacity: 1}, 500);
        });
      });
    }
  };
}(jQuery));
