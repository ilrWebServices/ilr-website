<?php

class EntityFieldQueryDeduped extends EntityFieldQuery {

  protected static $retrieved_nids = array();

  public function execute() {
    if (!empty(EntityFieldQueryDeduped::$retrieved_nids)) {
      $this->entityCondition('entity_id', EntityFieldQueryDeduped::$retrieved_nids, 'NOT IN');
    }

    $result = parent::execute();

    if(!empty($result)) {
      // Add the result nids to the previously retrieved_nids
      $this->addToRetrievedNids(array_keys($result['node']));
    }

    return $result;
  }

  public static function addToRetrievedNids($new_nids) {
    EntityFieldQueryDeduped::$retrieved_nids = array_merge(
      EntityFieldQueryDeduped::$retrieved_nids,
      $new_nids
    );
  }
}
