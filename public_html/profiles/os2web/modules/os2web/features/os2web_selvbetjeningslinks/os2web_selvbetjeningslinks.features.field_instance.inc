<?php
/**
 * @file
 * os2web_selvbetjeningslinks.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function os2web_selvbetjeningslinks_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-os2web_base_selfservice_link-field_os2web_selfservice_struct'
  $field_instances['node-os2web_base_selfservice_link-field_os2web_selfservice_struct'] = array(
    'bundle' => 'os2web_base_selfservice_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 11,
      ),
      'related_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_os2web_selfservice_struct',
    'label' => 'Selvbetjeningsstruktur',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Selvbetjeningsstruktur');

  return $field_instances;
}
