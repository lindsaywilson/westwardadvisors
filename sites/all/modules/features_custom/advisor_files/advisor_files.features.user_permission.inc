<?php
/**
 * @file
 * advisor_files.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function advisor_files_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create advisor_file content'.
  $permissions['create advisor_file content'] = array(
    'name' => 'create advisor_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any advisor_file content'.
  $permissions['delete any advisor_file content'] = array(
    'name' => 'delete any advisor_file content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own advisor_file content'.
  $permissions['delete own advisor_file content'] = array(
    'name' => 'delete own advisor_file content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any advisor_file content'.
  $permissions['edit any advisor_file content'] = array(
    'name' => 'edit any advisor_file content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own advisor_file content'.
  $permissions['edit own advisor_file content'] = array(
    'name' => 'edit own advisor_file content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
