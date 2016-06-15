<?php
/**
 * @file
 * os2web_sektionssider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_sektionssider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function os2web_sektionssider_node_info() {
  $items = array(
    'sektionsside' => array(
      'name' => t('Sektionsside'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Sektionsnavn'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
