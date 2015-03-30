<?php

class EntityReferenceBehavior_machinename extends EntityReference_BehaviorHandler_Abstract {

  public function settingsForm($field, $instance) {
    return array();
  }

  /**
   * Alters the field definition that stores the field value.
   */
  public function schema_alter(&$schema, $field) {
    $schema['columns']['target_id'] = array(
      'description' => 'The machine name of the target entity',
      'type' => 'varchar',
      'length' => 255,
      'not null' => TRUE,
    );
  }

  public function load($entity_type, $entities, $field, $instances, $langcode, &$items) {
    foreach ($entities as $id => $entity) {
      foreach ($items[$id] as $delta => &$item) {
        if (!is_numeric($item['target_id'])) {
          $info = entity_get_info($field['settings']['target_type']);
          if (isset($info['entity keys']['machinename'])) {
            $q = new EntityFieldQuery;
            $r = $q->entityCondition('entity_type', $entity_type)
                   ->entityCondition($info['entity keys']['machinename'], $item['target_id'])
                   ->execute();
            $r = array_keys($r[$entity_type]);
            if (count($r) == 1) {
              $item['target_id'] = $r[0];
            }
          } else {
            $entity = entity_load_single($field['settings']['target_type'], $item['target_id']);
            if ($entity) {
              list($id, $vid, $bundle) = entity_extract_ids($field['settings']['target_type'], $entity);
              $item['target_id'] = $id;
            }
          }
        }
      }
    }
  }

  public function presave($entity_type, $entity, $field, $instance, $langcode, &$items) {
    foreach ($items as &$item) {
      if (is_numeric($item['target_id'])) {
        $info = entity_get_info($field['settings']['target_type']);
        $entity = entity_load($field['settings']['target_type'], array($item['target_id']));
        if (count($entity) == 1) {
          if (isset($info['entity keys']['machinename'])) {
            $item['target_id'] = $entity[$item['target_id']]->$info['entity keys']['machinename'];
          } else {
            $item['target_id'] = entity_id($field['settings']['target_type'], $entity[$item['target_id']]);
          }
        }
      }
    }
  }
}
