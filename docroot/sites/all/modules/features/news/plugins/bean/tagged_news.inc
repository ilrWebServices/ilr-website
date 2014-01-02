<?php
/**
 * @file
 * Bean: Tag-based news block bean plugin.
 */

class TaggedNewsBean extends BeanPlugin {
  /**
   * Declares default block settings.
   */
  public function values() {
    $values = array(
      'records_shown' => FALSE,
      'tags' => FALSE,
    );

    return array_merge(parent::values(), $values);
  }

  /**
   * Builds extra settings for the block edit form.
   */
  public function form($bean, $form, &$form_state) {
    $form = array();

    // Set default number of records shown
    if (!$records_shown = $bean->records_shown) {
      $records_shown = 5;
    }

    // Set default list of tags
    if (!$tags = $bean->tags) {
      $tags = false;
    }

    // Create list of new tags for radio options
    $options = array();
    $vocabulary = taxonomy_vocabulary_machine_name_load('news_category');

    $query = new EntityFieldQuery();
    $result = $query
      ->entityCondition('entity_type', 'taxonomy_term')
      ->propertyCondition('vid', (int) $vocabulary->vid, '=')
      ->execute();

    if ($result) {
      $tids = array_keys($result['taxonomy_term']);
      $terms = taxonomy_term_load_multiple($tids);

      foreach ($terms as $term) {
        $options[$term->tid] = $term->name;
      }
    }
    else {
      drupal_set_message(t('There are no tags available. Please try again later when there are some tagged news items.'), 'warning');
    }

    $form['records_shown'] = array(
      '#type' => 'textfield',
      '#title' => t('Records shown'),
      '#size' => 5,
      '#default_value' => $records_shown,
      '#required' => TRUE,
    );

    $form['tags'] = array(
      '#type' => 'select',
      '#default_value' => $tags,
      '#title' => 'Tag',
      '#options' => $options,
    );

    return $form;
  }

  public function validate($values, &$form_state) {
    if (empty($values['tags'])) {
      form_set_error('tags', 'A tag is required.');
    }

    if ($values['records_shown'] <= 0) {
      form_set_error('records_shown', 'Records shown should be greater than zero.');
    }
  }

  /**
   * Displays the bean.
   */
  public function view($bean, $content, $view_mode = 'default', $langcode = NULL) {
    $query = new EntityFieldQuery();

    $query
      ->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'news_item')
      ->propertyCondition('status', 1)
      ->fieldCondition('field_news_categories', 'tid', $bean->tags)
      ->fieldOrderBy('field_published_date', 'value', 'DESC')
      ->range(0, $bean->records_shown);

    $result = $query->execute();

    if (empty($result)) {
      $content['nodes'] = array();
    }
    else {
      $counter = 0;

      foreach ($result['node'] as $node) {
        $node = node_load($node->nid, $node->vid);
        $node->tagged_news_zebra = ($counter % 2) ? 'odd' : 'even';
        $content['nodes'][$node->nid] = node_view($node, 'teaser');
        $counter++;
      }
    }

    $content['nodes']['#weight'] = '-1';

    return $content;
  }
}
