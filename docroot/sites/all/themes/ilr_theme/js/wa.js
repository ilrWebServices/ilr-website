(function ($) {
   //Add icons to menu for dropdown on focus
  Drupal.behaviors.wa_menu = {
    attach: function (context, settings) {
      var menuItems = ".menu li.menu-item";
      var menuLinks = ".menu-view-wrapper";
      const isSubsite = $('body').hasClass('subsite');

      const addKeyboardNav = function () {
        if (isSubsite) {
          return;
        }

        // Adding expander buttons after every top level nav item
        $(menuItems).each(function (e) {
          $(this).attr("aria-expanded", "false");
          $(this).children('a').after("<button class='menuExpand' aria-expanded='false' tabindex='0' value='Expand Menu' aria-label='Expand " + $(this).children('a').text() + "'><span aria-hidden='true' class='fas fa-caret-down'></span></button>");
        });

        $('.menuExpand').on('touchstart click', function (e) {

          var submenu = $(this).next('.submenu');

          $(this).toggleClass('expanded');

          if ($(this).hasClass('expanded')) {
            $(this).attr('aria-expanded', 'true');
          }
          else {
            $(this).attr('aria-expanded', 'false');
          }

          $('.menu-block-ilr-primary-menu').addClass('active');
          $(submenu).toggleClass('active');

          if ((submenu).hasClass('active')) {
            $(submenu).css("opacity", "1");
          }
          else {
            $(submenu).css("opacity", "0");
          }
        });
      }
      // Adding expander buttons after every top level nav item
      $(menuItems).each(function(e){
        $(this).attr("aria-expanded","false");
        $(this).children('a').after("<button class='menuExpand' aria-expanded='false' tabindex='0' value='Expand Menu'><span aria-label='Expand " + $(this).children('a').text() + "' class='fas fa-caret-down'></span></button>");
      });

      $('.menuExpand').on('touchstart click', function (e){

        var submenu = $(this).next('.submenu');

        $(this).toggleClass('expanded');

        if($(this).hasClass('expanded')) {
          $(this).attr('aria-expanded','true');
        }
        else {
          $(this).attr('aria-expanded','false');
        }

        $('.menu-block-ilr-primary-menu').addClass('active');
        $(submenu).toggleClass('active');

        if((submenu).hasClass('active')) {
          $(submenu).css("opacity","1");
        }
        else {
          $(submenu).css("opacity","0");
        }
      });
>>>>>>> WA updates including mega menu and search updates

      // Able to close menu by hitting escape
      $(document).on('keydown', function(event) {

        if (event.key === "Escape") {
          // Find element that was active when escape was hit
          var active = $(document.activeElement);

          // Shift focus to the button for that element group
          active.parents().siblings('.menuExpand').focus();

          // Take off all active menu features
          $(menuItems).each(function(e){
            $(this).find('.menuExpand').attr("aria-expanded","false")
            $(this).find('.submenu').removeClass("active").css("opacity","0");;
            $('.menu-block-ilr-primary-menu').removeClass("active");
          });
        }
      });

      $('.closeSearch').click(function(){
        $('header').toggleClass('search-engaged');
      });

<<<<<<< HEAD
      window.addEventListener('DOMContentLoaded', addKeyboardNav);
=======
      // $('.searchBtn').on('click', function(){
      //   $('header').addClass('search-engaged');
      // });
>>>>>>> WA updates including mega menu and search updates
  }
}

}(jQuery));
