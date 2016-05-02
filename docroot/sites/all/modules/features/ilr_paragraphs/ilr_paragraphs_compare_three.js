(function ($) {
  Drupal.behaviors.ilr_paragraphs_compare_three = {
    attach: function (context, settings) {
      function is_numeric(n) {
        var test = n.replace(/[,-]/g, '');
        return !isNaN(parseFloat(test)) && isFinite(test);
      }

      function format_blurbs() {
        $('article.field-name-field-animated-text-card ul li').each(function(index, element) {
          var phrase = $(element).html().trim();
          var blurb_class = (phrase.toUpperCase() == phrase) ? 'circle-blurb all-caps' : 'circle-blurb';
          var word_array, first_word, last_word, middle_part, first_word_class;

          // split the phrase on spaces.
          word_array = phrase.split(/\s+/);

          // Isolate the first word. If it's numeric, mark it.
          first_word = word_array.shift();
          first_word_class = is_numeric(first_word) ? 'first-word number' : 'first-word';
          first_word = '<span class="' + first_word_class + '">' + first_word + '</span><br>';

          // Isolate the last word, if there is one, and mark it.
          if (word_array.length > 0) {
            last_word = word_array.pop();
            last_word = '<span class="last-word">' + last_word + '</span>';
          }

          // Separate any remaining words in the middle with breaks.
          if (word_array.length > 0) {
            middle_part = word_array.join('<br>') + '<br>';
          }

          phrase = '<span class="' + blurb_class + '">';
          phrase += [first_word, middle_part, last_word].join('');
          phrase += '</span>';

          $(element).html(phrase);
        });
      }

      function add_links_to_animated_text_cards() {
        $('article.field-name-field-animated-text-card').each(function(index, element) {
          var url = $(element).find('.link-item .link-url a').attr('href');
          $(element).wrap('<a href="' + url + '"></a>');
        });
      }

      $(window).load(function() {
        if ($('article.field-name-field-animated-text-card ul li').length) {
          format_blurbs();
          add_links_to_animated_text_cards();
        }
        $('article.field-name-field-animated-text-card').mouseenter( function() {
          var tl = new TimelineLite();
          var stage = $(this).find('ul');
          var screen = $(this).find('ul li:first-child');
          var slides = $(this).find('ul li:not(:first-child)');
          if (!screen.attr('starting_content')) {
            screen.attr('starting_content', screen.html());
          }

          // Fade in to class for active state
          tl.to( stage, 1, {className: '+=active'} );

          // Cycle through slides
          slides.each( function (index) {
            var newText = $(this).html();
            var durration = (index == 0) ? 0 : 0.6;
            tl.to( screen, 0.6, {opacity: 0, delay: durration, onComplete: function() { screen.html(newText); } }, "+=0.1" );
            tl.to( screen, 0.5, {opacity: 1}, "+=0.5" );
          });

          $(this).mouseleave(function() {
            // Stop the animation and remove the class for active state
            tl.pause(0);
            tl.clear();
            screen.html(screen.attr('starting_content'));
            tl.to( stage, 2.5, {className: '-=active'} );
          });
        });
      });
    }
  };
}(jQuery));
