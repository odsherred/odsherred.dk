<?php
/**
 * @file
 * os2web_kommuneinfo.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function os2web_kommuneinfo_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-kommuneinformationer.
  $menus['menu-kommuneinformationer'] = array(
    'menu_name' => 'menu-kommuneinformationer',
    'title' => 'Kommuneinformation',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Kommuneinformation');


  return $menus;
}
