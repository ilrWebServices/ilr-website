<?php

class StudentPortraitMigration extends Migration {

  public function __construct() {
  parent::__construct();
    $this->description = t('Student Portraits');
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
      DRUPAL_ROOT . '/../migration_data/student_portraits.json',
      'id'
    );

    $this->destination = new MigrateDestinationNode('student_portrait');

    $this->addFieldMapping('uid')
        ->defaultValue(1);
    $this->addFieldMapping("body:format")
        ->defaultValue('full_html');
    $this->addFieldMapping('field_portrait_experience','work_experience')
        ->description('See setExperiences().');;
    $this->addFieldMapping('field_image:source_dir')
        ->defaultValue('http://www.ilr.cornell.edu/admissions/Student_Experience/images/');

    $mappings = $this->_get_field_mappings();

    foreach ($mappings as $json_attr => $field_mapping) {
      if ($field_mapping == 'DNM') {
        $this->addFieldMapping(NULL,$json_attr)
          ->issueGroup(t('DNM'));
      }
      else {
        $this->addFieldMapping($field_mapping, $json_attr);
      }
    }

  }

  public function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // Remove empty values from data
    foreach ($row as $key => $value) {
      if (empty($value) || $value == 'blank') {
        $row->$key = array();
      }
    }

    //Handle work experiences
    $row->work_experience = $this->setExperiences($row);

    return TRUE;
  }

  public function prepare($node, $row) {
    $node->status = 1;
  }

  private function setExperiences($row) {
    return array(
      $row->experience1,
      $row->experience2,
      $row->experience3,
      $row->experience4
    );
  }

  private function _get_field_mappings() {
    $mappings = array(
      "id" => 'DNM',
      "blurb" => 'body:summary',
      "classYear" => 'field_expected_graduation_date',
      "experience1" => 'DNM',
      "experience2" => 'DNM',
      "experience3" => 'DNM',
      "experience4" => 'DNM',
      "firstName" => 'field_first_name',
      "home_rotation" => 'DNM',
      "interests" => 'field_interests_and_goals',
      "lastName" => 'field_last_name',
      "mainPhoto" => 'field_image',
      "quote" => 'field_quote',
      "story" => 'body',
      "title" => 'title',
      "mainPhoto-width" => 'DNM',
      "mainPhoto-height" => 'DNM',
      "mainPhoto-alt" => 'field_image:alt',
    );

    return $mappings;
  }

}
