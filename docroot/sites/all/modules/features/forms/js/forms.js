/**
 * @file
 * Javascript functions for forms
 *
 */
(function ($) {
  Drupal.behaviors.forms = {
    attach: function (context, settings) {
      $("div[id^='multiselect-widget-multiselect']").multiDatesPicker({
        beforeShowDay: $.datepicker.noWeekends,
        minDate: new Date('8/26/2015'),
        maxDate: new Date('9/25/2016'),
        // minDate: '8/26/2015',
        // maxDate: '9/25/2016',
        addDisabledDates: ['9/23/2015','12/24/2015','12/25/2015','12/31/2015','1/1/2016'],
        numberOfMonths: 2
      });
    }
  };
})(jQuery);
