<?php

/**
 * Implementation of hook_views_default_views().
 */
function equipment_management_system_views_default_views() {
  $views = array();

  // Exported view: equipment_management
  $view = new view;
  $view->name = 'equipment_management';
  $view->description = 'Equipment Management System';
  $view->tag = 'equipment';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Description',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '34',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_equipment_manufacturer_value' => array(
      'label' => 'Manufacturer',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '18',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_manufacturer_value',
      'table' => 'node_data_field_equipment_manufacturer',
      'field' => 'field_equipment_manufacturer_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_location_value' => array(
      'label' => 'Location',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_location_value',
      'table' => 'node_data_field_equipment_location',
      'field' => 'field_equipment_location_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_owner_value' => array(
      'label' => 'Owner',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_owner_value',
      'table' => 'node_data_field_equipment_owner',
      'field' => 'field_equipment_owner_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_access_value' => array(
      'label' => 'Access',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_access_value',
      'table' => 'node_data_field_equipment_access',
      'field' => 'field_equipment_access_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_barcode_value' => array(
      'label' => 'Barcode',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_barcode_value',
      'table' => 'node_data_field_equipment_barcode',
      'field' => 'field_equipment_barcode_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'title' => array(
      'order' => 'ASC',
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'equipment' => 'equipment',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'field_equipment_status_value' => array(
      'operator' => '=',
      'value' => 'in_service',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
        'optional' => FALSE,
      ),
      'case' => 0,
      'id' => 'field_equipment_status_value',
      'table' => 'node_data_field_equipment_status',
      'field' => 'field_equipment_status_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'title_op',
        'identifier' => 'description',
        'label' => 'Description',
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_manufacturer_value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_equipment_manufacturer_value_op',
        'identifier' => 'field_equipment_manufacturer_value',
        'label' => 'Manufacturer',
        'remember' => 0,
      ),
      'case' => 1,
      'id' => 'field_equipment_manufacturer_value',
      'table' => 'node_data_field_equipment_manufacturer',
      'field' => 'field_equipment_manufacturer_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_location_value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_equipment_location_value_op',
        'identifier' => 'location',
        'label' => 'Location',
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'field_equipment_location_value',
      'table' => 'node_data_field_equipment_location',
      'field' => 'field_equipment_location_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_owner_value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_equipment_owner_value_op',
        'identifier' => 'owner',
        'label' => 'Owner',
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'field_equipment_owner_value',
      'table' => 'node_data_field_equipment_owner',
      'field' => 'field_equipment_owner_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_access_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_equipment_access_value_many_to_one_op',
        'identifier' => 'access',
        'label' => 'Access',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_equipment_access_value_many_to_one',
      'table' => 'node_data_field_equipment_access',
      'field' => 'field_equipment_access_value_many_to_one',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      38 => 38,
    ),
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Equipment Management');
  $handler->override_option('header', '<div id="equip_help"><a href="/users/rdeane">Randy Deane</a> and <a href="/users/vluk">Victor Luk</a> are in charge of maintaining this list.  Please contact them for any additions or modifications.</div>

<div id="equip_export">To Print, save as PDF, or export to Excel please use the <a href="/internal/research-support/equipment-data-export?order=<?php echo $_GET[\'order\']; ?>&amp;sort=<?php echo $_GET[\'sort\']; ?>&amp;description=<?php echo $_GET[\'description\']; ?>&amp;model=<?php echo $_GET[\'model\']; ?>&amp;location=<?php echo $_GET[\'location\']; ?>&amp;owner=<?php echo $_GET[\'owner\']; ?>&amp;access=<?php echo $_GET[\'access\'] ? $_GET[\'access\'] : \'All\';  ?>">Equipment Management Data Export</a> page.</div>

<div id="equip_decom">The <a href="/internal/research-support/equipment-decommissioned?order=<?php echo $_GET[\'order\']; ?>&amp;sort=<?php echo $_GET[\'sort\']; ?>&amp;description=<?php echo $_GET[\'description\']; ?>&amp;model=<?php echo $_GET[\'model\']; ?>&amp;location=<?php echo $_GET[\'location\']; ?>&amp;owner=<?php echo $_GET[\'owner\']; ?>&amp;access=<?php echo $_GET[\'access\'] ? $_GET[\'access\'] : \'All\';  ?>">Decommissioned Equipment</a> page lists all the equipment that is no longer in service.</div>

<div id="equip_description">
<p id="equip_description_intro">
The Equipment Management System lists all of the large pieces of scientific equipment in service at the MSL.  
<br />
<br />
There are three levels of access to equipment:
</p>
<p>
<table>
<tbody>
<tr>
<td><span class="equip_access restricted">Restricted</span></td><td>Only usable by the owner\'s lab members.</td>
</tr>
<tr>
<td><span class="equip_access permission">Permission</span></td><td>You must request use of this equipment from the lab owner.</td>
</tr>
<tr>
<td><span class="equip_access shared">Shared</span></td><td>Usable by any MSL/CHiBi personnel.  Please use the <a href="https://equipmentbooking.msl.ubc.ca" target="_blank">Equipment Booking System</a> to reserve use of the equipment.</td>
</tr>
</tbody>
</table>

<p>
Click the description of the equipment to view the full details including any manuals, software, or other files that have been attached.  The filter fields can help you narrow down the list of equipment. Clicking on the table headers will change the sorting.
</p>
</div>

<div id="equip_extra_buttons">
<?php global $user; ?>
<?php if ( in_array("Administrator", array_values($user->roles)) || in_array("Equipment Manager", $user->roles)): ?>
<form action="/node/add/equipment" style="width:100%">
    <input id="add-equip" class="form-submit" type="submit" value="+ Add Equipment">
</form>
<?php endif ?>
<form action="/internal/research-support/equipment" style="width:100%">
    <input id="reset-filters" class="form-submit" type="submit" value="Reset">
</form>
</div>');
  $handler->override_option('header_format', '3');
  $handler->override_option('header_empty', 1);
  $handler->override_option('empty', '<h2 style="padding-top:40px;">Sorry, no equipment could be found.</h2>
<h3><a href="/internal/research-support/equipment">Clear all the filters and try again.</a></h3>');
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', 100);
  $handler->override_option('use_pager', '1');
  $handler->override_option('link_display', 'page_2');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'asc',
    'summary' => '',
    'columns' => array(
      'title' => 'title',
      'field_equipment_model_value' => 'field_equipment_model_value',
      'field_equipment_manufacturer_value' => 'field_equipment_manufacturer_value',
      'field_equipment_location_value' => 'field_equipment_location_value',
      'field_equipment_owner_value' => 'field_equipment_owner_value',
      'field_equipment_access_value' => 'field_equipment_access_value',
      'field_equipment_barcode_value' => 'field_equipment_barcode_value',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_equipment_model_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_equipment_manufacturer_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_equipment_location_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_equipment_owner_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_equipment_access_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_equipment_barcode_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'title',
  ));
  $handler = $view->new_display('page', 'Equipment Management', 'page_1');
  $handler->override_option('path', 'internal/research-support/equipment');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Equipment Management',
    'description' => '',
    'weight' => '0',
    'name' => 'secondary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('feed', 'Equipment Management Excel Download', 'feed_1');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Description',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'field_equipment_model_value' => array(
      'label' => 'Model',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_model_value',
      'table' => 'node_data_field_equipment_model',
      'field' => 'field_equipment_model_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_manufacturer_value' => array(
      'label' => 'Manufacturer',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_manufacturer_value',
      'table' => 'node_data_field_equipment_manufacturer',
      'field' => 'field_equipment_manufacturer_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_location_value' => array(
      'label' => 'Location',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_location_value',
      'table' => 'node_data_field_equipment_location',
      'field' => 'field_equipment_location_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_owner_value' => array(
      'label' => 'Owner',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_owner_value',
      'table' => 'node_data_field_equipment_owner',
      'field' => 'field_equipment_owner_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_access_value' => array(
      'label' => 'Access',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_access_value',
      'table' => 'node_data_field_equipment_access',
      'field' => 'field_equipment_access_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_barcode_value' => array(
      'id' => 'field_equipment_barcode_value',
      'table' => 'node_data_field_equipment_barcode',
      'field' => 'field_equipment_barcode_value',
    ),
  ));
  $handler->override_option('header', '');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'xls');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
    'filename' => 'msl-%view.xls',
  ));
  $handler->override_option('row_plugin', '');
  $handler->override_option('path', 'internal/research-support/equipment/msl-equipment-list.xls');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('displays', array(
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
  ));
  $handler->override_option('sitename_title', FALSE);
  $handler = $view->new_display('page', 'Equipment Management Data Export', 'page_2');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Description',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'field_equipment_model_value' => array(
      'label' => 'Model',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_model_value',
      'table' => 'node_data_field_equipment_model',
      'field' => 'field_equipment_model_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_manufacturer_value' => array(
      'label' => 'Manufacturer',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '18',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_manufacturer_value',
      'table' => 'node_data_field_equipment_manufacturer',
      'field' => 'field_equipment_manufacturer_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_location_value' => array(
      'label' => 'Location',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_location_value',
      'table' => 'node_data_field_equipment_location',
      'field' => 'field_equipment_location_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_owner_value' => array(
      'label' => 'Owner',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 1,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_owner_value',
      'table' => 'node_data_field_equipment_owner',
      'field' => 'field_equipment_owner_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_access_value' => array(
      'label' => 'Access',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_access_value',
      'table' => 'node_data_field_equipment_access',
      'field' => 'field_equipment_access_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_barcode_value' => array(
      'label' => 'Barcode',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_barcode_value',
      'table' => 'node_data_field_equipment_barcode',
      'field' => 'field_equipment_barcode_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'equipment' => 'equipment',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'field_equipment_status_value' => array(
      'operator' => '=',
      'value' => 'in_service',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
        'optional' => FALSE,
      ),
      'case' => 0,
      'id' => 'field_equipment_status_value',
      'table' => 'node_data_field_equipment_status',
      'field' => 'field_equipment_status_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'title_op',
        'identifier' => 'description',
        'label' => 'Description',
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_model_value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_equipment_model_value_op',
        'identifier' => 'field_equipment_model_value',
        'label' => 'Model',
        'remember' => 0,
      ),
      'case' => 1,
      'id' => 'field_equipment_model_value',
      'table' => 'node_data_field_equipment_model',
      'field' => 'field_equipment_model_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_manufacturer_value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_equipment_manufacturer_value_op',
        'identifier' => 'field_equipment_manufacturer_value',
        'label' => 'Manufacturer',
        'remember' => 0,
      ),
      'case' => 1,
      'id' => 'field_equipment_manufacturer_value',
      'table' => 'node_data_field_equipment_manufacturer',
      'field' => 'field_equipment_manufacturer_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_location_value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_equipment_location_value_op',
        'identifier' => 'location',
        'label' => 'Location',
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'field_equipment_location_value',
      'table' => 'node_data_field_equipment_location',
      'field' => 'field_equipment_location_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_owner_value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_equipment_owner_value_op',
        'identifier' => 'owner',
        'label' => 'Owner',
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'field_equipment_owner_value',
      'table' => 'node_data_field_equipment_owner',
      'field' => 'field_equipment_owner_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_access_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_equipment_access_value_many_to_one_op',
        'identifier' => 'access',
        'label' => 'Access',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_equipment_access_value_many_to_one',
      'table' => 'node_data_field_equipment_access',
      'field' => 'field_equipment_access_value_many_to_one',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('title', 'Equipment Management Data Export');
  $handler->override_option('css_class', 'view-id-equipment-management-data-export');
  $handler->override_option('header', '<div id="equip_man_link"><a href="/internal/research-support/equipment?order=<?php echo $_GET[\'order\']; ?>&amp;sort=<?php echo $_GET[\'sort\']; ?>&amp;description=<?php echo $_GET[\'description\']; ?>&amp;model=<?php echo $_GET[\'model\']; ?>&amp;location=<?php echo $_GET[\'location\']; ?>&amp;owner=<?php echo $_GET[\'owner\']; ?>&amp;access=<?php echo $_GET[\'access\'] ? $_GET[\'access\'] : \'All\';  ?>">Return to the Equipment Management System page</a></div>

<div id="equip_help"><a href="/users/rdeane">Randy Deane</a> and <a href="/users/vluk">Victor Luk</a> are in charge of maintaining this list.  Please contact them for any additions or modifications.</div>

<div id="equip_description">
<p id="equip_export_intro">
This page is designed to export the equipment list for Print, PDF, and Excel.
</p>
<p>
Use the filters to narrow down the equipment list.  Clicking on the table headers will change the sorting.  When you are finished manipulating the list, click the Print, PDF, or Excel button:
</p>
<div class="print_html">
    	<a class="print-page" title="Display a printer-friendly version of this page." onclick="window.open(this.href); return false" rel="nofollow" href="/print<?php echo str_replace(\'&\', \'&amp;\', $_SERVER[\'REQUEST_URI\']); ?>">
        	<img title="Printer-friendly" src="/sites/all/modules/print/icons/print_icon.gif" alt="Printer-friendly" />
        </a>
</div>
<div class="print_pdf">
   <a class="print-pdf" title="Display a PDF version of this page." rel="nofollow" href="/printpdf<?php echo str_replace(\'&\', \'&amp;\', $_SERVER[\'REQUEST_URI\']); ?>">
    <img  title="PDF version" src="/sites/all/modules/print/icons/pdf_icon.gif" alt="PDF version" />
  </a>
</div> 
<div class="print_excel">
  <a href="/internal/research-support/equipment/msl-equipment-list.xls?order=<?php echo $_GET[\'order\']; ?>&amp;sort=<?php echo $_GET[\'sort\']; ?>&amp;description=<?php echo $_GET[\'description\']; ?>&amp;model=<?php echo $_GET[\'model\']; ?>&amp;location=<?php echo $_GET[\'location\']; ?>&amp;owner=<?php echo $_GET[\'owner\']; ?>&amp;access=<?php echo $_GET[\'access\']; ?>">
    <img src="/sites/all/modules/views_export_xls/images/xls-icon.jpg" alt="" title="" width="32" height="32">
  </a>    
</div>
</div>
<form action="/internal/research-support/equipment-data-export" style="width:100%">
    <input id="reset-filters" class="form-submit" type="submit" value="Reset">
</form>');
  $handler->override_option('empty', '<h2 style="padding-top:40px;">Sorry, no equipment could be found.</h2>
<h3><a href="/internal/research-support/equipment-data-export">Clear all the filters and try again.</a></h3>');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('use_pager', '0');
  $handler->override_option('path', 'internal/research-support/equipment-data-export');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Equipment Data Export',
    'description' => '',
    'weight' => '0',
    'name' => 'secondary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'Equipment Management Decommissioned List', 'page_3');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Description',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'field_equipment_manufacturer_value' => array(
      'label' => 'Manufacturer',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '18',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_manufacturer_value',
      'table' => 'node_data_field_equipment_manufacturer',
      'field' => 'field_equipment_manufacturer_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_location_value' => array(
      'label' => 'Previous Location',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'custom',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_location_value',
      'table' => 'node_data_field_equipment_location',
      'field' => 'field_equipment_location_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_owner_value' => array(
      'label' => 'Owner',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_owner_value',
      'table' => 'node_data_field_equipment_owner',
      'field' => 'field_equipment_owner_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_barcode_value' => array(
      'label' => 'Barcode',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_equipment_barcode_value',
      'table' => 'node_data_field_equipment_barcode',
      'field' => 'field_equipment_barcode_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_decom_date_value' => array(
      'label' => 'Decommissioned On',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'medium',
      'multiple' => array(
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'group' => TRUE,
      ),
      'repeat' => array(
        'show_repeat_rule' => '',
      ),
      'fromto' => array(
        'fromto' => 'both',
      ),
      'exclude' => 0,
      'id' => 'field_equipment_decom_date_value',
      'table' => 'node_data_field_equipment_decom_date',
      'field' => 'field_equipment_decom_date_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'equipment' => 'equipment',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'field_equipment_status_value' => array(
      'operator' => '=',
      'value' => 'decommissioned',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
        'optional' => FALSE,
      ),
      'case' => 0,
      'id' => 'field_equipment_status_value',
      'table' => 'node_data_field_equipment_status',
      'field' => 'field_equipment_status_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'title_op',
        'identifier' => 'description',
        'label' => 'Description',
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_manufacturer_value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_equipment_manufacturer_value_op',
        'identifier' => 'field_equipment_manufacturer_value',
        'label' => 'Manufacturer',
        'remember' => 0,
      ),
      'case' => 1,
      'id' => 'field_equipment_manufacturer_value',
      'table' => 'node_data_field_equipment_manufacturer',
      'field' => 'field_equipment_manufacturer_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_location_value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_equipment_location_value_op',
        'identifier' => 'location',
        'label' => 'Location',
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'field_equipment_location_value',
      'table' => 'node_data_field_equipment_location',
      'field' => 'field_equipment_location_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'field_equipment_owner_value' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_equipment_owner_value_op',
        'identifier' => 'owner',
        'label' => 'Owner',
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'field_equipment_owner_value',
      'table' => 'node_data_field_equipment_owner',
      'field' => 'field_equipment_owner_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Decommissioned Equipment');
  $handler->override_option('css_class', 'view-id-equipment-management-decommissioned');
  $handler->override_option('header', '<div id="equip_man_link"><a href="/internal/research-support/equipment?order=<?php echo $_GET[\'order\']; ?>&amp;sort=<?php echo $_GET[\'sort\']; ?>&amp;description=<?php echo $_GET[\'description\']; ?>&amp;model=<?php echo $_GET[\'model\']; ?>&amp;location=<?php echo $_GET[\'location\']; ?>&amp;owner=<?php echo $_GET[\'owner\']; ?>&amp;access=<?php echo $_GET[\'access\'] ? $_GET[\'access\'] : \'All\';  ?>">Return to the Equipment Management System page</a></div>

<div id="equip_help"><a href="/users/rdeane">Randy Deane</a> and <a href="/users/vluk">Victor Luk</a> are in charge of maintaining this list.  Please contact them for any additions or modifications.</div>

<div id="equip_description">
<p id="equip_decom_intro">
This page lists all of the large pieces of scientific equipment in the MSL that have been taken out of service.
</p>
<p>Clicking on the description of the equipment will show you its details which should contain the story of what happened to the piece of equipment.
</p>
<p>
The filter fields can help you narrow down the list of equipment. Clicking on the table headers will change the sorting.
</p>
</div>
<form action="/internal/research-support/equipment-decommissioned" style="width:100%">
    <input id="reset-filters" class="form-submit" type="submit" value="Reset">
</form>');
  $handler->override_option('empty', '<h2 style="padding-top:40px;">Sorry, no equipment could be found.</h2>
<h3><a href="/internal/research-support/equipment-decommissioned">Clear all the filters and try again.</a></h3>');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('use_pager', '0');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'desc',
    'summary' => '',
    'columns' => array(
      'title' => 'title',
      'field_equipment_model_value' => 'field_equipment_model_value',
      'field_equipment_manufacturer_value' => 'field_equipment_manufacturer_value',
      'field_equipment_location_value' => 'field_equipment_location_value',
      'field_equipment_owner_value' => 'field_equipment_owner_value',
      'field_equipment_barcode_value' => 'field_equipment_barcode_value',
      'field_equipment_decom_date_value' => 'field_equipment_decom_date_value',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_equipment_model_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_equipment_manufacturer_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_equipment_location_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_equipment_owner_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_equipment_barcode_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_equipment_decom_date_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'field_equipment_decom_date_value',
  ));
  $handler->override_option('path', 'internal/research-support/equipment-decommissioned');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Decommissioned  Equipment',
    'description' => '',
    'weight' => '0',
    'name' => 'secondary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
