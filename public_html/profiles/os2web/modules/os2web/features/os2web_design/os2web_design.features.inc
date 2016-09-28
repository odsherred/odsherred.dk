<?php
/**
 * @file
 * os2web_design.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_design_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_design_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
