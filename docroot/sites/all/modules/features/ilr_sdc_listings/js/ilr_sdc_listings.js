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
      // Form submit handler
      $('#ilr-sdc-listings-class-reg-form .button-register').click(function(e){
        e.preventDefault();
        $('#ilr-sdc-listings-class-reg-form').submit();
        return false;
      });
      $("#ilr-sdc-listings-class-reg-form .form-radio").change(function(e){
        $classId = $(this).attr('value');// Note that this is not the nid
        $('div.instructors').each(function(){
          if($(this).hasClass('class-' + $classId)) {
            $(this).show();
          } else {
            $(this).hide();
          }
        });
      });
      $('.button-request-info').click(function(){
        var url, courseTitle;
        courseTitle = $(this).find('.course-info').text();
        url = 'mailto:aaronf@cornell.edu?';
        url += 'subject=Course Request: ' + courseTitle;
        url += '&body=Hi, I\'m interested in learning more about customized delivery of this course. Thank you.';
        window.location.href = url;
        return false;
      });
    }
  };
})(jQuery);
