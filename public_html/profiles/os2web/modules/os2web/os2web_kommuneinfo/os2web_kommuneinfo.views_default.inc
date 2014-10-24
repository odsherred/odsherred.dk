<?php
/**
 * @file
 * os2web_kommuneinfo.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_kommuneinfo_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kommuneinformation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Kommuneinformation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kommuneinformation';
  $handler->display->display_options['css_class'] = 'bg-white';
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
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Scheduler: Publish on */
  $handler->display->display_options['fields']['publish_on']['id'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['table'] = 'scheduler';
  $handler->display->display_options['fields']['publish_on']['field'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['date_format'] = 'long';
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato']['id'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filterkriterie: Indhold: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid_1']['id'] = 'field_newstype_tid_1';
  $handler->display->display_options['filters']['field_newstype_tid_1']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid_1']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid_1']['value'] = array(
    26193 => '26193',
    26192 => '26192',
    25752 => '25752',
    26191 => '26191',
    25757 => '25757',
    26195 => '26195',
    26194 => '26194',
    25755 => '25755',
  );
  $handler->display->display_options['filters']['field_newstype_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_newstype_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid_1']['vocabulary'] = 'nyhedstype';
  /* Filterkriterie: Indhold: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25752 => '25752',
    26014 => '26014',
    26013 => '26013',
    26015 => '26015',
    25757 => '25757',
    25755 => '25755',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_newstype_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['operator_id'] = 'field_newstype_tid_op';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['operator'] = 'field_newstype_tid_op';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['identifier'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
    8 => 0,
    12 => 0,
    11 => 0,
    15 => 0,
  );
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  /* Filterkriterie: Indhold: Portalkategori (field_site_structure) */
  $handler->display->display_options['filters']['field_site_structure_tid']['id'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['filters']['field_site_structure_tid']['field'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_structure_tid']['expose']['operator_id'] = 'field_site_structure_tid_op';
  $handler->display->display_options['filters']['field_site_structure_tid']['expose']['label'] = 'Kategori';
  $handler->display->display_options['filters']['field_site_structure_tid']['expose']['operator'] = 'field_site_structure_tid_op';
  $handler->display->display_options['filters']['field_site_structure_tid']['expose']['identifier'] = 'field_site_structure_tid';
  $handler->display->display_options['filters']['field_site_structure_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
    8 => 0,
    12 => 0,
    11 => 0,
    15 => 0,
  );
  $handler->display->display_options['filters']['field_site_structure_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_structure_tid']['vocabulary'] = 'site_struktur';
  $handler->display->display_options['filters']['field_site_structure_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['path'] = 'kommuneinformationer';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Kalender */
  $handler = $view->new_display('page', 'Kalender', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Scheduler: Publish on */
  $handler->display->display_options['fields']['publish_on']['id'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['table'] = 'scheduler';
  $handler->display->display_options['fields']['publish_on']['field'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['date_format'] = 'long';
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid_1']['id'] = 'field_newstype_tid_1';
  $handler->display->display_options['filters']['field_newstype_tid_1']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid_1']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid_1']['value'] = array(
    25757 => '25757',
  );
  $handler->display->display_options['filters']['field_newstype_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_newstype_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid_1']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['path'] = 'kommunekalender';
  $translatables['kommuneinformation'] = array(
    t('Master'),
    t('Kommuneinformation'),
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
    t('Publish on'),
    t('Dato'),
    t('Udløbsdato'),
    t('Type'),
    t('Kategori'),
    t('Page'),
    t('Block'),
    t('Kalender'),
  );
  $export['kommuneinformation'] = $view;

  return $export;
}
