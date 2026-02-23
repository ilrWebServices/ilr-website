(function ($) {
  Drupal.behaviors.basic_page = {
    attach: function (context, settings) {
      // deprecated faq template. Retained in case old code is still in use on site
      $('.faq dd').hide();
      $('.faq dt').click(function(){
        $(this).next('dd').toggle('linear');
      });

      	//new faq template.
		$('.faq-list .faq-a').hide();
		$('.faq-list .faq-q').click(function(){
		  $(this).next('.faq-a').toggle('linear');
		});
    }
  };
}(jQuery));
;
(function ($) {
  Drupal.behaviors.ilr_mega_menu = {
    attach: function (context, settings) {
      var easing = 'Expo.easeOut';
      var tween;
      var currentSubmenu;
      var ready = true;

      $('.menu-block-ilr-primary-menu li.menu-item').hoverIntent({
        over: revealMegaMenu,
        out: hideMegaMenu,
        timeout: 100
      });

      $('.menu-block-ilr-primary-menu .bean-mega-menu').hover(
        function(){},
        function() {
          hideMegaMenu();
        }
      );

      function revealMegaMenu() {
        if(ready) {
          submenu = $(this).find('div.submenu');
          if (submenuIsPopulated(submenu)) {
            currentSubmenu = $(submenu).attr('id');
            revealSubmenu(submenu);
          } else {
            hideMegaMenu();
          }
        }
      }

      function megaMenuIsActive() {
        return $('.menu-block-ilr-primary-menu').hasClass('active');
      }

      function submenuIsPopulated(submenu) {
        return $(submenu).find('.entity-bean').length > 0;
      }

      function revealSubmenu(submenu) {
        $(submenu).css({'opacity': 1, 'visibility': 'visible'});
        // resetSubmenuTween(submenu);
        if (megaMenuIsActive()) {
          hideSubmenu($('.submenu.active'));
        } else {
          $('.menu-block-ilr-primary-menu').addClass('active');
          tween = TweenLite.from($(submenu), .3, { opacity: 0, ease: easing });
        }
        $(submenu).addClass('active');
      }

      function hideMegaMenu() {
        ready = false;
        $('.menu-block-ilr-primary-menu').removeClass('active');
        submenu = $('.submenu.active');
        TweenLite.to(submenu, .1, {opacity: 0, onComplete: removeClassFromEl, onCompleteParams: [submenu, 'active'] });
      }

      function hideSubmenu(submenu) {
        if ($(submenu).attr('id') != currentSubmenu) {
          TweenLite.to($(submenu), .2, {opacity: 0, ease: easing, onComplete: removeClassFromEl, onCompleteParams: [submenu, 'active'] });
        }
      }

      function removeClassFromEl(el, className) {
        $(el).removeClass(className);
        ready = true;
      }
    }
  };
}(jQuery));
;
!function(t){function e(){var e,i,n={height:a.innerHeight,width:a.innerWidth};return n.height||(e=r.compatMode,(e||!t.support.boxModel)&&(i="CSS1Compat"===e?f:r.body,n={height:i.clientHeight,width:i.clientWidth})),n}function i(){return{top:a.pageYOffset||f.scrollTop||r.body.scrollTop,left:a.pageXOffset||f.scrollLeft||r.body.scrollLeft}}function n(){var n,l=t(),r=0;if(t.each(d,function(t,e){var i=e.data.selector,n=e.$element;l=l.add(i?n.find(i):n)}),n=l.length)for(o=o||e(),h=h||i();n>r;r++)if(t.contains(f,l[r])){var a,c,p,s=t(l[r]),u={height:s.height(),width:s.width()},g=s.offset(),v=s.data("inview");if(!h||!o)return;g.top+u.height>h.top&&g.top<h.top+o.height&&g.left+u.width>h.left&&g.left<h.left+o.width?(a=h.left>g.left?"right":h.left+o.width<g.left+u.width?"left":"both",c=h.top>g.top?"bottom":h.top+o.height<g.top+u.height?"top":"both",p=a+"-"+c,v&&v===p||s.data("inview",p).trigger("inview",[!0,a,c])):v&&s.data("inview",!1).trigger("inview",[!1])}}var o,h,l,d={},r=document,a=window,f=r.documentElement,c=t.expando;t.event.special.inview={add:function(e){d[e.guid+"-"+this[c]]={data:e,$element:t(this)},l||t.isEmptyObject(d)||(l=setInterval(n,250))},remove:function(e){try{delete d[e.guid+"-"+this[c]]}catch(i){}t.isEmptyObject(d)&&(clearInterval(l),l=null)}},t(a).bind("scroll resize scrollstop",function(){o=h=null}),!f.addEventListener&&f.attachEvent&&f.attachEvent("onfocusin",function(){h=null})}(jQuery);;
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
        url = 'https://www.facebook.com/dialog/share';
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

      $('.social-share a').click(function(e) {
        e.preventDefault();
        $channel = $(this).attr('class');
        $article = $(this).closest('article');
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
;
