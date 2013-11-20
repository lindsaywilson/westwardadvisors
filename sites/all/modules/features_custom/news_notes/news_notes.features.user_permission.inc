<?php
/**
 * @file
 * news_notes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function news_notes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create news_notes content'.
  $permissions['create news_notes content'] = array(
    'name' => 'create news_notes content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_notes content'.
  $permissions['delete any news_notes content'] = array(
    'name' => 'delete any news_notes content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own news_notes content'.
  $permissions['delete own news_notes content'] = array(
    'name' => 'delete own news_notes content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any news_notes content'.
  $permissions['edit any news_notes content'] = array(
    'name' => 'edit any news_notes content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own news_notes content'.
  $permissions['edit own news_notes content'] = array(
    'name' => 'edit own news_notes content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
