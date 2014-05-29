<?php

class MicrofilmMigration extends Migration {

  public function __construct() {
  parent::__construct();
    $this->description = t('Microfilm');
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'MF_ID' => array(
            'type' => 'int',
            'unsigned' => TRUE,
            'not null' => TRUE,
          )
        ),
        MigrateDestinationNode::getKeySchema()
    );

    $this->source = new MigrateSourceJSON(
      DRUPAL_ROOT . '/../migration_data/microfilm.json',
      'MF_ID'
    );

    $this->destination = new MigrateDestinationNode('microfilm');

    $this->addFieldMapping('uid')
        ->defaultValue(1);
    $this->addFieldMapping('title','TITLE');

    $this->addFieldMapping('field_publisher','PUBLISHER');
    $this->addFieldMapping('field_microfilm_format','FORMAT');
    $this->addFieldMapping('field_dates','DATES');
    $this->addFieldMapping('field_comments','COMMENTS');


    $this->addFieldMapping(NULL,'MF_ID')
         ->issueGroup(t('DNM'));
  }

  public function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Remove empty values from data
    foreach ($row as $key => $value) {
      if (empty($value)) {
        $row->$key = array();
      }
    }

    return TRUE;
  }
}

class MicroficheMigration extends Migration {

  public function __construct() {
  parent::__construct();
    $this->description = t('Microfiche');
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'MF_ID' => array(
            'type' => 'int',
            'unsigned' => TRUE,
            'not null' => TRUE,
          )
        ),
        MigrateDestinationNode::getKeySchema()
    );

    $this->source = new MigrateSourceJSON(
      DRUPAL_ROOT . '/../migration_data/microfiche.json',
      'MF_ID'
    );

    $this->destination = new MigrateDestinationNode('microfiche');

    $this->addFieldMapping('uid')
        ->defaultValue(1);
    $this->addFieldMapping('title','TITLE');
    $this->addFieldMapping('field_call_number','CALL_NO');
    $this->addFieldMapping('field_publisher','PUBLISHER');
    $this->addFieldMapping('field_location_string','LOCATION');
    $this->addFieldMapping('field_year_as_text','YEAR');
    $this->addFieldMapping('field_library_pieces','PIECES');
    $this->addFieldMapping('field_comments','COMMENTS');


    $this->addFieldMapping(NULL,'MF_ID')
         ->issueGroup(t('DNM'));
  }

  public function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Remove empty values from data
    foreach ($row as $key => $value) {
      if (empty($value)) {
        $row->$key = array();
      }
    }

    return TRUE;
  }
}
