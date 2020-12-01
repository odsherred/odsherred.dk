<?php

/**
 * @file
 * odsherred_eu_cookie_compliance.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function odsherred_eu_cookie_compliance_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer EU Cookie Compliance categories'.
  $permissions['administer EU Cookie Compliance categories'] = array(
    'name' => 'administer EU Cookie Compliance categories',
    'roles' => array(),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'administer EU Cookie Compliance popup'.
  $permissions['administer EU Cookie Compliance popup'] = array(
    'name' => 'administer EU Cookie Compliance popup',
    'roles' => array(),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'display EU Cookie Compliance popup'.
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Borger' => 'Borger',
      'Editor' => 'Editor',
      'Erhverv' => 'Erhverv',
      'Ingen datovalidering' => 'Ingen datovalidering',
      'Kommuneinformation' => 'Kommuneinformation',
      'Kommunikation' => 'Kommunikation',
      'Opret afgørelser' => 'Opret afgørelser',
      'Opret høringer' => 'Opret høringer',
      'Opret møder' => 'Opret møder',
      'Opret nyhed' => 'Opret nyhed',
      'Opret udbud' => 'Opret udbud',
      'Opret åstesforretning' => 'Opret åstesforretning',
      'Politik' => 'Politik',
      'Student' => 'Student',
      'Webmaster' => 'Webmaster',
      'Webredaktør' => 'Webredaktør',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'eu_cookie_compliance',
  );

  return $permissions;
}
