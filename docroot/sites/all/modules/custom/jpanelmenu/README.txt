jPanelMenu 1.x for Drupal 7.x
---------------------------
This module intergrates the jPanelMenu jQuery plugin with your Drupal site.
For more information (demo) about jPanelMenu see its project pages
- http://jpanelmenu.com/
- https://github.com/acolangelo/jPanelMenu


Installation
------------

** jQuery v1.7 > **
This plugin requires jQuery 1.7 or later.
An easy way to do this is using the jquery_update module http://drupal.org/project/jquery_update

** jPanelMenu library v1.3 **

You will need to download the jquery.jpanelmenu.js library to your libraries directory 
sites/all/libraries/jpanelmenu/jquery.jpanelmenu.js

The library is available here : https://github.com/acolangelo/jPanelMenu


** Styling **
There is no styling provided by this plugin / module.

Basic usage
-----------
configuration = admin/config/user-interface/jpanelmenu

jPanelMenu takes two arguments 
- target
- trigger 

*target* element(s) are cloned into the #jPanelMenu-menu 
*trigger* this toggles the display of the #jPanelMenu-menu

By default the 
target = #main-menu
trigger = .jpanel-trigger


For developers
--------------

(@TODO)

### advanced jPanelMenu configuration options (Currently in development)
- Left / Right
- Sizing
- Animation

(@ROADMAP) 

### Context Intergration
- Provide compatibility to provide jPanelMenu contextually based on screen resolution 

### Make file
- Provide method to download the library automagically 

Maintainers
-----------
- gavinhughes (Gavin Hughes)






