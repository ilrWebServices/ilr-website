(function ($) {
  Drupal.behaviors.ilr_forms_public__ilr_conf_center_reservation = {
    attach: function (context, settings) {
      $(document).ready(function() {
        populate_prefered_rooms_conf_cntr_reservation();
        $('#edit-field-nyc-or-ithaca-und').change( function() {
          populate_prefered_rooms_conf_cntr_reservation();
        });

        function populate_prefered_rooms_conf_cntr_reservation() {
          // Hide all available room choices
          $('div[class*="form-item-field-conf-center-room-pref"][class*="form-type-checkbox "]')
            .hide()
            .find('.form-checkbox').prop('checked', false);
          // Show room choices that have a class containing the selected conference center as a substring
          var selected_conference_center = $('#edit-field-nyc-or-ithaca-und').find(':selected').val();  // {"ithaca"|"nyc"}
          $('div[class*=' + selected_conference_center + '][class*="field-conf-center-room-pref"]').show();
        }
      });
    }
  };
}(jQuery));
