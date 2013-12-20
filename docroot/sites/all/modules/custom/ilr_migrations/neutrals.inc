<?php

class ScheinmanNeutralsMigration extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Neutrals from a CSV file.');

    // A map of source XML filename -> destination node id.
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

    $columns = array(
      array('id', 'rosterID'),
      array('prefix', 'prefix'),
      array('firstname', 'firstname'),
      array('midname', 'midname'),
      array('lastname', 'lastname'),
      array('suffix','suffix'),
      array('jobtitle','jobtitle'),
      array('company','company'),
      array('address1','address1'),
      array('address2','address2'),
      array('city','city'),
      array('state','state'),
      array('zip','zip'),
      array('phone','phone'),
      array('fax','fax'),
      array('email','email'),
      array('webaddress','webaddress'),
      array('workhistory','workHistory'),
      array('adrexperience','ADRExperience'),
      array('adrtraining','ADRTraining'),
      array('profassociations','ProfAssociations'),
      array('education','Education'),
      array('profreferences','ProfReferences'),
      array('feepolicy','feePolicy'),
      array('approved','approved'),
      array('updatefor','updateFor'),
      array('dateentered','dateEntered'),
      array('guid','guid'),
      array('extendedinfo','extendedInfo'),
      array('statefullname','stateFullName'),
      array('arbitrator','arbitrator'),
      array('mediator','mediator'),
      array('factfinder','factfinder'),
      array('statecode','stateCode'),
      array('cornelladrtraining','CornellADRTraining'),
      array('category','category'),
      array('photostatus','photoStatus'),
    );

    $this->source = new MigrateSourceCSV(
      DRUPAL_ROOT . '/../migration_data/neutrals.csv',
      $columns,
      array('delimiter' => '|')
    );

    $this->destination = new MigrateDestinationNode('scheinman_neutral');

    // Set owner to user 1 by default
    $this->addFieldMapping('uid')
        ->defaultValue(1);
    $this->addFieldMapping('title','title')
         ->description('See _getFullName().');
    $this->addFieldMapping('created', 'dateentered');
    $this->addFieldMapping('field_name_title','prefix');
    $this->addFieldMapping('field_first_name','firstname');
    $this->addFieldMapping('field_middle_name','midname');
    $this->addFieldMapping('field_last_name','lastname');
    $this->addFieldMapping('field_suffix','suffix');
    $this->addFieldMapping('field_category_of_neutral','categories')
         ->description('See _getNeutralTypes().');
    $this->addFieldMapping('field_job_title','jobtitle');
    $this->addFieldMapping('field_company','company');
    $this->addFieldMapping('field_address_line_1','address1');
    $this->addFieldMapping('field_address_line_2','address2');
    $this->addFieldMapping('field_city','city');
    $this->addFieldMapping('field_state_inc_outside_us','state');
    $this->addFieldMapping('field_zip_code','zip');
    $this->addFieldMapping('field_phone','phone');
    $this->addFieldMapping('field_fax','fax');
    $this->addFieldMapping('field_email','email');
    $this->addFieldMapping('field_website_url','webaddress');
    $this->addFieldMapping('field_professional_work_history_','workhistory');
    $this->addFieldMapping('field_dispute_resolution_experie','adrexperience');
    $this->addFieldMapping('field_dispute_resolution_trainin','cornelladrtraining');
    $this->addFieldMapping('field_additional_dispute_resolut','adrtraining');
    $this->addFieldMapping('field_professional_associations','profassociations');
    $this->addFieldMapping('field_education','education');
    $this->addFieldMapping('field_references','profreferences');
    $this->addFieldMapping('field_fee_policy','feepolicy');
    $this->addFieldMapping('field_profile_image','filename')
         ->description('See prepare().');
    $this->addFieldMapping('field_profile_image:source_dir')
        ->defaultValue('http://www.ilr.cornell.edu/conflictRes/customcf/embeddedApps/roster/photos/');
  }

  private function _getFullName($row) {
    $fullname = (strlen($row->prefix) > 0) ? $row->prefix . ' ' : '';
    $fullname .= $row->firstname . ' ';
    $fullname .= (strlen($row->midname) > 0) ? $row->midname . ' ' : '';
    $fullname .= $row->lastname;
    $fullname .= (strlen($row->suffix) > 0) ? ', '.$row->suffix : '';

    return $fullname;
  }

  private function _getNeutralTypes($row) {
    $possible_types = array('Arbitrator','Mediator','Factfinder');
    $neutral_keys = array();
    foreach($possible_types as $key => $type) {
      if (strpos($row->category, $type) !== FALSE) {
        $neutral_keys[] = $key;
      }
    }
    return $neutral_keys;
  }

  public function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    // Create the full name for them
    $row->title = $this->_getFullName($row);

    // Set the Category
    $row->categories = $this->_getNeutralTypes($row);

    // check for an image
    if ($row->photostatus == 1) {
      $row->filename = 'photo' . $row->id . '.jpg';
    } else {
      $row->filename = '';
    }

    return TRUE;
  }

  public function prepare($node, $row) {
    // Disable automatic path generation
    $node->path['pathauto'] = 0;

    // Set the path
    $node->path['alias'] = 'neutrals/' . $row->id;

    return TRUE;
  }
}
