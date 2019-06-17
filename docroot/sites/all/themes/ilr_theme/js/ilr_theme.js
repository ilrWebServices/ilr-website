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
      $('.search-button a').click(function(e){
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
}(jQuery));
