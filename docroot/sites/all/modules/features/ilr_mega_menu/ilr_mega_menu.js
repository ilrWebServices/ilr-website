(function ($) {
  Drupal.behaviors.ilr_mega_menu = {
    attach: function (context, settings) {
      var easing = 'Expo.easeOut';
      var tween;
      var currentSubmenu;
      var ready = true;

      $('.menu-block-ilr-primary-menu li.menu-item').hoverIntent({
        over: revealMegaMenu,
        out: hideMegaMenu,
        timeout: 100
      });

      $('.menu-block-ilr-primary-menu .bean-mega-menu').hover(
        function(){},
        function() {
          hideMegaMenu();
        }
      );

      function revealMegaMenu() {
        if(ready) {
          submenu = $(this).find('div.submenu');
          if (submenuIsPopulated(submenu)) {
            currentSubmenu = $(submenu).attr('id');
            revealSubmenu(submenu);
          } else {
            hideMegaMenu();
          }
        }
      }

      function megaMenuIsActive() {
        return $('.menu-block-ilr-primary-menu').hasClass('active');
      }

      function submenuIsPopulated(submenu) {
        return $(submenu).find('.entity-bean').length > 0;
      }

      function revealSubmenu(submenu) {
        $(submenu).css({'opacity': 1, 'visibility': 'visible'});
        // resetSubmenuTween(submenu);
        if (megaMenuIsActive()) {
          hideSubmenu($('.submenu.active'));
        } else {
          $('.menu-block-ilr-primary-menu').addClass('active');
          tween = TweenLite.from($(submenu), .3, { opacity: 0, ease: easing });
        }
        $(submenu).addClass('active');
      }

      function hideMegaMenu() {
        ready = false;
        $('.menu-block-ilr-primary-menu').removeClass('active');
        submenu = $('.submenu.active');
        TweenLite.to(submenu, .1, {opacity: 0, onComplete: removeClassFromEl, onCompleteParams: [submenu, 'active'] });
      }

      function hideSubmenu(submenu) {
        if ($(submenu).attr('id') != currentSubmenu) {
          TweenLite.to($(submenu), .2, {opacity: 0, ease: easing, onComplete: removeClassFromEl, onCompleteParams: [submenu, 'active'] });
        }
      }

      function removeClassFromEl(el, className) {
        $(el).removeClass(className);
        ready = true;
      }
    }
  };
}(jQuery));
