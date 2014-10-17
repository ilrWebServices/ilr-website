(function ($) {
  Drupal.behaviors.ilr_mega_menu = {
    attach: function (context, settings) {
      var easing = 'Expo.easeOut';
      var tween;
      var currentSubmenu;
      var scalePercent = .94;

      $('#block-ilr-mega-menu-ilr-mega-menu').mouseleave(function() {
        hideMegaMenu();
      });

      $('#block-ilr-mega-menu-ilr-mega-menu li.menu-item').mouseenter(function(){
        submenu = $(this).find('div.submenu');
        if (submenuIsPopulated(submenu)) {
          currentSubmenu = $(submenu).attr('id');
          revealSubmenu(submenu);
        } else {
          hideMegaMenu();
        }
      });

      function megaMenuIsActive() {
        return $('#block-ilr-mega-menu-ilr-mega-menu').hasClass('active');
      }

      function submenuIsPopulated(submenu) {
        return $(submenu).find('.block-bean').length > 0;
      }

      function revealSubmenu(submenu) {
        $(submenu).css('opacity', 1);
        if (megaMenuIsActive()) {
          hideSubmenu($('.submenu.active'));
        } else {
          resetSubmenuTween(submenu);
          $('#block-ilr-mega-menu-ilr-mega-menu').addClass('active');
          tween = TweenLite.from($(submenu), .6, { opacity: 0, top: 50, scaleX: scalePercent, scaleY: scalePercent, ease: easing });
        }
        $(submenu).addClass('active');
      }

      function resetSubmenuTween(submenu) {
        if (tween) {
          tween.kill();
          tween = null;
        }
        $('.submenu.active').removeClass('active');
        TweenLite.to($(submenu), 0, { opacity: 1, top: '-1em', scaleX: 1, scaleY: 1});
      }

      function hideMegaMenu() {
        $('#block-ilr-mega-menu-ilr-mega-menu').removeClass('active');
        submenu = $('.submenu.active');
        TweenLite.to(submenu, .2, {opacity: 0, onComplete: removeClassFromEl, onCompleteParams: [submenu, 'active'] });
      }

      function hideSubmenu(submenu) {
        if ($(submenu).attr('id') != currentSubmenu) {
          TweenLite.to($(submenu), .2, {opacity: 0, ease: easing, onComplete: removeClassFromEl, onCompleteParams: [submenu, 'active'] });
        }
      }

      function removeClassFromEl(el, className) {
        $(el).removeClass(className);
      }

      // Edit page
      if (typeof Drupal.settings.ilr_mega_menu !== 'undefined') {
        current = $('#edit-field-menu-name-und').val();
        setTopLevelMenuOptions(current);
        $('#edit-field-menu-name-und').change(function() {
          selected = $(this).val();
          setTopLevelMenuOptions(selected);
        });
      }

      function setTopLevelMenuOptions(menuName) {
        options = Drupal.settings.ilr_mega_menu.menusWithItems[menuName];
        var $el = $("#edit-field-mega-menu-item-und");
        $el.empty(); // remove old options
        $.each(options, function(key, title) {
          $el.append($("<option>"+title+"</option>")
             .attr("value", key));
        });

        if (Drupal.settings.ilr_mega_menu.currentItem.length) {
          $("#edit-field-mega-menu-item-und").val(Drupal.settings.ilr_mega_menu.currentItem);
        }
      }
    }
  };
}(jQuery));
