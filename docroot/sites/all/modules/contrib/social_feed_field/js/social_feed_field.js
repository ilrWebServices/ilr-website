/**
 * @file
 * Javascript for our social_feed_field module.
 */

(function ($) {
  Drupal.behaviors.social_feed_field = {
    attach: function (context, settings) {
      var fieldsets = $('fieldset.social_feed_field_fs', context).not('.social_feed_field_fs_triggered');
      if (fieldsets.length) {
        $.each(fieldsets, function() {
          var fs = $(this);
          fs.addClass('social_feed_field_fs_triggered');
          var radio = fs.find('input[name$="[social_feed_field_type]"][value="0"]');
          if (radio.length) {
            radio.change(function() {
              if ($(this).attr('checked')) {
                fs.find('input.form-text').val('');
              }
            });
          }
        });
      }
    }
  };
})(jQuery);
