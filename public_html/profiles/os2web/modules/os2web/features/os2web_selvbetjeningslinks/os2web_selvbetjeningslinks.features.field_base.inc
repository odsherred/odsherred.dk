<?php
/**
 * @file
 * os2web_selvbetjeningslinks.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function os2web_selvbetjeningslinks_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_os2web_selfservice_struct'
  $field_bases['field_os2web_selfservice_struct'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_selfservice_struct',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'os2web_selfservice_structure' => 'os2web_selfservice_structure',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
