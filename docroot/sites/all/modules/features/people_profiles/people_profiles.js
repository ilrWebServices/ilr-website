(function ($) {
  Drupal.behaviors.people_profiles = {
    attach: function (context, settings) {
      if ($('article.profile-type-faculty').length) {
        $(window).load(function() {
          if (parseInt($('#main').attr('data-eq-state')) < 768) {
            // All except the first
            $('.group-main-content .field, .group-sidebar .field').slice(1).each(function(){
              $(this).toggle();
              $(this).next('.readmore-js-toggle').hide();
            });

            // All except the first
            $('.field-label, .group-contact-info > h3').slice(1).each(function(){
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
