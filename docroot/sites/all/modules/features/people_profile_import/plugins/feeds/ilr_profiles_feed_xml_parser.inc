<?php

/**
 * Class definition for People Profiles XML feed parser.
 *
 * Parses the custmo xml feed.
 */
class IlrProfilesFeedXmlParser extends FeedsParser {

  /**
   * Implements FeedsParser::parse().
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    $feed = new SimpleXMLElement($fetcher_result->getRaw());
    $result = new FeedsParserResult();
    $result->title = 'Profile Import';
    $result->items = array();
    $mapped_fields = IlrProfilesFeedXmlParser::getXmlFieldPairs();

    $result_counter = 0;

    foreach ($feed->person as $person) {
      $field_values = array();
      $existing_profile = _people_profiles_find_profile_by_netid((string) $person->netID);
      $type = (string) $person->ldap_profile_type;
      if ($existing_profile) {
        if ($type != 'faculty') {
          continue;
        }
        // Set the title and NetID
        $field_values['title'] = $this->setProfileTitle($person);
        $field_values['field_netid'] = (string) $person->netID;
        $field_values['field_email'] = (string) $person->ldap_email; // Without this, field is being deleted
        $field_values['field_department'] = $this->getDepartments($person);
        $field_values['field_use_ai_data'] = 1;

        // Then loop through AI values and faculty_on_leave
        foreach ($mapped_fields as $xml_key => $field_name) {
          if (strpos($field_name, 'field_ai') === 0
            || strpos($field_name, 'field_faculty_on_leave') === 0) {
            $data = (string) $person->{$xml_key};
            $field_values[$field_name] = $this->prepData($field_name, $data, $type);
          }
        }
      } // Loop through all the values
      else {
        foreach ($mapped_fields as $xml_key => $field_name) {
          switch($field_name) {
            case 'title':
              $field_values[$field_name] = $this->setProfileTitle($person);
              break;
            case 'field_department':
              $field_values[$field_name] = $this->getDepartments($person);
              break;
            default:
              $data = (string) $person->{$xml_key};
              $field_values[$field_name] = $this->prepData($field_name, $data, $type);
          }
        }
      }
      $result->items[$result_counter] = $field_values;

      $result_counter++;
    }

    return $result;
  }

  /**
   * Swaps p tags for line breaks on some fields coming
   * from activity insight
   */
  private function prepData($field_name, $data, $type) {
    $prepared = trim($data);
    if ($type == 'faculty' && in_array($field_name, $this->getFieldsWithLineBreaks())) {
      $prepared = preg_replace('/\n(\s*\n)+/', '</p><p>', $prepared);
      $prepared = preg_replace('/\n/', '<br>', $prepared);
      if (strlen($prepared)) {
        $prepared = '<p>'.$prepared.'</p>';
      }
    }
    return $prepared;
  }

  /**
   * Specifies which fields need to be converted
   */
  private function getFieldsWithLineBreaks() {
    return array(
      'field_ai_teaching_statement',
      'field_ai_research_statement',
      'field_ai_overview',
    );
  }
  /**
   * Return mapping sources.
   */
  public function getMappingSources() {
    $fields = IlrProfilesFeedXmlParser::getXmlFieldPairs();

    $mapping_sources = array();

    foreach ($fields as $xml_key => $field_name) {
      $replaced_name = $this->fieldnameToString($field_name);
      $mapping_sources[$field_name] = array(
        'name' => $replaced_name,
        'description' => $replaced_name . '.',
      );
    }

    return $mapping_sources + parent::getMappingSources();
  }

  public static function getXmlFieldPairs() {
    return array(
      'ldap_display_name' => 'title',
      'ldap_campus_address' => 'field_address_line_1',
      'ldap_campus_phone' => 'field_phone',
      'ldap_email' => 'field_email',
      //'ldap_working_title1' => 'field_working_title',
      'ldap_working_title2' => 'field_working_title',
      //'ldap_employee_type' => '', // Not sure needed, as we have ldap_profile_type below
      //'ldap_department' => 'field_department', // This is dept. code. Use name instead
      //'ldap_department_name' => 'field_department',
      'ldap_leave_start' => 'field_faculty_on_leave:start',
      'ldap_leave_end' => 'field_faculty_on_leave:end',
      //'ldap_uid' => '', // same as NetID
      'ldap_last_name' => 'field_last_name',
      'ldap_first_name' => 'field_first_name',
      //'ldap_mail_nickname' => '', // we can get this from ldap_email
      //'ldap_nickname' => '', // Consider using this for naming
      'ldap_local_address' => 'field_local_address',
      'ldap_profile_type' => 'field_profile_type',
      // 'ilrweb_publications_type' => '',
      'ilrweb_publications_doc' => 'field_ilrweb_publications_file',
      'ilrweb_publications' => 'field_ilrweb_publications',
      'ilrweb_overview' => 'field_ilrweb_overview',
      // 'ilrweb_research' => '',
      // 'ilrweb_expertise' => '',
      // 'ilrweb_vita_type' => '', // use this to figure out which to populate below
      'ilrweb_vita_file' => 'field_ilrweb_vita_file',
      'ilrweb_vita_html' => 'field_ilrweb_vita_html',
      'ilrweb_photo_url' => 'field_profile_image',
      'netID' => 'field_netid',
      //'userid' => '',
      'departments' => 'field_department',
      // 'rank' => '', //??
      // 'srank' => '', //??
      // 'graduate_fields' => '',
      // 'acadvise_graduate' => '',
      // 'education' => '', // includes nodes for degree>level,year,institution
      'teaching_statement' => 'field_ai_teaching_statement',
      'research_statement' => 'field_ai_research_statement',
      // 'research_statement_short' => 'field_ai_research_statement_short',
      // 'research_areas' => '', // area, area, ...
      'areas_of_expertise' => 'field_areas_of_expertise',
      'other_expertise' => 'field_ai_other_expertise',
      // 'teaching_keywords' => '',
      // 'research_keywords' => '',
      // 'outreach_keywords' => '',
      'overview' => 'field_ai_overview',
      //'outreach_activities' => '',
      'professional_activities' => 'field_ai_professional_activities',
      'honors_awards' => 'field_ai_honors_awards',
      'publications' => 'field_ai_publications',
      'links' => 'field_ai_links',
    );
  }

  /**
   * Takes the fieldname and returns a string value
   */
  private function fieldnameToString($field_name) {
    $replaced = str_replace('field_', '', $field_name);
    $replaced = str_replace('_', ' ', $replaced);
    return $replaced;
  }

  private function setProfileTitle($person) {
    return (string) $person->ldap_first_name . ' ' . $person->ldap_last_name;
  }

  private function getDepartments($person) {
    $departments = array();
    foreach ($person->departments->dept as $department) {
      $sanitized = trim($department);
      $sanitized = str_replace('-ILR', '', $sanitized);
      $sanitized = str_replace('Ext-', '', $sanitized);
      $departments[] = $sanitized;
    }
    if (empty($departments)) {
      $department = str_replace('ILR - ', '', $person->ldap_department_name);
      $departments[] = $department;
    }
    $departments_comma_delimited = implode(',', $departments);
    return $departments_comma_delimited;
  }
}
