(function ($) {
  Drupal.behaviors.ilr_theme_google_trans = {
    attach: function (context, settings) {
      currentURL = window.location.href.split('#')[0].replace('https','http');
      $('#google-translation').append('<input name="u" value="'+currentURL+'" type="hidden" />');
      $('#google-translation input').click(function(){
        $('#google-translation input[name="langpair"]').val($(this).val());
      });
    }
  };
  Drupal.behaviors.ilr_theme_collapse_list = {
    attach: function (context, settings) {
      var title_links = $('.collapse-list article h2');
      title_links.siblings().slideToggle();
      title_links.click(function(e){
        e.preventDefault();
        $(this).siblings().slideToggle(200);
      });

    }
  };
  Drupal.behaviors.ilr_theme_tabs = {
    attach: function (context, settings) {
      var triggers = $('.tab__trigger');
      if(triggers.length) {
        triggers.click(function(e){
          $id = $(this).attr('data-toggle');
          $('.tab__content').css('display','none');
          $('#' + $id).css('display','block');
        });
      }
    }
  };
  Drupal.behaviors.ilr_theme_search = {
    attach: function (context, settings) {
      $('.search-button button').click(function(e){
        e.preventDefault();
        $('header').toggleClass('search-engaged');
        $('#search-form-query').focus();
        if($('#search-form-query').val() != '') {
          $('#cu-search-form').submit();
        }
        $(document).keyup(function(e) {
          if (e.keyCode == 27 && $('header').hasClass('search-engaged')) { // escape key maps to keycode `27`
            $('header').removeClass('search-engaged');
          }
        });
      });
    }
  };
  Drupal.behaviors.ilr_theme_subsite_wrapper = {
    attach: function (context, settings) {
      $(window).load(function() {
        // @todo Alter links on server side via hook_url_outbound_alter?
        // @todo Add client-side validation to avoid the stop at a form's "canonical" location when server validation finds errors
        if(isSubsite()) {
          $links = $(".tagged-content a, .bean-content-listing-manual a, .view-course-manual-listings a, a.course-details");
          $links.each(function(){
            $href = $(this).attr('href');
            if (typeof $href !== 'undefined' && isWrappableHref($href)) {
              $(this).attr('href', '/' + currentSubsitePath() + $href);
            }
          });
          $forms = $("#ilr-sdc-listings-class-reg-form");
          $forms.each(function(){
            $action = $(this).attr('action');
            $(this).attr('action', $action.replace('/' + currentSubsitePath(), ''));
          });
        }
      });

      var isSubsite = function() {
        return $('body').hasClass('subsite');
      }

      var currentSubsitePath = function() {
        var pathArray = window.location.pathname.split( '/' );
        return pathArray[1];
      }

      /**
       * Checks to see if the href points to a path we want
       * to wrap with the subsite URL
       */
      var isWrappableHref = function($href) {
        var wrappablePaths = ['/news','/post','/professional-programs'];
        for (var i = 0; i < wrappablePaths.length; i++) {
          if ($href.indexOf(wrappablePaths[i]) == 0) {
            return true;
          }
        }
        return false;
      }
    }
  };
  Drupal.behaviors.sls = {
    attach: function (context, settings) {
      $('.speaker,.moderator,.featured-speaker').click(function(){
        var $content = $(this).find('.modal').html();
        if ($('#main').attr('data-eq-state') != 320) {
          if ($content) {
            $.fancybox({
              'type': 'inline',
              'content': $content,
            });
          }
        }
      });
      $('.show-hide-bio').click(function(){
        if ($(this).closest('article').find('.sls-bio').hasClass('show')) {
          $(this).closest('article').find('.sls-bio').removeClass('show');
          $(this).html('View biography');
        }
        else {
          $(this).closest('article').find('.sls-bio').addClass('show');
          $(this).html('Hide biography');
        }
      });
    }
  };
  // @todo: refactor microsite interest and sports-leadership interest
  Drupal.behaviors.microsite = {
    attach: function (context, settings) {
      $('.action-callout__button').click(function() {
        // Check whether it's a link for the modal
        if ($(this).attr('href').length == 1) {
          var interest = $(this).text();
          var shortlink = $('link[rel=shortlink]').eq(0).attr('href');
          var lastslashindex = shortlink.lastIndexOf('/');
          var nid= shortlink.substring(lastslashindex  + 1);
          var $path = '/microsite-interest/'+interest+'/'+nid
          $path += '?layout=0';
          $.fancybox({
            'type': 'iframe',
            'autoDimensions' : true,
            'autoScale' : true,
            'href' : $path,
          });
          return false;
        }
      });

      if ($('body').hasClass('page-eform-microsite-interest-confirm')) {
        parent.jQuery.fancybox.close();
      }
    }
  };

  Drupal.behaviors.microsite_nav = {
    attach: function (context, settings) {
      $('.microsite-nav a').click(function(){
        var $target = $(this.hash);
        $('html, body').stop().animate({
            'scrollTop': $target.offset().top - 175
        }, 900, 'swing', function () {
            window.location.hash = $target;
        });
      });
    }
  };

  Drupal.behaviors.ilr_theme_trigger_called = {
    attach: function (context, settings) {
      $('.trigger').each(function(){
        var $classes = $(this).prop('class');
        var $triggerModifier = $classes.split('trigger--')[1];
        switch ($triggerModifier) {
          case 'hide-denied':
            $('#page-title, #block-system-main').hide();
            $('.messages').appendTo($('.region-content'));
            break;
          default:
            break;
        }
      });
    }
  };

  Drupal.behaviors.ilr_theme_union_integrations = {
    attach: function (context, settings) {
      // Check for a dismissible and move it above the header
      // if there is one
      $('.front .cu-dismissible').prependTo("header");
    }
  };
}(jQuery));
;
(function (document) {

  // Wire play icons to videos in banners.
  document.addEventListener('click', function(event) {
    if (event.target.matches('.cu-icon--play')) {
      // If the icon has a video target selector in a `data-cu-video-target`
      // attribute, use that. Otherwise, use the closest video.
      let video_element = document.querySelector(event.target.dataset.cuVideoTarget) || event.target.closest('.cu-banner').querySelector('.cu-banner__media video');
      let overlay_content = event.target.closest('.cu-banner__content');
      let control = event.target;
      let play = document.querySelector('.play');
      let pause = document.querySelector('.pause');

      if (video_element && video_element.paused) {
        video_element.play();
        pause.classList.remove('hidden');
        play.classList.add('hidden');
        overlay_content.style.display = 'none';
        video_element.controls = true;
      }

      if (video_element && video_element.played) {
        video_element.pause();
        pause.classList.add('hidden');
        play.classList.remove('hidden');
      }
    }
  });

})(document);

(function (window, document) {

  if (('localStorage' in window) === false) {
    return;
  }

  const processDismissibles = function() {
    const dismissible_elements = document.querySelectorAll('[data-cu-digest].cu-dismissible');

    for (const dismissible_element of dismissible_elements) {
      // Has this element been dismissed? Tag it with a class if so.
      if (parseInt(localStorage.getItem('cu-diss-' + dismissible_element.dataset.cuDigest))) {
        dismissible_element.classList.add('cu-dismissible--predismissed')
      }
      else {
        dismissible_element.classList.remove('cu-dismissible--predismissed');
      }
    }
  };

  let observer = new MutationObserver(processDismissibles).observe(document, {
    childList: true,
    subtree: true
  });

  // Store the dismissal state in local storage.
  document.addEventListener('change', function(event) {
    if (event.target.matches('.cu-dismissible__input')) {
      localStorage.setItem('cu-diss-' + event.target.parentNode.dataset.cuDigest, event.target.checked ? 1 : 0);
    }
  }, false);

})(window, document);

(function (document) {

  document.addEventListener('change', function(event) {
    if (event.target.matches('.cu-input')) {
      let wrapper = event.target.closest('.cu-input-list__item');

      if (event.target.value) {
        event.target.classList.add('is-filled');
        wrapper.classList.add('is-filled');
      }
      else {
        event.target.classList.remove('is-filled');
        wrapper.classList.remove('is-filled');
      }
    }
  }, false);

  // This is the equivalent of focus (which doesnt' bubble).
  document.addEventListener('focusin', function(event) {
    if (event.target.matches('.cu-input')) {
      let wrapper = event.target.closest('.cu-input-list__item');

      event.target.classList.remove('is-touched');
      event.target.classList.add('is-focused');

      // Check for wrapper and update classes.
      if (wrapper) {
        wrapper.classList.add('is-active')
      }

      // If there were server-side errors, the 'is-invalid' class will be present
      // but should be removed on focus because the user is trying to fix them.
      event.target.classList.remove('is-invalid');

      if (event.target.errors) {
        event.target.errors.remove();
      }
    }
  }, false);

  // This is the equivalent of blur (which doesnt' bubble).
  document.addEventListener('focusout', function(event) {
    if (event.target.matches('.cu-input')) {
      let wrapper = event.target.closest('.cu-input-list__item');

      if (!event.isTrusted) {
        // This blur event was triggered by a script, not a human, so don't mark
        // the input as is-touched (because it actually wasn't) or show errors.

        // Note that Mozilla claims that isTrusted shouldn't work in IE, but
        // based on testing, it does.
        // https://developer.mozilla.org/en-US/docs/Web/API/Event/isTrusted
        return;
      }

      event.target.classList.add('is-touched');
      event.target.classList.remove('is-focused');

      // Check for wrapper and update classes
      if (wrapper) {
        wrapper.classList.remove('is-active');
      }
    }
  }, false);

  // Process any .cu-input elements whenever stuff is added to the DOM. This
  // includes the initial page load.
  let observer = new MutationObserver(function(mutations, observer) {
    // Check to see if any of the mutations added nodes to the DOM.
    let added_children = false;

    for (const mutation of mutations) {
      if (mutation.type === 'childList' && mutation.addedNodes.length) {
        added_children = true;
        break;
      }
    }

    // Return if not adding children.
    if (!added_children) {
      return;
    }

    const inputs = document.querySelectorAll('.cu-input');

    for (const input of inputs) {
      const wrapper = input.closest('.cu-input-list__item');

      // Check if the field has pre-filled text from the server side.
      if (input.value) {
        input.classList.add('is-filled');

        // Check if input has a wrapper.
        if (wrapper) {
          wrapper.classList.add('is-filled');
        }
      }

      // If wrapper, remove the js-disabled class for float labels.
      if (wrapper) {
        wrapper.classList.remove('js-disabled');
      }
    }
  });

  // @todo Investigate the performance ramifications of observing the entire
  // document, plus its children.
  observer.observe(document, {
    childList: true,
    subtree: true
  });

})(document);

// A simple script to pause videos when they aren't visible in the viewport.
// @todo Add logic to deal with videos added to the DOM via ajax or other.
// @todo Deal with videos in iframes. See https://stackoverflow.com/a/15251023 and https://stackoverflow.com/q/12336031
(function (window, document) {

  document.addEventListener("DOMContentLoaded", function(){
    const cu_video_elements = document.querySelectorAll('.cu-video');

    const inViewport = function(el) {
      let bounding = el.getBoundingClientRect();
      let within_upper_bounds = (bounding.top + bounding.height / 2 < window.innerHeight);
      let within_lower_bounds = (bounding.bottom > bounding.height / 2);

      return within_upper_bounds && within_lower_bounds;
    };

    let debounce_timeout;
    window.addEventListener('scroll', function(ev) {
      clearTimeout(debounce_timeout);
      debounce_timeout = setTimeout(function() {
        for (const cu_video_element of cu_video_elements) {
          // See if the video is in the viewport. I.e. is visible.
          if (inViewport(cu_video_element)) {
            // If it is visible, only play it if it was paused via javascript
            // rather than manually by the user.
            if (cu_video_element.classList.contains('js-paused')) {
              cu_video_element.play();
              cu_video_element.classList.remove('js-paused')
            }
          }
          // The video is outside the viewport (i.e. not visible).
          else {
            // If the video is already paused, it was probably done by the user,
            // so leave it paused and don't add the class that indicates that the
            // video was paused via javascript.
            if (cu_video_element.paused === false) {
              cu_video_element.pause();
              cu_video_element.classList.add('js-paused')
            }
          }
        }
      }, 500);

    }, false);
  });

})(window, document);
;
(function ($) {
   //Add icons to menu for dropdown on focus
  Drupal.behaviors.wa_menu = {
    attach: function (context, settings) {
      var menuItems = ".menu li.menu-item";
      var menuLinks = ".menu-view-wrapper";
      const isSubsite = $('body').hasClass('subsite');

      const addKeyboardNav = function () {
        if (isSubsite) {
          return;
        }

        // Adding expander buttons after every top level nav item
        $(menuItems).each(function (e) {
          $(this).attr("aria-expanded", "false");
          $(this).children('a').after("<button class='menuExpand' aria-expanded='false' tabindex='0' value='Expand Menu' aria-label='Expand " + $(this).children('a').text() + "'><span aria-hidden='true' class='fas fa-caret-down'></span></button>");
        });

        $('.menuExpand').on('touchstart click', function (e) {

          var submenu = $(this).next('.submenu');

          $(this).toggleClass('expanded');

          if ($(this).hasClass('expanded')) {
            $(this).attr('aria-expanded', 'true');
          }
          else {
            $(this).attr('aria-expanded', 'false');
          }

          $('.menu-block-ilr-primary-menu').addClass('active');
          $(submenu).toggleClass('active');

          if ((submenu).hasClass('active')) {
            $(submenu).css("opacity", "1");
          }
          else {
            $(submenu).css("opacity", "0");
          }
        });
      }

      // Able to close menu by hitting escape
      $(document).on('keydown', function(event) {

        if (event.key === "Escape") {
          // Find element that was active when escape was hit
          var active = $(document.activeElement);

          // Shift focus to the button for that element group
          active.parents().siblings('.menuExpand').focus();

          // Take off all active menu features
          $(menuItems).each(function(e){
            $(this).find('.menuExpand').attr("aria-expanded","false")
            $(this).find('.submenu').removeClass("active").css("opacity","0");;
            $('.menu-block-ilr-primary-menu').removeClass("active");
          });
        }
      });

      $('.closeSearch').click(function(){
        $('header').toggleClass('search-engaged');
      });

      window.addEventListener('DOMContentLoaded', addKeyboardNav);
  }
}

}(jQuery));
;
