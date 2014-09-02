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

    $(window).on("resize", function() {
        if ($('#page-wrapper[data-eq-state]').attr('data-eq-state') == 'regular-nav') {
            jPM.close();
        }
    });

    //Jurn on the jPanelMenu
    jPM.on();
	});
})(jQuery);
