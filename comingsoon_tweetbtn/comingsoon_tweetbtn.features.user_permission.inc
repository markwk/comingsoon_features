<?php
/**
 * @file
 * comingsoon_tweetbtn.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function comingsoon_tweetbtn_user_default_permissions() {
  $permissions = array();

  // Exported permission: access tweetbutton
  $permissions['access tweetbutton'] = array(
    'name' => 'access tweetbutton',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'tweetbutton',
  );

  return $permissions;
}
