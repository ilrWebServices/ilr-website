(function ($) {
  Drupal.behaviors.ilr_paragraphs_compare_three = {
    attach: function (context, settings) {
      function is_numeric(n) {
        var test = n.replace(/[,-]/g, '');
        return !isNaN(parseFloat(test)) && isFinite(test);
      }
      function add_class_if(condition, class_name) {
        return condition ? ' ' + class_name : '';
      }

      function format_blurbs() {
        // prepare a list of items to be displayed as slides in an animation.
        $('article.field-name-field-animated-text-card ul li').each(function(index, element) {
          var word_array, first_word, last_word, middle_part, first_word_class;
          var phrase = $(element).html().trim();
          var blurb_class = 'circle-blurb';
          // A phrase entered in all caps gets the all-caps class added
          blurb_class += add_class_if((phrase.toUpperCase() == phrase), 'all-caps');

          // split the phrase on spaces.
          word_array = phrase.split(/\s+/);

          // Isolate the first word. If it's numeric, mark it.
          first_word = word_array.shift();
          first_word_class = 'first-word';
          first_word_class += add_class_if(is_numeric(first_word), 'number');
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

          // Rejoin the parts of the phrase.
          // Convert non-breaking spaces (entered as underscores) back to spaces.
          phrase = '<span class="' + blurb_class + '">';
          phrase += [first_word, middle_part, last_word].join('').replace(/_/g, ' ');
          phrase += '</span>';

          $(element).html(phrase);
        });
        // append a copy of the first list element to the end of the list
        // so that its display won't be skipped when the animation is looping
        $('article.field-name-field-animated-text-card ul').each(function(index,element) {
          $($(element).find('li')[0]).clone().appendTo(element);
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
          var tl = new TimelineLite({onComplete:function (timeline) {timeline.restart()}, onCompleteParams:["{self}"]});
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
