/**
 * @file
 * Misc Javascript functions
 */
$ = jQuery;
// ilrThemeFiltersSelectAllNone will trigger when Better Exposed Filters "Add select all/none links" is checked.
Drupal.behaviors.ilrThemeFiltersSelectAllNone = {
  attach: function (context) {

    /*
     * Add Select all/none links to specified checkboxes
     */
    var links = $('.bef-toggle');

    if (links.length) {
      // Remove default event for the link.
      links.off('click');
      var selNone = Drupal.t('Clear Selection');

      $.each(links, function (index, link) {
        $(link).on('click.ilrtheme', function (event) {
          // Don't actually follow the link...
          event.preventDefault();
          event.stopPropagation();

          if (selNone == $(this).text()) {
            // Unselect all the checkboxes
            $(this)
              .html('')
              .siblings('.bef-checkboxes, .bef-tree')
              .find('.form-item input:checkbox').each(function () {
                $(this).attr('checked', false);
                //_bef_highlight(this, context);
              })
              .end()

              // attr() doesn't trigger a change event, so we do it ourselves. But just on
              // one checkbox otherwise we have many spinning cursors
              .find('input[type=checkbox]:first').change()
            ;
          }
        });
      });
      var selected = $('.form-checkboxes.bef-select-all-none.bef-processed');
      // Add link to the page for each set of checkboxes.
      selected
        .each(function(index) {
          $('input:checkbox', this).change(function() {
            var checkbox_container = $(this).parents('.form-checkboxes.bef-select-all-none.bef-processed');
            if(this.checked) {
              checkbox_container.find('.bef-toggle').html(selNone);
            }
            else {
              if ($('input:checkbox:checked', checkbox_container).length == 0) {
                checkbox_container.find('.bef-toggle').html('');
              }
            }
          });

          // If all checkboxes are already checked by default then switch to Select None
          if ($('input:checkbox:checked', this).length >= 1) {
            $('.bef-toggle', this).html(selNone);
          }
          else {
            $('.bef-toggle', this).html('');
          }
        })
      ;


    }
  }                   // attach: function() {
};                    // Drupal.behaviors.ilrThemeFiltersSelectAllNone {
