(function ($) {
  Drupal.behaviors.basic_page = {
    attach: function (context, settings) {
      $('.faq dd').hide();
      $('.faq dt').click(function(){
        $(this).next('dd').toggle('linear');
      });
    }
  };
}(jQuery));
