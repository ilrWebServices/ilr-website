(function ($) {
  Drupal.behaviors.people_profiles = {
    attach: function (context, settings) {
      if ($('article.profile-type-faculty').length) {
        $(window).load(function() {
          if (parseInt($('#main').attr('data-eq-state')) < 768) {
            $('.group-main-content .field').slice(1).each(function(){
              $(this).toggle();
              $(this).next('.readmore-js-toggle').hide();
            });

            $('.field-label').slice(1).each(function(){
              $(this).addClass('toggleable');
              $(this).click(function(){
                $(this).toggleClass('toggled');
                $(this).nextUntil('.field-label').toggle('medium');
              });
            });
          }
        });
      }
    }
  };
}(jQuery));
