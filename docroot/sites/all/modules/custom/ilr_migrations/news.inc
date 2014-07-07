<?php

class NewsMigration extends Migration {

  private $vid;

  public function __construct() {

  parent::__construct();
    $this->description = t('News Items');
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'ID' => array(
            'type' => 'int',
            'unsigned' => TRUE,
            'not null' => TRUE,
          )
        ),
        MigrateDestinationNode::getKeySchema()
    );

    $this->source = new MigrateSourceJSON(
      DRUPAL_ROOT . '/../migration_data/news.json',
      'ID'
    );

    $this->destination = new MigrateDestinationNode('news_item');

    $this->addFieldMapping('uid')
      ->defaultValue(1);
    $this->addFieldMapping('title','title');
    $this->addFieldMapping('field_thumbnail','thumb');
    $this->addFieldMapping('field_thumbnail:source_dir')
      ->defaultValue($this->getImageFolder());
    $this->addFieldMapping("body:format")
      ->defaultValue('full_html');

    $mappings = $this->_get_news_field_mappings();

    foreach ($mappings as $json_attr => $field_mapping) {
      if ($field_mapping == 'DNM') {
        $this->addFieldMapping(NULL,$json_attr)
          ->issueGroup(t('DNM'));
      }
      else {
        $this->addFieldMapping($field_mapping, $json_attr);
      }
    }

    $this->fieldMappings['field_tags']->separator(',');
  }

  public function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Deal with the fact that some headlines are empty
    $row->title = $this->createTitle($row);

    if (count($row->STORY_IMAGES) > 0) {
      foreach($row->STORY_IMAGES as $image_info) {
        $row->contentImageURL = $image_info->url;
      }
    }

    if (!empty($row->STORY_CONTENT)) {
      $row->STORY_CONTENT = $this->setImagePaths($row->STORY_CONTENT);
    } // full_html doesn't like empty body fields
    else {
      $row->STORY_CONTENT = "&nbsp;";
    }

    // Handle thumbnail images
    $row->thumb = $this->getThumbnail($row);

    // Add terms
    $row->FEATURED = $this->setTags($row->FEATURED);

    // Remove empty values from data
    foreach ($row as $key => $value) {
      if (empty($value)) {
        $row->$key = array();
      }
    }

    return TRUE;
  }

  private function setTags($tags) {
    $tag_array = explode(',', $tags);
    if (empty($tag_array) || !in_array('news', $tag_array)) {
      $tag_array[] = 'news';
    }
    foreach ($tag_array as $tag) {
      $term = taxonomy_get_term_by_name($tag);
      //if it doesn't exist, make it
      if ($term == array() && !empty($tag)) {
        $term = new stdClass();
        $term->name = $tag;
        $term->vid = $this->getVid();
        taxonomy_term_save($term);
      }
    }
    return implode(',', $tag_array);
  }

  private function getVid() {
    if (!isset($this->vid)) {
      $vocab = taxonomy_vocabulary_machine_name_load('tags');
      $this->vid = $vocab->vid;
    }
    return $this->vid;
  }

  private function createTitle($row) {
    return (!empty($row->HEADLINE)) ? $row->HEADLINE : $row->SHORT_HEADLINE;
  }

  private function setImagePaths($body) {
    //return str_replace('/news/images/', '/sites/default/files/', $body);
    return preg_replace("/<img[^>]+\>/i", '', $body);
  }

  private function getThumbnail($row) {
    $filename = '';
    if ($this->imageExists($row->NewsTopStoryImage_url)) {
      $filename = basename($row->NewsTopStoryImage_url);
    }
    elseif ($this->imageExists($row->contentImageURL)) {
      $filename = basename($row->contentImageURL);
    }
    else {
      $filename = basename($row->thumbnailImage_url);
    }
    return $filename;
  }

  private function imageExists($partialPath) {
    $filename = basename($partialPath);
    $filePath = $this->getImageFolder() . $filename;
    if ((is_file($filePath)) && (file_exists($filePath))) {
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

  private function getImageFolder() {
    return DRUPAL_ROOT . '/../migration_data/news_export_images/news/images/';
  }

  private function _get_news_field_mappings() {
    $mappings = array(
      "STORY_IMAGES" => 'DNM',
      "thumbnailImage_width" => 'DNM',
      "STORY_CONTENT" => 'body',
      "thumbnailImage_url" => 'DNM',
      "sidebar_image_url" => 'DNM',
      "INCLUDE_CONTACT_INFO" => 'DNM',
      "sidebar_image_id" => 'DNM',
      "CONTACT_INFO" => 'DNM',
      "NewsTopStoryImage_height" => 'DNM',
      "DATE_ADDED" => 'created',
      "CAPTION" => 'DNM',
      "INTRODUCTION" => 'body:summary',
      "sidebar_image_width" => 'DNM',
      "ID" => 'DNM',
      "FEATURED" => 'field_tags',
      "NewsTopStoryImage_url" => 'DNM',
      "HEADLINE" => 'DNM', // See createTitle();
      "DATE_LAST_MODIFIED" => 'DNM',
      "SHORT_HEADLINE" => 'field_short_title',
      "thumbnailImage_height" => 'DNM',
      "DATE_PUBLISHED" => 'field_published_date',
      "NewsTopStoryImage_width" => 'DNM',
      "NewsTopStoryImage_id" => 'DNM',
      "NAME" => 'DNM',
      "MORE_STORY_CONTENT" => 'DNM',
      "DESCRIPTION" => 'DNM',
      "TEASER" => 'DNM',
      "sidebar_image_alt" => 'DNM',
      "sidebar_image_height" => 'DNM',
      "NewsTopStoryImage_alt" => 'DNM',
      "EXTERNAL_URL" => 'field_website_url',
      "SIDEBAR_IMAGE" => 'DNM',
      "CURATED_DATE" => 'DNM',
      "SUBSITE_URL" => 'DNM',
      "SUBHEADLINE" => 'DNM',
      "thumbnailImage_id" => 'DNM',
      "CONTRIBUTOR_EMAIL" => 'DNM',
      "SIDEBAR_TEXT" => 'DNM',
      "thumbnailImage_alt" => 'DNM',
    );

    return $mappings;
  }
}
