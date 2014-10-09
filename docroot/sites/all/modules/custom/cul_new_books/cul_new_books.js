(function ($) {
  Drupal.behaviors.cul_new_books = {
    attach: function (context, settings) {
      var currentCategoryKey;
      var categories = {};
      var subcategories = {};
      $('#content h2').each(function(){
        className = $(this).parent().attr('class');
        className = className.replace('new-book-category ','');
        bookCount = $('h3.' + className).length;
        categoryTitle = $(this).text();
        subcategoryKey = categoryTitle.substr(0, categoryTitle.indexOf('.'));
        parent = categoryTitle.substr(0, 1);
        if (parent != currentCategoryKey) {
          currentCategoryKey = parent;
          categories[currentCategoryKey] = [];
        }
        subcategoryData = {category:categoryTitle, bookCount: bookCount};
        categories[currentCategoryKey][subcategoryKey] = subcategoryData;
      });
      generateSelectMenu(categories);

      function generateSelectMenu(categories) {
        markup = '<select data-placeholder="Filter by category" class="chosen-select" multiple>';
        currentPrimaryCategory = '';
        first = true;
        for(var primaryCategory in categories){
          options = '';
          for (var subcategory in categories[primaryCategory]) {
            if (primaryCategory != currentPrimaryCategory && primaryCategory != subcategory) {
              if(!first) { // Don't close the optgroup unless there is one to close
                options += "</optgroup>";
              }
              first = false;
              currentPrimaryCategory = primaryCategory;
              options += "<optgroup label='"+ currentPrimaryCategory + ". " + getCategoryTitleFromKey(currentPrimaryCategory) +"'>";
            } else if (primaryCategory == subcategory) { // No subcategories, so close the last group since this item is not in an optgroup
              options += "</optgroup>";
            }
            category = categories[primaryCategory][subcategory].category;
            count = categories[primaryCategory][subcategory].bookCount;
            options += "<option>" + category + " (" + count + ")</option>";
          }
          markup += options;
        }
        markup += '</select>';
        $(markup).insertBefore($('#content h2:first').parent());
      }

      function getCategoryTitleFromKey(key) {
        return Drupal.settings.cul_new_books.allCategories[key];
      }

      function getClassFromString(text) {
        selectClass = text.substr(0, text.indexOf('(') - 1);
        selectClass = selectClass.replace(/\./g, '');
        selectClass = selectClass.replace(/\s+/g, '-');
        selectClass = selectClass.toLowerCase();
        return selectClass;
      }

      $(".chosen-select").chosen().change(function(evt, params){
        $('.new-book-category').hide();
        $('li.search-choice span').each(function(){
          selectedClass = getClassFromString($(this).text());
          $('div.' + selectClass).show();
          if (deselected = params.deselected) {
            if ($('li.search-choice span').length == 1) {// Show all items
              $('.new-book-category').show();
            } // Remove the deselected items
            else if (selectClass == getClassFromString(deselected)) {
              $('div.' + selectClass).hide();
            }
          }
        });
      });
    }
  };
}(jQuery));
