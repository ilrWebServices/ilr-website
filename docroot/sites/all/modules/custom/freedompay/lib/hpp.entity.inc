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

}
