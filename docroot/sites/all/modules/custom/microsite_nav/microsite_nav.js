(function ($) {
  Drupal.behaviors.microsite_nav = {
    attach: function (context) {
      $(window).load(function() {
        var $items = [];
        // Load all html blocks
        $('.block-bean.html').each(function(){
          // Find h2 headings
          $(this).find('h2:first').each(function(){
            var $name = $(this).text();
            var $id = $name.replace(' ', '-').toLowerCase();
            $(this).attr('id', $id);
            $items.push({'id': $id, 'name': $name});
          });
        });
        $($items).each(function(key, item){
          $('.block-ilr-mega-menu .menu')
            .addClass('microsite-nav')
            .css({'max-width': '100%'})
            .append('<li class="menu-item"><a href="#'+item.id+'">'+item.name+'</a></li>');
        });

        // Repeated from ilt_theme.js
        // Consider refactoring
        $('.microsite-nav a').click(function(){
          var $target = $(this.hash);
          $('html, body').stop().animate({
              'scrollTop': $target.offset().top - 175
          }, 900, 'swing');
        });
      });
    }
  };
}(jQuery));
