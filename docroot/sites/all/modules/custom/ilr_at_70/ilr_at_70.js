(function ($) {
  Drupal.behaviors.ilr_at_70 = {
    attach: function (context, settings) {
      var $channel, $article, $title, $summary, $id, link, domain;
      var shareWith = [];

      shareWith['twitter'] = function() {
        url = 'https://twitter.com/intent/tweet';
        params = {
          'text'          : $title,
          'hashtags'      : 'ILR70',
          'url'           : getNodeURL($id),
        };
        sharToURL(url, params);
      };

      shareWith['facebook'] = function() {
        url = 'https://www.facebook.com/dialog/feed';
        params = {
          'app_id'        : 122623604426831,
          'display'       : 'popup',
          'name'          : $title,
          'description'   : $summary,
          'redirect_uri'  : window.location.href,
          'link'          : getNodeURL($id),
        };
        if ($image !== 'undefined') {
          params.source = $image;
        }
        sharToURL(url, params);
      };

      shareWith['linkedin'] = function() {
        url = 'https://www.linkedin.com/shareArticle';
        params = {
          'mini'          : true,
          'url'           : getNodeURL($id),
          'title'         : $title,
          'summary'       : $summary,
          'source'        : 'Cornell University ILR School'
        };
        sharToURL(url, params);
      };

      shareWith['email'] = function() {
        url = 'mailto:?';
        url += 'subject=ILR at 70: ' + $title.trim();
        url += '&body='    + $summary.trim();
        url += '%0D%0A%0D%0A' + 'View it online: ' + window.location.href + '#' + $id;
        url += '%0D%0A%0D%0ASee more: #ILR70';

        // Pass them straight to the url
        // so the values don't get encoded
        window.location.href = url;
        return false;
      };

      var shareToULR = function(url, params) {
        encodedParams = encodeParams(params);
        url = url + '?' + encodedParams;
        window.location.href = url;
        return false;
      }

      var encodeParams = function(params) {
        var encoded = [];
        for (var param in params)
          encoded.push(encodeURIComponent(param) + "=" + encodeURIComponent(params[param]));
        return encoded.join("&");
      }

      var getNodeURL = function(nid) {
        if (typeof location.origin === 'undefined')
          location.origin = location.protocol + '//' + location.host;
        return location.origin + '/node/' + nid;
      }

      $('.node-reflection .social a').click(function() {
        $channel = $(this).attr('class');
        $article = $(this).closest('article');
        $title = $article.find('h2').first().text().trim();
        $image = $article.find('img').attr('src');
        $summary = $article.find('.field-type-text-with-summary').text().trim();
        $id = $article.attr('id').replace('node-','');
        shareWith[$channel]();
        return false;
      });

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
      });

    }
  };
}(jQuery));
