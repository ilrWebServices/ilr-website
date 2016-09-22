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
    }
  };
}(jQuery));
