(function ($) {
  Drupal.behaviors.ilr_forms__accessible_form_controls = {
    attach: function (context, settings) {
      $(document).ready(function() {
        // Group radios and checkboxes for accessibility
        $('.form-radios, .form-checkboxes').each( function() {
          var field_id = $(this).attr('id');
          var label_text = $('label[for=' + field_id + ']').text();
          $('div#' + field_id)
            .wrap('<div role="group" aria-labelledby="' + field_id + '-aira-label"></div>')
            .prepend('<span id="' + field_id + '-aira-label" class="sr-only">' + label_text + '</span>');
        });
      });
    }
  };
}(jQuery));



