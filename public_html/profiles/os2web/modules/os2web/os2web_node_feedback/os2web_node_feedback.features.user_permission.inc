<?php
/**
 * @file
 * os2web_node_feedback.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2web_node_feedback_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access feedback form'.
  $permissions['access feedback form'] = array(
    'name' => 'access feedback form',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'feedback',
  );

  // Exported permission: 'administer feedback'.
  $permissions['administer feedback'] = array(
    'name' => 'administer feedback',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'feedback',
  );

  // Exported permission: 'view feedback messages'.
  $permissions['view feedback messages'] = array(
    'name' => 'view feedback messages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'feedback',
  );

  return $permissions;
}
