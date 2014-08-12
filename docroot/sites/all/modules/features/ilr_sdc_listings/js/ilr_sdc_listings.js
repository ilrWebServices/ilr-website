/**
 * @file
 * Javascript functions for ilr_sdc_listings
 *
 */
(function ($) {

  /**
   * Attaches double-click behavior to toggle full path of Krumo elements.
   */
  Drupal.behaviors.ilr_sdc_listings = {
    attach: function (context, settings) {
      // Redirect month select form.
      $('[name="ilr_sdc_month_redirect"]').change(function() {
        window.location = $(this).val();
      });
    }
  };

})(jQuery);