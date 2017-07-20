(function ($) {
  Drupal.behaviors.certificate_programs = {
    attach: function (context, settings) {
      $(document).ready(function() {
        position_call_to_action();
        $('.node-sdc-course h2').click(function() {
          if ($(this).closest('article').find('.group-main-content.accordion').hasClass('show')) {
            $(this).closest('article').find('.group-main-content.accordion').removeClass('show');
          }
          else {
            $(this).closest('article').find('.group-main-content.accordion').addClass('show');
          }
          return false;
        });
      });

      $(window).resize(function(){
        position_call_to_action();
      });

      $(window).load(function() {
        if ($('div.pitch ul li').length) {
          highlight_first_word();
        }
      });

      function position_call_to_action() {
        is_in_sidebar = function (el) {
          return el.parent().is('div#block-ilr-certificate-programs-certificate-programs-cta');
        }
        certificate_basics = $('.certificate-basics');
        get_updates = $('.get-updates');
        contact_us = $('.contact-us');
        if ($('header').width() > 550 && $('header').width() < 1280 ) {
          if ( is_in_sidebar(certificate_basics) ) {
            $('#breadcrumb').after(certificate_basics);
          }
        }
        else if ($('header').width() <= 550 ) {
          if ( is_in_sidebar(certificate_basics) ) {
            $('#breadcrumb').after(certificate_basics);
          }
        }
        else if ( ! is_in_sidebar(certificate_basics) ) {
          $('#block-ilr-certificate-programs-certificate-programs-cta').prepend(contact_us).prepend(get_updates).prepend(certificate_basics);
        }

        /* LEGACY - Leave in place until all manually overridden instances of the
         * ilr-certificate-programs-cta-block have replaced #certificate-info-aside
         * with .certificate-basics, .get-updates, and .contact-us.
         */
        is_in_sidebar_manually = function (el) {
          return el.parent().is('div#manual-certificate-info');
        }
        is_in_main = function (el) {
          return el.parent().parent().is('div#content, div#main');  // The element is either in #content OR #main
        }
        certificate_info_aside = $('#certificate-info-aside');
        sidebar_second = $('#sidebar-second');

        if ($('header').width() < 768 ) {
          if ( is_in_main(certificate_info_aside) ) {
            $('#manual-certificate-info').prepend(certificate_info_aside);
            $('#highlighted').after(sidebar_second);
          }
        }
        else if ($('header').width() < 1280 ) {
          if ( is_in_sidebar_manually(certificate_info_aside) ) {
            $('#breadcrumb').after(certificate_info_aside);
          }
        }
        else {
          if ( is_in_main(certificate_info_aside) ) {
            $('#manual-certificate-info').prepend(certificate_info_aside);
          }
        }
        // END of LEGACY
      }

      function highlight_first_word() {
        // prepare the first word in a list of items to be bolded
        $('div.pitch ul li').each(function(index, element) {
          var word_array, first_word, middle_part, first_word_class;
          var phrase = $(element).html().trim();

          // split the phrase on spaces
          word_array = phrase.split(/\s+/);

          // isolate the first word
          first_word = word_array.shift();
          first_word_class = 'first-word';

          first_word = '<span class="' + first_word_class + '">' + first_word + '</span>' + ' ';

          // check for additional words
          if (word_array.length > 0) {
            middle_part = word_array;
          }

          // rejoin the parts of the phrase. convert commas into spaces
          phrase = [first_word, middle_part].join('').replace(/,/g, ' ');

          $(element).html(phrase);
        });
      }
    }
  };
}(jQuery));
