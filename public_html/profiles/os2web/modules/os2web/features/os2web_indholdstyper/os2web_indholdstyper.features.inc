<?php
/**
 * @file
 * os2web_indholdstyper.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_indholdstyper_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function os2web_indholdstyper_image_default_styles() {
  $styles = array();

  // Exported image style: indholdsside.
  $styles['indholdsside'] = array(
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 690,
          'height' => 237,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: medium-content.
  $styles['medium-content'] = array(
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 460,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      6 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 460,
          'height' => 260,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: news-cycle-medium.
  $styles['news-cycle-medium'] = array(
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 180,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news-cycle-small.
  $styles['news-cycle-small'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 60,
          'height' => 69,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_big.
  $styles['news_big'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 214,
          'height' => 116,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: rotating_image.
  $styles['rotating_image'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 460,
          'height' => 260,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: rotating_image_small.
  $styles['rotating_image_small'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 161,
          'height' => 65,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function os2web_indholdstyper_node_info() {
  $items = array(
    'contentpage' => array(
      'name' => t('Indholdsside'),
      'base' => 'node_content',
      'description' => t('Almindelig webside til generel brug på sitet.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('Nyhed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
    'selvbetjeningslinks' => array(
      'name' => t('Selvbetjeningslinks'),
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
