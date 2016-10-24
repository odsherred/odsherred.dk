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
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_os2web_selfservice_struct',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Selfservice Structure */
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['id'] = 'field_os2web_selfservice_struct';
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['table'] = 'field_data_field_os2web_selfservice_struct';
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['field'] = 'field_os2web_selfservice_struct';
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_selfservice_struct']['delta_offset'] = '0';
  /* Field: Content: Direkte link */
  $handler->display->display_options['fields']['field_os2web_base_field_direct']['id'] = 'field_os2web_base_field_direct';
  $handler->display->display_options['fields']['field_os2web_base_field_direct']['table'] = 'field_data_field_os2web_base_field_direct';
  $handler->display->display_options['fields']['field_os2web_base_field_direct']['field'] = 'field_os2web_base_field_direct';
  $handler->display->display_options['fields']['field_os2web_base_field_direct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_direct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_direct']['element_label_colon'] = FALSE;
  /* Field: Field: Link til side */
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['id'] = 'field_os2web_base_field_ref_node';
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['table'] = 'field_data_field_os2web_base_field_ref_node';
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['field'] = 'field_os2web_base_field_ref_node';
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['empty'] = '[field_os2web_base_field_direct]';
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['type'] = 'node_reference_path';
  $handler->display->display_options['fields']['field_os2web_base_field_ref_node']['settings'] = array(
    'alias' => 1,
    'absolute' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_os2web_base_field_ref_node]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Content: Selfservice Structure (field_os2web_selfservice_struct) */
  $handler->display->display_options['filters']['field_os2web_selfservice_struct_target_id']['id'] = 'field_os2web_selfservice_struct_target_id';
  $handler->display->display_options['filters']['field_os2web_selfservice_struct_target_id']['table'] = 'field_data_field_os2web_selfservice_struct';
  $handler->display->display_options['filters']['field_os2web_selfservice_struct_target_id']['field'] = 'field_os2web_selfservice_struct_target_id';
  $handler->display->display_options['filters']['field_os2web_selfservice_struct_target_id']['operator'] = 'not empty';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
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
    t('[field_os2web_base_field_direct]'),
    t('[title]'),
    t('Content pane'),
    t('View panes'),
  );
  $export['os2web_selfservice_links_page'] = $view;

  $view = new view();
  $view->name = 'selvbetjenings_lister';
  $view->description = 'Side, block og andre visninger af Jobs fra Ofir.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Selvbetjenings lister';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Jobs fra Ofir.dk:';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['selvbetjenings_lister'] = array(
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
    t('Page'),
    t('Block'),
    t('Jobs fra Ofir.dk:'),
  );
  $export['selvbetjenings_lister'] = $view;

  return $export;
}
