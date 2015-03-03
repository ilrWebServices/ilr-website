(function ($) {
  Drupal.behaviors.people_profiles = {
    attach: function (context, settings) {

      var goToNamedAnchor = function(anchor) {
        var target = $(anchor);
        if (target.length) {
          $('html,body').animate({
            scrollTop: target.offset().top - 150 //offset height of header here too.
          }, 100);
          return false;
        }
      };

      var getNamedAnchor = function() {
        if (hash = window.location.hash) {
          return hash;
        }
        return null;
      };

      var getLastNameLetterFromAnchor = function(anchor) {
        if (anchor !== null) {
          // make sure anchor conforms to #firstName-lastName pattern
          if (index = anchor.lastIndexOf("-")) {
            if (index > 0) {
              return anchor.substring(index + 1, index + 2);
            }
          }
        }
        return null;
      };

      var getNextLetter = function(previousLetter) {
        if (previousLetter != 'z') {
          return String.fromCharCode(previousLetter.charCodeAt(0) + 1);
        }
        return false;
      };

      /**
       * The block view returns an additional filter each time
       */
      var removeDuplicatedFilter = function() {
        $('.ctools-auto-submit-full-form:last').remove();
      };

      var loadProfileEventListener = function() {
        $('footer').bind('inview', function(event, isInView, visiblePartX, visiblePartY) {
          if (isInView) {
            $('footer').unbind('inview');
            anchor = $('.views-row article:last h2').attr('id');
            previousLetter = getLastNameLetterFromAnchor('#' + anchor);
            nextLetter = getNextLetter(previousLetter);
            if (nextLetter) {
              loadProfileView('block', 'field_last_name_value='+nextLetter, letterChangeComplete);
            }
          }
        });
      };

      var loadProfileView = function(displayId, params, callback) {
        params = params || '';
        $.ajax({
          url: Drupal.settings.basePath + 'views/ajax',
          type: 'POST',
          dataType: 'json',
          data: 'view_name=people_profile_teasers&view_display_id='+ displayId + '&' + params,
          success: function(response) {
            for (var key in response) {
              object = response[key];
              if (object.data) {
                action = (displayId == 'block') ? 'append' : 'html';
                $('#block-views-people-profile-teasers-block')[action](object.data);
                hasCallback = callback || false;
                if (hasCallback) {
                  callback();
                }
              }
            }
          },
        });
      };

      var letterChangeComplete = function() {
        removeDuplicatedFilter();
        loadProfileEventListener(); // Begin listening again
      };

      var mobileNavActive = function() {
        return $('header').attr('data-eq-state') == 'mobile-nav';
      };

      var isPeoplePage = function() {
        if ($('#block-people-profiles-faculty-landing-page, #block-views-people-profile-teasers-block').length) {
          return true;
        }
        return false;
      };

      $(window).load(function() {
        // Profile detail page
        if ($('article.profile-type-faculty').length) {
          $('.field-name-field-areas-of-expertise').last().addClass('last');
          if (parseInt($('#main').attr('data-eq-state')) < 768) {
            $('.group-sidebar').addClass('toggleable');
            // All except the first
            $('.group-main-content .field, .group-sidebar .field').slice(1).each(function(){
              $(this).next('.readmore-js-toggle').hide();
            });

            // All except the first
            $('.field-label, .group-contact-info > h3').slice(1).each(function(){
              $(this).addClass('toggleable');
              $(this).click(function(){
                $(this).toggleClass('toggled');
                $(this).nextInDOM('.field-label').toggleClass('post-toggle');
              });
            });
          }
        }

        // Teaser pages, such as /people
        if (isPeoplePage()) {
          $('body').addClass('people-page');

          // Check for people profile teasers view
          if ($('#edit-field-last-name-value-wrapper').length) {
            // Update the page content if there is a named anchor
            if (last_name_letter = getLastNameLetterFromAnchor(getNamedAnchor())) {
              $("#edit-field-last-name-value").val(last_name_letter).trigger('change');
            }
            // If ajax is called for teasers, check for named anchor
            // Attached to document since form id was not working
            $(document).ajaxComplete(function( event, xhr, settings ) {
              if (settings.data.indexOf('people_profile_teasers') > -1) {
                setTimeout(goToNamedAnchor, 100, getNamedAnchor());
              }
            });

            if (mobileNavActive()) { // Prepare for infinite scroll
              loadProfileEventListener();
            } // Load all people on desktop version
            else {
              loadProfileView('page_1');
            }
          }
        }
      });

      // Borrowed from http://techfoobar.com/jquery-next-in-dom/
      $.fn.nextInDOM = function(selector) {
        var element = this;
        if(this.length > 1) element = this.first();
        return nextInDOM(selector?selector:'*', element, $('*').length, $('*').last());
      };
      function nextInDOM(_selector, _subject, _maxNodes, _lastNode) {
        var nid = $(), next = getNext(_subject, _lastNode), iters = 1;
        $('html, body').addClass('cSeen');
          while(next.length != 0) {
            if(iters > _maxNodes) return $();
            if(next.is(_selector)) {
              nid = next;
              break;
            }
            next = getNext(next, _lastNode);
            iters++;
          }
          $('.cSeen').removeClass('cSeen');
          return nid;
      }
      function getNext(_subject, _lastNode) {
        if(_subject[0] == _lastNode[0]) return $();
        if(!(_subject.hasClass('cSeen')) && _subject.children().length > 0) return _subject.children().first();
        else if(_subject.next().length > 0) return _subject.next();
        else if (_subject.parent().length > 0) {
          _subject.parent().addClass('cSeen');
          return getNext(_subject.parent(), _lastNode);
        }
        return $();
      }
    }
  };
}(jQuery));
