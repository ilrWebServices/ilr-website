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
        if (menuNeedsBackButton(currentMenu)) {
          addBackButtonToMenu(currentMenu);
        }
        $(currentMenu).css({
          'min-height': minHeight,
          'visibility': 'visible',
        });
        TweenLite.to($(currentMenu), .6, {left:pixelShift, ease: easing });
        TweenLite.to($(oldMenu), .6, {left:"-=" + pixelShift, onComplete:hideMenu, onCompleteParams:[$(oldMenu)]});
      }

      var prevClick = function(e) {
        e.preventDefault();
        currentMenu = $(this).closest('ul.menu');
        oldMenu = $(currentMenu).parent().closest('ul.menu');
        TweenLite.to($(currentMenu), .6, {left:"100%",  ease: easing, onComplete:hideMenu, onCompleteParams:[$(currentMenu)]});
        $(oldMenu).css('visibility','visible');
        TweenLite.to($(oldMenu), .6, {left:pixelShift});

        if (menuNeedsBackButton(oldMenu)) {
          addBackButtonToMenu(oldMenu);
        }
      }

      function hideMenu(menu) {
        $(menu).css('visibility', 'hidden');
      }

      var currentPage;
      var currentMenu;
      var minHeight;
      var pixelShift = '0px';
      var easing = 'Expo.easeOut';

      function positionCurrentMenu() {
        currentPage = getCurrentPage();
        currentMenu = getCurrentMenu();
        minHeight = getMinHeight();
        $(currentMenu).parents('ul.menu').each(function() {
          parent = $(this).closest('li.expanded');
          $(this).css({
            'left': 0,
            'min-height': minHeight,
          });
        });

        if(menuNeedsBackButton(currentMenu)) {
          addBackButtonToMenu(currentMenu);
        }

        if ($(currentMenu).parent().position()) {
          $(currentMenu).css({
            'left': 0,
            'min-height': minHeight,
            'visibility': 'visible',
          });
        }

        addForwardButtonToMenus();
        revealMenu();
      }

      function revealMenu() {
        TweenLite.to($('#block-menu-block-ilr-subnav ul.menu'), .6, {opacity:1, ease: easing });
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

      function getCurrentPage() {
        selector = (mobileNavActive()) ? '#jPanelMenu-menu' : '#sidebar-first'; // targets the li
        return $(selector + ' a.active').parent();
      }

      function getCurrentMenu() {
        children = $(currentPage).children('ul.menu:first');
        if (children.length) {
          return $(currentPage).children('ul.menu:first');
        }
        return $(currentPage).parent(); // targets the ul
      }

      function menuNeedsBackButton(el) {
        if (!el.parent().is('li')) { // the top level menu
          return false;
        }
        if ($(el).find(':first-child').html().indexOf('prev-menu') < 0
          || $(el).find(':first-child').html().indexOf('prev-menu') > 20) {
          return true;
        }
        return false;
      }

      function addBackButtonToMenu(menu) {
        var linkText = menu.parent().children('a:first-child').text();
        if (linkText == '') {
          linkText = 'Main Menu';
        }
        menu.prepend('<li class="back"><a class="prev-menu" href="#"><span>&lsaquo; </span> ' + linkText + '</a></li>');
        $('.prev-menu').click(prevClick);
      }

      function addForwardButtonToMenus() {
        $('li.expanded').append('<a class="next-menu" href="#"><span>&rsaquo;</span></a>');
        $('.next-menu').click(nextClick);
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
