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
jQuery.extend(jQuery.expr[":"], {
  "titleContains": function(elem, i, match, array) {
    return (elem.textContent || elem.innerText || "").toLowerCase().indexOf((match[3] || "").toLowerCase()) >= 0;
  }
});

jQuery.urlParam = function(name){
    var results = new RegExp('[\?&]' + name + '=([^&#]*)').exec(window.location.href);
    if (results==null){
       return null;
    }
    else{
       return results[1] || 0;
    }
}

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
        if ($('.node-sdc-faculty').length) {
          facultyBiosReadmore();
        }
      });


      var facultyBiosReadmore = function() {
        $('.node-sdc-faculty .field-name-body').readmore({
          maxHeight: 105,
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
        if (currentMenu.length) {
          currentMenu.children('li').each(function(){
            yPos = $(this).position().top + $(this).height() + 50;
          });
        } // Position it relative to the page title
        else {
          $('#sidebar-first').css('min-height',900);
          yPos = $('#page-title').position().top - 25;
        }

        $('#block-ilr-sdc-listings-course-search').animate({
          'top' : yPos
        }, 200);
      };

      prepareSearchBoxPosition = function() {
        setTimeout(positionCourseSearchBox, 200);
      };

      filterIsEngaged = function() {
        return $('form.filter-engaged').length || $.urlParam('filter') == 1;
      };

      exactTitleMatch = function() {
        matches = [];
        searchTerm = $('span.search-term').text().toLowerCase();
        possibleMatches = $('article h2 a:titleContains("'+searchTerm+'")');
        $(possibleMatches).each(function() {
          title = $(this).text().toLowerCase();
          if (title.indexOf(searchTerm) > -1) {
            match = $(this).closest('article');
            matches.push(match);
          }
        });
        return (matches.length) ? matches : false;
      }

      /**
       * Create a js date object from the date string
       * Chrome needs some additional string manipulation to create the date correctly
       */
      classDate = function(article) {
         var dateString = $(article).find('span.date').text();
         var hyphen = dateString.indexOf('-');
         if ( hyphen > 0) {
            commaPosition = dateString.indexOf(',');
            dateString = dateString.substring(0, hyphen) + dateString.substring(commaPosition, dateString.length);
         }
        if (dateString.length) {
          return new Date(dateString);
        }
        return new Date('April 28, 2087'); // Some date in the distant future
      }

      classTitle = function(article) {
        return $(article).find('h2 a').text();
      }

      classSponsor = function(article) {
        return $(article).attr('data-sponsor');
      }

      // If the course search block is on the page, position it and add the listener
      if ($('#block-ilr-sdc-listings-course-search').length) {
        $('a.animate-menu').live("click", prepareSearchBoxPosition);
        setTimeout(positionCourseSearchBox,500); // Set a timer to position it
        // Check if advanced search is present
        if ($('#views-exposed-form-sdc-course-listing-page').length) {
          $advancedSearch = $('#views-exposed-form-sdc-course-listing-page');
          $basicSearch = $('#ilr-sdc-listings-search-form');
          if (filterIsEngaged()) {
            $basicSearch.hide();
          } else {
            $advancedSearch.hide();
          }
          // Reposition the online checkbox
          $advancedSearch.insertAfter($basicSearch);
          $('.form-item-field-online').insertAfter($('#edit-field-class-dates-value2-wrapper'));

          $advancedSearch.append('<p class="filter-link"><a class="filter" href="/professional-programs/public-offerings?filter=1">Reset filter</a></p>');
          $advancedSearch.append('<p class="keyword-link"><a class="keyword search-toggle" href="#">Return to keyword search</a></p>');
          $basicSearch.append('<p><a class="advanced search-toggle" href="#">Filter by topic, format, etc.</a></p>');
          $('.search-toggle').click(function(){
            $advancedSearch.toggle();
            $basicSearch.toggle();
            return false;
          });
          $('#views-exposed-form-sdc-course-listing-page #edit-reset').hide();
          // Check for enter key trigger since autocomplete is breaking common usage
          $( "#search-input #edit-s" ).keypress(function(event) {
            if (event.which == 13) {
             $($basicSearch).submit();
            }
          });
        }
      }

      // Check if search results page
      if ($('body').hasClass('page-professional-programs-search')) {
        var sponsors = [];
        // First, reverse the order of the unscheduled classes
        // so that sortElements retains their original search results
        $('article.node-sdc-course.unscheduled').each(function() {
          $(this).parent().prepend(this);
        });
        // Then sort all elements so that scheduled courses come first
        $('article.node-sdc-course').sortElements(function(a, b){
          return $(a).hasClass('scheduled') ? -1 : 1;
        });

        // Remove duplicates
        sponsors = $.unique(sponsors);

        // Reposition the search result details at the top
        $('.search-result-details').insertBefore($('#content article').eq(0));

        // Check for an exact title match,
        if (match = exactTitleMatch()) {
          $(match).each(function(index){
            $(this).insertAfter($('#content div.search-result-details'));
          });
        }

        $('article.node-sdc-course').each(function(index){
          $(this).attr('data-relevance', index);
          sponsors.push($(this).data('sponsor'));
        });

        // Add the sorting functionality
        $('.sort a').click(function() {
          if ($(this).hasClass('current-sort')) {
            return false;
          }
          else {
            $('a.current-sort').removeClass('current-sort');
            $(this).addClass('current-sort');
          }
          sortBy = $(this).data('sort');

          $('article.node-sdc-course').sortElements(function(a, b){
            switch(sortBy) {
              case 'date':
                return classDate(a) < classDate(b) ? -1 : 1;
              case 'title':
                return classTitle(a) < classTitle(b) ? -1 : 1;
              case 'relevance':
                return $(a).data('relevance') < $(b).data('relevance') ? -1 : 1;
              case 'program': // Start by reverse sorting by title
                return classTitle(a) < classTitle(b) ? 1 : -1;
            }
          });
          if (sortBy == 'program') {
            // Since we sorted previously by title, we now sort by program
            $('article.node-sdc-course').sortElements(function(a, b){
              return classSponsor(a) < classSponsor(b) ? -1 : 1;
            });
            sponsors.forEach( function(sponsor) {
              $('article[data-sponsor="'+sponsor+'"]').eq(0).prepend('<h2 class="program-sponsor">'+sponsor+'</h2>');
            });
          }
          else {
            $('.program-sponsor').hide('').remove();
          }
          return false;
        });

      }
    }
  };
})(jQuery);
