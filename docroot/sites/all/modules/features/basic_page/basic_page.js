(function ($) {
  Drupal.behaviors.basic_page = {
    attach: function (context, settings) {
      $('.faq dd').hide();
      $('.faq dt').click(function(){
        $(this).next('dd').toggle('linear');
      });

      $('#search-button a').click(function(e){
        e.preventDefault();
        $('header').toggleClass('search-engaged');
        $('#bg').toggleClass('search-engaged');
        $('#search-form-query').focus();
        if($('#search-form-query').val() != '') {
          $('#cu-search-form').submit();
        }
      });

      $(window).scroll(function() {
          var scroll_top = $(this).scrollTop();
          if(scroll_top >= 2){
            $('header').addClass('sticky');
            $('#bg').addClass('sticky');
          } else if(scroll_top <= 1) {
            $('header').removeClass('sticky');
            $('#bg').removeClass('sticky');
          }
      }).scroll();

      var nextClick = function(e) {
        e.preventDefault();
        currentMenu = $(this).prev();
        oldMenu = $(this).closest('ul.menu');
        yPosition = $(this).parent().position().top;
        if (menuNeedsBackButton(currentMenu)) {
          addBackButtonToMenu(currentMenu);
        }
        $(currentMenu).css({
          'top':'-' + yPosition + 'px',
          'min-height': minHeight,
          'visibility': 'visible',
        }).animate({ "left": pixelShift }, easing);

        $(oldMenu).animate({ "left": "-=" + pixelShift });
      }

      var prevClick = function(e) {
        e.preventDefault();
        // if(animating) {
        //   console.log('animating');
        //   return false;
        // }
        // animating = true;
        currentMenu = $(this).closest('ul.menu');
        oldMenu = $(currentMenu).parent().closest('ul.menu');
        yPosition = $(currentMenu).position().top;
        // console.log(yPosition);
        $(currentMenu).animate({ "left": "100%"}, easing, function(){
          $(this).css('visibility','hidden');
        });

        $(oldMenu).css('visibility','visible').animate({ "left": '+=' + pixelShift }, easing, function() {
          animating = false;
        });

        if (menuNeedsBackButton(oldMenu)) {
          addBackButtonToMenu(oldMenu);
        }
      }

      var currentPage;
      var currentMenu;
      var minHeight;
      var pixelShift = '0px';
      var easing = { duration: 600, easing: 'Expo.easeOut' };
      var animating = false;

      function positionCurrentMenu() {
        selector = (mobileNavActive()) ? '#jPanelMenu-menu' : '#sidebar-first'; // targets the li
        currentPage = $(selector + ' a.active').parent();
        currentMenu = $(currentPage).parent(); // targets the ul
        minHeight = $('.main-nav .section > ul.menu').height();
        $(currentMenu).parents('ul.menu').each(function() {
          parent = $(this).closest('li.expanded');
          yPosition = (parent.position()) ? parent.position().top : 0;
          //console.log(yPosition);
          $(this).css({
            'left': 0,
            'top':'-' + yPosition + 'px',
            'min-height': minHeight,
          });
        });

        if(menuNeedsBackButton(currentMenu)) {
          addBackButtonToMenu(currentMenu);
        }

        if ($(currentMenu).parent().position()) {
          yPosition = $(currentMenu).parent().position().top;
          // console.log(yPosition);
          $(currentMenu).css({
            'left': 0,
            'top':'-' + yPosition + 'px',
            'min-height': minHeight,
            'visibility': 'visible',
          });
        }

        addForwardButtonToMenus();
      }

      function menuNeedsBackButton(el) {
        if (!el.parent().is('li')) { // the top level menu
          return false;
        }
        if ($(el).find(':first-child').html().indexOf('prev-menu') < 0
          || $(el).find(':first-child').html().indexOf('prev-menu') > 20) {
          return true;
        }
        return false;
      }

      function addBackButtonToMenu(menu) {
        var linkText = menu.parent().parent().parent().children('a:first-child').text();
        if (linkText == '') {
          linkText = 'Main Menu';
        }
        menu.prepend('<li class="back"><a class="prev-menu" href="#">&lsaquo; ' + linkText + '</a></li>');
        $('.prev-menu').click(prevClick);
      }

      function addForwardButtonToMenus() {
        $('li.expanded').append('<a class="next-menu" href="#"><span>&rsaquo;</span></a>');
        $('.next-menu').click(nextClick);
      }

      function mobileNavActive() {
        return $('#page-wrapper').data('eqState') == 'mobile-nav';
      }

      setTimeout(positionCurrentMenu,100);
    }
  };
}(jQuery));
