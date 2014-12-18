<?php
/**
 * @file
 * Migration class for Workspan Content
 *
 * Before running this migration the Drupal variable workspan_file_dir must be set to the location of the import files.
 * Set via drush: drush vset workspan_file_dir '/my/files'
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
    $this->addFieldMapping('field_published_date', 'pub_date');
    $this->addFieldMapping('title', 'article_title');
    $this->addFieldMapping('field_headline', 'headline');
    $this->addFieldMapping('field_thumbnail', 'thumbnail_src');
    $this->addFieldMapping('field_thumbnail:alt', 'thumbnail_alt');
    $this->addFieldMapping('field_thumbnail:title', 'thumbnail_alt');
    $this->addFieldMapping('field_thumbnail:source_dir')
      ->defaultValue($this->getFileDir() . '/images');
    $this->addFieldMapping('field_file', 'article_pdf');
    $this->addFieldMapping('field_file:source_dir')
      ->defaultValue($this->getFileDir() . '/pdfs');
    $this->addFieldMapping('field_content', 'video_nid');
  }

  public function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    // Source contains directory structure. Import folder only has file.
    $row->thumbnail_src = $this->getSourceFileName($row->thumbnail_src);
    $row->article_pdf = $this->getSourceFileName($row->article_pdf);
    //echo 'thumb=' .  $row->thumbnail_src;
    if ($row->subhead != $row->headline) {
      // These two fields aren't both represent in Drupal because they are always the same.
      throw new MigrateException("Headline and Subhead field don't match for {$row->pub_date}");
    }
    if ($row->yt_video_id) {
      // Get Youtube Nid
      $video_ids = explode(',', $row->yt_video_id);
      $video_nids = array();
      foreach ($video_ids as $video_id) {
        $video_nid = youtube_videos_get_nid_from_video_id($video_id);
        if ($video_nid) {
          $video_nids[] = $video_nid;
        }
        else {
          watchdog('workspan_migrate', 'No node found for video: %video_id', array('%video_id' => $video_id));
        }
      }
    }


    $row->video_nid = $video_nids;
    return TRUE;
  }
  private function getFileDir(){
    // Variable can be set via drush vset to override
    $override = variable_get('workspan_file_dir', NULL);
    if ($override) {
      return $override;
    }
    $parent_folder = (isset($_ENV["AH_SITE_GROUP"]))
      ? '/files/'
      : '/../migration_data/';
    return DRUPAL_ROOT . $parent_folder . 'workspan_export/';

  }

  /**
   * Get Filename from full path.
   * @param $full_path
   */
  private function getSourceFileName($full_path) {
    $parts = explode('/', $full_path);
    return array_pop($parts);
  }

}