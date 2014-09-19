<?php
/**
 * @file
 * os2web_acadre_arp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_acadre_arp_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_acadre_arp_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2web_acadre_arp_node_info() {
  $items = array(
    'arp_case' => array(
      'name' => t('ARP Case'),
      'base' => 'node_content',
      'description' => t('Container for documents related to a case published by ARP'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'arp_document' => array(
      'name' => t('ARP Document'),
      'base' => 'node_content',
      'description' => t('Hold a document and related supplements for an ARP Publication.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
