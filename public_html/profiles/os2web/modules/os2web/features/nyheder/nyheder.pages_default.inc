<?php
/**
 * @file
 * nyheder.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function nyheder_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Nyheder',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      2 => array(
        'identifier' => 'Flere termer fra indholdselement',
        'keyword' => 'terms',
        'name' => 'terms_from_node',
        'vocabulary' => array(
          'kle' => 'kle',
          'site_struktur' => 0,
          'acadremmcomittee' => 0,
          'egennavne_stednavne' => 0,
          'organisation' => 0,
          'politik' => 0,
          'portalkategori' => 0,
          'redaktoertags' => 0,
          'sidevisning' => 0,
          'forfrem_til' => 0,
          'committee' => 0,
          'lokation' => 0,
          'meetin_status' => 0,
          'tags' => 0,
          'user_position' => 0,
          'media_folders' => 0,
          'nyhedstype' => 0,
        ),
        'concatenator' => '+',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      3 => array(
        'identifier' => 'Ord i ordforråd from Indholdselement (on Indholdselement: Portalkategori [field_os2web_base_field_struct])',
        'keyword' => 'site_structure',
        'name' => 'entity_from_field:field_os2web_base_field_struct-node-taxonomy_term',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      5 => array(
        'identifier' => 'Overordnet term',
        'keyword' => 'parent_term',
        'name' => 'term_parent',
        'type' => 'top',
        'context' => 'relationship_entity_from_field:field_os2web_base_field_struct-node-taxonomy_term_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'news' => 'news',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'odsherred_3stack';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right_top' => NULL,
      'right_middle' => NULL,
      'right_bottom' => NULL,
      'lead' => NULL,
      'middle_top' => NULL,
      'middle_center' => NULL,
      'middle_right' => NULL,
      'stack1' => NULL,
      'stack2' => NULL,
      'stack3' => NULL,
      'stack4' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'be715530-fc87-4be1-a905-962b7221074f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1535f956-a388-432b-97c7-abacc6911d2b';
    $pane->panel = 'stack1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Oprettet&nbsp;%node:published af&nbsp;%node:author</p>',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-date',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1535f956-a388-432b-97c7-abacc6911d2b';
    $display->content['new-1535f956-a388-432b-97c7-abacc6911d2b'] = $pane;
    $display->panels['stack1'][0] = 'new-1535f956-a388-432b-97c7-abacc6911d2b';
    $pane = new stdClass();
    $pane->pid = 'new-95d4ad62-1dde-498c-aff8-6fd71f475d9d';
    $pane->panel = 'stack1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Udskriv',
      'title' => '',
      'body' => '<a href="/print/%node:nid" target="_blank" title="Udskriv">Udskriv</a>
<a href="/indhold/nyhedsbreve" title="Abonner" class="abonnerlink">Abonner</a>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'float-right del-udskriv',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '95d4ad62-1dde-498c-aff8-6fd71f475d9d';
    $display->content['new-95d4ad62-1dde-498c-aff8-6fd71f475d9d'] = $pane;
    $display->panels['stack1'][1] = 'new-95d4ad62-1dde-498c-aff8-6fd71f475d9d';
    $pane = new stdClass();
    $pane->pid = 'new-63bc76f0-ebe5-401a-8606-600323836990';
    $pane->panel = 'stack1';
    $pane->type = 'block';
    $pane->subtype = 'addtoany-addtoany_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'float-right del-udskriv',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '63bc76f0-ebe5-401a-8606-600323836990';
    $display->content['new-63bc76f0-ebe5-401a-8606-600323836990'] = $pane;
    $display->panels['stack1'][2] = 'new-63bc76f0-ebe5-401a-8606-600323836990';
    $pane = new stdClass();
    $pane->pid = 'new-85e22097-33a8-412a-be55-1c3124640a1d';
    $pane->panel = 'stack1';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidetitel %parent_term:tid',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '85e22097-33a8-412a-be55-1c3124640a1d';
    $display->content['new-85e22097-33a8-412a-be55-1c3124640a1d'] = $pane;
    $display->panels['stack1'][3] = 'new-85e22097-33a8-412a-be55-1c3124640a1d';
    $pane = new stdClass();
    $pane->pid = 'new-23b84b0f-b1c3-4e99-9ccc-0320f9870b11';
    $pane->panel = 'stack1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_lead_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'slideshow',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'slideshow_image_style' => 'indholdsside',
        'slideshow_link' => '',
        'slideshow_caption' => '',
        'slideshow_caption_link' => '',
        'slideshow_fx' => 'fade',
        'slideshow_speed' => '1000',
        'slideshow_timeout' => '4000',
        'slideshow_order' => '',
        'slideshow_controls' => 0,
        'slideshow_controls_pause' => 0,
        'slideshow_controls_position' => 'after',
        'slideshow_pause' => 0,
        'slideshow_start_on_hover' => 0,
        'slideshow_pager' => '',
        'slideshow_pager_position' => 'after',
        'slideshow_pager_image_style' => '',
        'slideshow_carousel_image_style' => '',
        'slideshow_carousel_visible' => '3',
        'slideshow_carousel_scroll' => '1',
        'slideshow_carousel_speed' => '500',
        'slideshow_carousel_vertical' => 0,
        'slideshow_carousel_circular' => 0,
        'slideshow_carousel_follow' => 0,
        'slideshow_carousel_skin' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'no-padding nyhedsbillede',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '23b84b0f-b1c3-4e99-9ccc-0320f9870b11';
    $display->content['new-23b84b0f-b1c3-4e99-9ccc-0320f9870b11'] = $pane;
    $display->panels['stack1'][4] = 'new-23b84b0f-b1c3-4e99-9ccc-0320f9870b11';
    $pane = new stdClass();
    $pane->pid = 'new-51282fc5-0664-4df6-9693-a0cc64e756c7';
    $pane->panel = 'stack1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_resume_long';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-body',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '51282fc5-0664-4df6-9693-a0cc64e756c7';
    $display->content['new-51282fc5-0664-4df6-9693-a0cc64e756c7'] = $pane;
    $display->panels['stack1'][5] = 'new-51282fc5-0664-4df6-9693-a0cc64e756c7';
    $pane = new stdClass();
    $pane->pid = 'new-a372a1e5-35ca-4b1c-9406-486e22cbf554';
    $pane->panel = 'stack1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-body',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'a372a1e5-35ca-4b1c-9406-486e22cbf554';
    $display->content['new-a372a1e5-35ca-4b1c-9406-486e22cbf554'] = $pane;
    $display->panels['stack1'][6] = 'new-a372a1e5-35ca-4b1c-9406-486e22cbf554';
    $pane = new stdClass();
    $pane->pid = 'new-c755cf24-2b4a-41af-b92f-6b24c03dd14e';
    $pane->panel = 'stack2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mediafile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c755cf24-2b4a-41af-b92f-6b24c03dd14e';
    $display->content['new-c755cf24-2b4a-41af-b92f-6b24c03dd14e'] = $pane;
    $display->panels['stack2'][0] = 'new-c755cf24-2b4a-41af-b92f-6b24c03dd14e';
    $pane = new stdClass();
    $pane->pid = 'new-290aadf3-ae45-4cd9-92ef-8064b54564d9';
    $pane->panel = 'stack2';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_base_panels_view_kle_link-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
        'tid' => '%terms:tids',
      ),
      'override_title' => 1,
      'override_title_text' => 'Relaterede sider... ',
      'context' => array(
        0 => 'relationship_terms_from_node_1',
        1 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '290aadf3-ae45-4cd9-92ef-8064b54564d9';
    $display->content['new-290aadf3-ae45-4cd9-92ef-8064b54564d9'] = $pane;
    $display->panels['stack2'][1] = 'new-290aadf3-ae45-4cd9-92ef-8064b54564d9';
    $pane = new stdClass();
    $pane->pid = 'new-57bd615f-d590-484f-b2b8-0e953ce98899';
    $pane->panel = 'stack3';
    $pane->type = 'views';
    $pane->subtype = 'publish_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '57bd615f-d590-484f-b2b8-0e953ce98899';
    $display->content['new-57bd615f-d590-484f-b2b8-0e953ce98899'] = $pane;
    $display->panels['stack3'][0] = 'new-57bd615f-d590-484f-b2b8-0e953ce98899';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-85e22097-33a8-412a-be55-1c3124640a1d';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function nyheder_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_news';
  $page->task = 'page';
  $page->admin_title = 'page-news';
  $page->admin_description = 'News page for odsherred';
  $page->path = 'nyheder';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_page_news_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'page_news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'news-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'odsherred_news_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'bund' => NULL,
      'lead' => NULL,
      'middle_top' => NULL,
      'middle_center' => NULL,
      'middle_right' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'bottom' => NULL,
      'kol1' => NULL,
      'kol2' => NULL,
      'kol3' => NULL,
      'kol4' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Nyheder';
  $display->uuid = '1ce63ba5-0944-4fc4-9460-5ec6b59c2502';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6110608e-2921-435a-a07d-dda1a9ad11c9';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_page_views-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6110608e-2921-435a-a07d-dda1a9ad11c9';
    $display->content['new-6110608e-2921-435a-a07d-dda1a9ad11c9'] = $pane;
    $display->panels['left'][0] = 'new-6110608e-2921-435a-a07d-dda1a9ad11c9';
    $pane = new stdClass();
    $pane->pid = 'new-558df4a3-1fdb-4743-88e5-4ace6ce7d203';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_page_views-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '558df4a3-1fdb-4743-88e5-4ace6ce7d203';
    $display->content['new-558df4a3-1fdb-4743-88e5-4ace6ce7d203'] = $pane;
    $display->panels['left'][1] = 'new-558df4a3-1fdb-4743-88e5-4ace6ce7d203';
    $pane = new stdClass();
    $pane->pid = 'new-35ee7654-239c-452f-9a15-887ec0da4beb';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_page_views-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '35ee7654-239c-452f-9a15-887ec0da4beb';
    $display->content['new-35ee7654-239c-452f-9a15-887ec0da4beb'] = $pane;
    $display->panels['left'][2] = 'new-35ee7654-239c-452f-9a15-887ec0da4beb';
    $pane = new stdClass();
    $pane->pid = 'new-02bc35bb-5157-4589-87bd-e3814cd2ac9b';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Clearfix',
      'title' => '',
      'body' => '<div class="clearfix"></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '02bc35bb-5157-4589-87bd-e3814cd2ac9b';
    $display->content['new-02bc35bb-5157-4589-87bd-e3814cd2ac9b'] = $pane;
    $display->panels['left'][3] = 'new-02bc35bb-5157-4589-87bd-e3814cd2ac9b';
    $pane = new stdClass();
    $pane->pid = 'new-8c7ae77e-c539-4959-9004-4f0683e0fb9f';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_page_views-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8c7ae77e-c539-4959-9004-4f0683e0fb9f';
    $display->content['new-8c7ae77e-c539-4959-9004-4f0683e0fb9f'] = $pane;
    $display->panels['left'][4] = 'new-8c7ae77e-c539-4959-9004-4f0683e0fb9f';
    $pane = new stdClass();
    $pane->pid = 'new-5303a150-723f-47cc-940a-66c5e69b5702';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-nyheder';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Kommuneinformation',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-menu-presseservice',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5303a150-723f-47cc-940a-66c5e69b5702';
    $display->content['new-5303a150-723f-47cc-940a-66c5e69b5702'] = $pane;
    $display->panels['right'][0] = 'new-5303a150-723f-47cc-940a-66c5e69b5702';
    $pane = new stdClass();
    $pane->pid = 'new-75bc788b-d219-4a4c-909f-63ae90dd4160';
    $pane->panel = 'right';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-presseservice';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'menu-presseservice',
      'parent_mlid' => 'menu-presseservice:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => 0,
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '75bc788b-d219-4a4c-909f-63ae90dd4160';
    $display->content['new-75bc788b-d219-4a4c-909f-63ae90dd4160'] = $pane;
    $display->panels['right'][1] = 'new-75bc788b-d219-4a4c-909f-63ae90dd4160';
    $pane = new stdClass();
    $pane->pid = 'new-db8985d9-7b51-4a14-8607-4236f8f2dda1';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_page_views-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'db8985d9-7b51-4a14-8607-4236f8f2dda1';
    $display->content['new-db8985d9-7b51-4a14-8607-4236f8f2dda1'] = $pane;
    $display->panels['right'][2] = 'new-db8985d9-7b51-4a14-8607-4236f8f2dda1';
    $pane = new stdClass();
    $pane->pid = 'new-d8d409ad-30d7-4e66-95cd-621fdfb63e4e';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="header">Nyheder og presse
	<!-- <div class="relative-container">
		<div class="filter-container">
			<ul class="facetapi-date-range facetapi-facet-changed facetapi-processed" id="facetapi-facet-apachesolrlocalhost-block-changed">
			<li><span class="facet-date-label">Sorter efter:</span></li>
			<li class="leaf first"><a href="/search/news?f[0]=im_field_os2web_base_field_struct%3A4" rel="nofollow">Borger</a></li>
			<li class="leaf"><a href="/search/news?f[0]=im_field_os2web_base_field_struct%3A5" rel="nofollow">Erhverv</a></li>
			<li class="leaf"><a href="/search/news?f[0]=im_field_os2web_base_field_struct%3A6" rel="nofollow">Politik</a></li>
			<li class="leaf"><a href="/search/news?f[0]=im_field_newstype%3A25757" rel="nofollow">Møder</a></li>
			<li class="leaf"><a href="/search/news?f[0]=im_field_newstype%3A25755" rel="nofollow">Udbud</a></li>		
			<li class="leaf"><a href="/search/news?f[0]=im_field_newstype%3A25752" rel="nofollow">Høringer</a></li>		
			</ul>
			<ul class="facetapi-date-range facetapi-facet-changed facetapi-processed" id="facetapi-facet-apachesolrlocalhost-block-changed">
			<li><span class="facet-date-label">Tidspunkt:</span></li>
			<li class="leaf first"><a href="/search/news?f[0]=ds_changed%3Apast_24_hours" rel="nofollow">Sidste 24 timer</a></li>
			<li class="leaf"><a href="/search/news/?f[0]=ds_changed%3Apast_hour" rel="nofollow">Sidste time</a></li>
			<li class="leaf"><a href="/search/news/?f[0]=ds_changed%3Apast_month" rel="nofollow">Sidste måned</a></li>
			<li class="leaf"><a href="/search/news/?f[0]=ds_changed%3Apast_week" rel="nofollow">Sidste uge</a></li>
			<li class="leaf last"><a href="/search/news/?f[0]=ds_changed%3Apast_year" rel="nofollow">Sidste år</a></li>
			</ul>
		</div>
	</div> -->
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd8d409ad-30d7-4e66-95cd-621fdfb63e4e';
    $display->content['new-d8d409ad-30d7-4e66-95cd-621fdfb63e4e'] = $pane;
    $display->panels['top'][0] = 'new-d8d409ad-30d7-4e66-95cd-621fdfb63e4e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_page_news_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'page_news';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'nyheder',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'news-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'odsherred_news_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'bund' => NULL,
      'lead' => NULL,
      'middle_top' => NULL,
      'middle_center' => NULL,
      'middle_right' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'bottom' => NULL,
      'kol1' => NULL,
      'kol2' => NULL,
      'kol3' => NULL,
      'kol4' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Nyheder';
  $display->uuid = '06243329-681d-404e-ae0f-fac5137231b9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f66ffe5b-2b5a-4d6b-b7a5-880cb5a4273c';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_page_views-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f66ffe5b-2b5a-4d6b-b7a5-880cb5a4273c';
    $display->content['new-f66ffe5b-2b5a-4d6b-b7a5-880cb5a4273c'] = $pane;
    $display->panels['left'][0] = 'new-f66ffe5b-2b5a-4d6b-b7a5-880cb5a4273c';
    $pane = new stdClass();
    $pane->pid = 'new-e5644adf-5014-4abb-9664-35444f75a48f';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_page_views-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e5644adf-5014-4abb-9664-35444f75a48f';
    $display->content['new-e5644adf-5014-4abb-9664-35444f75a48f'] = $pane;
    $display->panels['left'][1] = 'new-e5644adf-5014-4abb-9664-35444f75a48f';
    $pane = new stdClass();
    $pane->pid = 'new-9b6bd6b5-3427-40f3-bbd7-727517660bae';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_page_views-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9b6bd6b5-3427-40f3-bbd7-727517660bae';
    $display->content['new-9b6bd6b5-3427-40f3-bbd7-727517660bae'] = $pane;
    $display->panels['left'][2] = 'new-9b6bd6b5-3427-40f3-bbd7-727517660bae';
    $pane = new stdClass();
    $pane->pid = 'new-03a6826a-5be6-44d2-b734-724d9b493e9a';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_page_views-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '03a6826a-5be6-44d2-b734-724d9b493e9a';
    $display->content['new-03a6826a-5be6-44d2-b734-724d9b493e9a'] = $pane;
    $display->panels['left'][3] = 'new-03a6826a-5be6-44d2-b734-724d9b493e9a';
    $pane = new stdClass();
    $pane->pid = 'new-2ba3c71b-86fe-47cd-858c-02b6ace37286';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-nyheder';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ba3c71b-86fe-47cd-858c-02b6ace37286';
    $display->content['new-2ba3c71b-86fe-47cd-858c-02b6ace37286'] = $pane;
    $display->panels['right'][0] = 'new-2ba3c71b-86fe-47cd-858c-02b6ace37286';
    $pane = new stdClass();
    $pane->pid = 'new-d18038fb-894b-4bfa-9400-ddef083b96ce';
    $pane->panel = 'right';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-presseservice';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'menu-presseservice',
      'parent_mlid' => 'menu-presseservice:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => 0,
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd18038fb-894b-4bfa-9400-ddef083b96ce';
    $display->content['new-d18038fb-894b-4bfa-9400-ddef083b96ce'] = $pane;
    $display->panels['right'][1] = 'new-d18038fb-894b-4bfa-9400-ddef083b96ce';
    $pane = new stdClass();
    $pane->pid = 'new-a11eef92-0043-400f-bfb6-0908dce23096';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'news_page_views-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a11eef92-0043-400f-bfb6-0908dce23096';
    $display->content['new-a11eef92-0043-400f-bfb6-0908dce23096'] = $pane;
    $display->panels['right'][2] = 'new-a11eef92-0043-400f-bfb6-0908dce23096';
    $pane = new stdClass();
    $pane->pid = 'new-a69f7154-cb2c-43f9-9d15-4fba12ef13df';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="header">Nyheder og presse<div class="relative-container"><div class="filter-container"><ul class="facetapi-date-range facetapi-facet-changed facetapi-processed" id="facetapi-facet-apachesolrlocalhost-block-changed"><li><span class="facet-date-label">Sorter efter:</span></li><li class="leaf first"><a href="/search/news/?f[0]=im_field_os2web_base_field_struct%3A4" rel="nofollow">Borger</a></li><li class="leaf"><a href="/search/news/?f[0]=im_field_os2web_base_field_struct%3A5" rel="nofollow">Erhverv</a></li><li class="leaf"><a href="/search/news/?f[0]=im_field_os2web_base_field_struct%3A6" rel="nofollow">Politik</a></li></ul><ul class="facetapi-date-range facetapi-facet-changed facetapi-processed" id="facetapi-facet-apachesolrlocalhost-block-changed"><li><span class="facet-date-label">Tidspunkt:</span></li><li class="leaf first"><a href="/search/news/?f[0]=ds_changed%3Apast_24_hours" rel="nofollow">Sidste 24 timer</a></li><li class="leaf"><a href="/search/news/?f[0]=ds_changed%3Apast_hour" rel="nofollow">Sidste time</a></li><li class="leaf"><a href="/search/news/?f[0]=ds_changed%3Apast_month" rel="nofollow">Sidste måned</a></li><li class="leaf"><a href="/search/news/?f[0]=ds_changed%3Apast_week" rel="nofollow">Sidste uge</a></li><li class="leaf last"><a href="/search/news/?f[0]=ds_changed%3Apast_year" rel="nofollow">Sidste år</a></li></ul></div></div></div><p>&nbsp;</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a69f7154-cb2c-43f9-9d15-4fba12ef13df';
    $display->content['new-a69f7154-cb2c-43f9-9d15-4fba12ef13df'] = $pane;
    $display->panels['top'][0] = 'new-a69f7154-cb2c-43f9-9d15-4fba12ef13df';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_news'] = $page;

  return $pages;

}
