<?php
/**
 * @file
 * nyheder.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyheder_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dato|node|news|form';
  $field_group->group_name = 'group_dato';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news_tabs';
  $field_group->data = array(
    'label' => 'Dato',
    'weight' => '5',
    'children' => array(
      0 => 'field_newstypedato',
      1 => 'field_udloebsdato',
      2 => 'scheduler_settings',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Dato',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_dato|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_tabs|node|news|form';
  $field_group->group_name = 'group_news_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Nyhed',
    'weight' => '0',
    'children' => array(
      0 => 'group_billeder',
      1 => 'group_dato',
      2 => 'group_indstillinger',
      3 => 'group_taksonomi',
      4 => 'group_tekst',
      5 => 'group_bilag',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Nyhed',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_news_tabs|node|news|form'] = $field_group;

  return $export;
}
