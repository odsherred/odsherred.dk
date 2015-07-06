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
  $field_group->data = '';
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
  $field_group->data = '';
  $export['group_news_tabs|node|news|form'] = $field_group;

  return $export;
}
