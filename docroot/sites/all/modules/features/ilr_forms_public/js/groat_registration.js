(function ($) {
  Drupal.behaviors.groat_registration = {
    attach: function (context, settings) {
      $(document).ready(function() {
        manage_pricing();
        set_button_text();
        $('[name*="field_alum_class_year"],#edit-field-groat-guests').change( function() {
          manage_pricing();
        });
        $('div#edit-field-groat-guests').change( function() {
          set_button_text();
        });

        function set_button_text() {
          $('div#edit-field-groat-guests [name*="remove_button"]').val('Remove this guest');
          $('[name="field_groat_guests_add_more"]').val("Add another guest");
        }

        function manage_pricing() {
          var buyer_year = $('#edit-field-alum-class-year-und').val();
          var buyer_price = get_price_for_grad_year(buyer_year);
          var total_price = buyer_price;

          var guests = jQuery('[id*="field-groat-guests-values"] tbody tr');
          var total_guests_price = 0;

          for (var i=0; i<guests.length; i++) {
            if ( guest_info_is_complete( guests[i] )) {
              guest_price = get_price_for_grad_year(
                $(guests[i]).find(('[name*="field_alum_class_year"]')).val()
              );

              total_guests_price += guest_price;

              set_price_note(
                guests[i]
                , 'div.field-name-field-alum-class-year'
                , 'Cost for this guest: $' + guest_price + '.00'
              );
            }
          }

          total_price = buyer_price + total_guests_price;
          var total_price_message = '<strong>Total cost for this reservation: $' + total_price + '.00</strong>';

          if (total_guests_price != 0) {
            total_price_message += '<br>$' + buyer_price + '.00 for purchaser + $'
              + total_guests_price + '.00 for additional guests.';
          }

          set_price_note(
            $('div.field-name-field-total-cost')
            , '#field-total-cost-add-more-wrapper'
            , total_price_message
          );

          $('#field-total-cost-add-more-wrapper input').attr('value', total_price);

        }

        // Set ticket price for a participant depending on their graduation year
        function get_price_for_grad_year(grad_year) {
          var test = Number(grad_year);
          return (test == 2019 ? 50 : (test > 2013 ? 100 : 290));
        }

        function guest_info_is_complete(guest) {
          firstname = $(guest).find(('.field-name-field-first-name input')).val();
          lastname = $(guest).find(('.field-name-field-last-name input')).val();

          return ( firstname.trim().length > 0 && lastname.trim().length > 0 );
        }

        // Add or update a message to a targeted element within a parent element
        function set_price_note(element, target, message) {
          $(element).find(target + ' div.price-note').remove();
          $(element).find(target).append('<div class="price-note"><p>' + message + '</p></div>');
        }
      });
    }
  };
}(jQuery));
