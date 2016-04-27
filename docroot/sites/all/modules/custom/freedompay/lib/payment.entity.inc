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
    $invoice_id = NULL,
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

  public static function adminPage() {
    $output = '';
    $paymentIds = FreedompayPayment::getPaymentIds();
    if (!empty($paymentIds)) {
      $output[] = FreedompayPayment::tableView($paymentIds);
    }
    return $output;
  }

  public static function tableView($paymentIds) {
    $tableView = array(
      '#theme' => 'table',
      '#header' => array(t('Invoice'),t('Authorization code'), t('Freeway Request ID'), t('Amount'), t('Card number')),
      '#rows' => FreedompayPayment::rowView($paymentIds),
      '#attributes' => array('class' => array('table-class')),
      '#empty' =>t('No payments have been processed yet'),
    );
    return $tableView;
  }

  public static function rowView($paymentIds) {
    $rows = [];
    $payments = FreedompayPayment::getPayments($paymentIds);
    foreach ($payments as $id => $payment) {
      $rows[$id] = array(
        'invoice' => $payment->getInvoiceLink(),
        'authorization_code' => $payment->authorization_code,
        'request_id' => $payment->freeway_request_id,
        'amount' => $payment->amount,
        'card_number' => $payment->card_number,
      );
    }
    return $rows;
  }

  public function getInvoiceLink() {
    if ($invoice = FreedomPayInvoice::getInvoiceById($this->invoice_id)) {
      return l($invoice->formatInvoiceNumber(), 'admin/config/services/freedompay/invoices');
    }
    return 'Missing';
  }

  public static function getPaymentIds() {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'freedompay_payment')
          ->propertyOrderBy('created', 'DESC');
    $result = $query->execute();
    if (isset($result['freedompay_payment'])) {
      return array_keys($result['freedompay_payment']);
    }
    return NULL;
  }

  public static function getPayments($payment_ids = array(), $conditions = array(), $reset = FALSE) {
    if (empty($payment_ids) && empty($conditions)) {
      $payment_ids = FreedompayPayment::getPaymentIds();
    }
    return entity_load('freedompay_payment', $payment_ids, $conditions, $reset);
  }

  public static function getPaymentByTransactionId($transaction_id) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'freedompay_payment')
      ->propertyCondition('transaction_id',$transaction_id);
    $result = $query->execute();
    if (isset($result['freedompay_payment'])) {
      $payment_info = reset($result['freedompay_payment']);
      $payment = entity_load_single('freedompay_payment', $payment_info->payment_id);
      return $payment;
    }
    return NULL;
  }
}
