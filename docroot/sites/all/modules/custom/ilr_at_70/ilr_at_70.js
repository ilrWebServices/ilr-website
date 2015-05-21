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

      var easing = 'Expo.easeOut';

      $('.node-reflection').mouseover(function() {
        TweenLite.to($(this).closest('article').find('.social-share'), .6, {opacity:1, ease: easing });
      });

      $('.node-reflection').mouseout(function() {
        TweenLite.to($('.social-share'), .6, {opacity:0, ease: easing });
      });

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
      });

    }
  };
}(jQuery));
