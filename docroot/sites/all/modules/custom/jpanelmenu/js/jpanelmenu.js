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
		});

    // If the jPanelMenu is showing in a narrow window on  desktop browser and the user
    // widens their window beyond the maximum visibility breakpoint for jPanel, hide the jPanelMenu
    $(window).on("resize", function() {
        if ($('#page-wrapper[data-eq-state]').attr('data-eq-state') == 'regular-nav') {
            jPM.close();
        }
    });

    // Turn on the jPanelMenu
    jPM.on();
	});
})(jQuery);
