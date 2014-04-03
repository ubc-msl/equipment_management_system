<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function equipment_management_system_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: secondary-links:internal/research-support/equipment
  $menu_links['secondary-links:internal/research-support/equipment'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'internal/research-support/equipment',
    'router_path' => 'internal/research-support/equipment',
    'link_title' => 'Equipment Management',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-48',
    'parent_path' => 'node/334',
  );
  // Exported menu link: secondary-links:internal/research-support/equipment-data-export
  $menu_links['secondary-links:internal/research-support/equipment-data-export'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'internal/research-support/equipment-data-export',
    'router_path' => 'internal/research-support/equipment-data-export',
    'link_title' => 'Equipment Data Export',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'internal/research-support/equipment',
  );
  // Exported menu link: secondary-links:internal/research-support/equipment-decommissioned
  $menu_links['secondary-links:internal/research-support/equipment-decommissioned'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'internal/research-support/equipment-decommissioned',
    'router_path' => 'internal/research-support/equipment-decommissioned',
    'link_title' => 'Decommissioned  Equipment',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'internal/research-support/equipment',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Decommissioned  Equipment');
  t('Equipment Data Export');
  t('Equipment Management');


  return $menu_links;
}
