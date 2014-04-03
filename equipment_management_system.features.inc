<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function equipment_management_system_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function equipment_management_system_node_info() {
  $items = array(
    'equipment' => array(
      'name' => t('Equipment'),
      'module' => 'features',
      'description' => t('A piece of equipment in the MSL.'),
      'has_title' => '1',
      'title_label' => t('Description'),
      'has_body' => '1',
      'body_label' => t('Notes'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function equipment_management_system_views_api() {
  return array(
    'api' => '2',
  );
}
