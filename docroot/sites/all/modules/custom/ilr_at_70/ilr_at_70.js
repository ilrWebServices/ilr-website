// @todo:
//  - Move most of the social click functionality to ilr_social_sharing.js
//  - Refactor .social a.click function to get values from og tags
//  - Refactor shareWith['twitter'] with overridable hashtags
//  - Refactor shareWith['email'] with overridable subject (and include hashtags?)


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
