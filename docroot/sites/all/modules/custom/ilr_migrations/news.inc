<?php

class NewsMigration extends Migration {

  private $vid;

  public function __construct() {

  parent::__construct();
    $this->description = t('News Items');
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'id' => array(
            'type' => 'int',
            'unsigned' => TRUE,
            'not null' => TRUE,
          )
        ),
        MigrateDestinationNode::getKeySchema()
    );

    $this->source = new MigrateSourceJSON(
      DRUPAL_ROOT . '/../migration_data/news.json',
      'id'
    );

    $this->destination = new MigrateDestinationNode('news_item');

    $this->addFieldMapping('uid')
      ->defaultValue(1);
    $this->addFieldMapping('title','title');
    $this->addFieldMapping('field_image','main_image');
    $this->addFieldMapping('field_image:source_dir')
      ->defaultValue($this->getImageFolder());
    $this->addFieldMapping('field_image:alt', 'image_alt');
    $this->addFieldMapping('field_image:title', 'image_alt');
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

    if (count($row->story_images) > 0) {
      $images = array();
      foreach($row->story_images as $image_info) {
        $images[] = $image_info->url;
        $this->addContentImage($image_info);
      }
      $row->contentImageURL = $images;
    }

    if (!empty($row->story_content)) {
      $row->story_content = $this->setImagePaths($row->story_content);
      $row->story_content = $this->stripLeadingHeaders($row->story_content);
    } // full_html doesn't like empty body fields
    else {
      $row->story_content = "&nbsp;";
    }

    // Handle main images
    $row->main_image = $this->getMainImage($row);

    // Add alt and title
    $row->image_alt = $row->caption;

    // Add terms
    $row->featured = $this->setTags($row->featured);

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

  /**
   * Adds images from the content area
   * @todo prevent duplicates, handle alt text
   */
  private function addContentImage($image_info) {
    if ($this->imageExists($image_info->url)) {
      $filename = basename($image_info->url);
      $filePath = $this->getImageFolder() . $filename;
      $image = file_get_contents($filePath);
      $file = file_save_data($image, 'public://news/' . $filename, FILE_EXISTS_REPLACE);
    }
  }

  private function getVid() {
    if (!isset($this->vid)) {
      $vocab = taxonomy_vocabulary_machine_name_load('tags');
      $this->vid = $vocab->vid;
    }
    return $this->vid;
  }

  private function createTitle($row) {
    return (!empty($row->headline)) ? $row->headline : $row->short_headline;
  }

  private function setImagePaths($body) {
    return str_replace('/news/images/', 'public://news/', $body);
  }

  private function stripLeadingHeaders($body) {
    $lines = preg_split('/$\R?^/m', $body);
    $first_line = trim($lines[0]);

    $pattern = "/<h[0-6]>(.*?)<\/h[0-6]>/";

    if (preg_match($pattern, $first_line)) {
      array_shift($lines);
      $body = implode('', $lines);
    }
    return $body;
  }

  private function getMainImage($row) {
    $filename = '';
    if ($this->imageExists($row->NewsTopStoryImage_url)) {
      $filename = basename($row->NewsTopStoryImage_url);
    }
    elseif ($this->imageExists($row->contentImageURL[0])) {
      $filename = basename($row->contentImageURL[0]);
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

  /**
   * Set the path based on whether on Acquia or local
   * Assumes that the news_images folder has been uploaded
   * to /mnt/files/[site].[env]/docroot/files on Acquia
   * More info at https://docs.acquia.com/cloud/site/import/manual/files
   */
  private function getImageFolder() {
    $parent_folder = (isset($_ENV["AH_SITE_GROUP"]))
      ? '/files/'
      : '/../migration_data/';
    return DRUPAL_ROOT . $parent_folder . 'news_images/';
  }

  private function _get_news_field_mappings() {
    $mappings = array(
      "id" => 'DNM',
      "caption" => 'DNM',
      "name" => 'DNM',
      "description" => 'DNM',
      "date_added" => 'created',
      "date_published" => 'field_published_date',
      "date_last_modified" => 'DNM',
      "contributor_email" => 'DNM',
      "subsite_url" => 'DNM',
      "external_url" => 'field_website_url',
      "headline" => 'DNM',
      "subheadline" => 'DNM',
      "contact_info" => 'DNM',
      "include_contact_info" => 'DNM',
      "story_content" => 'body',
      "more_story_content" => 'DNM',
      "sidebar_text" => 'DNM',
      "sidebar_image" => 'DNM',
      "short_headline" => 'field_short_title',
      "curated_date" => 'DNM',
      "introduction" => 'DNM',
      "teaser" => 'field_description',
      "featured" => 'field_tags',
      "NewsTopStoryImage_id" => 'DNM',
      "NewsTopStoryImage_url" => 'DNM',
      "NewsTopStoryImage_alt" => 'DNM',
      "NewsTopStoryImage_height" => 'DNM',
      "NewsTopStoryImage_width" => 'DNM',
      "thumbnailImage_id" => 'DNM',
      "thumbnailImage_url" => 'DNM',
      "thumbnailImage_alt" => 'DNM',
      "thumbnailImage_height" => 'DNM',
      "thumbnailImage_width" => 'DNM',
      "sidebar_image_id" => 'DNM',
      "sidebar_image_url" => 'DNM',
      "sidebar_image_alt" => 'DNM',
      "sidebar_image_height" => 'DNM',
      "sidebar_image_width" => 'DNM',
      "story_images" => 'DNM',
    );

    return $mappings;
  }
}
