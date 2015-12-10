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

    $public_fields['description'] = array(
      'property' => 'body',
      'sub_property' => 'value',
    );

    return $public_fields;
  }

}
