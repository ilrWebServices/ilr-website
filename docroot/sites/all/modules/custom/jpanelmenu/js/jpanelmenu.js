/**
 * @file
 * jpanelmenu.js
 * jpanelmenu JS enabler.
 */

(function($){
  $(document).ready(function(){
    var jPM = $.jPanelMenu({
      menu: Drupal.settings.jpanelmenu.target,
      trigger: Drupal.settings.jpanelmenu.trigger,
      direction: Drupal.settings.jpanelmenu.direction,
      openPosition: Drupal.settings.jpanelmenu.openPosition,
      excludedPanelContent: 'header, #admin-menu, noscript, script',
      keyboardShortcuts: false,
    });

    // If the jPanelMenu is showing in a narrow window on  desktop browser and the user
    // widens their window beyond the maximum visibility breakpoint for jPanel, hide the jPanelMenu
    $(window).on("resize", function() {
      if ($('header').attr('data-eq-state') == 'regular-nav') {
        jPM.close();
      }
    });

    $(document).on('click', jPM.menu + ' li a', function(e){
        if ( jPM.isOpen() && $(e.target).attr('href').substring(0, 1) == '#' ) { jPM.close(); }
    });

    // Turn on the jPanelMenu
    jPM.on();
  });
})(jQuery);
