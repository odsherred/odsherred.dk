<?php
/**
 * @file
 * os2web_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2web_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer os2web'.
  $permissions['administer os2web'] = array(
    'name' => 'administer os2web',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'os2web_settings',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Kommuneinformation' => 'Kommuneinformation',
      'Kommunikation' => 'Kommunikation',
      'Webmaster' => 'Webmaster',
      'Webredaktør' => 'Webredaktør',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Editor' => 'Editor',
      'Kommuneinformation' => 'Kommuneinformation',
      'Kommunikation' => 'Kommunikation',
      'Webmaster' => 'Webmaster',
      'Webredaktør' => 'Webredaktør',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
