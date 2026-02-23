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
