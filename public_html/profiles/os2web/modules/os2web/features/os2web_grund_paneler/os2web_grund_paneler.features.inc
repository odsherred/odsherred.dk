<?php
/**
 * @file
 * os2web_grund_paneler.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_grund_paneler_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_grund_paneler_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2web_grund_paneler_image_default_styles() {
  $styles = array();

  // Exported image style: 455_265.
  $styles['455_265'] = array(
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 455,
          'height' => 265,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
