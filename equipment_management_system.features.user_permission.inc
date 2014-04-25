<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function equipment_management_system_user_default_permissions() {
  $permissions = array();

  // Exported permission: access PDF version
  $permissions['access PDF version'] = array(
    'name' => 'access PDF version',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'Administrator',
    ),
  );

  // Exported permission: access print
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: administer feeds
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      '0' => 'Administrator',
    ),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Editor',
    ),
  );

  // Exported permission: administer print
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(
      '0' => 'Administrator',
    ),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Editor',
    ),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      '0' => 'Administrator',
    ),
  );

  // Exported permission: clear equipment_excel_import feeds
  $permissions['clear equipment_excel_import feeds'] = array(
    'name' => 'clear equipment_excel_import feeds',
    'roles' => array(
      '0' => 'Administrator',
    ),
  );

  // Exported permission: create equipment content
  $permissions['create equipment content'] = array(
    'name' => 'create equipment content',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Editor',
    ),
  );

  // Exported permission: delete any equipment content
  $permissions['delete any equipment content'] = array(
    'name' => 'delete any equipment content',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Management',
    ),
  );

  // Exported permission: delete own equipment content
  $permissions['delete own equipment content'] = array(
    'name' => 'delete own equipment content',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Management',
    ),
  );

  // Exported permission: delete users with role Equipment Manager
  $permissions['delete users with role Equipment Manager'] = array(
    'name' => 'delete users with role Equipment Manager',
    'roles' => array(
      '0' => 'Administrator',
    ),
  );

  // Exported permission: edit any equipment content
  $permissions['edit any equipment content'] = array(
    'name' => 'edit any equipment content',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: edit field_equipment_access
  $permissions['edit field_equipment_access'] = array(
    'name' => 'edit field_equipment_access',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: edit field_equipment_attachments
  $permissions['edit field_equipment_attachments'] = array(
    'name' => 'edit field_equipment_attachments',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: edit field_equipment_barcode
  $permissions['edit field_equipment_barcode'] = array(
    'name' => 'edit field_equipment_barcode',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: edit field_equipment_decom_date
  $permissions['edit field_equipment_decom_date'] = array(
    'name' => 'edit field_equipment_decom_date',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: edit field_equipment_location
  $permissions['edit field_equipment_location'] = array(
    'name' => 'edit field_equipment_location',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: edit field_equipment_manufacturer
  $permissions['edit field_equipment_manufacturer'] = array(
    'name' => 'edit field_equipment_manufacturer',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: edit field_equipment_model
  $permissions['edit field_equipment_model'] = array(
    'name' => 'edit field_equipment_model',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: edit field_equipment_owner
  $permissions['edit field_equipment_owner'] = array(
    'name' => 'edit field_equipment_owner',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: edit field_equipment_serial
  $permissions['edit field_equipment_serial'] = array(
    'name' => 'edit field_equipment_serial',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: edit field_equipment_status
  $permissions['edit field_equipment_status'] = array(
    'name' => 'edit field_equipment_status',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: edit field_equipment_supplier
  $permissions['edit field_equipment_supplier'] = array(
    'name' => 'edit field_equipment_supplier',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: edit field_equipment_warranty
  $permissions['edit field_equipment_warranty'] = array(
    'name' => 'edit field_equipment_warranty',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: edit own equipment content
  $permissions['edit own equipment content'] = array(
    'name' => 'edit own equipment content',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Equipment Manager',
      '2' => 'Management',
    ),
  );

  // Exported permission: edit users with role Equipment Manager
  $permissions['edit users with role Equipment Manager'] = array(
    'name' => 'edit users with role Equipment Manager',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Editor',
    ),
  );

  // Exported permission: import equipment_excel_import feeds
  $permissions['import equipment_excel_import feeds'] = array(
    'name' => 'import equipment_excel_import feeds',
    'roles' => array(
      '0' => 'Administrator',
    ),
  );

  // Exported permission: node-specific print configuration
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(
      '0' => 'Administrator',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      '0' => 'Administrator',
      '1' => 'Editor',
    ),
  );

  // Exported permission: use PHP for link visibility
  $permissions['use PHP for link visibility'] = array(
    'name' => 'use PHP for link visibility',
    'roles' => array(
      '0' => 'Administrator',
    ),
  );

  // Exported permission: view field_equipment_access
  $permissions['view field_equipment_access'] = array(
    'name' => 'view field_equipment_access',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_equipment_attachments
  $permissions['view field_equipment_attachments'] = array(
    'name' => 'view field_equipment_attachments',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_equipment_barcode
  $permissions['view field_equipment_barcode'] = array(
    'name' => 'view field_equipment_barcode',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_equipment_decom_date
  $permissions['view field_equipment_decom_date'] = array(
    'name' => 'view field_equipment_decom_date',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_equipment_location
  $permissions['view field_equipment_location'] = array(
    'name' => 'view field_equipment_location',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_equipment_manufacturer
  $permissions['view field_equipment_manufacturer'] = array(
    'name' => 'view field_equipment_manufacturer',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_equipment_model
  $permissions['view field_equipment_model'] = array(
    'name' => 'view field_equipment_model',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_equipment_owner
  $permissions['view field_equipment_owner'] = array(
    'name' => 'view field_equipment_owner',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_equipment_serial
  $permissions['view field_equipment_serial'] = array(
    'name' => 'view field_equipment_serial',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_equipment_status
  $permissions['view field_equipment_status'] = array(
    'name' => 'view field_equipment_status',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_equipment_supplier
  $permissions['view field_equipment_supplier'] = array(
    'name' => 'view field_equipment_supplier',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_equipment_warranty
  $permissions['view field_equipment_warranty'] = array(
    'name' => 'view field_equipment_warranty',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: xls export views
  $permissions['xls export views'] = array(
    'name' => 'xls export views',
    'roles' => array(
      '0' => 'Administrator',
    ),
  );

  return $permissions;
}
