(function ($) {
  Drupal.behaviors.ilr_at_70 = {
    attach: function (context, settings) {
      var $channel, $article, $title, $summary, $id, link;
      var shareWith = [];
      // Todo: Add modal click functionality
      // Prepare share pattern for each channel

      shareWith['twitter'] = function () {
      };

      shareWith['facebook'] = function () {
      };

      shareWith['linkedin'] = function () {
      };

      shareWith['instagram'] = function () {
      };

      shareWith['email'] = function () {
      };

      $('.node-reflection .social a').click(function() {
        $channel = $(this).attr('class');
        $article = $(this).closest('article');
        $title = $article.find('h2').text();
        $summary = $article.find('.field-type-text-with-summary').text();
        $id = $article.attr('id');
        var link = window.location.href + '#' + $id;
        shareWith[$channel]();
        return false;
      });

      // @todo: Replace with modal trigger
      $('.node-reflection a').click(function() {
        return false;
      });
    }
  };
}(jQuery));
