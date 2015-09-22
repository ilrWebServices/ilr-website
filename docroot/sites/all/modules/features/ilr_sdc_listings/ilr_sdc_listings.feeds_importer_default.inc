<?php
/**
 * @file
 * ilr_sdc_listings.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ilr_sdc_listings_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sdc_class_importer';
  $feeds_importer->config = array(
    'name' => 'SDC Class Importer',
    'description' => 'JSON SDC Classes importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.*',
        'sources' => array(
          'jsonpath_parser:0' => 'CLASSID',
          'jsonpath_parser:1' => 'TITLE',
          'jsonpath_parser:2' => 'COURSEID',
          'jsonpath_parser:3' => 'CLASSID',
          'jsonpath_parser:4' => 'STATE',
          'jsonpath_parser:5' => 'CITY',
          'jsonpath_parser:6' => 'ZIP',
          'jsonpath_parser:7' => 'ADDRESS1',
          'jsonpath_parser:8' => 'REGISTRATIONCUTOFFDATE',
          'jsonpath_parser:9' => 'STARTDATE',
          'jsonpath_parser:10' => 'STARTTIME',
          'jsonpath_parser:11' => '{Temporary target 1} {Temporary target 2}',
          'jsonpath_parser:12' => '"US"',
          'jsonpath_parser:13' => 'PRICE',
          'jsonpath_parser:14' => 'ENDDATE',
          'jsonpath_parser:15' => 'ENDTIME',
          'jsonpath_parser:16' => '{Temporary target 3} {Temporary target 4}',
          'jsonpath_parser:17' => 'IS_ON_DEMAND',
          'jsonpath_parser:18' => 'IS_ONLINE',
          'jsonpath_parser:19' => 'ISFULL',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:7' => 0,
            'jsonpath_parser:8' => 0,
            'jsonpath_parser:9' => 0,
            'jsonpath_parser:10' => 0,
            'jsonpath_parser:11' => 0,
            'jsonpath_parser:12' => 0,
            'jsonpath_parser:13' => 0,
            'jsonpath_parser:14' => 0,
            'jsonpath_parser:15' => 0,
            'jsonpath_parser:16' => 0,
            'jsonpath_parser:17' => 0,
            'jsonpath_parser:18' => 0,
            'jsonpath_parser:19' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'field_course',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'field_class_id',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_address:administrative_area',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'field_address:locality',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'jsonpath_parser:7',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'field_registration_end_date:start',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'jsonpath_parser:9',
            'target' => 'Temporary target 1',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'jsonpath_parser:10',
            'target' => 'Temporary target 2',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'jsonpath_parser:11',
            'target' => 'field_class_dates:start',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'jsonpath_parser:12',
            'target' => 'field_address:country',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'jsonpath_parser:13',
            'target' => 'field_price',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'jsonpath_parser:14',
            'target' => 'Temporary target 3',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'jsonpath_parser:15',
            'target' => 'Temporary target 4',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'jsonpath_parser:16',
            'target' => 'field_class_dates:end',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'jsonpath_parser:17',
            'target' => 'field_on_demand',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'jsonpath_parser:18',
            'target' => 'field_online_class',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'jsonpath_parser:19',
            'target' => 'field_is_full',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'sdc_class',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['sdc_class_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sdc_course_importer';
  $feeds_importer->config = array(
    'name' => 'SDC Course Importer',
    'description' => 'SDC Course importer. This will also trigger class and faculty importers.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.*',
        'sources' => array(
          'jsonpath_parser:0' => 'TITLE',
          'jsonpath_parser:1' => 'COURSEID',
          'jsonpath_parser:3' => 'PRICE',
          'jsonpath_parser:4' => 'PRICENOTE',
          'jsonpath_parser:5' => 'CATALOGNUMBERPREFIX',
          'jsonpath_parser:6' => 'CREDITHOURS',
          'jsonpath_parser:7' => 'DEPARTMENT',
          'jsonpath_parser:8' => 'IS_ON_DEMAND',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:7' => 0,
            'jsonpath_parser:8' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'guid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'field_price',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_price_note',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'field_catalog_prefix',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'field_credit_hours',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jsonpath_parser:7',
            'target' => 'field_sdc_department',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'field_on_demand',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'sdc_course',
        'update_non_existent' => 'unpublish',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '21600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['sdc_course_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sdc_faculty_importer';
  $feeds_importer->config = array(
    'name' => 'SDC Faculty importer',
    'description' => 'JSON SDC Faculty importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.*',
        'sources' => array(
          'jsonpath_parser:0' => 'FACULTY_OID',
          'jsonpath_parser:1' => 'PUBLISHEDNAME',
          'jsonpath_parser:2' => 'DESCRIPTION',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'sdc_faculty',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 1,
  );
  $export['sdc_faculty_importer'] = $feeds_importer;

  return $export;
}
