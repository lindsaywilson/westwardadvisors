<?php
/**
 * @file
 * user_profiles_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_profiles_feature_user_default_roles() {
  $roles = array();

  // Exported role: Advisor Assistant.
  $roles['Advisor Assistant'] = array(
    'name' => 'Advisor Assistant',
    'weight' => 6,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: advisor.
  $roles['advisor'] = array(
    'name' => 'advisor',
    'weight' => 3,
  );

  // Exported role: client.
  $roles['client'] = array(
    'name' => 'client',
    'weight' => 4,
  );

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 5,
  );

  return $roles;
}
