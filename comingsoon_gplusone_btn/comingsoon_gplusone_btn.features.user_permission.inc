<?php
/**
 * @file
 * comingsoon_gplusone_btn.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function comingsoon_gplusone_btn_user_default_permissions() {
  $permissions = array();

  // Exported permission: view google plusone
  $permissions['view google plusone'] = array(
    'name' => 'view google plusone',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'google_plusone',
  );

  return $permissions;
}
