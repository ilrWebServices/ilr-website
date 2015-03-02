
jQuery(document).ready(function () {


  var element = jQuery('section.search-home').detach();
  jQuery('div.region-content').prepend(element);

    /////////////////////////////
    // Home search filter
    // Toggle filter select list


     var $searchFilterList = jQuery('#filter-search-nav');
     var $isFilterOpen = false;

     jQuery('div.filter-search').click(function(e) {
         e.preventDefault();

         if (!$isFilterOpen) {

             //Change button filter state to selected

             //jQuery(this).find('span').removeClass('glyphicon-chevron-down');
             //jQuery(this).find('span').addClass('glyphicon-chevron-up');

             //Reveal filter select list
             $searchFilterList.css('display','block');

             $isFilterOpen = true;

         } else {
             //Change button filter state to default

             //jQuery(this).find('span').removeClass('glyphicon-chevron-up');
             //jQuery(this).find('span').addClass('glyphicon-chevron-down');

             //Hide filter select list
             $searchFilterList.css('display','none');

             $isFilterOpen = false;

         }
    });

     //
     //
     // Collect users' selection
     //
     //
        var $selectedFilter = "Library";

       jQuery('#filter-search-nav li').each(function(index){
           jQuery(this).click(function(ev){

              ev.preventDefault();

              //console.log(jQuery(this).text());
              //Selected filter feedback
              jQuery('.search-filter-selected').text(jQuery(this).text()).fadeIn('slow');
              jQuery('input[name="classgroup"]').val('');

              jQuery('.filter-search .active').text(jQuery(this).text());
              jQuery('#edit_keys').attr('placeholder', jQuery(this).find('a').attr('title'));

              $selectedFilter = jQuery(this).text();

              //console.log(jQuery(this).parent());

               //Hide filter select list
               //$searchFilterList.css('display','none');

               //console.log($searchFilterList);

               //Change button filter state to default
               //jQuery('a.filter-search').css('background','url(../../themes/vivo-cornell/images/filteredSearch.gif) no-repeat right top');
               //jQuery('a.filter-search').removeClass('glyphicon-chevron-up');
               //jQuery('a.filter-search').addClass('glyphicon-chevron-down');


               $isFilterOpen = false;


           });

       });




       //When focus, hide filter select list and change filter button state to default
       jQuery('input.search-homepage').focus(function(){

           jQuery('input.search-homepage').attr("value","");
           jQuery('input.search-homepage').css({
               'text-align' : 'left',
               'opacity' : 1
           });

           if (!$isFilterOpen) {

               $isFilterOpen = false;

           }else {

                //Hide filter select list
                    jQuery('#filter-search-nav').hide();

                    //Change button filter state to default
                    //jQuery('a.filter-search').css('background','url(../../themes/vivo-cornell/images/filteredSearch.gif) no-repeat right top');
                    //jQuery('div.filter-search').find('span').removeClass('glyphicon-chevron-up');
                    //jQuery('div.filter-search').find('span').addClass('glyphicon-chevron-down');

                    $isFilterOpen = false;

             }

       });




       jQuery( '#search' ).submit(function(ev) {

          var send = jQuery('.search-homepage').val() + '    ' + $selectedFilter;
          console.log(send);

          switch ($selectedFilter) {

                case 'Library':
                    jQuery(this).attr("action", 'https://search.library.cornell.edu');
                    break;

                case 'Library Catalog':
                    jQuery(this).attr("action", 'https://newcatalog.library.cornell.edu/?utf8=%E2%9C%93&search_field=all_fields');
                    break;

                case 'WorldCat':
                    jQuery(this).attr("action", 'https://cornell.worldcat.org/search?qt=wc_org_cornell');
                    break;

                case 'Site Search':

                    jQuery(this).attr("method", 'get');
                    jQuery('input.search-homepage').attr("name",'keys');
                    jQuery(this).attr("action", '/search/node/');
                    break;
            }



          //jQuery(this).attr("action", 'https://search.library.cornell.edu');

        });




});



