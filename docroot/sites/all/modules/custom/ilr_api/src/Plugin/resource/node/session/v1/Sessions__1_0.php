<?php

/**
 * @file
 * Contains \Drupal\ilr_api\Plugin\resource\node\session\v1\Sessions__1_0.
 */

namespace Drupal\ilr_api\Plugin\resource\node\session\v1;

use Drupal\restful\Http\RequestInterface;
use Drupal\restful\Plugin\resource\ResourceEntity;
use Drupal\restful\Plugin\resource\ResourceInterface;
use Drupal\restful\Plugin\resource\ResourceNode;

/**
 * Class Sessions
 * @package Drupal\restful\Plugin\resource
 *
 * @Resource(
 *   name = "sessions:1.0",
 *   resource = "sessions",
 *   label = "Course sessions",
 *   description = "Export the classes with all authentication providers.",
 *   authenticationTypes = TRUE,
 *   authenticationOptional = TRUE,
 *   dataProvider = {
 *     "entityType": "node",
 *     "bundles": {
 *       "sdc_class"
 *     },
 *   },
 *   majorVersion = 1,
 *   minorVersion = 0,
 * )
 */
class Sessions__1_0 extends ResourceNode implements ResourceInterface {

  /**
   * {@inheritdoc}
   */
  protected function dataProviderClassName() {
    return '\Drupal\ilr_api\Plugin\resource\session\DataProviderSession';
  }

  /**
   * {@inheritdoc}
   */
  protected function publicFields() {
    $public_fields = parent::publicFields();

    $public_fields['title'] = $public_fields['label'];
    unset($public_fields['label']);

    $public_fields['description'] = array(
      'callback' => array($this, 'getDescription'),
    );

    $public_fields['date'] = array(
      'property' => 'field_class_dates',
    );

    $public_fields['course'] = array(
      'property' => 'field_course',
    );

    return $public_fields;
  }

  public function getDescription($wrapper) {
    $class = $wrapper->getWrapper()->value();
    $class_wrapper = ilr_get_node_wrapper($class);
    if (!empty($class_wrapper->field_course->value())) {
      $course_wrapper = ilr_get_node_wrapper($class_wrapper->field_course->value());
      return $course_wrapper->body->value()['summary'];
    }
    return '';
  }
}
