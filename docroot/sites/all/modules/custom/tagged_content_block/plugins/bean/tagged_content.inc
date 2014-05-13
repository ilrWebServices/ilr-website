<?php
/**
 * @file
 * Bean: Tag-based content block bean plugin.
 */

class TaggedContentBean extends BeanPlugin {
  protected $queries_executed = array();
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
      '#options' => TaggedContentBean::get_enabled_content_types(),
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

    return $form;
  }

  public function validate($form, &$form_state) {
    if (empty($form['tags'])) {
      form_set_error('tags', 'A tag is required.');
    }

    if ($form['records_shown'] <= 0) {
      form_set_error('records_shown', 'Records shown should be greater than zero.');
    }
  }

  /**
   * Displays the bean.
   */
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {
    // Get the taxonomy term tids
    $tids = TaggedContentBean::get_taxonomy_tids_from_names($bean->tags);

    // Set up the query
    $query = new EntityFieldQueryDeduped();
    $query
      ->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', $bean->content_types, 'IN')
      ->propertyCondition('status', 1)
      ->range(0, $bean->records_shown);

    // Add a condition to the form for inclusive/exclusive
    $exclusive = ($bean->query_type == 'exclusive') ? TRUE : FALSE;

    if ($exclusive){
      foreach ($tids as $tid) {
        $query->fieldCondition('field_tags', 'tid', $tid, '=');
      }
    }
    else {
      $query->fieldCondition('field_tags', 'tid', $tids, 'IN');
    }

    // Determine if the query should respect "sticky" status
    if($bean->sticky) {
      $query->propertyOrderBy('sticky', 'DESC');
    }

    // Figure out if we need to reorder the query
    if($bean->order_by == 'random') {
      $query->addTag('random');
    } elseif ($bean->order_by == 'date') {
      $query->propertyOrderBy('created', 'DESC');
    }

    $result = $query->execute();

    if (empty($result)) {
      $content['nodes'] = array();
    }
    else {
      $counter = 0;

      foreach ($result['node'] as $node) {
        $node = node_load($node->nid, $node->vid);
        $content['nodes'][$node->nid] = node_view($node, 'teaser');
        $counter++;
      }
    }

    $content['nodes']['#weight'] = '-1';
    array_push($this->queries_executed, $bean->bid);
    return $content;
  }

  private function get_taxonomy_tids_from_names($tag_string) {
    $tag_array = array_map('trim', explode(',', $tag_string));
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
  }

  private function get_enabled_content_types() {
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
}
