<?php
/**
 * @file
 * os2web_acadre_arp.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_acadre_arp_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'arp_case_view';
  $view->description = 'Displays a single case ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Arp Case view';
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
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Overskrift';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Felt: Indhold: Sagstype */
  $handler->display->display_options['fields']['field_arp_case_type']['id'] = 'field_arp_case_type';
  $handler->display->display_options['fields']['field_arp_case_type']['table'] = 'field_data_field_arp_case_type';
  $handler->display->display_options['fields']['field_arp_case_type']['field'] = 'field_arp_case_type';
  /* Felt: Indhold: Sag */
  $handler->display->display_options['fields']['field_case']['id'] = 'field_case';
  $handler->display->display_options['fields']['field_case']['table'] = 'field_data_field_case';
  $handler->display->display_options['fields']['field_case']['field'] = 'field_case';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'arp_case' => 'arp_case',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
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
    'arp_case' => 'arp_case',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Overskrift';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd-m-Y';
  /* Felt: Indhold: Sagstype */
  $handler->display->display_options['fields']['field_arp_case_type']['id'] = 'field_arp_case_type';
  $handler->display->display_options['fields']['field_arp_case_type']['table'] = 'field_data_field_arp_case_type';
  $handler->display->display_options['fields']['field_arp_case_type']['field'] = 'field_arp_case_type';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'arp_case' => 'arp_case',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['path'] = 'arp-case/%';

  /* Display: Parties */
  $handler = $view->new_display('attachment', 'Parties', 'attachment_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Parti */
  $handler->display->display_options['fields']['field_arp_party']['id'] = 'field_arp_party';
  $handler->display->display_options['fields']['field_arp_party']['table'] = 'field_data_field_arp_party';
  $handler->display->display_options['fields']['field_arp_party']['field'] = 'field_arp_party';
  $handler->display->display_options['fields']['field_arp_party']['label'] = 'Parter';
  $handler->display->display_options['fields']['field_arp_party']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_arp_party']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_arp_party']['delta_offset'] = '0';
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
    'arp_case' => 'arp_case',
  );
  /* Filterkriterie: Indhold: Parti (field_arp_party) */
  $handler->display->display_options['filters']['field_arp_party_value']['id'] = 'field_arp_party_value';
  $handler->display->display_options['filters']['field_arp_party_value']['table'] = 'field_data_field_arp_party';
  $handler->display->display_options['filters']['field_arp_party_value']['field'] = 'field_arp_party_value';
  $handler->display->display_options['filters']['field_arp_party_value']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['field_arp_party_value']['value'] = '1';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Description */
  $handler = $view->new_display('attachment', 'Description', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Indhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Beskrivelse';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'arp_case' => 'arp_case',
  );
  /* Filterkriterie: Indhold: Indhold (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['body_value']['value'] = '1';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Memos */
  $handler = $view->new_display('attachment', 'Memos', 'attachment_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Memos */
  $handler->display->display_options['fields']['field_additional_docs']['id'] = 'field_additional_docs';
  $handler->display->display_options['fields']['field_additional_docs']['table'] = 'field_data_field_additional_docs';
  $handler->display->display_options['fields']['field_additional_docs']['field'] = 'field_additional_docs';
  $handler->display->display_options['fields']['field_additional_docs']['label'] = 'Notater';
  $handler->display->display_options['fields']['field_additional_docs']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_additional_docs']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_additional_docs']['delta_offset'] = '0';
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
    'arp_case' => 'arp_case',
  );
  /* Filterkriterie: Indhold: Memos (field_additional_docs:display) */
  $handler->display->display_options['filters']['field_additional_docs_display']['id'] = 'field_additional_docs_display';
  $handler->display->display_options['filters']['field_additional_docs_display']['table'] = 'field_data_field_additional_docs';
  $handler->display->display_options['filters']['field_additional_docs_display']['field'] = 'field_additional_docs_display';
  $handler->display->display_options['filters']['field_additional_docs_display']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Documents */
  $handler = $view->new_display('attachment', 'Documents', 'attachment_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'doklist';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Documents (field_documents) */
  $handler->display->display_options['relationships']['field_documents_nid']['id'] = 'field_documents_nid';
  $handler->display->display_options['relationships']['field_documents_nid']['table'] = 'field_data_field_documents';
  $handler->display->display_options['relationships']['field_documents_nid']['field'] = 'field_documents_nid';
  $handler->display->display_options['relationships']['field_documents_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Main document */
  $handler->display->display_options['fields']['field_main_document']['id'] = 'field_main_document';
  $handler->display->display_options['fields']['field_main_document']['table'] = 'field_data_field_main_document';
  $handler->display->display_options['fields']['field_main_document']['field'] = 'field_main_document';
  $handler->display->display_options['fields']['field_main_document']['relationship'] = 'field_documents_nid';
  $handler->display->display_options['fields']['field_main_document']['label'] = 'Dokumenter';
  $handler->display->display_options['fields']['field_main_document']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_document']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_main_document']['click_sort_column'] = 'fid';
  /* Felt: Indhold: Sag */
  $handler->display->display_options['fields']['field_case']['id'] = 'field_case';
  $handler->display->display_options['fields']['field_case']['table'] = 'field_data_field_case';
  $handler->display->display_options['fields']['field_case']['field'] = 'field_case';
  $handler->display->display_options['fields']['field_case']['label'] = 'Dokumenter';
  $handler->display->display_options['fields']['field_case']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_case']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_case']['empty'] = 'Der er ingen dokumenter til denne sag';
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
    'arp_case' => 'arp_case',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Overskrift';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: KL Emneord */
  $handler->display->display_options['fields']['field_termref_kle']['id'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['table'] = 'field_data_field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['field'] = 'field_termref_kle';
  $handler->display->display_options['fields']['field_termref_kle']['delta_offset'] = '0';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd-m-Y';
  /* Felt: Indhold: Sagstype */
  $handler->display->display_options['fields']['field_arp_case_type']['id'] = 'field_arp_case_type';
  $handler->display->display_options['fields']['field_arp_case_type']['table'] = 'field_data_field_arp_case_type';
  $handler->display->display_options['fields']['field_arp_case_type']['field'] = 'field_arp_case_type';
  $handler->display->display_options['fields']['field_arp_case_type']['exclude'] = TRUE;
  /* Felt: Indhold: Sags Id */
  $handler->display->display_options['fields']['field_arp_case_id']['id'] = 'field_arp_case_id';
  $handler->display->display_options['fields']['field_arp_case_id']['table'] = 'field_data_field_arp_case_id';
  $handler->display->display_options['fields']['field_arp_case_id']['field'] = 'field_arp_case_id';
  $handler->display->display_options['fields']['field_arp_case_id']['label'] = 'sags id';
  $handler->display->display_options['fields']['field_arp_case_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_arp_case_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_arp_case_id']['alter']['text'] = '[field_arp_case_id-value]';
  $handler->display->display_options['fields']['field_arp_case_id']['element_label_colon'] = FALSE;
  /* Felt: Indhold: ItemId */
  $handler->display->display_options['fields']['field_itemid']['id'] = 'field_itemid';
  $handler->display->display_options['fields']['field_itemid']['table'] = 'field_data_field_itemid';
  $handler->display->display_options['fields']['field_itemid']['field'] = 'field_itemid';
  $handler->display->display_options['fields']['field_itemid']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'arp_case' => 'arp_case',
  );
  /* Filterkriterie: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$url = pathinfo($_GET[q]);
$id = $url[basename];
$year = substr($url[dirname], -2);
$node = node_load($data->nid);
$field_case_id = field_get_items(\'node\', $node, \'field_arp_case_id\');
$field_case_id = $field_case_id[0][value];
$arp_case_id = $year . "/" . $id;
if ($arp_case_id !== $field_case_id)
{
return TRUE;
}';
  $handler->display->display_options['path'] = 'sag/%';
  $translatables['arp_case_view'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Overskrift'),
    t('KL Emneord'),
    t('Oprettelsesdato'),
    t('Sagstype'),
    t('Sag'),
    t('Alle'),
    t('Page'),
    t('Parties'),
    t('Parter'),
    t('Description'),
    t('Beskrivelse'),
    t('Memos'),
    t('Notater'),
    t('Documents'),
    t('field_documents'),
    t('Dokumenter'),
    t('Der er ingen dokumenter til denne sag'),
    t('sags id'),
    t('[field_arp_case_id-value]'),
    t('ItemId'),
  );
  $export['arp_case_view'] = $view;

  $view = new view();
  $view->name = 'arp_cases';
  $view->description = 'Displays a list of Cases published from ARP';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ARP Cases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sager med åben indsigt';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Sagstype */
  $handler->display->display_options['fields']['field_arp_case_type']['id'] = 'field_arp_case_type';
  $handler->display->display_options['fields']['field_arp_case_type']['table'] = 'field_data_field_arp_case_type';
  $handler->display->display_options['fields']['field_arp_case_type']['field'] = 'field_arp_case_type';
  $handler->display->display_options['fields']['field_arp_case_type']['hide_empty'] = TRUE;
  /* Felt: Indhold: Oprettelses dato */
  $handler->display->display_options['fields']['field_arp_case_created']['id'] = 'field_arp_case_created';
  $handler->display->display_options['fields']['field_arp_case_created']['table'] = 'field_data_field_arp_case_created';
  $handler->display->display_options['fields']['field_arp_case_created']['field'] = 'field_arp_case_created';
  $handler->display->display_options['fields']['field_arp_case_created']['label'] = 'Oprettet d.';
  $handler->display->display_options['fields']['field_arp_case_created']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Sag */
  $handler->display->display_options['fields']['field_case']['id'] = 'field_case';
  $handler->display->display_options['fields']['field_case']['table'] = 'field_data_field_case';
  $handler->display->display_options['fields']['field_case']['field'] = 'field_case';
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
    'arp_case' => 'arp_case',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Sagstype */
  $handler->display->display_options['fields']['field_arp_case_type']['id'] = 'field_arp_case_type';
  $handler->display->display_options['fields']['field_arp_case_type']['table'] = 'field_data_field_arp_case_type';
  $handler->display->display_options['fields']['field_arp_case_type']['field'] = 'field_arp_case_type';
  $handler->display->display_options['fields']['field_arp_case_type']['hide_empty'] = TRUE;
  /* Felt: Indhold: Oprettelses dato */
  $handler->display->display_options['fields']['field_arp_case_created']['id'] = 'field_arp_case_created';
  $handler->display->display_options['fields']['field_arp_case_created']['table'] = 'field_data_field_arp_case_created';
  $handler->display->display_options['fields']['field_arp_case_created']['field'] = 'field_arp_case_created';
  $handler->display->display_options['fields']['field_arp_case_created']['label'] = 'Oprettet d.';
  $handler->display->display_options['fields']['field_arp_case_created']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['path'] = 'aaben-indsigt';
  $translatables['arp_cases'] = array(
    t('Master'),
    t('Sager med åben indsigt'),
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
    t('Titel'),
    t('Sagstype'),
    t('Oprettet d.'),
    t('Sag'),
    t('Page'),
  );
  $export['arp_cases'] = $view;

  return $export;
}
