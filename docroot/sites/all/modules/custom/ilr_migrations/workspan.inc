<?php
/**
 * @file
 * Migration class for Workspan Content
 */

class WorkspanMigration extends Migration {
  public function __construct() {
    parent::__construct();
    $this->description = t('Workspan Docs');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'pub_date' => array(
          'type' => 'varchar',
          'length' => 20,
          'not null' => TRUE,
          //'description' => 'category ID',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );
    $this->source = new MigrateSourceJSON(
      DRUPAL_ROOT . '/../migration_data/workspan.json',
      'pub_date'
    );
    $this->destination = new MigrateDestinationNode('workspan');
    $this->addFieldMapping('uid')
      ->defaultValue(1);
    $this->addFieldMapping('title', 'article_title');
    $this->addFieldMapping('field_headline', 'headline');
    $this->addFieldMapping('field_youtube_video', 'yt_video_id');
  }
  /*
  public function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
   //$row->yt_video_id = array('input'=> 'http://www.youtube.com/watch?v=' . $row->yt_video_id);
    $that = 'ted';
    return TRUE;
  }
  */
 public function prepare(stdClass $node, stdClass $row) {
    $url = 'http://www.youtube.com/watch?v=' . $row->yt_video_id;
    $field_value = array(
      'input' => $url,
      'video_id' => $row->yt_video_id,
    );
    $node->field_youtube_video[$node->language][0] = $field_value;
  }
} 