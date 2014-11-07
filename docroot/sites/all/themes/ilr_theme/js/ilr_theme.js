(function ($) {
  Drupal.behaviors.ilr_theme = {
    attach: function (context, settings) {
      currentURL = location.href.replace('https','http');
      $('#google-translation').append('<input name="u" value="'+currentURL+'" type="hidden" />');
      $('#google-translation input').click(function(){
        $('#google-translation input[name="langpair"]').val($(this).val());
      });

    }
  };
}(jQuery));
