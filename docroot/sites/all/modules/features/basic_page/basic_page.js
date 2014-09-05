(function ($) {
  Drupal.behaviors.basic_page = {
    attach: function (context, settings) {
      $('.faq dd').hide();
      $('.faq dt').click(function(){
        $(this).next('dd').toggle('linear');
      });

      var nextClick = function(e) {
        e.preventDefault();
        newMenu = $(this).prev();
        oldMenu = $(this).closest('ul.menu');
        yPosition = $(this).parent().position().top;
        if (menuNeedsBackButton(newMenu)) {
          addBackButtonToMenu(newMenu);
        }
        $(newMenu).css({
          'top':'-' + yPosition + 'px',
          'min-height': minHeight,
          'visibility': 'visible',
        }).animate({ "left": pixelShift }, easing);

        $(oldMenu).animate({ "left": "-=" + pixelShift });
      }

      var prevClick = function(e) {
        e.preventDefault();
        if(animating) {
          return false;
        }
        animating = true;
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

      var currentPage = $('.main-nav a.active').parent(); // targets the li
      var currentMenu = $(currentPage).parent(); // targets the ul
      var backBtn = '<li><a class="prev-menu">< Back</a></li>';
      var minHeight;
      var pixelShift = '0px';
      var easing = (isMobileDevice()) ? 400 : 'fast';
      var animating = false;

      function positionCurrentMenu() {
        minHeight = $('.main-nav .section > ul.menu').height();
        $(currentMenu).parents('ul.menu').each(function() {
          parent = $(this).closest('li.expanded');
          yPosition = (parent.position()) ? parent.position().top : 0;
          // console.log(yPosition);
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
        menu.prepend('<li><a class="prev-menu" href="#">< ' + linkText + '</a></li>');
        $('.prev-menu').click(prevClick);
      }

      function addForwardButtonToMenus() {
        $('li.expanded').append('<a class="next-menu" href="#">></a>');
        $('.next-menu').click(nextClick);
      }

      function isMobileDevice() {
        if ( /Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent) ) {
          return true;
        }
        return false;
      }

      setTimeout(positionCurrentMenu,100);

    }
  };
}(jQuery));
