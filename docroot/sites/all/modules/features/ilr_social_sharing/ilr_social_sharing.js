// @todo:
//  - Move most of the social click functionality to ilr_social_sharing.js
//  - Refactor .social a.click function to get values from og tags
//  - Refactor shareWith['twitter'] with overridable hashtags
//  - Refactor shareWith['email'] with overridable subject (and include hashtags?)


(function ($) {
  Drupal.behaviors.ilr_social_sharing = {
    attach: function (context, settings) {
      var $channel, $article, $title, $description, $id, link, domain;
      var shareWith = [];

      shareWith['twitter'] = function() {
        url = 'https://twitter.com/intent/tweet';
        params = {
          'text'          : $title,
          'hashtags'      : 'ILR70',
          'url'           : getNodeURL($id),
        };
        shareToURL(url, params);
      };

      shareWith['facebook'] = function() {
        url = 'https://www.facebook.com/dialog/feed';
        params = {
          'app_id'        : 122623604426831,
          'display'       : 'popup',
          'name'          : $title,
          'description'   : $description,
          'redirect_uri'  : window.location.href,
          'link'          : getNodeURL($id),
        };
        if ($image !== 'undefined') {
          params.source = $image;
        }
        shareToURL(url, params);
      };

      shareWith['linkedin'] = function() {
        url = 'https://www.linkedin.com/shareArticle';
        params = {
          'mini'          : true,
          'url'           : getNodeURL($id),
          'title'         : $title,
          'summary'       : $description,
          'source'        : 'Cornell University ILR School'
        };
        shareToURL(url, params);
      };

      shareWith['mail'] = function() {
        url = 'mailto:?';
        url += 'subject=ILR at 70: ' + $title.trim();
        url += '&body='    + $description.trim();
        url += '%0D%0A%0D%0A' + 'View it online: ' + window.location.href;
        url += '%0D%0A%0D%0ASee more: #ILR70';

        // Pass them straight to the url
        // so the values don't get encoded
        window.location.href = url;
        return false;
      };

      var shareToURL = function(url, params) {
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

      $('.social-share a').click(function() {
        $channel = $(this).attr('class');
        $article = $(this).closest('article');
        $title = $('meta[property="og:title"]').attr('content');
        $image = $('meta[property="og:image"]').attr("content");
        $description = $('meta[property="og:description"]').attr("content");
        $id = $article.attr('id').replace('node-','');
        shareWith[$channel]();
        return false;
      });

    }
  };
}(jQuery));
