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
      });

    }
  };
}(jQuery));
