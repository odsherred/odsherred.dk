<?php
/**
 * @file
 * borgerdk_visning.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function borgerdk_visning_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function borgerdk_visning_image_default_styles() {
  $styles = array();

  // Exported image style: borger_dk_image.
  $styles['borger_dk_image'] = array(
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 210,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'borger_dk_image',
  );

  return $styles;
}
