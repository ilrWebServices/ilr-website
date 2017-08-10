<?php
/**
 * @file
 * ilr_sdc_listings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ilr_sdc_listings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ilr_sdc_listings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ilr_sdc_listings_node_info() {
  $items = array(
    'sdc_class' => array(
      'name' => t('SDC Class'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sdc_course' => array(
      'name' => t('SDC Course'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sdc_faculty' => array(
      'name' => t('SDC Faculty'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_salesforce_mapping().
 */
function ilr_sdc_listings_default_salesforce_mapping() {
  $items = array();
  $items['course'] = entity_import('salesforce_mapping', '{
    "type" : "salesforce_mapping",
    "name" : "course",
    "label" : "Course",
    "sync_triggers" : "24",
    "salesforce_object_type" : "EXECED_Course__c",
    "salesforce_record_types_allowed" : { "default" : "default" },
    "salesforce_record_type_default" : "default",
    "drupal_entity_type" : "node",
    "drupal_bundle" : "sdc_course",
    "field_mappings" : [
      {
        "drupal_field" : { "fieldmap_type" : "property", "fieldmap_value" : "title" },
        "salesforce_field" : {
          "autoNumber" : false,
          "byteLength" : 240,
          "calculated" : false,
          "calculatedFormula" : null,
          "cascadeDelete" : false,
          "caseSensitive" : false,
          "controllerName" : null,
          "createable" : false,
          "custom" : false,
          "defaultValue" : null,
          "defaultValueFormula" : null,
          "defaultedOnCreate" : true,
          "dependentPicklist" : false,
          "deprecatedAndHidden" : false,
          "digits" : 0,
          "displayLocationInDecimal" : false,
          "externalId" : false,
          "filterable" : true,
          "groupable" : true,
          "htmlFormatted" : false,
          "idLookup" : true,
          "inlineHelpText" : null,
          "label" : "Course Name",
          "length" : 80,
          "name" : "Name",
          "nameField" : true,
          "namePointing" : false,
          "nillable" : true,
          "permissionable" : false,
          "picklistValues" : [],
          "precision" : 0,
          "referenceTo" : [],
          "relationshipName" : null,
          "relationshipOrder" : null,
          "restrictedDelete" : false,
          "restrictedPicklist" : false,
          "scale" : 0,
          "soapType" : "xsd:string",
          "sortable" : true,
          "type" : "string",
          "unique" : false,
          "updateable" : false,
          "writeRequiresMasterRead" : false
        },
        "key" : false,
        "direction" : "sf_drupal"
      },
      {
        "drupal_field" : { "fieldmap_type" : "property", "fieldmap_value" : "field_sf_record_id" },
        "salesforce_field" : {
          "autoNumber" : false,
          "byteLength" : 18,
          "calculated" : false,
          "calculatedFormula" : null,
          "cascadeDelete" : false,
          "caseSensitive" : false,
          "controllerName" : null,
          "createable" : false,
          "custom" : false,
          "defaultValue" : null,
          "defaultValueFormula" : null,
          "defaultedOnCreate" : true,
          "dependentPicklist" : false,
          "deprecatedAndHidden" : false,
          "digits" : 0,
          "displayLocationInDecimal" : false,
          "externalId" : false,
          "filterable" : true,
          "groupable" : true,
          "htmlFormatted" : false,
          "idLookup" : true,
          "inlineHelpText" : null,
          "label" : "Record ID",
          "length" : 18,
          "name" : "Id",
          "nameField" : false,
          "namePointing" : false,
          "nillable" : false,
          "permissionable" : false,
          "picklistValues" : [],
          "precision" : 0,
          "referenceTo" : [],
          "relationshipName" : null,
          "relationshipOrder" : null,
          "restrictedDelete" : false,
          "restrictedPicklist" : false,
          "scale" : 0,
          "soapType" : "tns:ID",
          "sortable" : true,
          "type" : "id",
          "unique" : false,
          "updateable" : false,
          "writeRequiresMasterRead" : false
        },
        "key" : false,
        "direction" : "sf_drupal"
      },
      {
        "drupal_field" : { "fieldmap_type" : "property", "fieldmap_value" : "field_price" },
        "salesforce_field" : {
          "autoNumber" : false,
          "byteLength" : 0,
          "calculated" : false,
          "calculatedFormula" : null,
          "cascadeDelete" : false,
          "caseSensitive" : false,
          "controllerName" : null,
          "createable" : false,
          "custom" : true,
          "defaultValue" : null,
          "defaultValueFormula" : null,
          "defaultedOnCreate" : false,
          "dependentPicklist" : false,
          "deprecatedAndHidden" : false,
          "digits" : 0,
          "displayLocationInDecimal" : false,
          "externalId" : false,
          "filterable" : true,
          "groupable" : false,
          "htmlFormatted" : false,
          "idLookup" : false,
          "inlineHelpText" : null,
          "label" : "Price",
          "length" : 0,
          "name" : "Course_Fee__c",
          "nameField" : false,
          "namePointing" : false,
          "nillable" : true,
          "permissionable" : true,
          "picklistValues" : [],
          "precision" : 9,
          "referenceTo" : [],
          "relationshipName" : null,
          "relationshipOrder" : null,
          "restrictedDelete" : false,
          "restrictedPicklist" : false,
          "scale" : 2,
          "soapType" : "xsd:double",
          "sortable" : true,
          "type" : "currency",
          "unique" : false,
          "updateable" : false,
          "writeRequiresMasterRead" : false
        },
        "key" : false,
        "direction" : "sf_drupal"
      },
      {
        "drupal_field" : {
          "fieldmap_type" : "property",
          "fieldmap_value" : "field_catalog_prefix"
        },
        "salesforce_field" : {
          "autoNumber" : false,
          "byteLength" : 45,
          "calculated" : false,
          "calculatedFormula" : null,
          "cascadeDelete" : false,
          "caseSensitive" : false,
          "controllerName" : null,
          "createable" : false,
          "custom" : true,
          "defaultValue" : null,
          "defaultValueFormula" : null,
          "defaultedOnCreate" : false,
          "dependentPicklist" : false,
          "deprecatedAndHidden" : false,
          "digits" : 0,
          "displayLocationInDecimal" : false,
          "externalId" : false,
          "filterable" : true,
          "groupable" : true,
          "htmlFormatted" : false,
          "idLookup" : false,
          "inlineHelpText" : null,
          "label" : "Course Number",
          "length" : 15,
          "name" : "Course_Number__c",
          "nameField" : false,
          "namePointing" : false,
          "nillable" : true,
          "permissionable" : true,
          "picklistValues" : [],
          "precision" : 0,
          "referenceTo" : [],
          "relationshipName" : null,
          "relationshipOrder" : null,
          "restrictedDelete" : false,
          "restrictedPicklist" : false,
          "scale" : 0,
          "soapType" : "xsd:string",
          "sortable" : true,
          "type" : "string",
          "unique" : false,
          "updateable" : false,
          "writeRequiresMasterRead" : false
        },
        "key" : false,
        "direction" : "sf_drupal"
      },
      {
        "drupal_field" : { "fieldmap_type" : "property", "fieldmap_value" : "field_credit_hours" },
        "salesforce_field" : {
          "autoNumber" : false,
          "byteLength" : 0,
          "calculated" : false,
          "calculatedFormula" : null,
          "cascadeDelete" : false,
          "caseSensitive" : false,
          "controllerName" : null,
          "createable" : false,
          "custom" : true,
          "defaultValue" : null,
          "defaultValueFormula" : null,
          "defaultedOnCreate" : false,
          "dependentPicklist" : false,
          "deprecatedAndHidden" : false,
          "digits" : 0,
          "displayLocationInDecimal" : false,
          "externalId" : false,
          "filterable" : true,
          "groupable" : false,
          "htmlFormatted" : false,
          "idLookup" : false,
          "inlineHelpText" : null,
          "label" : "Credit Hours",
          "length" : 0,
          "name" : "Credit_Hours__c",
          "nameField" : false,
          "namePointing" : false,
          "nillable" : true,
          "permissionable" : true,
          "picklistValues" : [],
          "precision" : 5,
          "referenceTo" : [],
          "relationshipName" : null,
          "relationshipOrder" : null,
          "restrictedDelete" : false,
          "restrictedPicklist" : false,
          "scale" : 2,
          "soapType" : "xsd:double",
          "sortable" : true,
          "type" : "double",
          "unique" : false,
          "updateable" : false,
          "writeRequiresMasterRead" : false
        },
        "key" : false,
        "direction" : "sf_drupal"
      }
    ],
    "pull_trigger_date" : "LastModifiedDate",
    "push_async" : "1",
    "push_batch" : "0",
    "created" : "1493838340",
    "weight" : "0",
    "locked" : "0"
  }');
  return $items;
}
