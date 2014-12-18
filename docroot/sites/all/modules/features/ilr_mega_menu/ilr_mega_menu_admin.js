(function ($) {
  Drupal.behaviors.ilr_mega_menu_admin = {
    attach: function (context, settings) {
      // Edit page
      if (typeof Drupal.settings.ilr_mega_menu_admin !== 'undefined') {
        current = $('#edit-field-menu-name-und').val();
        setTopLevelMenuOptions(current);
        $('#edit-field-menu-name-und').change(function() {
          selected = $(this).val();
          setTopLevelMenuOptions(selected);
        });
      }

      function setTopLevelMenuOptions(menuName) {
        options = Drupal.settings.ilr_mega_menu_admin.menusWithItems[menuName];
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
