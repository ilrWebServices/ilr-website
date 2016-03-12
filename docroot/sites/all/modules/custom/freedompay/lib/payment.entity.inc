<?php
/**
 * @file
 * FreedomPay Payment entity classes
 */

class FreedompayPayment extends Entity {

  public
    $payment_id = NULL,
    $transaction_id = '',
    $authorization_code = '',
    $form_id = NULL,
    $amount = '',
    $freeway_request_id = '',
    $card_number = '',
    $created = '';

  public function __construct(array $values = array()) {
    parent::__construct($values, 'freedompay_payment');
    if (!$this->payment_id) {
      $this->created = REQUEST_TIME;
    }
  }
}
