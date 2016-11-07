<?php
/**
 * @file
 * os2web_webform_downloads.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_webform_downloads_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
