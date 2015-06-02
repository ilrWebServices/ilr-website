(function ($) {
  Drupal.behaviors.ilr_at_70 = {
    attach: function (context, settings) {

      // Disable links in reflections for now
      $('.node-reflection a').click(function(){
        return false;
      });

      var isNumeric = function(n) {
        return !isNaN(parseFloat(n)) && isFinite(n);
      }

      $(window).load(function() {
        if (hash = window.location.hash) {
          var nid = hash.substring(1);
          if (isNumeric(nid)) {
            $.fancybox({
              'type': 'iframe',
              'autoDimensions' : true,
              'autoScale' : true,
              'href' : 'node/'+nid+'?layout=0',
            });
          }
        }

        if ($('html').hasClass('touch')) { // Note this is not 100% accurate. See https://github.com/Modernizr/Modernizr/issues/548
          $('.node-reflection ul.social-share').css('opacity',1);
        } else {
          var easing = 'Expo.easeOut';
          $('.node-reflection').mouseover(function() {
            TweenLite.to($(this).closest('article').find('.social-share'), .6, {opacity:1, ease: easing });
          });

          $('.node-reflection').mouseout(function() {
            TweenLite.to($('.social-share'), .6, {opacity:0, ease: easing });
          });
        }

        // Hard coding the width to align the logo with the featured image
        // See makeMenuWidthCalculations() in ilr_theme.js
        if ($('body').hasClass('ilr-at-70')) {
          $('.subsite-header').css('width','39%');
        }
      });
    }
  };
}(jQuery));
