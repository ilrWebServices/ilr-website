<?php
/**
 * @file
 * FreedomPay Invoice entity class
 */

class FreedompayInvoice extends Entity {

  public
    $invoice_id = NULL,
    $number = NULL,
    $prefix = '',
    $transaction_id = '',
    $order_id = NULL,
    $order_type = '',
    $amount = '',
    $paid = NULL,
    $created = '';

  public function __construct(array $values = array()) {
    parent::__construct($values, 'freedompay_invoice');
    if (!$this->invoice_id) {
      $this->created = REQUEST_TIME;
      $this->prefix = $this->prefix();
      $this->number = $this->invoiceNumber();
    }
  }

  public function invoiceNumber($value=NULL) {
    if ($value) {
      $this->number = $value;
    }
    else { // Get the last invoice that had the current prefix
      $this->number = ($last_invoice = FreedompayInvoice::getLastInvoiceByPrefix($this->prefix))
        ? $last_invoice->number + 1
        : 1;
    }
    return $this->number;
  }

  public function formatInvoiceNumber() {
    return $this->prefix . str_pad($this->number, 6, '0', STR_PAD_LEFT);
  }

  public function formatPaymentCell() {
    $text = ($payment = $this->payment())
      ? $payment->authorization_code
      : 'Incomplete';
    return l($text, FREEDOMPAY_CHECK_PAYMENT_PATH, array(
      'query' => array('transaction_id' => $this->transaction_id)
    ));
  }

  public function formatTransactionLink() {
    $text = ($this->paid) ? 'Yes' : 'No';
    return l($text, FREEDOMPAY_CHECK_PAYMENT_PATH, array(
      'query' => array('transaction_id' => $this->transaction_id)
    ));
  }

  public function prefix() {
    $order = freedompay_order($this->order_id);
    $prefix = module_invoke_all('freedompay_invoice_prefix', $order);
    if (!empty($prefix)) {
      return reset($prefix);
    } // Else default
    $type = str_replace('_', '', $form->type);
    return strtolower(substr($type, 0, 6));
  }

  public static function getLastInvoiceByPrefix($prefix) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'freedompay_invoice')
          ->propertyCondition('prefix', $prefix)
          ->propertyOrderBy('created', 'DESC')
          ->range(0, 1);
    $result = $query->execute();
    if (isset($result['freedompay_invoice'])) {
      reset($result['freedompay_invoice']);
      $invoice_id = array_keys($result['freedompay_invoice']);
      $invoices = FreedompayInvoice::getInvoices($invoice_id);
      return reset($invoices);
    }
    return NULL;
  }

  public static function adminPage() {
    $output = [];
    $invoiceIds = FreedompayInvoice::getInvoiceIds();
    if (!empty($invoiceIds)) {
      $output[] = FreedompayInvoice::tableView($invoiceIds);
    }
    return $output;
  }

  public static function tableView($invoiceIds) {
    $tableView = array(
      '#theme' => 'table',
      '#header' => array(t('Invoice Number'),t('Order form'), t('Amount'), t('Paid'),t('Payment AuthCode')),
      '#rows' => FreedompayInvoice::rowView($invoiceIds),
      '#attributes' => array('class' => array('table-class')),
      '#empty' =>t('No invoices have been processed yet'),
    );
    return $tableView;
  }

  public static function rowView($invoiceIds) {
    $rows = [];
    $invoices = FreedompayInvoice::getInvoices($invoiceIds);
    foreach ($invoices as $id=> $invoice) {
      $rows[$id] = array(
        'number' => $invoice->formatInvoiceNumber(),
        'order' => l($invoice->order_id, $invoice->order_type . '/' . $invoice->order_id),
        'amount' => $invoice->amount,
        'paid' => ($invoice->paid) ? 'Yes' : 'No',
        'payment' => $invoice->formatPaymentCell(),
      );
    }
    return $rows;
  }

  public static function getInvoiceIds() {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'freedompay_invoice')
          ->propertyOrderBy('created', 'DESC');

    $result = $query->execute();
    if (isset($result['freedompay_invoice'])) {
      return array_keys($result['freedompay_invoice']);
    }
    return NULL;
  }

  public static function getInvoiceById($invoice_id) {
    $invoices = FreedompayInvoice::getInvoices(array($invoice_id));
    return reset($invoices);
  }

  public static function getInvoices($invoice_ids = array(), $conditions = array(), $reset = FALSE) {
    if (empty($invoice_ids) && empty($conditions)) {
      $invoice_ids = FreedompayInvoice::getInvoiceIds();
    }
    return entity_load('freedompay_invoice', $invoice_ids, $conditions, $reset);
  }

  public static function getInvoiceByOrderId($orderId) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'freedompay_invoice')
          ->propertyCondition('order_id', $orderId);
    $result = $query->execute();
    if (isset($result['freedompay_invoice'])) {
      $invoice_ids = array_keys($result['freedompay_invoice']);
      $invoice_array = FreedompayInvoice::getInvoices($invoice_ids);
      return reset($invoice_array);
    }
    return NULL;
  }

  public static function getInvoiceByTransactionId($transaction_id) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'freedompay_invoice')
          ->propertyCondition('transaction_id', $transaction_id);
    $result = $query->execute();
    if (isset($result['freedompay_invoice'])) {
      $invoice_ids = array_keys($result['freedompay_invoice']);
      $invoice_array = FreedompayInvoice::getInvoices($invoice_ids);
      return reset($invoice_array);
    }
    return NULL;
  }

  /**
   * Checks the invoice number and prefix combination
   * - called after the alter hook since that can modify either of those values
   */
  public function isDuplicate() {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'freedompay_invoice')
          ->propertyCondition('number', $this->number)
          ->propertyCondition('prefix', $this->prefix);
    $result = $query->execute();
    if (isset($result['freedompay_invoice'])) {
      return TRUE;
    }
    return FALSE;
  }

  public function payment() {
    return FreedompayPayment::getPaymentByTransactionId($this->transaction_id);
  }
}
