<?php

/**
 * @file
 * Contains \Drupal\ilr_api\Plugin\resource\node\course_list\v1\Course_list__1_0.
 */

namespace Drupal\ilr_api\Plugin\resource\node\course_list\v1;

use Drupal\restful\Http\RequestInterface;
use Drupal\restful\Plugin\resource\ResourceEntity;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful\Plugin\resource\ResourceNode;

/**
 * Class Course_list
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "course_list:1.0",
 *   resource = "course_list",
 *   label = "Course list",
 *   description = "Export the courses with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "sdc_course"
 *     },
 *     "sort": {
 *       "title": "ASC"
 *     },
 *   },
 *   formatter = "hal_xml",
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Course_list__1_0 extends ResourceNode implements ResourceInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    $public_fields['Course_Name'] = array(
      'callback' => array($this, 'getCourseName'),
    );

    unset($public_fields['label']);

    $public_fields['Course_Number'] = array(
      'property' => 'field_catalog_prefix',
    );

    $public_fields['Support_Unit']
      = $public_fields['Featuring_School']
      = $public_fields['School_and_Organization']
      = array(
        'callback' => array($this, 'getSchool'),
      );

    $public_fields['Body'] = array(
      'property' => 'body',
      'sub_property' => 'value',
      'process_callbacks' => array(
        array($this, 'encodeForXML')
      ),
    );

    $public_fields['Short_description'] = array(
      'callback' => array($this, 'getSummary'),
    );

    $public_fields['Keywords'] = array(
      'callback' => array($this, 'getKeywords'),
    );

    $public_fields['Course_link'] = array(
      'callback' => array($this, 'getCourseLink'),
    );

    $public_fields['Course_link_label'] = array(
      'callback' => array($this, 'getCourseLinkLabel'),
    );

    $public_fields['Course_image_link'] = array(
      'callback' => array($this, 'getCourseImage'),
    );

    $public_fields['Subject_Areas'] = array(
      'callback' => array($this, 'getSubjectArea'),
    );

    $public_fields['Open_to'] = array(
      'callback' => array($this, 'getAudience'),
    );

    $public_fields['Cost'] = array(
      'callback' => array($this, 'getCost'),
    );

    $public_fields['Timeframe'] = array(
      'callback' => array($this, 'getTimeframe'),
    );

    $public_fields['Credential_earned'] = array(
      'callback' => array($this, 'getCredential'),
    );

    $public_fields['Type_offering'] = array(
      'callback' => array($this, 'getTypeOffering'),
    );

    return $public_fields;
  }

  public function encodeForXML($value) {
    $value = str_replace("<br>", "<br />", $value);
    return htmlentities($value, ENT_XML1, 'UTF-8');
  }

  /**
   * Repeating elements are specified with a "repeats" key
   * and a values array
   */
  public function getAudience() {
    return array(
      'repeats' => TRUE,
      'values' => array(
        "Undergrad Students",
        "Graduate Students",
        "Professionals",
        "All Others",
      ),
    );
  }

  /**
   * There is a cost or it's free; they are not displaying the actual cost
   */
  public function getCost($wrapper) {
    $course_wrapper = $this->getCourseWrapper($wrapper);
    $cost = !empty($course_wrapper->field_price->value())
      ? '$'
      : 'Free';
    return $cost;
  }

  /**
   * Retrieves an image url that the portal will display
   * Currently hard-coded per Tim's suggestions
   * @return String URL
   */
  public function getCourseImage($wrapper) {
    $images = array(
      'LS264'     => 'mai-Labor_Stands_with_Immigrant_Workers.jpg',
      'ODLEL101'  => 'field_uploads/node_basic_page/field_image/healthcare-stock-07.jpg',
      'LS238'     => 'fielduploads/node_news_item/image/LaborRoundtable2015_800x533.jpg',
      'ODLEL100'  => 'richard-griffin-jr-01.jpg',
    );
    $course_wrapper = $this->getCourseWrapper($wrapper);
    $prefix = $course_wrapper->field_catalog_prefix->value();
    $image_uri = (isset($images[$prefix]))
      ? $images[$prefix]
      : 'fielduploads/node_promo/image/worker-institute-155.jpg';
    return image_style_url('borealis_focussed_thumbnail_respondmedium', $image_uri);
  }

  public function getCourseLink($wrapper) {
    $nid = $wrapper->getWrapper()->getIdentifier();
    global $base_url;
    return $base_url . '/' . drupal_get_path_alias('node/' . $nid);
  }

  public function getCourseLinkLabel() {
    return 'Learn More';
  }

  public function getCourseName($wrapper) {
    return strip_tags($wrapper->getWrapper()->label());
  }

  public function getCredential($wrapper) {
    $course_wrapper = $this->getCourseWrapper($wrapper);
    if ($credits = count($course_wrapper->field_continuing_ed_reference->value())) {
      return 'CEU';
    }
    return "No Credit";
  }

  /**
   * Keywords are currently a combination of course topics and keywords
   * @return String Comma-delimited list of terms
   */
  public function getKeywords($wrapper) {
    $course_wrapper = $this->getCourseWrapper($wrapper);
    $keywords = [];
    foreach ($course_wrapper->field_course_topic_reference->getIterator() as $delta => $term_wrapper) {
      $keywords[] = strtolower($term_wrapper->name->value());
    }
    foreach ($course_wrapper->field_keywords->getIterator() as $delta => $term_wrapper) {
      $keywords[] = strtolower($term_wrapper->name->value());
    }
    return implode(',', array_unique($keywords));
  }

  public function getSchool() {
    return 'ILR School';
  }

  public function getSubjectArea() {
    return 'Employment, Labor, and Disability';
  }

  public function getSummary($wrapper) {
    $course_wrapper = $this->getCourseWrapper($wrapper);
    $summary = isset($course_wrapper->body->value()['summary'])
      ? $course_wrapper->body->value()['summary']
      : $course_wrapper->body->value()['value'];
    $summary = strip_tags(str_replace('&nbsp;', ' ', $summary));
    return truncate_utf8($summary, 128, TRUE, TRUE);
  }

  /**
   * Currently, on demand classes are "Self-Paced"
   * While online courses are "Offered Year-round"
   */
  public function getTimeframe($wrapper) {
    $course_wrapper = $this->getCourseWrapper($wrapper);
    $timeframe = ($course_wrapper->field_on_demand->value())
      ? 'Self-Paced'
      : 'Offered Year-round';
    return $timeframe;
  }

  public function getTypeOffering() {
    return 'Course';
  }

  private function getCourseWrapper($restfulEntityWrapper) {
    return ilr_get_node_wrapper($restfulEntityWrapper->getWrapper()->getIdentifier());
  }
}
