<?php
/**
 * @file
 * Hooks provided by the FreedomPay module
 */

/**
 * Allows modules to act on a completed payment form
 * @param  $entityform
 */
function hook_freedompay_order_complete($order, $entity_type, $bundle) {
  $wrapper = $order->formWrapper();
  $email = $wrapper->field_email->value();
  $controller = entity_get_controller('entityform');
  $content = $controller->view(array($entityform->entityform_id => $entityform), 'email', NULL, TRUE);
  $body = drupal_render($content);

  $params = array(
    'subject' => 'Thank you for your payment',
    'content' => $body,
    );

  drupal_mail(
      'freedompay_std_confirmation',
      'payment_confirmation',
      $email,
      LANGUAGE_NONE,
      $params,
      variable_get('site_mail', 'noreply@drupal.org');
    );
}

/**
 * Allows modules to alter the payload before it gets sent to FreedomPay
 * @param  Array &$payload
 *               Among others, includes the elements that get sent to FreedomPay
 *               in order to create a transaction, such as CaptureMode, AddressRequired,
 *               TransactionTotal, TerminalId, StoreId, and MerchantReferenceCode
 *               **NOTE** Because the transaction total can be altered in this hook
 *               the invoice number is not included so that it can be altered separately
 * @param  $entityform_type
 *               The entityform->type property
 */
function hook_freedompay_checkout_payload_alter(&$payload, $order, $form_id) {
  if ($form_id == 'international_camp_payment') {
    $payload['AllowInternationalAddresses'] = TRUE;
  }
}

/**
 * Allows modules to set an invoice prefix based on the order type
 * @param  FreedomPayOrder $order
 */
function hook_freedompay_invoice_prefix($order) {
  if ($order->bundle == 'marvel') {
    return 'avengers';
  }
}

/**
 * Alter the invoice
 * @param  $entityform_type
 * @param  Entity &$invoice
 *         - @see invoice.entity.inc
 */
function hook_freedompay_invoice_alter(&$invoice, $order, $form_id) {
  if ($form_id == 'best_of_the_eighties' && $invoice->number == 1) {
    $invoice->number = 8675309; // Increment the initial number from the old system
  }
}

/**
 * Alter the transaction total before it gets sent to FreedomPay
 * @param  [type] $entityform_type
 * @param  [type] &$transaction_total
 */
function hook_freedompay_transaction_total_alter(&$transaction_total, $order, $form_id) {
  if ($form_id == 'trump_donation') {
    $transaction_total = 1; // He's self-funded anyway
  }
}
