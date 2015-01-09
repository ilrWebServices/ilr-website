(function ($) {
  Drupal.behaviors.readmorejs = {
    attach: function (context) {
      $(window).load(function() {
        var selectors = Drupal.settings.readmorejs.selectors;
        delete Drupal.settings.readmorejs.selectors;
        $(selectors, context).readmore(Drupal.settings.readmorejs);
      });
    }
  };
}(jQuery));
