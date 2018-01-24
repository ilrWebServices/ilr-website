(function ($) {
  Drupal.behaviors.ilr_forms_public__ilr_conf_center_reservation = {
    attach: function (context, settings) {
      $(document).ready(function() {
        // Display only those room choices relevant to the currently selected conference center
        populate_prefered_rooms_conf_cntr_reservation();
        $('#edit-field-nyc-or-ithaca-und').change( function() {
          populate_prefered_rooms_conf_cntr_reservation();
        });

        function populate_prefered_rooms_conf_cntr_reservation() {
          // Hide and uncheck all rooms
          $('div[class*="form-item-field-conf-center-room-pref"][class*="form-type-checkbox "]')
            .hide()
            .find('.form-checkbox').prop('checked', false);
          // Show only those rooms whose class contains as a substring the currently selected conference center
          var selected_conference_center = $('#edit-field-nyc-or-ithaca-und').find(':selected').val();  // {"ithaca"|"nyc"}
          $('div[class*=' + selected_conference_center + '][class*="field-conf-center-room-pref"]').show();
        }
      });
    }
  };
}(jQuery));
