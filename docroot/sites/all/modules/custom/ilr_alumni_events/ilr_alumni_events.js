(function ($) {
  Drupal.behaviors.ilr_alumni_events = {
    attach: function (context, settings) {
      if (Drupal.settings.ilr_alumni_events) {
        var memberPrice = Drupal.settings.ilr_alumni_events.memberPrice;
        var nonMemberPrice = Drupal.settings.ilr_alumni_events.nonMemberPrice;

        function updatePrices() {
          $('.alumni-event-pricing').html('');
          updateMemberPrice();
          updateNonMemberPrice();
          updateTotalPrice();
        }

        function getMemberCost() {
          return $('select[name="field_tickets_for_aa_members[und]"]').val() * memberPrice;
        }

        function getNonMemberCost() {
          return $('select[name="field_tickets_for_non_members[und]"]').val() * nonMemberPrice;
        }

        function getTotalCost() {
          return getMemberCost() + getNonMemberCost();
        }

        function updateMemberPrice() {
          if (memberPrice == 0) {
            content = 'Free';
          } else {
            content = 'x $'+memberPrice+' = $'+getMemberCost();
          }
          $('select[name="field_tickets_for_aa_members[und]"]').after(' <span class="alumni-event-pricing member-price">'+content+'</span>');
        }

        function updateNonMemberPrice() {
          if (nonMemberPrice == 0) {
            content = 'Free';
          } else {
            content = 'x $'+nonMemberPrice+' = $'+getNonMemberCost();
          }
          $('select[name="field_tickets_for_non_members[und]"]').after(' <span class="alumni-event-pricing non-member-price">'+content+'</span>');
        }

        function updateTotalPrice() {
          cost = getTotalCost();
          content = (cost == 0) ? 'Free' : '$' + cost;
          $('span.total-cost').html(content);
        }

        updatePrices();

        $('select[name="field_tickets_for_aa_members[und]"]').change(function(){
          updatePrices();
        });

        $('select[name="field_tickets_for_non_members[und]"]').change(function(){
          updatePrices();
        });
      }
    }
  };
}(jQuery));
