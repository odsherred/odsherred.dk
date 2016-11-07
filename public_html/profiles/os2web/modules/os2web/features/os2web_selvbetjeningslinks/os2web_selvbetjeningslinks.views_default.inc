<?php
/**
 * @file
 * os2web_selvbetjeningslinks.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_selvbetjeningslinks_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2web_selfservice_links_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OS2web Selfservice Links Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_os2web_selfservice_struct_target_id']['id'] = 'field_os2web_selfservice_struct_target_id';
  $handler->display->display_options['relationships']['field_os2web_selfservice_struct_target_id']['table'] = 'field_data_field_os2web_selfservice_struct';
  $handler->display->display_options['relationships']['field_os2web_selfservice_struct_target_id']['field'] = 'field_os2web_selfservice_struct_target_id';
  $handler->display->display_options['relationships']['field_os2web_selfservice_struct_target_id']['label'] = 'Ord i ordforråd entity refereret fra field_os2web_selfservice_struct';
  /* Field: Field: Link til side */
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['id'] = 'field_os2web_base_field_ref_node';
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['table'] = 'field_data_field_os2web_base_field_ref_node';
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['field'] = 'field_os2web_base_field_ref_node';
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['type'] = 'node_reference_path';
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['settings'] = array(
    'alias' => 1,
    'absolute' => 0,
  );
  /* Field: Content: Direkte link */
  $handler->display->display_options['fields']['field_os2web_base_field_direct']['id'] = 'field_os2web_base_field_direct';
  $handler->display->display_options['fields']['field_os2web_base_field_direct']['table'] = 'field_data_field_os2web_base_field_direct';
  $handler->display->display_options['fields']['field_os2web_base_field_direct']['field'] = 'field_os2web_base_field_direct';
  $handler->display->display_options['fields']['field_os2web_base_field_direct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_direct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_direct']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_direct']['empty'] = '[field_os2web_base_field_direct]';
  $handler->display->display_options['fields']['field_os2web_base_field_direct']['type'] = 'text_plain';
  /* Field: Content: Portalkategori */
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['id'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['field'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Selvbetjeningsstruktur */
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['id'] = 'field_os2web_selfservice_struct';
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['table'] = 'field_data_field_os2web_selfservice_struct';
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['field'] = 'field_os2web_selfservice_struct';
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_os2web_base_field_direct]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_os2web_selfservice_struct_target_id';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_base_selfservice_link' => 'os2web_base_selfservice_link',
  );
  /* Filter criterion: Content: Selvbetjeningsstruktur (field_os2web_selfservice_struct) */
  $handler->display->display_options['filters']['field_os2web_selfservice_struct_target_id']['id'] = 'field_os2web_selfservice_struct_target_id';
  $handler->display->display_options['filters']['field_os2web_selfservice_struct_target_id']['table'] = 'field_data_field_os2web_selfservice_struct';
  $handler->display->display_options['filters']['field_os2web_selfservice_struct_target_id']['field'] = 'field_os2web_selfservice_struct_target_id';
  $handler->display->display_options['filters']['field_os2web_selfservice_struct_target_id']['operator'] = 'not empty';
  $translatables['os2web_selfservice_links_page'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Ord i ordforråd entity refereret fra field_os2web_selfservice_struct'),
    t('[field_os2web_base_field_direct]'),
  );
  $export['os2web_selfservice_links_page'] = $view;

  return $export;
}
