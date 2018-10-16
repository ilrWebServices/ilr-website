(function ($) {
  Drupal.behaviors.ilr_alumni_events = {
    attach: function (context, settings) {
      if (Drupal.settings.ilr_alumni_events) {
        var memberPrice = Drupal.settings.ilr_alumni_events.memberPrice;
        var nonMemberPrice = Drupal.settings.ilr_alumni_events.nonMemberPrice;
        var memberCount = $('select[name="field_tickets_for_aa_members[und]"]').val();
        var nonMemberCount = $('select[name="field_tickets_for_non_members[und]"]').val();
        var recentGradDiscount = $('input[name="field_discount_eligible[und]"]').is(':checked');
        var discountedGradCost = 100;
        var memberTotal, nonMemberTotal;

        function updatePrices() {
          $('.alumni-event-pricing').html('');
          updateMemberPriceDisplay();
          updateNonMemberPriceDisplay();
          updateTotalPrice();
        }

        function getMemberCost() {
          if (memberCount == '_none') {
            memberCount = 0;
          }
          memberTotal = memberCount * memberPrice;
          if (memberCount > 0 && recentGradDiscount) {
            applyRecentGradDiscount();
          }
          return memberTotal;
        }

        function getNonMemberCost() {
          nonMemberTotal = 0;
          if (nonMemberCount > 0) {
            var diffCount = nonMemberCount - memberCount; 2 - 1
            var discounted = (diffCount <= 0)
              ? nonMemberCount * memberPrice
              : memberTotal;
            var remaining = (diffCount > 0)
              ? diffCount * nonMemberPrice
              : 0;
            nonMemberTotal = discounted + remaining;
          }
          return nonMemberTotal;
        }

        function applyRecentGradDiscount() {
          if (memberCount == 1) {
            memberTotal = discountedGradCost; // Hard-coding price
          }
          else {
            memberTotal = discountedGradCost + (memberPrice * (memberCount - 1));
          }
        }

        function getTotalCost() {
          return getMemberCost() + getNonMemberCost();
        }

        function updateMemberPriceDisplay() {
          if (memberPrice == 0) {
            content = 'Free';
          } else {
            content = 'x $'+memberPrice+' (minus discount if applicable) = $'+getMemberCost();
          }
          $('select[name="field_tickets_for_aa_members[und]"]').after(' <span class="alumni-event-pricing member-price">'+content+'</span>');
        }

        function updateNonMemberPriceDisplay() {
          if (nonMemberCount > 0) {
            if (nonMemberPrice == 0) {
              content = 'Free';
            } else {
              if (memberCount) {
                var diffCount = nonMemberCount - memberCount;
                if (diffCount <= 0) { // All non-members get discount
                  content = nonMemberCount + ' ticket(s) x $' + memberPrice + ' = $'+ nonMemberCount * memberPrice + ' <br />';
                }
                else { // Some get discount, some pay higher rate
                  content = memberCount + ' ticket(s) x $' + memberPrice + ' = $'+ getMemberCost() + ' <br />';
                  content += diffCount + ' ticket(s) x $' + nonMemberPrice+' = $'+ diffCount * nonMemberPrice;
                }
              }
              else { // None get discount
                content = nonMemberCount + ' ticket(s) x $' + nonMemberPrice+' = $'+getNonMemberCost();
              }
            }
          }
          else {
            content = '';
          }
          $('select[name="field_tickets_for_non_members[und]"]').after(' <span class="alumni-event-pricing non-member-price">'+content+'</span>');
        }

        function updateTotalPrice() {
          cost = getTotalCost();
          if (memberCount < 1 && nonMemberCount < 1) {
            content = 'Please choose tickets';
          }
          else {
            content = (cost == 0) ? 'Free' : '$' + cost;
          }

          $('span.total-cost').html(content);
        }

        updatePrices();

        $('select[name="field_tickets_for_aa_members[und]"]').change(function(){
          memberCount = $('select[name="field_tickets_for_aa_members[und]"]').val();
          updatePrices();
        });

        $('select[name="field_tickets_for_non_members[und]"]').change(function(){
          nonMemberCount = $('select[name="field_tickets_for_non_members[und]"]').val();
          updatePrices();
        });

        $('input[name="field_discount_eligible[und]"]').change(function(){
          recentGradDiscount = $('input[name="field_discount_eligible[und]"]').is(':checked');
          updatePrices();
        });
      }
    }
  };
}(jQuery));
