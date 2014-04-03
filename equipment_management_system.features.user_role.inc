<?php

/**
 * Implementation of hook_user_default_roles().
 */
function equipment_management_system_user_default_roles() {
  $roles = array();

  // Exported role: Equipment Manager
  $roles['Equipment Manager'] = array(
    'name' => 'Equipment Manager',
  );

  return $roles;
}
