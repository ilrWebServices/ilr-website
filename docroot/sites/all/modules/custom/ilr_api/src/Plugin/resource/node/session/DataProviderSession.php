<?php

/**
 * @file
 * Contains \Drupal\ilr_api\Plugin\resource\session\DataProviderSession.
 */

namespace Drupal\ilr_api\Plugin\resource\session;

use Drupal\restful\Plugin\resource\DataProvider\DataProviderEntity;
use Drupal\restful\Plugin\resource\DataProvider\DataProviderInterface;

class DataProviderSession  extends DataProviderEntity implements DataProviderInterface {

  /**
   * Overrides DataProviderEntity::getQueryForList().
   *
   * Expose only published comments.
   */
  public function getQueryForList() {
    $query = parent::getQueryForList();
    $today = date('Y-m-d');
    $query->fieldCondition('field_class_dates', 'value', $today, '>');
    return $query;
  }

  /**
   * Overrides DataProviderEntity::getQueryCount().
   *
   * Only count published comments.
   */
  public function getQueryCount() {
    $query = parent::getQueryCount();
    $today = date('Y-m-d');
    $query->fieldCondition('field_class_dates', 'value', $today, '>');
    return $query;
  }
}
