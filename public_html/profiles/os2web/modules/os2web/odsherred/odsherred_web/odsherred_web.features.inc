<?php
/**
 * @file
 * odsherred_web.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function odsherred_web_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function odsherred_web_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function odsherred_web_image_default_styles() {
  $styles = array();

  // Exported image style: 181_128.
  $styles['181_128'] = array(
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 181,
          'height' => 128,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 240_150.
  $styles['240_150'] = array(
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 240,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 316_243.
  $styles['316_243'] = array(
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 316,
          'height' => 243,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 316x237.
  $styles['316x237'] = array(
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 316,
          'height' => 237,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 316x299.
  $styles['316x299'] = array(
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 316,
          'height' => 299,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 80_60.
  $styles['80_60'] = array(
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 60,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: fullscreen.
  $styles['fullscreen'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1600,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: grid-3.
  $styles['grid-3'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 130,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
