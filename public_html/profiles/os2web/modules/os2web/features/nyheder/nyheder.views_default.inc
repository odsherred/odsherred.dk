<?php
/**
 * @file
 * nyheder.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nyheder_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_page_views';
  $view->description = 'View containing all news displays for news page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'news-page-views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'quicktab-2';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'tid-[tid] tid-[tid_1] gradient';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Content: structure (field_os2web_base_field_struct) */
  $handler->display->display_options['relationships']['field_os2web_base_field_struct_tid']['id'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['relationships']['field_os2web_base_field_struct_tid']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['relationships']['field_os2web_base_field_struct_tid']['field'] = 'field_os2web_base_field_struct_tid';
  /* Forbindelse: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_os2web_base_field_struct_tid';
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Felt: Content: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'news_page_2_left',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '130';
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sorteringskriterie: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25753 => '25753',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';

  /* Display: list 1 top */
  $handler = $view->new_display('panel_pane', 'list 1 top', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'list-1-top news-page-list';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'tid-[tid] tid-[tid_1]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = 'term-[tid]';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Felt: Content: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'news_page_1_top',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '280';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;

  /* Display: list 2 left */
  $handler = $view->new_display('panel_pane', 'list 2 left', 'panel_pane_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'list-2-left news-page-list';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '1';

  /* Display: list 3 right */
  $handler = $view->new_display('panel_pane', 'list 3 right', 'panel_pane_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'list-3-right news-page-list';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'tid-[tid] tid-[tid_1] gradient';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  /* Felt: Content: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'news_page_3_right',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '90';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;

  /* Display: list 8 bottom */
  $handler = $view->new_display('panel_pane', 'list 8 bottom', 'panel_pane_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'list-8-bottom news-page-list';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '6';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'tid-[tid] tid-[tid_1]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Felt: Content: Primære billede */
  $handler->display->display_options['fields']['field_lead_image']['id'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['table'] = 'field_data_field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['field'] = 'field_lead_image';
  $handler->display->display_options['fields']['field_lead_image']['label'] = '';
  $handler->display->display_options['fields']['field_lead_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lead_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lead_image']['settings'] = array(
    'image_style' => 'news_page_8_bottom',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_lead_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_lead_image']['delta_offset'] = '0';
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;

  /* Display: most read */
  $handler = $view->new_display('panel_pane', 'most read', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'most-read';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Mest læste nyheder';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd.';
  /* Felt: Content: Updated date */
  $handler->display->display_options['fields']['changed_1']['id'] = 'changed_1';
  $handler->display->display_options['fields']['changed_1']['table'] = 'node';
  $handler->display->display_options['fields']['changed_1']['field'] = 'changed';
  $handler->display->display_options['fields']['changed_1']['label'] = '';
  $handler->display->display_options['fields']['changed_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed_1']['alter']['text'] = '<div class="date-container"><span class="date">[changed]</span><span class="month">[changed_1]</span></div>';
  $handler->display->display_options['fields']['changed_1']['element_type'] = '0';
  $handler->display->display_options['fields']['changed_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['changed_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed_1']['custom_date_format'] = 'M';
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '65';
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sorteringskriterie: Content statistics: Views today */
  $handler->display->display_options['sorts']['daycount']['id'] = 'daycount';
  $handler->display->display_options['sorts']['daycount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['daycount']['field'] = 'daycount';
  $handler->display->display_options['sorts']['daycount']['order'] = 'DESC';
  /* Sorteringskriterie: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Høringer */
  $handler = $view->new_display('block', 'Høringer', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'quicktab-1';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd.';
  /* Felt: Content: Updated date */
  $handler->display->display_options['fields']['changed_1']['id'] = 'changed_1';
  $handler->display->display_options['fields']['changed_1']['table'] = 'node';
  $handler->display->display_options['fields']['changed_1']['field'] = 'changed';
  $handler->display->display_options['fields']['changed_1']['label'] = '';
  $handler->display->display_options['fields']['changed_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed_1']['alter']['text'] = '<div class="date-container"><span class="date">[changed]</span><span class="month">[changed_1]</span></div>';
  $handler->display->display_options['fields']['changed_1']['element_type'] = '0';
  $handler->display->display_options['fields']['changed_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['changed_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed_1']['custom_date_format'] = 'M';
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25752 => '25752',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';

  /* Display: Mødeaktiviteter */
  $handler = $view->new_display('block', 'Mødeaktiviteter', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'quicktab-2';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd.';
  /* Felt: Content: Updated date */
  $handler->display->display_options['fields']['changed_1']['id'] = 'changed_1';
  $handler->display->display_options['fields']['changed_1']['table'] = 'node';
  $handler->display->display_options['fields']['changed_1']['field'] = 'changed';
  $handler->display->display_options['fields']['changed_1']['label'] = '';
  $handler->display->display_options['fields']['changed_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed_1']['alter']['text'] = '<div class="date-container"><span class="date">[changed]</span><span class="month">[changed_1]</span></div>';
  $handler->display->display_options['fields']['changed_1']['element_type'] = '0';
  $handler->display->display_options['fields']['changed_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['changed_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed_1']['custom_date_format'] = 'M';
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    0 => '25757',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';

  /* Display: Udbud */
  $handler = $view->new_display('block', 'Udbud', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'quicktab-3';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd.';
  /* Felt: Content: Updated date */
  $handler->display->display_options['fields']['changed_1']['id'] = 'changed_1';
  $handler->display->display_options['fields']['changed_1']['table'] = 'node';
  $handler->display->display_options['fields']['changed_1']['field'] = 'changed';
  $handler->display->display_options['fields']['changed_1']['label'] = '';
  $handler->display->display_options['fields']['changed_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed_1']['alter']['text'] = '<div class="date-container"><span class="date">[changed]</span><span class="month">[changed_1]</span></div>';
  $handler->display->display_options['fields']['changed_1']['element_type'] = '0';
  $handler->display->display_options['fields']['changed_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['changed_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed_1']['custom_date_format'] = 'M';
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['fields']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid_1']['field'] = 'tid';
  $handler->display->display_options['fields']['tid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid_1']['label'] = '';
  $handler->display->display_options['fields']['tid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid_1']['separator'] = '';
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['field_resume_long']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    0 => '25755',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  $translatables['news_page_views'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('term from field_os2web_base_field_struct'),
    t('Parent'),
    t('.'),
    t('list 1 top'),
    t('more'),
    t('term-[tid]'),
    t('View panes'),
    t('list 2 left'),
    t('list 3 right'),
    t(','),
    t('list 8 bottom'),
    t('most read'),
    t('Mest læste nyheder'),
    t('<div class="date-container"><span class="date">[changed]</span><span class="month">[changed_1]</span></div>'),
    t('Høringer'),
    t('Mødeaktiviteter'),
    t('Udbud'),
  );
  $export['news_page_views'] = $view;

  $view = new view();
  $view->name = 'nyheder_moedekalender';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nyheder - Mødekalender';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mødekalender';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '|';
  /* Opførsel ved ingen resultater: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Ingen møder';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Forbindelse: Content: Type (field_newstype) */
  $handler->display->display_options['relationships']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['relationships']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['relationships']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['relationships']['field_newstype_tid']['required'] = TRUE;
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Content: structure */
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['id'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['field'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Content: Dato (field_newstypedato) */
  $handler->display->display_options['sorts']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['sorts']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['sorts']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
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
    'news' => 'news',
  );
  /* Filterkriterie: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25757 => '25757',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  /* Filterkriterie: Content: structure (field_os2web_base_field_struct) */
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['id'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['field'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['vocabulary'] = 'site_struktur';
  /* Filterkriterie: Content: Dato (field_newstypedato) */
  $handler->display->display_options['filters']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['filters']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_newstypedato_value']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25757 => '25757',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['operator_id'] = 'field_newstype_tid_op';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['label'] = 'Type (field_newstype)';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['operator'] = 'field_newstype_tid_op';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['identifier'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  /* Filterkriterie: Content: Dato (field_newstypedato) */
  $handler->display->display_options['filters']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['filters']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_newstypedato_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'moedekalender';

  /* Display: MegaDD */
  $handler = $view->new_display('panel_pane', 'MegaDD', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Content: structure */
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['id'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['field'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Content: Dato */
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
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Content: structure */
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['id'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['field'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['element_label_colon'] = FALSE;
  /* Felt: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;

  /* Display: MegaDD2 */
  $handler = $view->new_display('panel_pane', 'MegaDD2', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato_1']['id'] = 'field_newstypedato_1';
  $handler->display->display_options['fields']['field_newstypedato_1']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato_1']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato_1']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newstypedato_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato_1']['settings'] = array(
    'format_type' => 'dag',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_newstypedato']['alter']['text'] = '<span class="dag">[field_newstypedato_1]</span>
[field_newstypedato] ';
  $handler->display->display_options['fields']['field_newstypedato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'maaned',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Content: structure */
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['id'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['field'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Content: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['value'] = array(
    25757 => '25757',
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'nyhedstype';
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '3';
  /* Filterkriterie: Content: Dato (field_newstypedato) */
  $handler->display->display_options['filters']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['filters']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_newstypedato_value']['group'] = 1;
  $handler->display->display_options['filters']['field_newstypedato_value']['default_date'] = 'now';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['nyheder_moedekalender'] = array(
    t('Master'),
    t('Mødekalender'),
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
    t('Ingen møder'),
    t('term from field_newstype'),
    t('Page'),
    t('more'),
    t('Type (field_newstype)'),
    t('MegaDD'),
    t('View panes'),
    t('Blok'),
    t('MegaDD2'),
    t('<span class="dag">[field_newstypedato_1]</span>
[field_newstypedato] '),
  );
  $export['nyheder_moedekalender'] = $view;

  $view = new view();
  $view->name = 'nyheder_udbud';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nyheder - Udbud';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'I udbud lige nu';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '|';
  /* Opførsel ved ingen resultater: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Ingen udbud.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Forbindelse: Content: Type (field_newstype) */
  $handler->display->display_options['relationships']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['relationships']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['relationships']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['relationships']['field_newstype_tid']['required'] = TRUE;
  /* Felt: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato']['id'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['label'] = '';
  $handler->display->display_options['fields']['field_udloebsdato']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_udloebsdato']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_udloebsdato']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_udloebsdato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_udloebsdato']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_udloebsdato])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newstypedato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Content: structure */
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['id'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['field'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['sorts']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['sorts']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['sorts']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
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
    'news' => 'news',
  );
  /* Filterkriterie: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25755 => '25755',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  /* Filterkriterie: Content: structure (field_os2web_base_field_struct) */
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['id'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['field'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['vocabulary'] = 'site_struktur';
  /* Filterkriterie: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['filters']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['filters']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udloebsdato_value']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25755 => '25755',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['operator_id'] = 'field_newstype_tid_op';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['label'] = 'Type (field_newstype)';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['operator'] = 'field_newstype_tid_op';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['identifier'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  /* Filterkriterie: Content: Dato (field_newstypedato) */
  $handler->display->display_options['filters']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['filters']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_newstypedato_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'udbud';

  /* Display: MegaDD */
  $handler = $view->new_display('panel_pane', 'MegaDD', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Content: Dato */
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
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Content: structure */
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['id'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['field'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['element_label_colon'] = FALSE;
  /* Felt: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $translatables['nyheder_udbud'] = array(
    t('Master'),
    t('I udbud lige nu'),
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
    t('Ingen udbud.'),
    t('term from field_newstype'),
    t('[title] ([field_udloebsdato])'),
    t('Page'),
    t('more'),
    t('Type (field_newstype)'),
    t('MegaDD'),
    t('View panes'),
    t('Blok'),
  );
  $export['nyheder_udbud'] = $view;

  $view = new view();
  $view->name = 'nyheds_lister';
  $view->description = 'Side, block og andre visninger af Jobs fra Ofir.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nyheds lister';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Odsherred.dk Nyheder';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'news' => 'news',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'nyheder_old';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Jobs fra Ofir.dk:';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['nyheds_lister'] = array(
    t('Master'),
    t('Odsherred.dk Nyheder'),
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
    t('Page'),
    t('more'),
    t('Block'),
    t('Jobs fra Ofir.dk:'),
  );
  $export['nyheds_lister'] = $view;

  $view = new view();
  $view->name = 'os2web_hearings_view_hearing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nyheder - Høringer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'I høring lige nu';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '|';
  /* Opførsel ved ingen resultater: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Ingen høringer.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Forbindelse: Content: Type (field_newstype) */
  $handler->display->display_options['relationships']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['relationships']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['relationships']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['relationships']['field_newstype_tid']['required'] = TRUE;
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Content: structure */
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['id'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['field'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Content: Dato (field_newstypedato) */
  $handler->display->display_options['sorts']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['sorts']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['sorts']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
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
    'news' => 'news',
  );
  /* Filterkriterie: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25752 => '25752',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25752 => '25752',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['operator_id'] = 'field_newstype_tid_op';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['label'] = 'Type (field_newstype)';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['operator'] = 'field_newstype_tid_op';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['identifier'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  /* Filterkriterie: Content: Dato (field_newstypedato) */
  $handler->display->display_options['filters']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['filters']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
  $handler->display->display_options['filters']['field_newstypedato_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_newstypedato_value']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'hoeringer';

  /* Display: MegaDD */
  $handler = $view->new_display('panel_pane', 'MegaDD', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newstypedato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato']['id'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['label'] = '';
  $handler->display->display_options['fields']['field_udloebsdato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Content: structure */
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['id'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['field'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['sorts']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['sorts']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['sorts']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25752 => '25752',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  /* Filterkriterie: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['filters']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['filters']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_udloebsdato_value']['default_date'] = 'now';

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Content: Dato */
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
  /* Felt: Content: Udløbsdato */
  $handler->display->display_options['fields']['field_udloebsdato']['id'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['field'] = 'field_udloebsdato';
  $handler->display->display_options['fields']['field_udloebsdato']['label'] = '';
  $handler->display->display_options['fields']['field_udloebsdato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_udloebsdato']['settings'] = array(
    'format_type' => 'dag_og_maaned',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Content: structure */
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['id'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['field'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['element_label_colon'] = FALSE;
  /* Felt: Content: Resume - lang overskrift */
  $handler->display->display_options['fields']['field_resume_long']['id'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['table'] = 'field_data_field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['field'] = 'field_resume_long';
  $handler->display->display_options['fields']['field_resume_long']['label'] = '';
  $handler->display->display_options['fields']['field_resume_long']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['field_resume_long']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_resume_long']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resume_long']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25752 => '25752',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  /* Filterkriterie: Content: Udløbsdato (field_udloebsdato) */
  $handler->display->display_options['filters']['field_udloebsdato_value']['id'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['table'] = 'field_data_field_udloebsdato';
  $handler->display->display_options['filters']['field_udloebsdato_value']['field'] = 'field_udloebsdato_value';
  $handler->display->display_options['filters']['field_udloebsdato_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_udloebsdato_value']['default_date'] = 'now';
  $translatables['os2web_hearings_view_hearing'] = array(
    t('Master'),
    t('I høring lige nu'),
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
    t('Ingen høringer.'),
    t('term from field_newstype'),
    t('Page'),
    t('more'),
    t('Type (field_newstype)'),
    t('MegaDD'),
    t('View panes'),
    t('Blok'),
  );
  $export['os2web_hearings_view_hearing'] = $view;

  $view = new view();
  $view->name = 'os2web_news_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nyheder - Nyheder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nyheder';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '|';
  /* Opførsel ved ingen resultater: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er i øjeblikket ingen nyheder.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Forbindelse: Content: Type (field_newstype) */
  $handler->display->display_options['relationships']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['relationships']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['relationships']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['relationships']['field_newstype_tid']['required'] = TRUE;
  /* Felt: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Content: Dato */
  $handler->display->display_options['fields']['field_newstypedato']['id'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['field'] = 'field_newstypedato';
  $handler->display->display_options['fields']['field_newstypedato']['label'] = '';
  $handler->display->display_options['fields']['field_newstypedato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newstypedato']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Content: structure */
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['id'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['field'] = 'field_os2web_base_field_struct';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_struct']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Content: Dato (field_newstypedato) */
  $handler->display->display_options['sorts']['field_newstypedato_value']['id'] = 'field_newstypedato_value';
  $handler->display->display_options['sorts']['field_newstypedato_value']['table'] = 'field_data_field_newstypedato';
  $handler->display->display_options['sorts']['field_newstypedato_value']['field'] = 'field_newstypedato_value';
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
    'news' => 'news',
  );
  /* Filterkriterie: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25755 => '25755',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  /* Filterkriterie: Content: structure (field_os2web_base_field_struct) */
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['id'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['table'] = 'field_data_field_os2web_base_field_struct';
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['field'] = 'field_os2web_base_field_struct_tid';
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2web_base_field_struct_tid']['vocabulary'] = 'site_struktur';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'news' => 'news',
  );
  /* Filterkriterie: Content: Type (field_newstype) */
  $handler->display->display_options['filters']['field_newstype_tid']['id'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['table'] = 'field_data_field_newstype';
  $handler->display->display_options['filters']['field_newstype_tid']['field'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['value'] = array(
    25753 => '25753',
  );
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['operator_id'] = 'field_newstype_tid_op';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['label'] = 'Type (field_newstype)';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['operator'] = 'field_newstype_tid_op';
  $handler->display->display_options['filters']['field_newstype_tid']['expose']['identifier'] = 'field_newstype_tid';
  $handler->display->display_options['filters']['field_newstype_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_newstype_tid']['vocabulary'] = 'nyhedstype';
  /* Filterkriterie: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['value'] = '-1 months';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Oprettelsesdato';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'nyhederne';

  /* Display: MegaDD */
  $handler = $view->new_display('panel_pane', 'MegaDD', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $translatables['os2web_news_page'] = array(
    t('Master'),
    t('Nyheder'),
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
    t('Der er i øjeblikket ingen nyheder.'),
    t('term from field_newstype'),
    t('Page'),
    t('more'),
    t('Type (field_newstype)'),
    t('Oprettelsesdato'),
    t('MegaDD'),
    t('View panes'),
  );
  $export['os2web_news_page'] = $view;

  $view = new view();
  $view->name = 'publish_date';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publish date';
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
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = 'Publiceret';
  $handler->display->display_options['fields']['published_at']['element_type'] = 'span';
  $handler->display->display_options['fields']['published_at']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['published_at']['date_format'] = 'odsherredtid';
  /* Sorteringskriterie: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node_edit_form.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $translatables['publish_date'] = array(
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
    t('Publiceret'),
    t('Alle'),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['publish_date'] = $view;

  return $export;
}
