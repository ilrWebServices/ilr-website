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

      positionCourseSearchBox = function() {
        yPos = 0;
        currentMenu = $('#sidebar-first ul.menu.current');
        currentMenu.children('li').each(function(){
          yPos = $(this).position().top + $(this).height() + 30;
        });

        $('#block-ilr-sdc-listings-course-search').animate({
          'top' : yPos
        }, 200);
      };

      prepareSearchBoxPosition = function() {
        setTimeout(positionCourseSearchBox, 200);
      };

      // If the course search block is on the page, position it and add the listener
      if ($('#block-ilr-sdc-listings-course-search').length) {
        $('a.animate-menu').live("click", prepareSearchBoxPosition);
        setTimeout(positionCourseSearchBox,300); // Set a timer to position it
        if ($('#views-exposed-form-sdc-course-listing-page').length) {
          $advancedSearch = $('#views-exposed-form-sdc-course-listing-page');
          $basicSearch = $('#ilr-sdc-listings-search-form');
          $advancedSearch.hide();
          $advancedSearch.insertAfter($basicSearch);
          $advancedSearch.append('<p><a class="keyword search-toggle" href="#">Return to keyword search</a></p>');
          $('.search-toggle').click(function(){
            $advancedSearch.toggle();
            $basicSearch.toggle();
            return false;
          });
        }

      }
    }
  };
})(jQuery);
