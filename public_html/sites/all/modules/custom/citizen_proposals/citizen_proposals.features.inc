<?php
/**
 * @file
 * citizen_proposals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function citizen_proposals_ctools_plugin_api($module = NULL, $api = NULL) {
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
function citizen_proposals_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Side'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'borgerdrevne_forslag' => array(
      'name' => t('Borgerdrevne forslag'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
