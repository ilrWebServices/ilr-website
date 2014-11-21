(function ($) {
  Drupal.behaviors.ilr_alumni_events = {
    attach: function (context, settings) {
      if (Drupal.settings.ilr_alumni_events) {
        var memberPrice = Drupal.settings.ilr_alumni_events.memberPrice;
        var nonMemberPrice = Drupal.settings.ilr_alumni_events.nonMemberPrice;

        function updatePrices() {
          $('.alumni-event-pricing').html('');
          $('#edit-field-tickets-for-aa-members-und').after('<span class="alumni-event-pricing member-price"> x $'+memberPrice+' = $'+getMemberCost()+'</span>');
          $('#edit-field-tickets-for-non-members-und').after('<span class="alumni-event-pricing non-member-price"> x $'+nonMemberPrice+' = $'+getNonMemberCost()+'</span>');
          $('span.total-cost').html(getTotalCost());
        }

        function getMemberCost() {
          return $('#edit-field-tickets-for-aa-members-und').val() * memberPrice;
        }

        function getNonMemberCost() {
          return $('#edit-field-tickets-for-non-members-und').val() * nonMemberPrice;
        }

        function getTotalCost() {
          return getMemberCost() + getNonMemberCost();
        }

        $('#edit-field-tickets-for-aa-members-und').change(function(){
          updatePrices();
        });

        $('#edit-field-tickets-for-non-members-und').change(function(){
          updatePrices();
        });

        updatePrices();
      }
    }
  };
}(jQuery));
