<?php

/**
 * @file
 * os2web_settings.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function os2web_settings_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'filter_url' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'tite_removal' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'lightbox2_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'lightbox_iframe_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'lightbox_modal_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'lightbox_video_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
