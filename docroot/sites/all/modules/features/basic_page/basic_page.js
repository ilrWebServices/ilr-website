(function ($) {
  Drupal.behaviors.basic_page = {
    attach: function (context, settings) {
      // deprecated faq template. Retained in case old code is still in use on site
      $('.faq dd').hide();
      $('.faq dt').click(function(){
        $(this).next('dd').toggle('linear');
      });

      	//new faq template.
		$('.faq-list .faq-a').hide();
		$('.faq-list .faq-q').click(function(){
		  $(this).next('.faq-a').toggle('linear');
		});
    }
  };
}(jQuery));
