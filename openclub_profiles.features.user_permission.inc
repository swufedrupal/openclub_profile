<?php
/**
 * @file
 * openclub_profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openclub_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'user',
  );

  return $permissions;
}
