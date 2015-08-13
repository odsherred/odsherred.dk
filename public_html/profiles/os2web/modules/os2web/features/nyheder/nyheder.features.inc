<?php

/**
 * Implements hook_ctools_plugin_api().
 */
function nyheder_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
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
function nyheder_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function nyheder_image_default_styles() {
  $styles = array();

  // Exported image style: news_page_1_top.
  $styles['news_page_1_top'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 610,
          'height' => 256,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'news_page_1_top',
  );

  // Exported image style: news_page_2_left.
  $styles['news_page_2_left'] = array(
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 290,
          'height' => 196,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'news_page_2_left',
  );

  // Exported image style: news_page_3_right.
  $styles['news_page_3_right'] = array(
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 290,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'news_page_3_right',
  );

  // Exported image style: news_page_8_bottom.
  $styles['news_page_8_bottom'] = array(
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 110,
          'height' => 97,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'news_page_8_bottom',
  );

  return $styles;
}
