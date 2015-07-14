<?php
/**
 * @file
 * os2web_spotbokse.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_spotbokse_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_spotbokse_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function os2web_spotbokse_image_default_styles() {
  $styles = array();

  // Exported image style: spotbox-300.
  $styles['spotbox-300'] = array(
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 261,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: spotbox-tall.
  $styles['spotbox-tall'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 230,
          'height' => 337,
          'anchor' => 'center-center',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: spotbox5.
  $styles['spotbox5'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 290,
          'height' => 85,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: spotbox_portal.
  $styles['spotbox_portal'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 169,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: spotbox_portal_uden_links.
  $styles['spotbox_portal_uden_links'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 106,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: spotbox_right.
  $styles['spotbox_right'] = array(
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 230,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      9 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 230,
          'height' => 115,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: video_forside.
  $styles['video_forside'] = array(
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 310,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      10 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 310,
          'height' => 177,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function os2web_spotbokse_node_info() {
  $items = array(
    'spotbox' => array(
      'name' => t('Spotbox'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
