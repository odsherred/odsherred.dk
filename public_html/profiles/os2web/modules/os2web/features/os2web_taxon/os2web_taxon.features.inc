<?php
/**
 * @file
 * os2web_taxon.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_taxon_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
