(function ($) {
  Drupal.behaviors.ilr_mega_menu = {
    attach: function (context, settings) {
      var easing = 'Expo.easeOut';
      var tween;
      var currentSubmenu;
      var scalePercent = .94;
      var ready = true;

      $('.menu-block-ilr-primary-menu li.menu-item').hoverIntent({
        over: revealMegaMenu,
        out: hideMegaMenu,
        timeout: 100
      });

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
        $(submenu).css('opacity', 1);
        resetSubmenuTween(submenu);
        if (megaMenuIsActive()) {
          hideSubmenu($('.submenu.active'));
        } else {
          $('.menu-block-ilr-primary-menu').addClass('active');
          tween = TweenLite.from($(submenu), .6, { opacity: 0, top: 70, scaleX: scalePercent, scaleY: scalePercent, ease: easing });
        }
        $(submenu).addClass('active');
      }

      function resetSubmenuTween(submenu) {
        if (tween) {
          tween.kill();
          tween = null;
        }
        $('.submenu.active').removeClass('active');
        xPos = $('.menu-block-ilr-primary-menu').height();
        TweenLite.to($(submenu), 0, { opacity: 1, top: xPos, scaleX: 1, scaleY: 1});
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
