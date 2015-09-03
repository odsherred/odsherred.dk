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
  $handler->display->display_options['style_options']['row_class'] = 'newstypelist';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er ingen tilgængelige høringer i arkivet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Dato */
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
  /* Field: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato']['id'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['label'] = 'Svarfrist';
  $handler->display->display_options['fields']['field_udloebsdato']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid_1']['id'] = 'field_newstype_tid_1';
  $handler->display->display_options['filters']['field_newstype_tid_1']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid_1']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_newstype_tid_1']['value'] = array(
    25753 => '25753',
    25769 => '25769',
  );
  $handler->display->display_options['filters']['field_newstype_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_newstype_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid_1']['vocabulary'] = 'nyhedstype';
  /* Filter criterion: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    26202 => '26202',
    26196 => '26196',
    26201 => '26201',
    26203 => '26203',
    26197 => '26197',
    26193 => '26193',
    26200 => '26200',
    26195 => '26195',
    26198 => '26198',
    26199 => '26199',
    25752 => '25752',
    26194 => '26194',
    25755 => '25755',
    25757 => '25757',
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
  $handler->display->display_options['filters']['field_newstype_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  /* Filter criterion: Content: Portalkategori (field_site_structure) */
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
  $handler->display->display_options['enabled'] = FALSE;
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Scheduler: Publish on */
  $handler->display->display_options['fields']['publish_on']['id'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['table'] = 'scheduler';
  $handler->display->display_options['fields']['publish_on']['field'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['date_format'] = 'long';
  /* Field: Content: Dato */
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type (field_newstype) */
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

  /* Display: Høringer */
  $handler = $view->new_display('page', 'Høringer', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kommuneinformation - Høringer - Side';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h1>Aktuelle høringer</h1>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er ingen aktuelle høringer.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_type'] = '0';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['published_at']['element_wrapper_class'] = 'stordato';
  $handler->display->display_options['fields']['published_at']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'dag_og_maaned';
  /* Field: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato_1']['id'] = 'field_udloebsdato_1';
  $handler->display->display_options['fields']['field_udloebsdato_1']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato_1']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato_1']['label'] = '';
  $handler->display->display_options['fields']['field_udloebsdato_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_wrapper_class'] = 'stordato';
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato_1']['settings'] = array(
    'format_type' => 'dag_og_maaned',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['label'] = '';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_site_structure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_structure']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_newstype']['alter']['text'] = '[field_site_structure] - [field_newstype] ';
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_newstype']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<p class="indrykket">[field_resume_long]</p>
<p class="indrykket lilletekst">Publiceret: [field_nyheder_publiceringsdato] <br>
Svarfrist: [field_udloebsdato]</p>';
  $handler->display->display_options['fields']['field_resume_long']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_resume_long']['element_class'] = 'indrykket';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = FALSE;
  /* Field: Content: Publiceringsdato */
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['id'] = 'field_nyheder_publiceringsdato';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['table'] = 'field_data_field_nyheder_publiceringsdato';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['field'] = 'field_nyheder_publiceringsdato';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['label'] = 'Publiceriet';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['element_wrapper_class'] = 'indrykket lilletekst';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['settings'] = array(
    'format_type' => 'odsherredtid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato']['id'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['label'] = 'Svarfrist';
  $handler->display->display_options['fields']['field_udloebsdato']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_udloebsdato']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_udloebsdato']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_udloebsdato']['element_wrapper_class'] = 'indrykket lilletekst';
  $handler->display->display_options['fields']['field_udloebsdato']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato']['settings'] = array(
    'format_type' => 'odsherredtid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['argument'] = '25752';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Dato (field_newstypedato) */
  $handler->display->display_options['filters']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['filters']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_newstypedato_value']['default_date'] = 'now';
  /* Filter criterion: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['filters']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['filters']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udloebsdato_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'kommuneinformationer/hoeringer';

  /* Display: Afgørelser */
  $handler = $view->new_display('page', 'Afgørelser', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kommuneinformation - Afgørelser - Side';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h1>Aktuelle afgørelser</h1>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er ingen aktuelle afgørelser.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_type'] = '0';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['published_at']['element_wrapper_class'] = 'stordato';
  $handler->display->display_options['fields']['published_at']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'dag_og_maaned';
  /* Field: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newstypedato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_newstypedato']['element_wrapper_class'] = 'stordato';
  $handler->display->display_options['fields']['field_newstypedato']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'dag_og_maaned',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['label'] = '';
  $handler->display->display_options['fields']['field_site_structure']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_site_structure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_structure']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_newstype']['alter']['text'] = '[field_site_structure] - [field_newstype] ';
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_newstype']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<p class="indrykket">[field_resume_long]</p>
<p class="indrykket lilletekst">Publiceret: [field_nyheder_publiceringsdato] <br>
Klagefrist: [field_udloebsdato]</p>';
  $handler->display->display_options['fields']['field_resume_long']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_resume_long']['element_class'] = 'indrykket';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = FALSE;
  /* Field: Content: Publiceringsdato */
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['id'] = 'field_nyheder_publiceringsdato';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['table'] = 'field_data_field_nyheder_publiceringsdato';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['field'] = 'field_nyheder_publiceringsdato';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['label'] = 'Publiceret';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['element_wrapper_class'] = 'indrykket lilletekst';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['settings'] = array(
    'format_type' => 'odsherredtid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato']['id'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['label'] = 'Klagefrist';
  $handler->display->display_options['fields']['field_udloebsdato']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_udloebsdato']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_udloebsdato']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_udloebsdato']['element_wrapper_class'] = 'indrykket lilletekst';
  $handler->display->display_options['fields']['field_udloebsdato']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato']['settings'] = array(
    'format_type' => 'odsherredtid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['argument'] = '26194';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '4';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['filters']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['filters']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udloebsdato_value']['default_date'] = 'now';
  /* Filter criterion: Content: Dato (field_newstypedato) */
  $handler->display->display_options['filters']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['filters']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_newstypedato_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'kommuneinformationer/afgoerelser';

  /* Display: Udbud */
  $handler = $view->new_display('page', 'Udbud', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kommuneinformation - Udbud - Side';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h1>Aktuelle udbud</h1>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_type'] = '0';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['published_at']['element_wrapper_class'] = 'stordato';
  $handler->display->display_options['fields']['published_at']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'dag_og_maaned';
  /* Field: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato_1']['id'] = 'field_udloebsdato_1';
  $handler->display->display_options['fields']['field_udloebsdato_1']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato_1']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato_1']['label'] = '';
  $handler->display->display_options['fields']['field_udloebsdato_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_wrapper_class'] = 'stordato';
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato_1']['settings'] = array(
    'format_type' => 'dag_og_maaned',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['label'] = '';
  $handler->display->display_options['fields']['field_site_structure']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_site_structure']['alter']['text'] = '[field_site_structure] - [field_newstype]';
  $handler->display->display_options['fields']['field_site_structure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_structure']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_site_structure']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_site_structure']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<p class="indrykket">[field_resume_long]</p>
<p class="indrykket lilletekst">Publiceret: [field_nyheder_publiceringsdato] <br>
Tilbudsfrist: [field_udloebsdato]</p>';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_resume_long']['element_wrapper_class'] = 'indrykket';
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = FALSE;
  /* Field: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato']['id'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['label'] = 'Tilbudsfrist';
  $handler->display->display_options['fields']['field_udloebsdato']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_udloebsdato']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_udloebsdato']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_udloebsdato']['element_wrapper_class'] = 'indrykket lilletekst';
  $handler->display->display_options['fields']['field_udloebsdato']['settings'] = array(
    'format_type' => 'odsherredtid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['sorts']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['sorts']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['sorts']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['sorts']['field_udloebsdato_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid_1']['id'] = 'field_newstype_tid_1';
  $handler->display->display_options['filters']['field_newstype_tid_1']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid_1']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid_1']['value'] = array(
    25755 => '25755',
  );
  $handler->display->display_options['filters']['field_newstype_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_newstype_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid_1']['vocabulary'] = 'nyhedstype';
  /* Filter criterion: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['filters']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['filters']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udloebsdato_value']['default_date'] = 'now';
  /* Filter criterion: Content: Dato (field_newstypedato) */
  $handler->display->display_options['filters']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['filters']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_newstypedato_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'kommuneinformationer/udbud';

  /* Display: Møder */
  $handler = $view->new_display('page', 'Møder', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kommuneinformation - Møder - Side';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h1>Aktuelle møder</h1>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er ingen aktuelle møder.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_newstypedato']['element_wrapper_class'] = 'stordato';
  $handler->display->display_options['fields']['field_newstypedato']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'dag_og_maaned',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato_1']['id'] = 'field_newstypedato_1';
  $handler->display->display_options['fields']['field_newstypedato_1']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato_1']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato_1']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato_1']['settings'] = array(
    'format_type' => 'kommuneinfolang',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Portalkategori */
  $handler->display->display_options['fields']['field_site_structure']['id'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['table'] = 'field_data_field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['field'] = 'field_site_structure';
  $handler->display->display_options['fields']['field_site_structure']['label'] = '';
  $handler->display->display_options['fields']['field_site_structure']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_site_structure']['alter']['text'] = '[field_site_structure] - [field_newstype]';
  $handler->display->display_options['fields']['field_site_structure']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_structure']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_site_structure']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_site_structure']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<p class="indrykket">[field_resume_long]</p>
<p class="indrykket lilletekst">Publiceret: [field_nyheder_publiceringsdato] </p>';
  $handler->display->display_options['fields']['field_resume_long']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_resume_long']['element_class'] = 'indrykket';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_resume_long']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['argument'] = '25757';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '4';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Dato (field_newstypedato) */
  $handler->display->display_options['filters']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['filters']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_newstypedato_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'kommuneinformationer/moeder';

  /* Display: Tidligere udbud */
  $handler = $view->new_display('attachment', 'Tidligere udbud', 'attachment_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Tidligere udbud';
  $handler->display->display_options['header']['area']['content'] = '<h2>Tidligere udbud</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er ingen tilgængelige udbud i arkivet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato']['id'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['label'] = '- Tilbudsfrist';
  $handler->display->display_options['fields']['field_udloebsdato']['settings'] = array(
    'format_type' => 'odsherredtid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid_1']['id'] = 'field_newstype_tid_1';
  $handler->display->display_options['filters']['field_newstype_tid_1']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid_1']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid_1']['value'] = array(
    25755 => '25755',
  );
  $handler->display->display_options['filters']['field_newstype_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_newstype_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid_1']['vocabulary'] = 'nyhedstype';
  /* Filter criterion: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['filters']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['filters']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_udloebsdato_value']['default_date'] = 'now';
  $handler->display->display_options['displays'] = array(
    'page_4' => 'page_4',
    'default' => 0,
    'page' => 0,
    'block' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_5' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Tidligere afgørelser */
  $handler = $view->new_display('attachment', 'Tidligere afgørelser', 'attachment_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Tidligere afgørelser';
  $handler->display->display_options['header']['area']['content'] = '<h2>Tidligere afgørelser</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er ingen tilgængelige afgørelser i arkivet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato']['id'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['label'] = '- Klagefrist';
  $handler->display->display_options['fields']['field_udloebsdato']['settings'] = array(
    'format_type' => 'odsherredtid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['argument'] = '26194';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['filters']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['filters']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_udloebsdato_value']['default_date'] = 'now';
  $handler->display->display_options['displays'] = array(
    'page_3' => 'page_3',
    'default' => 0,
    'page' => 0,
    'block' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_4' => 0,
    'page_5' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Tidligere møder */
  $handler = $view->new_display('attachment', 'Tidligere møder', 'attachment_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Tidligere afgørelser';
  $handler->display->display_options['header']['area']['content'] = '<h2>Afholdte møder</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er ingen tilgængelige møder i arkivet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['label'] = '- Dato';
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'odsherredtid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['argument'] = '25757';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Dato (field_newstypedato) */
  $handler->display->display_options['filters']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['filters']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_newstypedato_value']['default_date'] = 'now';
  $handler->display->display_options['displays'] = array(
    'page_5' => 'page_5',
    'default' => 0,
    'page' => 0,
    'block' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Tidligere høringer */
  $handler = $view->new_display('attachment', 'Tidligere høringer', 'attachment_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Tidligere afgørelser';
  $handler->display->display_options['header']['area']['content'] = '<h2>Tidligere høringer</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_newstype_1']['id'] = 'field_newstype_1';
  $handler->display->display_options['fields']['field_newstype_1']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype_1']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype_1']['label'] = '';
  $handler->display->display_options['fields']['field_newstype_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato']['id'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['label'] = '- Svarfrist';
  $handler->display->display_options['fields']['field_udloebsdato']['settings'] = array(
    'format_type' => 'odsherredtid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['argument'] = '25752';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['filters']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['filters']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_udloebsdato_value']['default_date'] = 'now';
  $handler->display->display_options['displays'] = array(
    'page_2' => 'page_2',
    'default' => 0,
    'page' => 0,
    'block' => 0,
    'page_1' => 0,
    'page_3' => 0,
    'page_4' => 0,
    'page_5' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Nyheder - Blok - Høringer */
  $handler = $view->new_display('block', 'Nyheder - Blok - Høringer', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Aktuelle høringer</h3>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Se flere høringer';
  $handler->display->display_options['footer']['area']['content'] = '<a class="setidligere" href="/kommuneinformationer/hoeringer">Se flere høringer</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Der er ingen aktuelle høringer.</p>
<p><a href="/kommuneinformationer/hoeringer" title="Tidligere høringer">Se tidligere høringer</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato']['id'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['label'] = '';
  $handler->display->display_options['fields']['field_udloebsdato']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_udloebsdato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato']['settings'] = array(
    'format_type' => 'dag_og_maaned',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato_1']['id'] = 'field_udloebsdato_1';
  $handler->display->display_options['fields']['field_udloebsdato_1']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato_1']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato_1']['label'] = '';
  $handler->display->display_options['fields']['field_udloebsdato_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_udloebsdato_1']['alter']['text'] = '[field_udloebsdato_1-value]';
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato_1']['settings'] = array(
    'format_type' => 'odsherredtid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at_1']['id'] = 'published_at_1';
  $handler->display->display_options['fields']['published_at_1']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at_1']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at_1']['label'] = '';
  $handler->display->display_options['fields']['published_at_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['published_at_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['published_at_1']['custom_date_format'] = 'j.';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['published_at']['alter']['text'] = '<div class="date-container"><span class="date">[published_at_1]</span><span class="month">[published_at]</span></div>';
  $handler->display->display_options['fields']['published_at']['element_type'] = '0';
  $handler->display->display_options['fields']['published_at']['element_label_type'] = '0';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'custom';
  $handler->display->display_options['fields']['published_at']['custom_date_format'] = 'M';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<p class="indrykket">[field_newstype]: [field_resume_long]</p>
<p class="indrykket  lilletekst"><i>Svarfrist: [field_udloebsdato_1]</i></p>';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['empty'] = '<p class="indrykket">[field_newstype]: [body]</p>
<p class="indrykket  lilletekst"><i>Svarfrist: [field_udloebsdato_1]</i></p>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['argument'] = '25752';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['filters']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['filters']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_udloebsdato_value']['default_date'] = 'now';
  /* Filter criterion: Content: Dato (field_newstypedato) */
  $handler->display->display_options['filters']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['filters']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_newstypedato_value']['default_date'] = 'now';

  /* Display: Nyheder - Blok - Afgørelser */
  $handler = $view->new_display('block', 'Nyheder - Blok - Afgørelser', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Aktuelle afgørelser';
  $handler->display->display_options['header']['area']['content'] = '<h3>Aktuelle afgørelser</h3>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Se flere afgørelser';
  $handler->display->display_options['footer']['area']['content'] = '<a class="setidligere" href="/kommuneinformationer/afgoerelser">Se flere afgørelser</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Der er ingen aktuelle afgørelser.</p>
<p><a href="/kommuneinformationer/afgoerelser" title="Flere afgørelser">Se tidligere afgørelser</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'custom';
  $handler->display->display_options['fields']['published_at']['custom_date_format'] = 'j.';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at_1']['id'] = 'published_at_1';
  $handler->display->display_options['fields']['published_at_1']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at_1']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at_1']['label'] = '';
  $handler->display->display_options['fields']['published_at_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['published_at_1']['alter']['text'] = '<div class="date-container"><span class="date">[published_at]</span><span class="month">[published_at_1]</span></div>';
  $handler->display->display_options['fields']['published_at_1']['element_type'] = '0';
  $handler->display->display_options['fields']['published_at_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['published_at_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['published_at_1']['custom_date_format'] = 'M';
  /* Field: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newstypedato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'dag_og_maaned',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato']['id'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['label'] = '';
  $handler->display->display_options['fields']['field_udloebsdato']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_udloebsdato']['alter']['text'] = '[field_udloebsdato-value]';
  $handler->display->display_options['fields']['field_udloebsdato']['element_type'] = '0';
  $handler->display->display_options['fields']['field_udloebsdato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_udloebsdato']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato']['settings'] = array(
    'format_type' => 'odsherredtid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<p class="indrykket">[field_newstype]: [field_resume_long]</p>
<p class="indrykket  lilletekst"><i>Klagefrist: [field_udloebsdato]</i></p>';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['empty'] = '<p class="indrykket">[field_newstype]: [body]</p>
<p class="indrykket  lilletekst"><i>Klagefrist: [field_udloebsdato]</i></p>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['argument'] = '26194';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['filters']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['filters']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_udloebsdato_value']['default_date'] = 'now';
  /* Filter criterion: Content: Dato (field_newstypedato) */
  $handler->display->display_options['filters']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['filters']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_newstypedato_value']['default_date'] = 'now';

  /* Display: Nyheder - Blok - Udbud */
  $handler = $view->new_display('block', 'Nyheder - Blok - Udbud', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Aktuelle udbud';
  $handler->display->display_options['header']['area']['content'] = '<h3>Aktuelle udbud</h3>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Se tidligere udbud';
  $handler->display->display_options['footer']['area']['content'] = '<a class="setidligere" href="/kommuneinformationer/udbud">Se flere udbud</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Der er ingen aktuelle udbud.</p>
<p><a href="/kommuneinformationer/udbud" title="Tidligere udbud">Se tidligere udbud</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'custom';
  $handler->display->display_options['fields']['published_at']['custom_date_format'] = 'j.';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at_1']['id'] = 'published_at_1';
  $handler->display->display_options['fields']['published_at_1']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at_1']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at_1']['label'] = '';
  $handler->display->display_options['fields']['published_at_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['published_at_1']['alter']['text'] = '<div class="date-container"><span class="date">[published_at]</span><span class="month">[published_at_1]</span></div>';
  $handler->display->display_options['fields']['published_at_1']['element_type'] = '0';
  $handler->display->display_options['fields']['published_at_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['published_at_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['published_at_1']['custom_date_format'] = 'M';
  /* Field: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato']['id'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['label'] = '';
  $handler->display->display_options['fields']['field_udloebsdato']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_udloebsdato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato']['settings'] = array(
    'format_type' => 'dag_og_maaned',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato_1']['id'] = 'field_udloebsdato_1';
  $handler->display->display_options['fields']['field_udloebsdato_1']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato_1']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato_1']['label'] = '';
  $handler->display->display_options['fields']['field_udloebsdato_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_udloebsdato_1']['alter']['text'] = '[field_udloebsdato_1-value]';
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_udloebsdato_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato_1']['settings'] = array(
    'format_type' => 'odsherredtid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newstypedato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'dag_og_maaned',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<p class="indrykket">[field_newstype]: [field_resume_long]</p>
<p class="indrykket  lilletekst"><i>Tilbudsfrist: [field_udloebsdato_1]</i></p>';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['empty'] = '<p class="indrykket">[field_newstype]: [body]</p>
<p class="indrykket  lilletekst"><i>Tilbudsfrist: [field_udloebsdato_1]</i></p>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid_1']['id'] = 'field_newstype_tid_1';
  $handler->display->display_options['filters']['field_newstype_tid_1']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid_1']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid_1']['value'] = array(
    25755 => '25755',
  );
  $handler->display->display_options['filters']['field_newstype_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_newstype_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid_1']['vocabulary'] = 'nyhedstype';
  /* Filter criterion: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['filters']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['filters']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_udloebsdato_value']['group'] = 1;
  $handler->display->display_options['filters']['field_udloebsdato_value']['default_date'] = 'now';
  /* Filter criterion: Content: Dato (field_newstypedato) */
  $handler->display->display_options['filters']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['filters']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_newstypedato_value']['default_date'] = 'now';

  /* Display: Nyheder - Blok - Møder */
  $handler = $view->new_display('block', 'Nyheder - Blok - Møder', 'block_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Aktuelle møder';
  $handler->display->display_options['header']['area']['content'] = '<h3>Aktuelle møder</h3>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Se flere møder';
  $handler->display->display_options['footer']['area']['content'] = '<a class="setidligere" href="/kommuneinformationer/moeder">Se flere møder</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Der er ingen aktuelle møder.</p>
<p><a href="/kommuneinformationer/moeder" title="Tidligere møder">Se tidligere møder</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'dag_og_maaned',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_newstype']['id'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['fields']['field_newstype']['field'] = 'field_newstype';
  $handler->display->display_options['fields']['field_newstype']['label'] = '';
  $handler->display->display_options['fields']['field_newstype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newstype']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstype']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato_1']['id'] = 'field_newstypedato_1';
  $handler->display->display_options['fields']['field_newstypedato_1']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato_1']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato_1']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newstypedato_1']['alter']['text'] = '[field_newstypedato_1-value]';
  $handler->display->display_options['fields']['field_newstypedato_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato_1']['settings'] = array(
    'format_type' => 'odsherredtid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Publiceringsdato */
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['id'] = 'field_nyheder_publiceringsdato';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['table'] = 'field_data_field_nyheder_publiceringsdato';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['field'] = 'field_nyheder_publiceringsdato';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['label'] = 'Publiceret';
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nyheder_publiceringsdato']['settings'] = array(
    'format_type' => 'odsherredtid',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['text'] = '<p class="indrykket">[field_newstype]: [field_resume_long]</p>';
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['empty'] = '<p class="indrykket">[field_newstype]: [body]</p>
<p class="indrykket  lilletekst"><i>Mødestart: [field_newstypedato_1]</i></p>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Dato (field_newstypedato) */
  $handler->display->display_options['sorts']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['sorts']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['sorts']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['argument'] = '25757';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '3';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['filters']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['filters']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_udloebsdato_value']['default_date'] = 'now';
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
    t('Der er ingen tilgængelige høringer i arkivet.'),
    t('Dato'),
    t('Svarfrist'),
    t('Type'),
    t('Kategori'),
    t('Page'),
    t('more'),
    t('Block'),
    t('Kalender'),
    t('Publish on'),
    t('Høringer'),
    t('Kommuneinformation - Høringer - Side'),
    t('<h1>Aktuelle høringer</h1>'),
    t('Der er ingen aktuelle høringer.'),
    t('[field_site_structure] - [field_newstype] '),
    t('<p class="indrykket">[field_resume_long]</p>
<p class="indrykket lilletekst">Publiceret: [field_nyheder_publiceringsdato] <br>
Svarfrist: [field_udloebsdato]</p>'),
    t('Publiceriet'),
    t('Alle'),
    t('Afgørelser'),
    t('Kommuneinformation - Afgørelser - Side'),
    t('<h1>Aktuelle afgørelser</h1>'),
    t('Der er ingen aktuelle afgørelser.'),
    t('<p class="indrykket">[field_resume_long]</p>
<p class="indrykket lilletekst">Publiceret: [field_nyheder_publiceringsdato] <br>
Klagefrist: [field_udloebsdato]</p>'),
    t('Publiceret'),
    t('Klagefrist'),
    t('Udbud'),
    t('Kommuneinformation - Udbud - Side'),
    t('<h1>Aktuelle udbud</h1>'),
    t('[field_site_structure] - [field_newstype]'),
    t('<p class="indrykket">[field_resume_long]</p>
<p class="indrykket lilletekst">Publiceret: [field_nyheder_publiceringsdato] <br>
Tilbudsfrist: [field_udloebsdato]</p>'),
    t('Tilbudsfrist'),
    t('Møder'),
    t('Kommuneinformation - Møder - Side'),
    t('<h1>Aktuelle møder</h1>'),
    t('Der er ingen aktuelle møder.'),
    t('<p class="indrykket">[field_resume_long]</p>
<p class="indrykket lilletekst">Publiceret: [field_nyheder_publiceringsdato] </p>'),
    t('Tidligere udbud'),
    t('<h2>Tidligere udbud</h2>'),
    t('Der er ingen tilgængelige udbud i arkivet.'),
    t('- Tilbudsfrist'),
    t('Tidligere afgørelser'),
    t('<h2>Tidligere afgørelser</h2>'),
    t('Der er ingen tilgængelige afgørelser i arkivet.'),
    t('- Klagefrist'),
    t('Tidligere møder'),
    t('<h2>Afholdte møder</h2>'),
    t('Der er ingen tilgængelige møder i arkivet.'),
    t('- Dato'),
    t('Tidligere høringer'),
    t('<h2>Tidligere høringer</h2>'),
    t('- Svarfrist'),
    t('Nyheder - Blok - Høringer'),
    t('<h3>Aktuelle høringer</h3>'),
    t('Se flere høringer'),
    t('<a class="setidligere" href="/kommuneinformationer/hoeringer">Se flere høringer</a>'),
    t('<p>Der er ingen aktuelle høringer.</p>
<p><a href="/kommuneinformationer/hoeringer" title="Tidligere høringer">Se tidligere høringer</a>'),
    t('[field_udloebsdato_1-value]'),
    t('<div class="date-container"><span class="date">[published_at_1]</span><span class="month">[published_at]</span></div>'),
    t('<p class="indrykket">[field_newstype]: [field_resume_long]</p>
<p class="indrykket  lilletekst"><i>Svarfrist: [field_udloebsdato_1]</i></p>'),
    t('<p class="indrykket">[field_newstype]: [body]</p>
<p class="indrykket  lilletekst"><i>Svarfrist: [field_udloebsdato_1]</i></p>'),
    t('Nyheder - Blok - Afgørelser'),
    t('« first'),
    t('last »'),
    t('Aktuelle afgørelser'),
    t('<h3>Aktuelle afgørelser</h3>'),
    t('Se flere afgørelser'),
    t('<a class="setidligere" href="/kommuneinformationer/afgoerelser">Se flere afgørelser</a>'),
    t('<p>Der er ingen aktuelle afgørelser.</p>
<p><a href="/kommuneinformationer/afgoerelser" title="Flere afgørelser">Se flere afgørelser</a>'),
    t('<div class="date-container"><span class="date">[published_at]</span><span class="month">[published_at_1]</span></div>'),
    t('[field_udloebsdato-value]'),
    t('<p class="indrykket">[field_newstype]: [field_resume_long]</p>
<p class="indrykket  lilletekst"><i>Klagefrist: [field_udloebsdato]</i></p>'),
    t('<p class="indrykket">[field_newstype]: [body]</p>
<p class="indrykket  lilletekst"><i>Klagefrist: [field_udloebsdato]</i></p>'),
    t('Nyheder - Blok - Udbud'),
    t('Aktuelle udbud'),
    t('<h3>Aktuelle udbud</h3>'),
    t('Se tidligere udbud'),
    t('<a class="setidligere" href="/kommuneinformationer/udbud">Se flere udbud</a>'),
    t('<p>Der er ingen aktuelle udbud.</p>
<p><a href="/kommuneinformationer/udbud" title="Tidligere udbud">Se tidligere udbud</a>'),
    t('<p class="indrykket">[field_newstype]: [field_resume_long]</p>
<p class="indrykket  lilletekst"><i>Tilbudsfrist: [field_udloebsdato_1]</i></p>'),
    t('<p class="indrykket">[field_newstype]: [body]</p>
<p class="indrykket  lilletekst"><i>Tilbudsfrist: [field_udloebsdato_1]</i></p>'),
    t('Nyheder - Blok - Møder'),
    t('Aktuelle møder'),
    t('<h3>Aktuelle møder</h3>'),
    t('Se flere møder'),
    t('<a class="setidligere" href="/kommuneinformationer/moeder">Se flere møder</a>'),
    t('<p>Der er ingen aktuelle møder.</p>
<p><a href="/kommuneinformationer/moeder" title="Tidligere møder">Se tidligere møder</a>'),
    t('[field_newstypedato_1-value]'),
    t('<p class="indrykket">[field_newstype]: [field_resume_long]</p>'),
    t('<p class="indrykket">[field_newstype]: [body]</p>
<p class="indrykket  lilletekst"><i>Mødestart: [field_newstypedato_1]</i></p>'),
  );
  $export['kommuneinformation'] = $view;

  return $export;
}
