(function ($) {
  Drupal.behaviors.certificate_programs = {
    attach: function (context, settings) {
      $(document).ready(function() {
        $('.node-sdc-course h2').click(function() {
          if ($(this).closest('article').find('.group-main-content.accordion').hasClass('show')) {
            $(this).closest('article').find('.group-main-content.accordion').removeClass('show');
          }
          else {
            $(this).closest('article').find('.group-main-content.accordion').addClass('show');
          }
          return false;
        });
      });

      $(window).resize(function(){
        position_call_to_action();
      });

      function position_call_to_action() {
        is_in_sidebar = function (el) {
          return el.parent().has('div#main');
        }
        sidebar_second = $('#sidebar-second');

        if ($('header').width() <= 1280 ){
          if ( is_in_sidebar(sidebar_second) ) {
            $('#highlighted').after(sidebar_second);
          }
        } else if ( is_in_sidebar(sidebar_second) ) {
          $('#sidebar-first').after(sidebar_second);
        }
      }
    }
  };
}(jQuery));
