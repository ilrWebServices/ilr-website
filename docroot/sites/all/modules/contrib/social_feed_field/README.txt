SUMMARY
-------

The Social Feed field module creates a field that you can use in content types
for showing a collection of messages from social media channels in one big list
sorted on the date of creation.

For a full description of the module, visit the project page:
  http://drupal.org/project/social_feed_field

To submit bug reports and feature suggestions, or to track changes:
  http://drupal.org/project/issues/social_feed_field

REQUIREMENTS
------------

Imagecache External
  This module is used for displaying the images that we get from the social
  media channel. Because they are external images, and we want to be able to
  scale them. Visit the project page for more info:
  http://drupal.org/project/imagecache_external

INSTALLATION
------------

* Install as usual
* You can also enable one or more of the submodules.

CONFIGURATION
-------------

* Configure user permissions in Administration » People » Permissions:

  - Administer social feed field

    User roles with this permission are able to configure this module and
    submodules.

* Customize the setting in Configuration » Content authoring » Social feed field

  On this page you can configure multiple settings. Both the main module as the
  submodules that implement our hook have their settings displayed here.

  On this page you can setup api keys for the submodules. Keep in mind that you
  have to create them yourself. The submodules that are included in this module
  have some documentation or some help pages available for this and are shown
  in the fieldset of these channels.

  Both Twitter and Facebook require you to connect through Oauth. For both
  channels the submodules (will) provide step by step help and some
  automagical configuration.

* Add a field to a entity of the type Social Feed Field. On this field
  you can setup which channels you want to use, image styles to use and some
  default settings.


MAINTAINERS
-----------

Current maintainers:
* Fabian de Rijk (fabianderijk) - https://www.drupal.org/user/278745

This project has been sponsored by:
* Finalist
  Finalist implements Drupal CMS based on the needs of our customers:
  smart & lightweight to highly complex & sophisticated websites. Through our
  proven project approach and high involvement we are able to produce websites
  within a stipulated time period. Regardless of complexity or scale, we
  guarantee full service, a risk-free project approach, transparent pricing
  models and vendor independency.

  With 25 years of experience in creating custom software and websites we know
  the tricks of the trade. From that perspective we try to push our experience
  and knowledge back into the community through our highly skilled developers.

* Maastricht University
  This module has been initially developed for the corporate website of
  Maastricht University.