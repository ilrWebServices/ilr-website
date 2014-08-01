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
		//Jurn on the jPanelMenu
		jPM.on();
	});
})(jQuery);