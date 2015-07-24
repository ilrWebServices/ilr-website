/**
 * @file
 * Javascript functions for ilr_sdc_listings
 *
 */
(function ($) {
  Drupal.behaviors.ilr_sdc_listings = {
    attach: function (context, settings) {
      // Redirect month select form.
      $('[name="ilr_sdc_month_redirect"]').change(function() {
        window.location = $(this).val();
      });

      // Radio button change handler for classes
      $("#ilr-sdc-listings-class-reg-form .form-radio").change(function(e){
        $classId = $(this).attr('value');// Note that this is not the nid
        $('.class-detail-toggle').hide();
        $('div.class-'+$classId).show();
        facultyBiosReadmore();
      });

      // Show the first class detail toggle div
      $(window).load(function(){
        $('.class-detail-toggle').first().show();
        if ($('.bio').length) {
          facultyBiosReadmore();
        }
      });


      var facultyBiosReadmore = function() {
        $('.instructor .bio').readmore({
          maxHeight: 110,
          lessLink: '<a href="#">- Read less</a>',
          moreLink: '<a href="#">+ Read more</a>',
        });
      };

      // This should open the modal
      $('.request-info').click(function(){
        var $nid = $(this).attr('data-nid');
        var $title = $(this).find('.course-title').text();
        $.fancybox({
          'type': 'iframe',
          'autoDimensions' : true,
          'autoScale' : true,
          'href' : '/course-interest/'+ $nid +'?layout=0&title=' + $title,
        });
        return false;
      });
    }
  };
})(jQuery);
