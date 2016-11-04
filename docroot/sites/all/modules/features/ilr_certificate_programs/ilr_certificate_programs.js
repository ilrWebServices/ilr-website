(function ($) {
  Drupal.behaviors.certificate_programs = {
    attach: function (context, settings) {
      $(document).ready(function() {
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
          return el.parent().has('div#main');
        }
        sidebar_second = $('#sidebar-second');

        if ($('header').width() <= 1280 ){
          if ( is_in_sidebar(sidebar_second) ) {
            $('#highlighted').after(sidebar_second);
          }
        } else if ( is_in_sidebar(sidebar_second) ) {
          $('#sidebar-first').after(sidebar_second);
        }
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
