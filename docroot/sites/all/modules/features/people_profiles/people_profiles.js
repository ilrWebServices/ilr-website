(function ($) {
  Drupal.behaviors.people_profiles = {
    attach: function (context, settings) {
      if ($('article.profile-type-faculty').length) {
        $(window).load(function() {
          $('.field-name-field-areas-of-expertise').last().addClass('last');
          if (parseInt($('#main').attr('data-eq-state')) < 768) {
            $('.group-sidebar').addClass('toggleable');
            // All except the first
            $('.group-main-content .field, .group-sidebar .field').slice(1).each(function(){
              $(this).next('.readmore-js-toggle').hide();
            });

            // All except the first
            $('.field-label, .group-contact-info > h3').slice(1).each(function(){
              $(this).addClass('toggleable');
              $(this).click(function(){
                $(this).toggleClass('toggled');
                $(this).nextInDOM('.field-label').toggleClass('post-toggle');
              });
            });
          }
        });
      }

      // Borrowed from http://techfoobar.com/jquery-next-in-dom/
      $.fn.nextInDOM = function(selector) {
        var element = this;
        if(this.length > 1) element = this.first();
        return nextInDOM(selector?selector:'*', element, $('*').length, $('*').last());
      };
      function nextInDOM(_selector, _subject, _maxNodes, _lastNode) {
        var nid = $(), next = getNext(_subject, _lastNode), iters = 1;
        $('html, body').addClass('cSeen');
          while(next.length != 0) {
            if(iters > _maxNodes) return $();
            if(next.is(_selector)) {
              nid = next;
              break;
            }
            next = getNext(next, _lastNode);
            iters++;
          }
          $('.cSeen').removeClass('cSeen');
          return nid;
      }
      function getNext(_subject, _lastNode) {
        if(_subject[0] == _lastNode[0]) return $();
        if(!(_subject.hasClass('cSeen')) && _subject.children().length > 0) return _subject.children().first();
        else if(_subject.next().length > 0) return _subject.next();
        else if (_subject.parent().length > 0) {
          _subject.parent().addClass('cSeen');
          return getNext(_subject.parent(), _lastNode);
        }
        return $();
      }
    }
  };
}(jQuery));
