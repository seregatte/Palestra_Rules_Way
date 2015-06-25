<?php
/**
 * @file
 * fs_global.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fs_global_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: role1.
  $roles['role1'] = array(
    'name' => 'role1',
    'weight' => 3,
  );

  // Exported role: role2.
  $roles['role2'] = array(
    'name' => 'role2',
    'weight' => 4,
  );

  return $roles;
}
