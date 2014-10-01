<?php
/**
 * @file
 * forms.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function forms_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_academic_interests_admissi'
  $field_bases['field_academic_interests_admissi'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_academic_interests_admissi',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Business' => 'Business',
        'Economics' => 'Economics',
        'Government' => 'Government',
        'History' => 'History',
        'Human Resources' => 'Human Resources',
        'International Affairs' => 'International Affairs',
        'Labor Relations' => 'Labor Relations',
        'Law' => 'Law',
        'Psychology' => 'Psychology',
        'Public Policy' => 'Public Policy',
        'Sociology' => 'Sociology',
        'Statistics' => 'Statistics',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_how_heard_admissions'
  $field_bases['field_how_heard_admissions'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_how_heard_admissions',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Campus tour' => 'Campus tour',
        'ILR website' => 'ILR website',
        'CU general information session' => 'CU general information session',
        'Direct mail' => 'Direct mail',
        'Email from ILR School' => 'Email from ILR School',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_how_heard_other'
  $field_bases['field_how_heard_other'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_how_heard_other',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 1000,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_other_interests_text'
  $field_bases['field_other_interests_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_other_interests_text',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 1000,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
