(function ($) {
  Drupal.behaviors.freedompay = {
    attach: function (context, settings) {
      if ($('#edit-data-add-payment-processing').attr('checked')) {
        $('.form-item-data-hpp').show();
      }
      else {
        $('.form-item-data-hpp').hide();
      }
      $('#edit-data-add-payment-processing').change(function(){
        $('.form-item-data-hpp').toggle('medium');
      });
    }
  };
}(jQuery));
