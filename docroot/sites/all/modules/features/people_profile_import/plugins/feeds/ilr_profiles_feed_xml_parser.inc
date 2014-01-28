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
    $mapped_fields = $this->getXmlFieldPairs();

    $result_counter = 0;

    foreach ($feed->person as $person) {
      $field_values = array();

      foreach ($mapped_fields as $xml_key => $field_name) {
        $field_values[$field_name] = (string) $person->{$xml_key};
      }

      $result->items[$result_counter] = $field_values;

      $result_counter++;
    }

    return $result;
  }


  /**
   * Return mapping sources.
   */

  public function getMappingSources() {
    $fields = $this->getXmlFieldPairs();

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

  public function getXmlFieldPairs() {
    return array(
      'ldap_display_name' => 'title',
      'ldap_last_name' => 'field_last_name',
      'ldap_first_name' => 'field_first_name',
      'ldap_working_title1' => 'field_working_title',
      'ldap_campus_address' => 'field_address_line_1',
      'ldap_campus_phone' => 'field_phone',
      'ldap_department' => 'field_department',
      'ldap_email' => 'field_email',
      'netID' => 'field_netid',
      'ilrweb_biography' => 'field_bio', // David to concatenate
      // 'ilrweb_publications_doc' => '', // pdf or word doc, David ot add flag
      // 'ilrweb_publications' => '',
      // 'ilrweb_experience' => '', //
      // 'ilrweb_research' => '',
      // 'ilrweb_expertise' => '',
      // 'ilrweb_other_expertise' => '',
      // 'ilrweb_vita_file' => '', // David to add flag
      // 'ilrweb_vita_html' => '',
      // 'ilrweb_photo_url' => '', // David to resolve missing photos
      // 'departments' => '', // What are these, and rel. to ldap-department
      // 'graduate_fields' => '',
      // 'acadvise_graduate' => '',
      // 'education' => '',
      // 'research_statement' => '',
      // 'keywords' => '',
      // 'overview' => '', // Give faculty option of choosing AI vs. Drupal field
      // 'trefocus' => '',
      // 'professional_activities' => '', // see John Abowd
      // 'honors_awards' => '',
      // 'publications' => '',
      // 'links' => '',
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
}
