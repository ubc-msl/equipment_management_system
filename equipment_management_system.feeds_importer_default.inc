<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function equipment_management_system_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'equipment_excel_import';
  $feeds_importer->config = array(
    'name' => 'Equipment CSV Import',
    'description' => 'Imports Equipment Data from CSV Files',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'equipment',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'Location',
            'target' => 'field_equipment_location',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Lab',
            'target' => 'field_equipment_owner',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Barcode',
            'target' => 'field_equipment_barcode',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Description',
            'target' => 'title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Manufacturer',
            'target' => 'field_equipment_manufacturer',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Model',
            'target' => 'field_equipment_model',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Serial',
            'target' => 'field_equipment_serial',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Barcode',
            'target' => 'guid',
            'unique' => 1,
          ),
          8 => array(
            'source' => 'Access',
            'target' => 'field_equipment_access',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Status',
            'target' => 'field_equipment_status',
            'unique' => FALSE,
          ),
        ),
        'input_format' => '0',
        'author' => '7',
        'authorize' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );
  $export['equipment_excel_import'] = $feeds_importer;

  return $export;
}
