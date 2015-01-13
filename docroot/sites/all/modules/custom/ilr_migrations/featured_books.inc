<?php

class FeaturedBookMigration extends Migration {

  public function __construct() {
  parent::__construct();
    $this->description = t('Featured Books');
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'TITLE_ID' => array(
            'type' => 'int',
            'unsigned' => TRUE,
            'not null' => TRUE,
          )
        ),
        MigrateDestinationNode::getKeySchema()
    );

    $this->source = new MigrateSourceJSON(
      DRUPAL_ROOT . '/../migration_data/featured_books.json',
      'TITLE_ID'
    );

    $this->destination = new MigrateDestinationNode('featured_book');

    $this->addFieldMapping('uid')
        ->defaultValue(1);
    $this->addFieldMapping('title','TITLE');
    $this->addFieldMapping('field_featured_date', 'featured_date')
         ->description('See _getFeaturedDate().');
    $this->addFieldMapping('created', 'featured_date');
    $this->addFieldMapping('field_authors_editors', 'AUTHOR');
    $this->addFieldMapping('body', 'DESCRIPTION');
    $this->addFieldMapping("body:format")
        ->defaultValue('full_html');
    $this->addFieldMapping('field_isbn', 'ISBN');
    $this->addFieldMapping('field_publisher', 'PUBLISHER');
    $this->addFieldMapping('field_featured_book_pages', 'PAGES');
    $this->addFieldMapping('field_city', 'CITY');
    $this->addFieldMapping('field_call_number', 'CALL_NUMBER');
    $this->addFieldMapping('field_thumbnail','LARGE_IMAGE_LOCATION');
    $this->addFieldMapping('field_thumbnail:source_dir')
        ->defaultValue('http://www.ilr.cornell.edu/library/customcf/embeddedApps/featuredBook/images/');

    $dnm = array('TITLE_ID', 'THUMB_IMAGE_LOCATION', 'LARGE_IMAGE_LOCATION', 'SMALL_IMAGE_LOCATION', 'MONTH_FEATURED', 'YEAR_FEATURED', 'ACTIVE', 'READY');

    foreach($dnm as $field_name) {
      $this->addFieldMapping(NULL,$field_name)
         ->issueGroup(t('DNM'));
    }
  }

  public function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Set the featured date
    $row->featured_date = $this->_getFeaturedDate($row);

    // Remove empty values from data
    foreach ($row as $key => $value) {
      if (empty($value)) {
        $row->$key = array();
      }
    }

    return TRUE;
  }

  public function prepare($node, $row) {
    $node->status = 1;
  }

  private function _getFeaturedDate($row) {
    //$year_month = $date = new DateTime($row->YEAR_FEATURED . '-' . $row->MONTH_FEATURED);
    $year_month = $row->YEAR_FEATURED . '-' . $row->MONTH_FEATURED;
    return $year_month;
  }
}
