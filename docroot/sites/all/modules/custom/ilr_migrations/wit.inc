<?php

class WitPublisherMigration extends Migration {

  public function __construct() {
    ini_set('auto_detect_line_endings', TRUE);
    parent::__construct();
    $this->description = t('Publishers for WIT');

    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'PUB_ID' => array(
            'type' => 'int',
            'unsigned' => TRUE,
            'not null' => TRUE,
          )
        ),
        MigrateDestinationTerm::getKeySchema()
    );

    $this->source = new MigrateSourceJSON(
      DRUPAL_ROOT . '/../migration_data/wit_publishers.json',
      'PUB_ID'
    );

    $this->destination = new MigrateDestinationTerm('publications');

    $this->addFieldMapping('name','PUB_NAME');
    $this->addFieldMapping(NULL,'PUB_DESCRIPTION')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping(NULL,'PUB_HOSTNAME')
         ->issueGroup(t('DNM'));
  }
}

class WitWireServiceMigration extends Migration {

  public function __construct() {
    ini_set('auto_detect_line_endings', TRUE);
    parent::__construct();
    $this->description = t('Wire Services for WIT');

    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'WIRE_ID' => array(
            'type' => 'int',
            'unsigned' => TRUE,
            'not null' => TRUE,
          )
        ),
        MigrateDestinationTerm::getKeySchema()
    );

    $this->source = new MigrateSourceJSON(
      DRUPAL_ROOT . '/../migration_data/wit_wireservice.JSON',
      'WIRE_ID'
    );

    $this->destination = new MigrateDestinationTerm('wire_services');

    $this->addFieldMapping('name','WIRE_NAME');
    $this->addFieldMapping(NULL,'WIRE_DESCRIPTION')
         ->issueGroup(t('DNM'));
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE || empty($row->WIRE_NAME)) {
      return FALSE;
    }
    return TRUE;
  }
}

class WitMigration extends Migration {
  protected $wit_wire;
  protected $wit_pub;

  public function __construct() {
    parent::__construct();
    $this->description = t('Wit articles');
    $this->createPublisherLookup();
    $this->createWireServiceLookup();
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'WIT_ID' => array(
            'type' => 'varchar',
            'length' => 255,
            'not null' => TRUE,
          )
        ),
        MigrateDestinationNode::getKeySchema()
    );

    $this->source = new MigrateSourceJSON(
      DRUPAL_ROOT . '/../migration_data/wit.json',
      'WIT_ID'
    );

    $this->destination = new MigrateDestinationNode('wit_article');

    // Set owner to user 1 by default for now
    // how will we handle editors who are not yet
    // Drupal users?
    $this->addFieldMapping('uid')
        ->defaultValue(1);
    $this->addFieldMapping('title','trucated_lead');
    $this->addFieldMapping('field_article_lead_full','WIT_LEAD');
    $this->addFieldMapping('field_article_title','WIT_TITLE');
    $this->addFieldMapping('body','WIT_ABSTRACT');
    $this->addFieldMapping('field_author','WIT_AUTHOR');
    $this->addFieldMapping('field_published_date','WIT_DATE');
    $this->addFieldMapping('created','WIT_CREATEDATE');
    $this->addFieldMapping('field_website_url','WIT_URL');
    // Add these as placeholders for prepare()
    $this->addFieldMapping('field_term_publication','publication_id')
         ->sourceMigration('WitPublisher');
    $this->addFieldMapping('field_term_publication:source_type')
         ->defaultValue('tid');
    $this->addFieldMapping('field_term_wire_service','wire_service_id')
         ->sourceMigration('WitWireService');;
    $this->addFieldMapping('field_term_wire_service:source_type')
         ->defaultValue('tid');

    $this->addFieldMapping(NULL,'WIT_EDITOR')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping(NULL,'WIT_CREATOR')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping(NULL,'WIT_MODIFIER')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping(NULL,'WIT_MODDATE')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping(NULL,'WIT_FORMAT')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping(NULL,'WIT_ACTIVE')
         ->issueGroup(t('DNM'));
  }

  public function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Empty titles and abstracts were killing the import
    // so we skip those rows
    if (empty($row->WIT_TITLE) || empty($row->WIT_ABSTRACT)) {
      return FALSE;
    }

    // Set the publication for the article
    // This sets the publication to the wrong term id
    $row->publication_id = $this->wit_pub[$row->WIT_ID];

    // Set the wire service (if there is one)
    // This sets the wire_service to the wrong term id
    $row->wire_service_id = $this->wit_wire[$row->WIT_ID];

    // Remove empty values from data
    foreach ($row as $key => $value) {
      if (empty($value)) {
        $row->$key = array();
      }
    }

    $row->trucated_lead = truncate_utf8($row->WIT_LEAD, 128, TRUE, TRUE);

    return TRUE;
  }

  public function prepare($node, $row) {
    // Disable automatic path generation
    //$node->path['pathauto'] = 0;

    // Make published if row comes in as active
    $node->status = $row->WIT_ACTIVE;

    return TRUE;
  }

  public function createPublisherLookup() {
    $json_objects = json_decode(file_get_contents(DRUPAL_ROOT . '/../' . 'migration_data/wit_pub.json'));
    $wit_pub = array();
    foreach ($json_objects as $item) {
      if ($id = $item->PUB_ID) {
        $wit_pub[$item->WIT_ID] = $id;
      }
    }
    $this->wit_pub = $wit_pub;
  }

  public function createWireServiceLookup() {
    $json_objects = json_decode(file_get_contents(DRUPAL_ROOT . '/../' . 'migration_data/wit_wire.json'));
    $wit_wire = array();
    foreach ($json_objects as $item) {
      if ($id = $item->WIRE_ID) {
        $wit_wire[$item->WIT_ID] = $id;
      }
    }
    $this->wit_wire = $wit_wire;
  }
}
