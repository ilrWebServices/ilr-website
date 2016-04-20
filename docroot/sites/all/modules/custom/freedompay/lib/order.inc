<?php

class FreedomPayOrder {
  public $id;
  public $form;
  public $entity_type = '';
  public $bundle = '';
  public $hpp = NULL;
  public $invoice = NULL;
  public $transaction_id = NULL;

  public function __construct(array $arguments = array()) {
    if (!empty($arguments)) {
      foreach ($arguments as $property => $argument) {
        $this->{$property} = $argument;
      }
    }
  }

  public function formWrapper() {
    return entity_metadata_wrapper($this->entity_type, $this->form);
  }

  public static function load($order_id, $entity_type='') {
    $form = $order = NULL;
    $invoice = FreedomPayInvoice::getInvoiceByOrderId($order_id);
    $entity_type = (!empty($entity_type))
      ? $entity_type
      : FreedomPayOrder::entityType($invoice);
    if ($entity_type) {
      $entity_array = entity_load($entity_type, array($order_id), array(), FALSE);
      $form = reset($entity_array);
      if ($form) {
        $order = new FreedomPayOrder(array(
          'form' => $form,
          'entity_type' => $entity_type,
          'id' => $order_id,
          'bundle' => $form->type,
          'hpp' => FreedompayHpp::getPortalForType($entity_type, $form->type),
          'invoice' => $invoice,
          'transaction_id' => ($invoice) ? $invoice->transaction_id : NULL,
        ));
      }
    }
    return $order;
  }

  public static function entityType($invoice=NULL) {
    if ($invoice) {
      return $invoice->order_type;
    }
    return _freedompay_cookie_get('order_type');
  }

  public static function getOrderByTransactionId($transaction_id) {
    if ($invoice = FreedomPayInvoice::getInvoiceByTransactionId($transaction_id)) {
      return FreedomPayOrder::load($invoice->order_id, $invoice->order_type);
    }
  }
}
