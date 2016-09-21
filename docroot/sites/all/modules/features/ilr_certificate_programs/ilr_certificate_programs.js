jQuery(document).ready(function() {
  jQuery('.node-certificate-programs .field-name-field-course h2 a').click(function() {
    if (jQuery(this).closest('article').find('.group-main-content.accordion').hasClass('show')) {
      jQuery(this).closest('article').find('.group-main-content.accordion').removeClass('show');
    }
    else {
      jQuery(this).closest('article').find('.group-main-content.accordion').addClass('show');
    }
    return false;
  });
});
