<?php
/**
 * @file
 * os2web_acadre_arp.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_acadre_arp_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arp_files|node|arp_case|default';
  $field_group->group_name = 'group_arp_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arp_case';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_arp_files|node|arp_case|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arp_files|node|arp_case|form';
  $field_group->group_name = 'group_arp_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arp_case';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => NULL,
    'weight' => '',
    'children' => array(),
    'format_type' => 'div',
  );
  $export['group_arp_files|node|arp_case|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arp_meta|node|arp_case|default';
  $field_group->group_name = 'group_arp_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arp_case';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_arp_meta|node|arp_case|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arp_meta|node|arp_case|form';
  $field_group->group_name = 'group_arp_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'arp_case';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => NULL,
    'weight' => '',
    'children' => array(),
    'format_type' => 'div',
  );
  $export['group_arp_meta|node|arp_case|form'] = $field_group;

  return $export;
}
