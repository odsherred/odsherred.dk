<?php
/**
 * @file
 * os2web_selvbetjeningslinks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_selvbetjeningslinks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_selvbetjeningslinks_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
