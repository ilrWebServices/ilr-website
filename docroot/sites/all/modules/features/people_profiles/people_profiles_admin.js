(function ($) {
  Drupal.behaviors.custom = {
    attach: function (context, settings) {
      CKEDITOR.on("instanceReady", function(ev) {
        var editor = ev.editor;
          editor.on("focus", function(ev) {
            if(editor.name.indexOf('edit-field-ai') === 0) {
              alert('Please edit this information in Activity Insight');
            }

          });
      });
    }
  };
}(jQuery));
