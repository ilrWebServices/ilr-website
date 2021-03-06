(function ($) {
  Drupal.behaviors.people_profiles = {
    attach: function (context, settings) {
      var infiniteScrollReady = false;
      var currentLetter = 'a';
      var anchorTriggered = false;

      var goToNamedAnchor = function(anchor) {
        var target = $(anchor);
        if (target.length) {
          $('html,body').animate({
            scrollTop: target.offset().top - 30 //slight offset
          }, 100);
          anchorTriggered = true;
          currentLetter = getLastNameLetterFromAnchor(anchor);
          return false;
        }
      };

      var getNamedAnchor = function() {
        if (hash = window.location.hash) {
          return hash;
        }
        return false;
      };

      /**
       * The lastNameMap is created in _people_profiles_create_last_name_letter_map
       * @return the first letter of the last name, as provided by the map
       */
      var getLastNameLetterFromAnchor = function(anchor) {
        if (anchor) {
          lastNameMap = JSON.parse(Drupal.settings.people_profiles.lastNameMap);
          lastNameLetter = lastNameMap[anchor];
          if (lastNameLetter !== 'undefined') {
            return lastNameLetter;
          }
        }
        return false;
      };

      var getNextLetter = function() {
        if (currentLetter != 'z') {
          nextLetter = String.fromCharCode(currentLetter.charCodeAt(0) + 1);
          currentLetter = nextLetter;
          // Make sure there is an entry for the letter
          if (getFirstEntryForLetter(nextLetter)) {
            return nextLetter;
          } // Try the next letter
          else {
            return getNextLetter();
          }
        }
        return false;
      };

      /**
       * The block view returns an additional filter each time
       */
      var removeDuplicatedFilter = function() {
        $('.ctools-auto-submit-full-form:last').remove();
      };

      /**
       * Binds loading the next letter to the footer being "inview"
       */
      var addInfiniteScrollTrigger = function() {
        if (!infiniteScrollReady) {
          $('footer').bind('inview', function(event, isInView, visiblePartX, visiblePartY) {
            if (isInView) {
              $('footer').unbind('inview');
              infiniteScrollReady = false; // Disable infinite scrolling for now
              if (nextLetter = getNextLetter()) {
                loadProfileView('block', 'field_last_name_value='+nextLetter, letterChangeComplete);
              }
            }
          });
          infiniteScrollReady = true;
        }
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
        addInfiniteScrollTrigger(); // Begin listening again
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

      /**
       * Searches the lastNameMap for the first element with a given letter
       * Proceeds to the next letter if none are found
       */
      var goToFirstEntryForLetter = function(letter) {
        if (entry = getFirstEntryForLetter(letter)) {
          goToNamedAnchor(entry);
        } // Try the next letter
        else {
          goToFirstEntryForLetter(getNextLetter());
        }
      };

      /**
       * Searches the lastNameMap for the first entry for a given letter
       */
      var getFirstEntryForLetter = function(letter) {
        entry = false;
        map = JSON.parse(Drupal.settings.people_profiles.lastNameMap);
        $.each(map, function(i, val) {
          if (val == letter) {
            currentLetter = letter;
            entry = i;
            return false;
          }
        });
        return entry;
      }

      var addAlphaLinks = function() {
        $('.field-name-field-content-region').prepend('<div id="letters-listing"><ul></ul></div>');
        for(charCode=97; charCode < 123; charCode++){
          var letter = String.fromCharCode(charCode),
          anchor = '<a href="#">' + letter + '</a>';
          $("#letters-listing ul").append("<li>" + anchor + "</li>");
        }
        $('#letters-listing a').click(function(e) {
          e.preventDefault();
          letter = currentLetter = $(this).text();
          if (mobileNavActive()) {
            $("#edit-field-last-name-value").val(letter).trigger('change');
          } // All should be present on desktop
          else {
            goToFirstEntryForLetter(letter);
          }
        });
      };

      /**
       * Removes the additional views if present when
       * the visitor uses the select menu
       */
      var addSelectMenuChangeListener = function() {
        $("#edit-field-last-name-value").change(function() {
          currentLetter = $("#edit-field-last-name-value").val();
          $('.view-people-profile-teasers').not(':first').remove();
        });
      };

      $(window).load(function() {
        // Profile detail page
        if ($('article.profile-type-faculty').length) {
          $('.field-name-field-areas-of-expertise').last().addClass('last');
        }

        // Teaser pages, such as /people
        if (isPeoplePage()) {
          $('body').addClass('people-page');

          // Check for people profile teasers view
          if ($('#edit-field-last-name-value-wrapper').length) {
            // If ajax is called for teasers, check for named anchor
            // Attached to document since form id was not working
            $(document).ajaxComplete(function( event, xhr, settings ) {
              if (settings.data.indexOf('people_profile_teasers') > -1) {
                addSelectMenuChangeListener();
                addInfiniteScrollTrigger();
                // This should only be triggered once
                if (!anchorTriggered) {
                  setTimeout(goToNamedAnchor, 100, getNamedAnchor());
                }
              }
            });

            if (mobileNavActive()) {
              if (!getNamedAnchor()) {
                addInfiniteScrollTrigger();
              }
              addSelectMenuChangeListener();
            } // Load all people on desktop version
            else {
              loadProfileView('page_1');
            }
            // Both desktop and mobile get alpha links
            addAlphaLinks();
            // Update the page content if there is a named anchor
            if (last_name_letter = getLastNameLetterFromAnchor(getNamedAnchor())) {
              $("#edit-field-last-name-value").val(last_name_letter).trigger('change');
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
