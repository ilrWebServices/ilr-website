<?php
/**
 * @file
 * FreedomPay HPP entity classes
 */

class FreedompayHpp extends Entity {

  public
    $hpp_id = NULL,
    $title = '',
    $store_id = '',
    $terminal_id = '',
    $checkout_path = '',
    $success_path = '',
    $failure_path = '',
    $cancel_path = '',
    $created = '',
    $updated = '';

  public function __construct(array $values = array()) {
    parent::__construct($values, 'freedompay_hpp');
    if (!$this->hpp_id) {
      $this->created = REQUEST_TIME;
    }
  }

  /**
   * Permanently saves the entity.
   *
   * @return bool
   *  Returns FALSE if entity was not saved.
   */
  public function save() {
    $this->updated = REQUEST_TIME;
    return parent::save();
  }

  /**
   * Loads an hpp by ID.
   */
  public static function getPortalById($hpp_id=NULL) {
    if (empty($hpp_id)) {
      return FALSE;
    }
    $portal = FreedompayHpp::getPortals(array($hpp_id), array());

    return $portal ? reset($portal) : FALSE;
  }

  public static function getPortalIds() {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'freedompay_hpp')
          ->propertyOrderBy('created', 'DESC');

    $result = $query->execute();
    if (isset($result['freedompay_hpp'])) {
      return array_keys($result['freedompay_hpp']);
    }
    return NULL;
  }

  public static function getPortals($portal_ids = array(), $conditions = array(), $reset = FALSE) {
    if (empty($portal_ids) && empty($conditions)) {
      $portal_ids = FreedompayHpp::getPortalIds();
    }
    return entity_load('freedompay_hpp', $portal_ids, $conditions, $reset);
  }

  public static function getPortalForType($type, $bundle) {
    $portal = NULL;
    switch ($type) {
      case 'entityform':
        $entityform_type = entityform_type_load($bundle);
        $portal = FreedompayHpp::getPortalById($entityform_type->data['hpp']);
        break;
    }
    return $portal;
  }
}
