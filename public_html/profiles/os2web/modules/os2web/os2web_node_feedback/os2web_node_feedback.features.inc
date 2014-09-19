<?php
/**
 * @file
 * os2web_node_feedback.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_node_feedback_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
