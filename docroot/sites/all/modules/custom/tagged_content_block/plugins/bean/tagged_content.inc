<?php
/**
 * @file
 * Bean: Tag-based content block bean plugin.
 */

class TaggedContentBean extends BeanPlugin {
  private $bean;

  /**
   * Declares default block settings.
   * 'type' value determines whether tag query should be inclusive or exclusive
   */
  public function values() {
    $values = array(
      'records_shown' => 5,
      'tags' => FALSE,
      'query_type' => 'exclusive',
      'content_types' => array(),
      'order_by' => 'date',
      'sticky' => 0,
      'featured' => 0,
    );

    return array_merge(parent::values(), $values);
  }

  /**
   * Builds extra settings for the block edit form.
   */
  public function form($bean, $form, &$form_state) {
    $form = array();

    $form['records_shown'] = array(
      '#type' => 'textfield',
      '#title' => t('Records shown'),
      '#size' => 5,
      '#default_value' => $bean->records_shown,
      '#required' => TRUE,
    );

    $form['content_types'] = array(
      '#type' => 'checkboxes',
      '#options' => $this->getEnabledContentTypes(),
      '#default_value' => $bean->content_types,
      '#title' => t('Which content types do you want to include?'),
    );

    $form['tags'] = array(
      '#type' => 'textfield',
      '#title' => t('Tags'),
      '#autocomplete_path' => 'taxonomy/autocomplete/field_tags',
      '#description' => t("Enter tag(s), separated by commas"),
      '#size' => 60,
      '#maxlength' => 60,
      '#default_value' => $bean->tags,
    );

    $form['query_type'] = array(
      '#type' => 'radios',
      '#title' => t('Tag filtering'),
      '#default_value' => $bean->query_type,
      '#options' => array('inclusive' => 'Any', 'exclusive' => 'All'),
      '#description' => t('Select content with all the chosen tags or any of them?'),
    );

    $form['order_by'] = array(
      '#type' => 'select',
      '#options' => array('date' => 'by date', 'random' => 'randomly'),
      '#default_value' => $bean->order_by,
      '#title' => t('How do you want to order the items?'),
    );

    $form['sticky'] = array(
      '#type' => 'checkbox',
      '#title' => t('Respect "sticky" status of content?'),
      '#default_value' => $bean->sticky,
    );

    $form['featured'] = array(
      '#type' => 'checkbox',
      '#title' => t('Only include featured content? (Use this for the highlighted region.)'),
      '#default_value' => $bean->featured,
    );

    return $form;
  }

  public function validate($form, &$form_state) {
    if (empty($form['tags'])) {
      form_set_error('tags', 'A tag is required.');
    }

    if ($form['records_shown'] <= 0) {
      form_set_error('records_shown', 'Records shown should be greater than zero.');
    }

    if ($form['featured'] && $form['records_shown'] > 3) {
      form_set_error('state', t("Currently you can feature up to 3 items at a time."));
    }
  }

  /**
   * Displays the bean.
   */
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {
    $this->bean = $bean;
    $this->removeReferencedContent();
    // Dedupe the query unless it's a mega menu item
    $query = ($view_mode == 'mega_menu_item')
      ? new EntityFieldQuery()
      : new EntityFieldQueryDeduped();

    $result = $this->formulateQuery($query, $bean->records_shown);

    if (empty($result)) {
      $content = array();
    }
    else {
      $count = 1;
      foreach ($result['node'] as $node) {
        $node = node_load($node->nid, $node->vid);
        $content['nodes'][$node->nid] = node_view($node, 'teaser');
        $node->show_featured = $bean->featured;
        // 'show_featured' status can be acted upon as the content gets rendered, as we do in tagged_content_block_preprocess_node().
        $node->siblings = $bean->records_shown - 1;
        $node->position = $count;
        $node->tagged_content = TRUE;
        $count++;
      }
      // Add the item count to the bean for theming data-attributes
      // See ilr_theme_preprocess_block
      $bean->item_count = $bean->records_shown;
    }

    return $content;
  }

  /**
   * Returns the selected content types fom tagged_content_block_admin()
   */
  private function getEnabledContentTypes() {
    $options = array();
    $content_types = node_type_get_names();
    $enabled_types = array_values(variable_get('tagged_content_block_enabled_bundles', ''));
    foreach ($content_types as $machine_name => $name) {
      if (in_array($machine_name, $enabled_types,true)) {
        $options[$machine_name] = $name;
      }
    }

    return $options;
  }

  /**
   * Finds all entities referenced by promos in a bean
   * and adds them to the EntityFieldQueryDeduped retrieved_nids
   */
  private function removeReferencedContent() {
    // Check to see if we've already queried referenced content for this bean
    if(!isset($this->bean->referenced_nids)) {
      $query = new EntityFieldQuery();

      $result = $this->formulateQuery($query, 50);

      if (!empty($result)) {
        $referenced_nids = array();
        foreach ($result['node'] as $node) {
          if ($node->type == "promo") {
            $node = node_load($node->nid, $node->vid);
            if (count($node->field_internal_link)) {
              $nid = $node->field_internal_link[LANGUAGE_NONE][0]['target_id'];
              $referenced_nids[$nid] = $nid;
            }
          }
        }
        $this->bean->referenced_nids = $referenced_nids;
        EntityFieldQueryDeduped::addToRetrievedNids(array_keys($referenced_nids));
      }
    }
  }

  /**
   * Sets the query parameters whether an EntityFieldQuery
   * or an EntityFieldQueryDeduped
   * Keeps logic DRY after addition of removeReferencedContent()
   */
  private function formulateQuery(&$query, $count) {
    $query
      ->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', $this->bean->content_types, 'IN')
      ->propertyCondition('status', 1)
      ->range(0, $count);

    // Add a condition to the form for inclusive/exclusive
    $exclusive = ($this->bean->query_type == 'exclusive') ? TRUE : FALSE;

    $tids = $this->getTaxonomyIds();
    if (!empty($tids)) {
      if ($exclusive) {
        foreach ($tids as $tid) {
          $query->fieldCondition('field_tags', 'tid', $tid, '=');
        }
      }
      else {
        $query->fieldCondition('field_tags', 'tid', $tids, 'IN');
      }
    }

    // Determine if the query should respect "sticky" status
    if($this->bean->sticky) {
      $query->propertyOrderBy('sticky', 'DESC');
    }

    // Determine if the query is limited to featured content
    if($this->bean->featured) {
      $query->propertyCondition('featured', 1, '=');
    }

    // Figure out if we need to reorder the query
    if($this->bean->order_by == 'random') {
      $query->addTag('random');
    } elseif ($this->bean->order_by == 'date') {
      $query->propertyOrderBy('created', 'DESC');
    }

    return $query->execute();
  }

  /**
   * Returns the $bean objects' taxonomy ids (if set) or sets them (if not)
   */
  private function getTaxonomyIds() {
    if (!isset($this->bean->tids)) {
      $this->bean->tids = $this->getTaxonomyIdsFromNames();
    }
    return $this->bean->tids;
  }

  /**
   * Returns the taxonomy ids for the tags vocabulary based on the terms
   */
  private function getTaxonomyIdsFromNames() {
    $tag_array = array_map('trim', explode(',', $this->bean->tags));
    // $tag_array = str_replace(' ', '-', $tag_array); // removing since this broke other pages
    $vocabulary = taxonomy_vocabulary_machine_name_load('tags');
    $query = new EntityFieldQuery;

    $result = $query
      ->entityCondition('entity_type', 'taxonomy_term')
      ->propertyCondition('vid', (int) $vocabulary->vid, '=')
      ->propertyCondition('name', $tag_array, 'IN')
      ->execute();

    if ($result) {
      $tids = array_keys($result['taxonomy_term']);
      return $tids;
    }
    return array();
  }
}
