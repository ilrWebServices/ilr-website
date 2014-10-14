(function ($) {
  Drupal.behaviors.ilr_mega_menu = {
    attach: function (context, settings) {
      $('#block-ilr-mega-menu-ilr-mega-menu li.menu-item').mouseenter(function(){
        $('#block-ilr-mega-menu-ilr-mega-menu').addClass('active');
        submenu = $(this).find('div.submenu');
        if ($('.submenu.active').length) {
          $('.submenu.active').removeClass('active').hide();
          $(submenu).show();
        } else {
          $(submenu).slideDown();
        }
        $(submenu).addClass('active');
        $('#block-ilr-mega-menu-ilr-mega-menu').mouseleave(function() {
          $(submenu).slideUp();
          $('#block-ilr-mega-menu-ilr-mega-menu').removeClass('active');
          $(submenu).removeClass('active');
        });
      });

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
