(function ($) {
Drupal.behaviors.change_hover_color = {
  attach: function (context, settings) {
    // @todo Should this be: $(window).resize(function() {
    $(window).load(function() {
      if ($('body').hasClass('node-type-experience-report')) {
        $('#content-bottom article').each(function(){
          $(this).find('.field-name-field-image').append($(this).find('h2'));
        });
        if ($('html').hasClass('touch')) { // Note this is not 100% accurate. See https://github.com/Modernizr/Modernizr/issues/548
          $('.node-experience-report h2').css('opacity',1);
        } else {
          if (($('#content-bottom').attr('data-eq-state') == 'widescreen') || ($('#content-bottom').attr('data-eq-state') == '768')) {
            var easing = 'Expo.easeOut';
            $('#content-bottom .field-name-field-image').mouseover(function() {
              TweenLite.to($(this).closest('article').find('h2'), .6, {opacity:1, ease: easing });
              TweenLite.to($(this).closest('article').find('.image-style-main_portrait_image'), .6, {opacity:0.05, ease: easing });
            });

            $('#content-bottom .field-name-field-image').mouseout(function() {
              TweenLite.to($(this).closest('article').find('h2'), .6, {opacity:0, ease: easing });
              TweenLite.to($(this).closest('article').find('.image-style-main_portrait_image'), .6, {opacity:1, ease: easing });
            });
          }
        }
      }
    });
  }
};
}(jQuery));
