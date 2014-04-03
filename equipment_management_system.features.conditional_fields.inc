<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function equipment_management_system_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_equipment_status',
  'field_name' => 'field_equipment_decom_date',
  'type' => 'equipment',
  'trigger_values' => 
  array (
    'decommissioned' => 'decommissioned',
  ),
);
return $items;
}
