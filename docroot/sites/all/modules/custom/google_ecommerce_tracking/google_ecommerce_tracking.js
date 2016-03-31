(function ($) {
  Drupal.behaviors.google_ecommerce_tracking = {
    attach: function (context, settings) {
      if (Drupal.settings.google_ecommerce_tracking) {
        $(document).ready(function() {
          $(location).attr('href', Drupal.settings.google_ecommerce_tracking.redirect_url);
        });
      }
    }
  };
}(jQuery));
