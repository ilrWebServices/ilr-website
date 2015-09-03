/**
 * jQuery.fn.sortElements
 * --------------
 * @param Function comparator:
 *   Exactly the same behaviour as [1,2,3].sort(comparator)
 *
 * @param Function getSortable
 *   A function that should return the element that is
 *   to be sorted. The comparator will run on the
 *   current collection, but you may want the actual
 *   resulting sort to occur on a parent or another
 *   associated element.
 *
 *   E.g. $('td').sortElements(comparator, function(){
 *      return this.parentNode;
 *   })
 *
 *   The <td>'s parent (<tr>) will be sorted instead
 *   of the <td> itself.
 *
 * Credit: http://james.padolsey.com/javascript/sorting-elements-with-jquery/
 *
 */
jQuery.fn.sortElements = (function(){

    var sort = [].sort;

    return function(comparator, getSortable) {

        getSortable = getSortable || function(){return this;};

        var placements = this.map(function(){

            var sortElement = getSortable.call(this),
                parentNode = sortElement.parentNode,

                // Since the element itself will change position, we have
                // to have some way of storing its original position in
                // the DOM. The easiest way is to have a 'flag' node:
                nextSibling = parentNode.insertBefore(
                    document.createTextNode(''),
                    sortElement.nextSibling
                );

            return function() {

                if (parentNode === this) {
                    throw new Error(
                        "You can't sort elements if any one is a descendant of another."
                    );
                }

                // Insert before flag:
                parentNode.insertBefore(this, nextSibling);
                // Remove flag:
                parentNode.removeChild(nextSibling);

            };

        });

        return sort.call(this, comparator).each(function(i){
            placements[i].call(getSortable.call(this));
        });

    };

})();


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

      /**
       * Start with the css top position of the box for default
       * check the current menu, and refine the position based on its height
       */
      positionCourseSearchBox = function() {
        yPos = $('#block-ilr-sdc-listings-course-search').css('top');
        currentMenu = $('#sidebar-first ul.menu.current');
        currentMenu.children('li').each(function(){
          yPos = $(this).position().top + $(this).height() + 50;
        });

        $('#block-ilr-sdc-listings-course-search').animate({
          'top' : yPos
        }, 200);
      };

      prepareSearchBoxPosition = function() {
        setTimeout(positionCourseSearchBox, 200);
      };

      filterIsEngaged = function() {
        return $('form.filter-engaged').length;
      };

      // If the course search block is on the page, position it and add the listener
      if ($('#block-ilr-sdc-listings-course-search').length) {
        $('a.animate-menu').live("click", prepareSearchBoxPosition);
        setTimeout(positionCourseSearchBox,300); // Set a timer to position it
        if ($('#views-exposed-form-sdc-course-listing-page').length) {
          $advancedSearch = $('#views-exposed-form-sdc-course-listing-page');
          $basicSearch = $('#ilr-sdc-listings-search-form');
          if (filterIsEngaged()) {
            $basicSearch.hide();
          } else {
            $advancedSearch.hide();
          }
          $advancedSearch.insertAfter($basicSearch);
          $advancedSearch.append('<p><a class="keyword search-toggle" href="#">Return to keyword search</a></p>');
          $basicSearch.append('<p><a class="advanced search-toggle" href="#">Filter by topic, format, etc.</a></p>');
          $('.search-toggle').click(function(){
            $advancedSearch.toggle();
            $basicSearch.toggle();
            return false;
          });
        }
      }

      $('article.node-sdc-course').sortElements(function(a, b){
        return $(a).hasClass('scheduled') ? -1 : 1;
      });
    }
  };
})(jQuery);
