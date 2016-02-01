<?php

/**
 * @file
 * Contains \Drupal\ilr_api\Plugin\resource\node\course\v1\Courses__1_0.
 */

namespace Drupal\ilr_api\Plugin\resource\node\course\v1;

use Drupal\restful\Http\RequestInterface;
use Drupal\restful\Plugin\resource\ResourceEntity;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful\Plugin\resource\ResourceNode;

/**
 * Class Courses
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "courses:1.0",
 *   resource = "courses",
 *   label = "Courses",
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
 *   majorVersion = 1,
 *   minorVersion = 0
 * )
 */
class Courses__1_0 extends ResourceNode implements ResourceInterface {

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    $public_fields['title'] = $public_fields['label'];
    unset($public_fields['label']);

    $public_fields['prefix'] = array(
      'property' => 'field_catalog_prefix',
    );

    $public_fields['description'] = array(
      'property' => 'body',
      'sub_property' => 'summary',
    );

    $public_fields['topic'] = array(
      'property' => 'field_course_topic_reference',
    );

    $public_fields['topic_map'] = array(
      'callback' => array($this, 'getTopicMap'),
    );

    $public_fields['credit_hours'] = array(
      'property' => 'field_credit_hours',
    );

    $public_fields['cost'] = array(
      'property' => 'field_price',
    );

    $public_fields['sponsor'] = array(
      'property' => 'field_course_sponsor_reference',
    );

    $public_fields['sponsor_name'] = array(
      'callback' => array($this, 'getSponsorName'),
    );

    $public_fields['setting'] = array(
      'property' => 'field_setting',
    );

    $public_fields['on_demand'] = array(
      'property' => 'field_on_demand',
    );

    $public_fields['classes'] = array(
      'callback' => array($this, 'getClassesForCourse'),
    );

    return $public_fields;
  }

  public function getClassesForCourse($wrapper) {
    $classes = [];
    if (module_exists('ilr_sdc_listings')) {
      global $base_url;
      $course = node_load($wrapper->getWrapper()->getIdentifier());
      $class_ids = _ilr_sdc_listings_get_classes_for_course($course);
      if (!empty($class_ids)) {
        foreach ($class_ids as $key => $nid) {
          $class = node_load($nid);
          $class_wrapper = ilr_get_node_wrapper($class);
          $classes[$nid] = array(
            'title' => $class_wrapper->label(),
            'start' => $class_wrapper->field_class_dates->value()['value'],
            'end' => $class_wrapper->field_class_dates->value()['value2'],
            'location' => $this->getLocation($class_wrapper),
            'registration_url' => _ilr_sdc_listings_get_class_registration_url($class),
            'more_info_url' => $base_url . '/' . drupal_get_path_alias('node/'.$course->nid),
          );
        }
      }
    }
    return $classes;
  }

  public function getSponsorName($wrapper) {
    $course_wrapper = $wrapper->getWrapper();
    return $course_wrapper->field_course_sponsor_reference->label();
  }

  public function getTopicMap($wrapper) {
    $course_wrapper = $wrapper->getWrapper();
    $topics = [];
    foreach ($course_wrapper->field_course_topic_reference->getIterator() as $delta => $term_wrapper) {
      $topics[$term_wrapper->getIdentifier()] = str_replace(' ', '-', strtolower($term_wrapper->name->value()));
    }
    return $topics;
  }

  private function getLocation($wrapper) {
    if ($wrapper->field_online_class->value()) {
      return 'Online';
    }
    return $wrapper->field_address->locality->value() . ', ' . $wrapper->field_address->administrative_area->value();
  }
}
