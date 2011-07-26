<?php
/**
 * @file
 * comingsoon_fbbtn.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function comingsoon_fbbtn_user_default_permissions() {
  $permissions = array();

  // Exported permission: access fblikebutton
  $permissions['access fblikebutton'] = array(
    'name' => 'access fblikebutton',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'fblikebutton',
  );

  return $permissions;
}
