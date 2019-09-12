(function ($) {
  Drupal.behaviors.labor_and_the_constitution_event = {
    attach: function (context, settings) {
      $(document).ready(function() {
        set_price();
        $('#edit-field-discount-eligible-und').change( function() {
          set_price();
        });

        function getUrlParameter(sParam) {
            var sPageURL = window.location.search.substring(1),
                sURLVariables = sPageURL.split('&'),
                sParameterName,
                i;

            for (i = 0; i < sURLVariables.length; i++) {
                sParameterName = sURLVariables[i].split('=');

                if (sParameterName[0] === sParam) {
                    return sParameterName[1] === undefined ? true : decodeURIComponent(sParameterName[1]);
                }
            }
        };

        function set_price() {
          var currentPrice, priceNote, studentPrice, studentPriceNote;

          // Set full price (or discounted price if query string contains `discount=aj2KLm`).
          if (getUrlParameter('discount') == 'aj2KLm') {
            currentPrice = 150;
            priceNote = 'Registration fee ($150 discounted rate)'
          } else {
            currentPrice = 275;
            priceNote = 'Registration fee ($275)'
          }

          studentPrice = 25;
          studentPriceNote = 'Registration fee ($25 student rate)';

          // Toggle full and discounted price
          if ( $('#edit-field-discount-eligible-und').is(':checked') ) {
            $('#field-total-cost-add-more-wrapper input').val(studentPrice);
            $('#field-total-cost-add-more-wrapper p').text(studentPriceNote);
          } else {
            $('#field-total-cost-add-more-wrapper input').val(currentPrice);
            $('#field-total-cost-add-more-wrapper p').text(priceNote);
          }
        }
      });
    }
  };
}(jQuery));
