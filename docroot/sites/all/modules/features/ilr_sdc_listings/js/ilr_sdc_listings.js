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
        $('.group-main-content .class-detail-toggle').first().show();
        $('.group-sidebar .class-detail-toggle').first().show();
        if ($('.node-sdc-faculty').length) {
          facultyBiosReadmore();
        }
        // Check to see if we need a mobile link, on pages where the sidebar is pushed down
        if (isCourseClassDetailPage() && mobileNavActive() && $('.group-sidebar').width() > 280) {
          addDatesRegistrationLink();
        }

        // If the course search block is on the page, position it and add the listeners
        if ($('#block-ilr-sdc-listings-course-search').length) {
          prepSearchFilter();
          fixSeriesClasses();
          fixSeriesCourses();
          addSorting();
        }
      });


      var facultyBiosReadmore = function() {
        $('.node-sdc-faculty .field-name-body').readmore({
          maxHeight: 75,
          lessLink: '<div class="link--readmore"><a href="#">- Less</a></div>',
          moreLink: '<div class="link--readmore"><a href="#">+ More</a></div>',
        });
      };

      // This should open the modal
      $('.button.course').click(function(){
        var $nid = $(this).attr('data-nid');
        var $title = $(this).find('.course-title').text();
        var $path = ($(this).hasClass('request-info'))
          ? '/course-interest/'
          : '/course-follow/';
        $path += $nid +'?layout=0&title=' + $title;
        $.fancybox({
          'type': 'iframe',
          'autoDimensions' : true,
          'autoScale' : true,
          'href' : $path,
        });
        return false;
      });

      addDatesRegistrationLink = function() {
        $('.group-main-content').prepend('<p><a href="#" class="dates-registration">Dates and Registration</a></p>');
        $('.dates-registration').click(function(){
          var yPos = $(".group-sidebar").offset().top - 100;
          $('html, body').animate({
            scrollTop: yPos
          }, 500);
          return false;
        });
      };

      /**
       * Checks to see whether it's the public offerings page
       * Returns false if the filter is engaged,
       * in which case we leave the filter in the sidebar
       */
      isPublicOfferingsPage = function() {
        return $('.view-sdc-course-listing').length && !filterIsEngaged();
      };

      isSearchResultsPage = function() {
        return $('body').hasClass('page-programs-professional-programs-search');
      };

      isCourseClassDetailPage = function() {
        return $('body').hasClass('node-type-sdc-class') || $('body').hasClass('node-type-sdc-course');
      };

      /**
       * See ilr_sdc_listings_form_views_exposed_form_alter
       */
      filterIsEngaged = function() {
        return $('form.filter-engaged').length;
      };

      fixSeriesCourses = function() {
        $('.node-sdc-course.series').each(function(){
          classURL = $(this).find('a.button-info').attr('href');
          $(this).find('h2 a').attr('href',classURL);
        });
      };

      /**
       * Classes should appear to be "first-class citizens" on listings pages
       * meaning that users should not be able to visually distinguish them from courses
       * To do that, we modify how the title is output, and add the css class and the sponsor
       */
      fixSeriesClasses = function() {
        if ($('.view-sdc-course-listing').length) {
          $('article.node-sdc-class').each(function(){
            title = classTitle($(this));
            sponsor = $(this).parents('article').attr('data-sponsor');
            $(this).find('.field-type-entityreference').each(function(){
              href = $(this).find('a').attr('href');
              $(this).remove();
            });
            $(this).find('.field-name-body').prepend('<h2><a href="'+href+'">'+title+'</a></h2>');
            $('.view-sdc-course-listing').append($(this));
            $(this).addClass('node-sdc-course scheduled');
            $(this).attr('data-sponsor',sponsor);
          });
        }
      };

      prepSearchFilter = function() {
        $advancedSearch = $('#views-exposed-form-sdc-course-listing-page');
        $basicSearch = $('#ilr-sdc-listings-search-form');
        // Reposition elements
        $advancedSearch.insertAfter($basicSearch);
        $('#edit-field-address-locality-wrapper').insertAfter($('#edit-field-course-sponsor-reference-tid-wrapper'));
        $('.form-item-field-online').eq(0).insertAfter($('#edit-field-class-dates-value2-wrapper'));
        $advancedSearch.prepend('<h3>Or filter by:</h3>');
        $('#views-exposed-form-sdc-course-listing-page #edit-reset').hide();
        if (filterIsEngaged()) {
          $advancedSearch.append('<p class="filter-link"><a class="filter" href="programs/professional-programs/workshops-courses-training">Reset filter</a></p>');
        }
        if (!mobileNavActive()) {
          // Check for enter key trigger since autocomplete is breaking common usage
          $( "#search-input #edit-s" ).keypress(function(event) {
            if (event.which == 13) {
             $($basicSearch).submit();
            }
          });
        }
      };

      getMatchingTitles = function() {
        matches = [];
        searchTerm = $('span.search-term').text().toLowerCase();
        possibleMatches = $('#content article h2 a:titleContains("'+searchTerm+'")');
        $(possibleMatches).each(function() {
          title = $(this).text().toLowerCase();
          if (title.indexOf(searchTerm) > -1) {
            match = $(this).closest('article');
            // Add exact matches to the beginning of the array
            if (title.indexOf('(') == searchTerm.length + 1) {
              matches.unshift(match);
              $(match).addClass('exact-match');
            } // Add partial matches to the end of the array
            else {
              matches.push(match);
              $(match).addClass('partial-match');
            }
          }
        });
        return (matches.length) ? matches : false;
      };

      /**
       * Create a js date object from the date string
       * Chrome needs some additional string manipulation to create the date correctly
       * Note that the default value sort ends up reversing the alphabetized order
       * so we have the view return them in descending order to compensate
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
        else if ($(article).find('span.online-message').text().indexOf("self-paced") >= 0) {
          return new Date('April 28, 2076'); // A future date earlier than the default
        }
        return new Date('April 28, 2087'); // Some date in the distant future
      };

      classTitle = function(article) {
        if ($(article).find('h2 a').length) {
          return $(article).find('h2 a').text();
        }
        return $(article).find('.field-type-entityreference a').text();
      };

      classSponsor = function(article) {
        return $(article).attr('data-sponsor');
      };

      addSorting = function() {
        var sponsors = [];

        // Check if search results page
        if (isSearchResultsPage()) {
          sortSearchResults();
        } // Sort by whatever is current
        else {
          sortBy = $('a.current-sort').text();
          sortSelectedElements($('article.node-sdc-course'), sortBy);
        }
        // Loop through to set initial order 'relevance' and sponsors
        $('article.node-sdc-course').each(function(index){
          $(this).attr('data-relevance', index);
          sponsor = $(this).data('sponsor');
          if ($.inArray(sponsor, sponsors) == -1) {
            sponsors.push(sponsor);
          }
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

          sortSelectedElements($('article.node-sdc-course'), sortBy);
          if (sortBy == 'program') {
            // Since we sorted previously by date, we now sort by program
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
      };

      sortSelectedElements = function(elements, sortBy) {
        console.log(sortBy);
        $(elements).sortElements(function(a, b){
          switch(sortBy) {
            case 'date':
              return classDate(a) < classDate(b) ? -1 : 1;
            case 'title':
              return classTitle(a) < classTitle(b) ? -1 : 1;
            case 'relevance':
              return $(a).data('relevance') < $(b).data('relevance') ? -1 : 1;
            case 'program': // Sort first by date, b/c will be sorted again by program
              return classDate(a) < classDate(b) ? 1 : -1;
          }
        });
      };

      sortSearchResults = function() {
        // Sort all elements so that scheduled courses come first
        $('#content article.node-sdc-course').sortElements(function(a, b){
          return $(a).hasClass('scheduled') ? -1 : 1;
        });

        sortSelectedElements($('#content article.node-sdc-course.unscheduled'), 'title');

        // Check for exact and partial title matches
        if (matches = getMatchingTitles()) {
          matches.reverse();// reverse them for ordering
          $(matches).each(function(){
            $(this).insertAfter($('#content div.search-result-details'));
          });
        }
        sortSelectedElements($('article.exact-match'),'date');
        sortSelectedElements($('article.partial-match'),'date');
      };

      mobileNavActive = function() {
        return $('header').attr('data-eq-state') == 'mobile-nav';
      };
    }
  };
})(jQuery);
