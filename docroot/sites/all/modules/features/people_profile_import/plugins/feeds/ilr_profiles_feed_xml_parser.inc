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
      $type = (string) $person->ldap_profile_type;

      foreach ($mapped_fields as $xml_key => $field_name) {
        $data = (string) $person->{$xml_key};
        $field_values[$field_name] = $this->prepData($person, $field_name, $data, $type);
      }
      $result->items[$result_counter] = $field_values;

      $result_counter++;
    }

    return $result;
  }

  /**
   * Swaps p tags for line breaks on some fields coming
   * from activity insight
   * Make sure phone is properly formatted
   */
  private function prepData($person, $field_name, $data, $type) {
    $prepared = trim($data);
    if ($type == 'faculty' && in_array($field_name, $this->getFieldsWithLineBreaks())) {
      $prepared = preg_replace('/\n(\s*\n)+/', '</p><p>', $prepared);
      $prepared = preg_replace('/\n/', '<br>', $prepared);
      $prepared = (strlen($prepared) > 10)
        ? '<p>'.$prepared.'</p>'
        : '';
    }
    switch($field_name) {
      case 'title':
        $prepared = $this->setProfileTitle($person);
        break;
      case 'field_profile_department':
        $prepared = $this->getDepartments($person);
        break;
      case 'field_profile_image':
        $prepared = $this->getProfileImage($person);
        break;
      case 'field_phone': // Make sure phone is properly formatted xxx-xxx-xxxx
        $prepared = (strlen($prepared) < 12) ? '' : $prepared;
        break;
      case 'field_fax': // Format fax numbers
        $prepared = str_replace('.', '-', $prepared);
        break;
      case 'field_display_in_faculty_lists':
        $prepared = ($prepared == 'true') ? 1 : 0;
        break;
      case 'field_working_title':
        $prepared = preg_replace('/<br(\s+)?\/?>/i', "\n", $prepared);
        break;
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
      'field_ai_service_statement',
      'field_ai_outreach_statement',
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
      'ldap_working_title2' => 'field_working_title',
      'ldap_leave_start' => 'field_faculty_on_leave:start',
      'ldap_leave_end' => 'field_faculty_on_leave:end',
      'ldap_last_name' => 'field_last_name',
      'ldap_first_name' => 'field_first_name',
      'ldap_local_address' => 'field_local_address',
      'ldap_profile_type' => 'field_profile_type',
      //'ilrweb_vita_file' => 'field_ilrweb_vita_file', // remove after final import
      //'ilrweb_photo_url' => 'field_profile_image', // remove after final import
      //'ilrweb_fax' => 'field_fax', // remove after final import
      'netID' => 'field_netid',
      'departments' => 'field_profile_department',
      'display_in_faculty_list' => 'field_display_in_faculty_lists',
      'teaching_statement' => 'field_ai_teaching_statement',
      'research_statement' => 'field_ai_research_statement',
      'service_statement' => 'field_ai_service_statement',
      'outreach_statement' => 'field_ai_outreach_statement',
      'areas_of_expertise' => 'field_areas_of_expertise',
      'other_expertise' => 'field_ai_other_expertise',
      'overview' => 'field_ai_overview',
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
    module_load_include('module','people_profiles');

    $departments = array();
    foreach ($person->departments->dept as $department) {
      $sanitized = _people_profiles_sanitize_department_key($department);
      $departments[] = $sanitized;
    }
    if (empty($departments)) {
      $departments[] = _people_profiles_sanitize_department_key($person->ldap_department_name);
    }
    // Return an array for the select multiple options list
    $departments_comma_delimited = implode('|', $departments);
    return $departments_comma_delimited;
  }

  private function getProfileImage($person) {
    $type = (string) $person->ldap_profile_type;
    if ($type == "faculty") {
      $imageName = (string) $person->netID . '.jpg';
      $imageUrl = "http://www.ilr.cornell.edu/2015photos/$imageName";
      if (file_get_contents($imageUrl,0,null,0,1) !== FALSE) {
        return $imageUrl;
      }
    }
    return (string) $person->ilrweb_photo_url;
  }
}
