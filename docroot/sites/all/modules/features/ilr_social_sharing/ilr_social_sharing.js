// @todo:
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
          'hashtags'      : getHashtags(),
          'url'           : getNodeURL($id),
        };
        shareToURL(url, params);
      };

      shareWith['facebook'] = function() {
        url = 'https://www.facebook.com/dialog/feed';
        params = {
          'app_id'        : 345274062349654,
          'display'       : 'popup',
          'name'          : $title,
          'description'   : $description,
          'redirect_uri'  : window.location.href,
          'link'          : getNodeURL($id),
        };
        if(typeof $image !== 'undefined'){
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
        var hashtags = getHashtags();
        url = 'mailto:?';
        url += 'subject=' + getEmailSubject();
        url += '&body='    + encodeURIComponent($description.trim());
        url += '%0D%0A%0D%0A' + 'View it online: ' + window.location.href;
        if (hashtags.length > 0) {
          url += '%0D%0A%0D%0ASee more: #' + hashtags;
        }
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

      /**
       * Get the path to the node/nid for teasers (ie: ilr-at-70)
       * Or the current url if on a node
       */
      var getNodeURL = function(nid) {
        if (!$article.hasClass('node-teaser')) {
          return window.location.href;
        }
        if (typeof location.origin === 'undefined')
          location.origin = location.protocol + '//' + location.host;
        return location.origin + '/node/' + nid + currentNidParam();
      }

      var currentNidParam = function() {
        var params = '';
        if (typeof settings.ilr_social_sharing !== 'undefined'
          && typeof settings.ilr_social_sharing.currentNid !== 'undefined') {
          params = '?p='+settings.ilr_social_sharing.currentNid;
        }
        return params;
      };

      var getHashtags = function() {
        var hashtags = '';
        if (typeof settings.ilr_social_sharing !== 'undefined') {
          hashtags =  settings.ilr_social_sharing.hashtags;
        }
        return hashtags;
      };

      var getEmailSubject = function() {
        var prefix = 'The ILR School';
        if (typeof settings.ilr_social_sharing !== 'undefined' && settings.ilr_social_sharing.emailSubjectPrefix !== 'undefined') {
          prefix = settings.ilr_social_sharing.emailSubjectPrefix;
        }
        return prefix + ': ' + $title.trim();
      };

      $('.social-share a').click(function() {
        $channel = $(this).attr('class');
        $article = $(this).closest('article');
        $id = $article.attr('id').replace('node-','');
        if ($article.hasClass('node-teaser')) { // Use the teaser-specific details
          $title = $article.find('h2').first().text().trim();
          $image = $article.find('img').attr('src');
          $description = $article.find('.field-type-text-with-summary').text().trim();
        } else { // Default to the page's open graph tags
          $title = $('meta[property="og:title"]').attr('content');
          $image = $('meta[property="og:image"]').attr("content");
          $description = $('meta[property="og:description"]').attr("content");
        }
        shareWith[$channel]();
        return false;
      });
    }
  };
}(jQuery));
