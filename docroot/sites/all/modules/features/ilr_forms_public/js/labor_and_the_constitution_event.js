(function ($) {
  Drupal.behaviors.labor_and_the_constitution_event = {
    attach: function (context, settings) {
      $(document).ready(function() {
        set_price();
        $('#edit-field-discount-eligible-und').change( function() {
          set_price();
        });

        function set_price() {
          var currentPrice, priceNote;
          var early_bird_deadline = new Date('8/26/2019');
          var today = new Date();

          // Set full price based on date.
          if ( (early_bird_deadline > today) ) {
            currentPrice = 275;
            priceNote = 'Registration fee ($275 until 8/26/19, $325 thereafter)'
          } else {
            currentPrice = 325;
            priceNote = 'Registration fee ($325)'
          }

          // Toggle full and discounted price
          if ( $('#edit-field-discount-eligible-und').is(':checked') ) {
            $('#field-total-cost-add-more-wrapper input').val('25');
            $('#field-total-cost-add-more-wrapper p').text('Registration fee ($25 student rate)');
          } else {
            $('#field-total-cost-add-more-wrapper input').val(currentPrice);
            $('#field-total-cost-add-more-wrapper p').text(priceNote);
          }
        }
      });
    }
  };
}(jQuery));
