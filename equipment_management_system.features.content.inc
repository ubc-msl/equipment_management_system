<?php

/**
 * Implementation of hook_content_default_fields().
 */
function equipment_management_system_content_default_fields() {
  $fields = array();

  // Exported field: field_equipment_access
  $fields['equipment-field_equipment_access'] = array(
    'field_name' => 'field_equipment_access',
    'type_name' => 'equipment',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'restricted|<span class="equip_access restricted">Restricted</span>
permission|<span class="equip_access permission">Permission</span>
shared|<span class="equip_access shared">Shared</span>',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Access',
      'weight' => '-2',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_equipment_attachments
  $fields['equipment-field_equipment_attachments'] = array(
    'field_name' => 'field_equipment_attachments',
    'type_name' => 'equipment',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => '',
      'file_path' => 'equipment',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'File Attachments',
      'weight' => '7',
      'description' => 'Attach manuals, software, images, support agreements and any other relevant files.',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_equipment_barcode
  $fields['equipment-field_equipment_barcode'] = array(
    'field_name' => 'field_equipment_barcode',
    'type_name' => 'equipment',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Barcode',
      'weight' => '-1',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_equipment_decom_date
  $fields['equipment-field_equipment_decom_date'] = array(
    'field_name' => 'field_equipment_decom_date',
    'type_name' => 'equipment',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'j M Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+1',
      'label_position' => 'above',
      'label' => 'Decommissioned',
      'weight' => '1',
      'description' => 'Date the equipment was removed from service.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_equipment_location
  $fields['equipment-field_equipment_location'] = array(
    'field_name' => 'field_equipment_location',
    'type_name' => 'equipment',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'MSL 001
MSL 001A
MSL 001B
MSL 001C
MSL 001D
MSL 003
MSL 005
MSL 005B
MSL 007
MSL 009
MSL 016
MSL 101
MSL 102
MSL 102A
MSL 103
MSL 103A
MSL 105
MSL 105A
MSL 251
MSL 251A
MSL 251B
MSL 253
MSL 253A
MSL 255
MSL 255A
MSL 255B
MSL 255C
MSL 259
MSL 259A
MSL 259B
MSL 259C
MSL 261
MSL 261A
MSL 261B
MSL 263
MSL 263A
MSL 263B
MSL 264
MSL 266
MSL 266A
MSL 267
MSL 267A
MSL 267B
MSL 268
MSL 269
MSL 269A
MSL 269B
MSL 269C
MSL 273
MSL 273A
MSL 273B
MSL 274
MSL 274A
MSL 275
MSL 275A
MSL 275B
MSL 275C
MSL 276
MSL 278
MSL 278A
MSL 286
MSL 290
MSL 292
MSL 296
MSL 357
MSL 359
MSL 359B
MSL 351
MSL 351A
MSL 351B
MSL 353
MSL 353A
MSL 357
MSL 358
MSL 359
MSL 359A
MSL 359B
MSL 359C
MSL 361
MSL 363
MSL 363A
MSL 364
MSL 365
MSL 366
MSL 366A
MSL 367
MSL 367A
MSL 367B
MSL 368
MSL 371
MSL 371A
MSL 371B
MSL 374
MSL 375
MSL 375A
MSL 375B
MSL 375C
MSL 375D
MSL 375E
MSL 376
MSL 377
MSL 377A
MSL 378
MSL 381
MSL 382
MSL 383
MSL 383A
MSL 383B
MSL 383C
MSL 385
MSL 385A
MSL 385B
MSL 385C
MSL 386
MSL 392
NCE 325
NCE 328
NCE 331
NCE 333
NCE 402
NCE 403
NCE 404
NCE 405
NCE 406
NCE 407
NCE 408
NCE 409
NCE 410
NCE 411
NCE 412
NCE 413
NCE 414
NCE 415
NCE 416
NCE 417
NCE 418
NCE 419
NCE 420
NCE 421
NCE 422
NCE 423
NCE 424
NCE 425
NCE 426
NCE 432
NCE 433
NCE 434
NCE 435
NCE 436
NCE 437
NCE 438
NCE 439
NCE 440',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => '-4',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_equipment_manufacturer
  $fields['equipment-field_equipment_manufacturer'] = array(
    'field_name' => 'field_equipment_manufacturer',
    'type_name' => 'equipment',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Manufacturer',
      'weight' => '3',
      'description' => '',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_equipment_model
  $fields['equipment-field_equipment_model'] = array(
    'field_name' => 'field_equipment_model',
    'type_name' => 'equipment',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => 0,
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_equipment_model][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'autocomplete_match' => 'contains',
      'autocomplete_case' => '1',
      'autocomplete_xss' => '0',
      'i18n_flddata' => 0,
      'obey_access_controls' => 1,
      'label' => 'Model',
      'weight' => '2',
      'description' => '',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_equipment_owner
  $fields['equipment-field_equipment_owner'] = array(
    'field_name' => 'field_equipment_owner',
    'type_name' => 'equipment',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'ambl|<a href="/internal/contact-lists/list/ambl" target="_blank">AMBL</a>
biothermodynamics|<a href="/internal/contact-lists/list/biothermodynamics-lab" target="_blank">Biothermodynamics Lab</a>
bohlmann|<a href="/internal/contact-lists/list/bohlmann-lab" target="_blank">Bohlmann Lab</a>
brumer|<a href="/internal/contact-lists/list/brumer-lab" target="_blank">Brumer Lab</a>
bryan|<a href="/internal/contact-lists/list/bryan-lab" target="_blank">Bryan Lab</a>
chibi|<a href="/internal/contact-lists/list/chibi-staff" target="_blank">CHiBi</a>
ellis|<a href="/internal/contact-lists/list/ellis-lab" target="_blank">Ellis Lab</a>
finlay|<a href="/internal/contact-lists/list/finlay-lab" target="_blank">Finlay Lab</a>
foster|<a href="/internal/contact-lists/list/bryan-lab" target="_blank">Foster Lab</a>
gsponer|<a href="/internal/contact-lists/list/gsponer-lab" target="_blank">Gsponer Lab</a>
hansen|<a href="/internal/contact-lists/list/hansen-lab" target="_blank">Hansen Lab</a>
haynes|<a href="/internal/contact-lists/list/haynes-lab" target="_blank">Haynes Lab</a>
hieter|<a href="/internal/contact-lists/list/hieter-lab" target="_blank">Hieter Lab</a>
hirst|<a href="/internal/contact-lists/list/hirst-lab" target="_blank">Hirst Lab</a>
jefferies|<a href="/internal/contact-lists/list/jefferies-lab" target="_blank">Jefferies Lab</a>
kastrup|<a href="/internal/contact-lists/list/kastrup-lab" target="_blank">Kastrup Lab</a>
kronstad|<a href="/internal/contact-lists/list/kronstad-lab" target="_blank">Kronstad Lab</a>
li|<a href="/internal/contact-lists/list/li-lab" target="_blank">Li Lab</a>
mayor|<a href="/internal/contact-lists/list/mayor-lab" target="_blank">Mayor Lab</a>
meyer|<a href="/internal/contact-lists/list/meyer-lab" target="_blank">Meyer Lab</a>
msl|<a href="/internal/contact-lists/list/staff" target="_blank">MSL</a>
naps|<a href="/internal/contact-lists/list/naps" target="_blank">NAPS</a>
pavlidis|<a href="/internal/contact-lists/list/pavlidis-lab" target="_blank">Pavlidis Lab</a>
piret|<a href="/internal/contact-lists/list/piret-lab" target="_blank">Piret Lab</a>
pcf|<a href="/internal/contact-lists/list/proteomics-core-facility" target="_blank">Proteomics Core Facility</a>
snutch|<a href="/internal/contact-lists/list/snutch-lab" target="_blank">Snutch Lab</a>
tokuriki|<a href="/internal/contact-lists/list/tokuriki-lab" target="_blank">Tokuriki Lab</a>
turner|<a href="/internal/contact-lists/list/turner-lab" target="_blank">Turner Lab</a>
withers|<a href="/internal/contact-lists/list/withers-lab" target="_blank">Withers Lab</a>',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Owner',
      'weight' => '-3',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_equipment_serial
  $fields['equipment-field_equipment_serial'] = array(
    'field_name' => 'field_equipment_serial',
    'type_name' => 'equipment',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Serial Number',
      'weight' => '5',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_equipment_status
  $fields['equipment-field_equipment_status'] = array(
    'field_name' => 'field_equipment_status',
    'type_name' => 'equipment',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'in_service|<span class="equip_status in_service">In Service</span>
decommissioned|<span class="equip_status decommissioned">Decommissioned</span>',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Status',
      'weight' => 0,
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_equipment_supplier
  $fields['equipment-field_equipment_supplier'] = array(
    'field_name' => 'field_equipment_supplier',
    'type_name' => 'equipment',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => 0,
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'size' => '60',
      'autocomplete_match' => 'contains',
      'autocomplete_case' => '0',
      'autocomplete_xss' => '0',
      'i18n_flddata' => 0,
      'obey_access_controls' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Supplier',
      'weight' => '4',
      'description' => '',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_equipment_warranty
  $fields['equipment-field_equipment_warranty'] = array(
    'field_name' => 'field_equipment_warranty',
    'type_name' => 'equipment',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => 'required',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'j F, Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-2:+8',
      'label_position' => 'above',
      'label' => 'Warranty',
      'weight' => '6',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Access');
  t('Barcode');
  t('Decommissioned');
  t('File Attachments');
  t('Location');
  t('Manufacturer');
  t('Model');
  t('Owner');
  t('Serial Number');
  t('Status');
  t('Supplier');
  t('Warranty');

  return $fields;
}
