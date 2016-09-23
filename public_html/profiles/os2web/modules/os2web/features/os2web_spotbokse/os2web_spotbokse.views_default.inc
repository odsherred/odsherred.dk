<?php
/**
 * @file
 * os2web_spotbokse.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_spotbokse_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2web_spotbox_view_spot';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spot view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'spotbox-indhold';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Content: Spotboxe (field_indholdsside_spotboxe) */
  $handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['id'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['table'] = 'field_data_field_indholdsside_spotboxe';
  $handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['field'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_indholdsside_spotboxe_nid']['delta'] = '-1';
  /* Felt: Content: Billede */
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['id'] = 'field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['table'] = 'field_data_field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['field'] = 'field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['label'] = '';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['text'] = '<img src="[field_fokus_sektionsforside]" alt="[title]" />
<span class="zoom-icon"></span>';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_fokus_sektionsforside]<br />
[title]';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '24';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="spotImage">[field_fokus_sektionsforside]</div>
<div class="spotTitle">[title]</div>

';
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Felt: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  /* Felt: Content: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sorteringskriterie: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_spotbox_box' => 'os2web_spotbox_box',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'spotbox-2-vertical';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Felt: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'body' => 0,
    'field_fokus_sektionsforside' => 0,
    'title' => 0,
    'title_1' => 0,
    'field_url' => 0,
  );
  /* Felt: Content: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* Felt: Content: Billede */
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['id'] = 'field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['table'] = 'field_data_field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['field'] = 'field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['label'] = '';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['text'] = '<img src="[field_fokus_sektionsforside]" alt="[title]" />
<span class="zoom-icon"></span>';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_fokus_sektionsforside]<br />
[title]';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '24';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="spotImage">[field_fokus_sektionsforside]</div>
<div class="spotTitle">[title]</div>

';
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Felt: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;

  /* Display: Spotbox */
  $handler = $view->new_display('block', 'Spotbox', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Content: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  /* Felt: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['alter']['text'] = '[field_url] ';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['type'] = 'text_plain';
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_fokus_sektionsforside]<br />
[title]';
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'pane-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Content: Billede */
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['id'] = 'field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['table'] = 'field_data_field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['field'] = 'field_fokus_sektionsforside';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['label'] = '';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['text'] = '<img src="[field_fokus_sektionsforside]" alt="[title_1]" />
<span class="zoom-icon"></span>';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['alter']['link_class'] = 'overlayclass';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['empty'] = '<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_fokus_sektionsforside']['settings'] = array(
    'image_style' => 'spotbox_right',
    'image_link' => '',
  );
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<h3><a href=[field_url]>[title]';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Felt: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_indholdsside_spotboxe_nid';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Felt: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'body' => 0,
    'field_url' => 0,
    'field_fokus_sektionsforside' => 0,
    'title' => 0,
    'title_1' => 0,
  );
  $translatables['os2web_spotbox_view_spot'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('field_indholdsside_spotboxe'),
    t('<img src="[field_fokus_sektionsforside]" alt="[title]" />
<span class="zoom-icon"></span>'),
    t('[field_fokus_sektionsforside]<br />
[title]'),
    t('<div class="spotImage">[field_fokus_sektionsforside]</div>
<div class="spotTitle">[title]</div>

'),
    t('Indhold'),
    t('Alle'),
    t('Content pane'),
    t('more'),
    t('<div class="spotbox_no_picture"><div class="spotbox_no_picture_text"><a href=[field_url]>[body]</a></div></div>'),
    t('View panes'),
    t('Spotbox'),
    t('[field_url] '),
    t('<img src="[field_fokus_sektionsforside]" alt="[title_1]" />
<span class="zoom-icon"></span>'),
    t('<h3><a href=[field_url]>[title]'),
    t('Edit link'),
  );
  $export['os2web_spotbox_view_spot'] = $view;

  $view = new view();
  $view->name = 'spotbox_referenceliste';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'spotbox referenceliste';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = '';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['limit'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'site_struktur' => 'site_struktur',
    'acadremmcomittee' => 0,
    'committee' => 0,
    'egennavne_stednavne' => 0,
    'forfrem_til' => 0,
    'kle' => 0,
    'lokation' => 0,
    'media_folders' => 0,
    'meetin_status' => 0,
    'nyhedstype' => 0,
    'organisation' => 0,
    'politik' => 0,
    'portalkategori' => 0,
    'sidevisning' => 0,
    'redaktoertags' => 0,
    'tags' => 0,
    'user_position' => 0,
  );
  /* Sorteringskriterie: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filterkriterie: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_spotbox_box' => 'os2web_spotbox_box',
  );

  /* Display: Spotbox reference */
  $handler = $view->new_display('entityreference', 'Spotbox reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'term_node_tid' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Spotbox referencer */
  $handler = $view->new_display('references', 'Spotbox referencer', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['spotbox_referenceliste'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Spotbox reference'),
    t('more'),
    t('Spotbox referencer'),
  );
  $export['spotbox_referenceliste'] = $view;

  return $export;
}
