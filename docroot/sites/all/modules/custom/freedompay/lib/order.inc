<?php

class FreedomPayOrder {
  public $id;
  public $form;
  public $entity_type = '';
  public $bundle = '';

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

  public static function load($order_id,$entity_type='') {
    $form = $order = NULL;
    $type = (!empty($entity_type)) ? $entity_type : _freedompay_cookie_get('order_type');
    if ($type) {
      $entity_array = entity_load($type, array($order_id), array(), FALSE);
      $form = reset($entity_array);
      if ($form) {
        $order = new FreedomPayOrder(array(
          'form' => $form,
          'type' => $type,
          'id' => $order_id,
          'bundle' => $form->type,
        ));
      }
    }
    return $order;
  }
}
