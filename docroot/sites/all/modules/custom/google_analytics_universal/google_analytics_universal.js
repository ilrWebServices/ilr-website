/**
 * @file
 * Adds custom event tracking for file downloads
 * Borrows code from the Drupal Google Analytics module
 * https://www.drupal.org/project/google_analytics
 */

(function ($) {
  Drupal.behaviors.google_analytics_universal = {
    attach: function (context, settings) {
      // Extensions to track (most N/A except as external links)
      var tracked_extensions = '7z|aac|arc|arj|asf|asx|avi|bin|csv|doc(x|m)?|dot(x|m)?|exe|flv|gif|gz|gzip|hqx|jar|jpe?g|js|mp(2|3|4|e?g)|mov(ie)?|msi|msp|pdf|phps|png|ppt(x|m)?|pot(x|m)?|pps(x|m)?|ppam|sld(x|m)?|thmx|qtm?|ra(m|r)?|sea|sit|tar|tgz|torrent|txt|wav|wma|wmv|wpd|xls(x|m|b)?|xlt(x|m)|xlam|xml|z|zip';

      /**
       * Check whether this is a download URL or not.
       */
      var isDownload = function (url) {
        var isDownload = new RegExp("\\.(" + tracked_extensions + ")([\?#].*)?$", "i");
        return isDownload.test(url);
      };

      /**
       * Extract the download file extension from the URL.
       */
      var getDownloadExtension = function (url) {
        var extractDownloadextension = new RegExp("\\.(" + Drupal.settings.googleanalytics.trackDownloadExtensions + ")([\?#].*)?$", "i");
        var extension = extractDownloadextension.exec(url);
        return (extension === null) ? '' : extension[1];
      };

      /**
       * Extract the relative internal URL from an absolute internal URL.
       */
      var getPageUrl = function (url) {
        var extractInternalUrl = new RegExp("^(https?):\/\/" + window.location.host, "i");
        return url.replace(extractInternalUrl, '');
      };

      // Checks all link clicks to see if it's a downloadable file
      if (!$('body').hasClass('page-admin')) {
        $('a').on('click', function(event) {
          if (isDownload(this.href)) {
            ga("send", "event", "Downloads", getDownloadExtension(this.href).toUpperCase(), getPageUrl(this.href));
          }
        });
      }
    }
  };
})(jQuery);
