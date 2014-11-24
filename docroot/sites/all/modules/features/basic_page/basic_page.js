(function ($) {
  Drupal.behaviors.basic_page = {
    attach: function (context, settings) {
      $('.faq dd').hide();
      $('.faq dt').click(function(){
        $(this).next('dd').toggle('linear');
      });

      $('#search-button a').click(function(e){
        e.preventDefault();
        $('header').toggleClass('search-engaged');
        $('#search-form-query').focus();
        if($('#search-form-query').val() != '') {
          $('#cu-search-form').submit();
        }
      });

      $(window).scroll(function() {
          var scroll_top = $(this).scrollTop();
          if(scroll_top >= 2){
            $('body').addClass('sticky');
          } else if(scroll_top <= 1) {
            $('body').removeClass('sticky');
          }
      }).scroll();

      var nextClick = function(e) {
        e.preventDefault();
        currentMenu = $(this).prev();
        oldMenu = $(this).closest('ul.menu');
        if (menuNeedsAdditionalButtons(currentMenu)) {
          addButtonsToMenu(currentMenu);
        }
        $(currentMenu).css({
          'min-height': minHeight,
          'visibility': 'visible',
          'left'      : '100%',
        });
        TweenLite.to($(currentMenu), .6, {left:pixelShift, ease: easing });
        TweenLite.to($(oldMenu), .6, {left:"-" + pixelShift, onComplete:hideMenu, onCompleteParams:[$(oldMenu), currentMenu]});
      }

      var prevClick = function(e) {
        e.preventDefault();
        currentMenu = $(this).closest('ul.menu');
        oldMenu = $(currentMenu).parent().closest('ul.menu');
        TweenLite.to($(currentMenu), .6, {left:"100%",  ease: easing, onComplete:hideMenu, onCompleteParams:[$(currentMenu), oldMenu]});
        $(oldMenu).css({
          'visibility'  : 'visible',
          'left': '-' + pixelShift,
        });
        TweenLite.to($(oldMenu), .6, {left: 0, ease: easing});

        if (menuNeedsAdditionalButtons(oldMenu)) {
          addButtonsToMenu(oldMenu);
        }
      }

      function hideMenu(menu, other) {
        $(menu).css({
          'visibility':'hidden',
          'left': 0,
        });
        $(other).css({
          'left': 0,
        });
      }

      var currentMenu;
      var minHeight;
      var pixelShift = '75px';
      var easing = 'Expo.easeOut';

      function positionCurrentMenu() {
        currentMenu = getCurrentMenu();
        if (currentMenu.length) {
          minHeight = getMinHeight();
          $(currentMenu).parents('ul.menu').each(function() {
            parent = $(this).closest('li.expanded');
            $(this).css({
              'min-height': minHeight,
            });
          });

          if(menuNeedsAdditionalButtons(currentMenu)) {
            addButtonsToMenu(currentMenu);
          }

          if ($(currentMenu).parent().position()) {
            $(currentMenu).css({
              'min-height': minHeight,
              'visibility': 'visible',
            });
          }
        }

        addForwardButtonToMenus();
        revealMenu();
      }

      function revealMenu() {
        TweenLite.to($('.menu-block-ilr-subnav'), .6, {opacity:1, ease: easing });
      }

      function getMinHeight() {
        height = 0;
        $('#sidebar-first ul.menu').each(function() {
          if ($(this).height() > height) {
            height = $(this).height() + 50;
          }
        });
        $('#sidebar-first').css('min-height', height);
        return height;
      }

      function getCurrentMenu() {
        currentPage = getCurrentPage();
        children = $(currentPage).children('ul.menu');
        if (children.length) {
          return children;
        }
        return $(currentPage).parent();
      }

      function getCurrentPage() {
        $page = $('.menu-block-ilr-subnav a.active').closest('li');
        if(!$page.length) {
          $page = getDeepestActivePage();
        }
        return $page;
      }

      function getDeepestActivePage() {
        depth = 0;
        $('.menu-block-ilr-subnav li.active-trail').each(function() {
          parents = $(this).parents();
          if (parents.length > depth) {
            depth = parents.length;
            deepest = $(this);
          }
        });
        return deepest;
      }

      function menuNeedsAdditionalButtons(el) {
        if (!el.parent().is('li')) { // the top level menu
          return false;
        }
        if ($(el).find(':first-child').html().indexOf('prev-menu') < 0
          || $(el).find(':first-child').html().indexOf('prev-menu') > 20) {
          return true;
        }
        return false;
      }

      function addButtonsToMenu(menu) {
        var linkText = menu.parent().parent().parent().children('a:first').text();
        section = menu.parent().children('a:first');
        sectionText = $(section).text();
        sectionUrl = $(section).attr('href');
        if (linkText == '') {
          linkText = 'Main Menu';
        }
        menu.prepend('<li class="section"><a href="'+sectionUrl+'">'+sectionText+'</a></li>');
        menu.prepend('<li class="back"><a class="prev-menu" href="#"><span>&lsaquo; </span> ' + linkText + '</a></li>');
        $('.prev-menu').click(prevClick);
      }

      function addForwardButtonToMenus() {
        $('li.expanded').each(function(){
          if(menuItemNeedsArrow($(this))) {
            $(this).append('<a class="next-menu" href="#"><span>&rsaquo;</span></a>');
          }
        });
        $('.next-menu').click(nextClick);
      }

      function menuItemNeedsArrow(item) {
        return $(item).find('a.next-menu').length == 0 && menuItemHasSubmenu(item);
      }

      function menuItemHasSubmenu(item) {
        if ($(item).find('ul.menu').length > 0) {
          return true;
        }
        // In the case of hidden menu items, the menu system adds expanded
        // even though menu item output is suppressed; so we remove it
        $(item).removeClass('expanded');
        return false;
      }

      function mobileNavActive() {
        return $('header').data('eqState') == 'mobile-nav';
      }

      setTimeout(positionCurrentMenu,100);

      $(window).load(function() {
        $("body").removeClass("preloading");
      });
    }
  };
}(jQuery));
