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
      var $stickyContainers;
      var $searchForm;
      var $headerButtons;
      var $offset;
      var $submenuContainer;
      var $submenuContentDiff;
      var $submenuOffset;
      var subsite;

      var configureSubsiteNav = function() {
        $(window).load(function() {
          subsiteNavPositioner();
          // Set the max-width of the menu dynamically based on the number of items
          var maxWidth = $('.menu-block-ilr-primary-menu li').text().length * 15;
          $('.menu-block-ilr-primary-menu ul').css('max-width', maxWidth);

          var width = $(window).width();
          $(window).resize(function(){
            if($(this).width() != width){
              width = $(this).width();
              subsiteNavPositioner();
            }
          });
        });
      }

      var handleStickyElements = function(){
        var scrollTop = $(window).scrollTop();
        if (!$submenuContentDiff) {
          menuHeight = $('.menu-block-ilr-subnav > ul.menu').height();
          contentHeight = $('#content').height();
          $submenuContentDiff = contentHeight - menuHeight;
          $submenuOffset = (subsite) ? 50 : 85;
        }
        if ($($submenuContainer).is(":visible") && scrollTop < $submenuContentDiff) {
          $('#sidebar-first').css('margin-top', scrollTop - $submenuOffset);
        }

        if (scrollTop > $offset) {
          $stickyContainers.forEach(function(container) {
            container.addClass('sticky');
          });
          if (subsite) {
            $searchForm.appendTo('#header-region');
            $headerButtons.appendTo('#header-region');
          }
        } else {
          $stickyContainers.forEach(function(container) {
            container.removeClass('sticky');
          });
          if (subsite){
            $headerButtons.appendTo('header .container');
            $searchForm.appendTo('header .container');
          }
          $('#sidebar-first').css('margin-top', 0);
        }
      };

      var subsiteNavPositioner = function() {
        var navOffset = $('.menu-block-ilr-primary-menu').offset().top;
        if (navOffset > 150) {
          $stickyContainers.forEach(function(container) {
            container.addClass('wrapped');
          });
        } else {
          $stickyContainers.forEach(function(container) {
            container.removeClass('wrapped');
          });
        }
      }


      if ($('body').hasClass('subsite')) {
        subsite = true;
        $offset = $('#header-region').offset().top;
        $stickyContainers = [
          $('#header-region')
        ];
        configureSubsiteNav();
      } else {
        $offset = 0;
        $stickyContainers = [
          $('body'),
          $('header'),
        ];
      }
      $submenuContainer = $('#sidebar-first .menu-block-ilr-subnav');
      $stickyContainers.push($('#block-menu-block-ilr-subnav'));
      $searchForm = $('#search-form');
      $headerButtons = $('header .buttons');

      $(window).scroll(function() {
         handleStickyElements();
      });
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
