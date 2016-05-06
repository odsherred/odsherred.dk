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
        'identifier' => 'Ord i ordforråd from Indholdselement (on Indholdselement: Portalkategori [field_site_structure])',
        'keyword' => 'site_structure',
        'name' => 'entity_from_field:field_site_structure-node-taxonomy_term',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      5 => array(
        'identifier' => 'Overordnet term',
        'keyword' => 'parent_term',
        'name' => 'term_parent',
        'type' => 'top',
        'context' => 'relationship_entity_from_field:field_site_structure-node-taxonomy_term_1',
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
  $display->uuid = '5961e458-ccf4-4e9c-8cef-632c4328ec36';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d5b9c721-609d-400f-8da6-63af080f2100';
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
    $pane->uuid = 'd5b9c721-609d-400f-8da6-63af080f2100';
    $display->content['new-d5b9c721-609d-400f-8da6-63af080f2100'] = $pane;
    $display->panels['stack1'][0] = 'new-d5b9c721-609d-400f-8da6-63af080f2100';
    $pane = new stdClass();
    $pane->pid = 'new-57c62e47-5e79-4344-8661-28ac37593b7b';
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
    $pane->uuid = '57c62e47-5e79-4344-8661-28ac37593b7b';
    $display->content['new-57c62e47-5e79-4344-8661-28ac37593b7b'] = $pane;
    $display->panels['stack1'][1] = 'new-57c62e47-5e79-4344-8661-28ac37593b7b';
    $pane = new stdClass();
    $pane->pid = 'new-fe5d4b83-51b2-4087-921e-e8bd109171a9';
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
    $pane->uuid = 'fe5d4b83-51b2-4087-921e-e8bd109171a9';
    $display->content['new-fe5d4b83-51b2-4087-921e-e8bd109171a9'] = $pane;
    $display->panels['stack1'][2] = 'new-fe5d4b83-51b2-4087-921e-e8bd109171a9';
    $pane = new stdClass();
    $pane->pid = 'new-c7faf280-184a-406d-b182-fff8ff11d7b2';
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
    $pane->uuid = 'c7faf280-184a-406d-b182-fff8ff11d7b2';
    $display->content['new-c7faf280-184a-406d-b182-fff8ff11d7b2'] = $pane;
    $display->panels['stack1'][3] = 'new-c7faf280-184a-406d-b182-fff8ff11d7b2';
    $pane = new stdClass();
    $pane->pid = 'new-a5702723-0279-463b-8b1c-a0e2b75efbaf';
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
    $pane->uuid = 'a5702723-0279-463b-8b1c-a0e2b75efbaf';
    $display->content['new-a5702723-0279-463b-8b1c-a0e2b75efbaf'] = $pane;
    $display->panels['stack1'][4] = 'new-a5702723-0279-463b-8b1c-a0e2b75efbaf';
    $pane = new stdClass();
    $pane->pid = 'new-104adb2f-5bce-469a-8bb7-b86623cd3944';
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
    $pane->uuid = '104adb2f-5bce-469a-8bb7-b86623cd3944';
    $display->content['new-104adb2f-5bce-469a-8bb7-b86623cd3944'] = $pane;
    $display->panels['stack1'][5] = 'new-104adb2f-5bce-469a-8bb7-b86623cd3944';
    $pane = new stdClass();
    $pane->pid = 'new-4ee3e0d4-9a60-4e9c-8d04-1146b7a018cc';
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
    $pane->uuid = '4ee3e0d4-9a60-4e9c-8d04-1146b7a018cc';
    $display->content['new-4ee3e0d4-9a60-4e9c-8d04-1146b7a018cc'] = $pane;
    $display->panels['stack1'][6] = 'new-4ee3e0d4-9a60-4e9c-8d04-1146b7a018cc';
    $pane = new stdClass();
    $pane->pid = 'new-df20796c-51d3-4a42-a692-4f5072882bf4';
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
    $pane->uuid = 'df20796c-51d3-4a42-a692-4f5072882bf4';
    $display->content['new-df20796c-51d3-4a42-a692-4f5072882bf4'] = $pane;
    $display->panels['stack2'][0] = 'new-df20796c-51d3-4a42-a692-4f5072882bf4';
    $pane = new stdClass();
    $pane->pid = 'new-37c7960e-3b1d-43c2-bd37-515f3c312eab';
    $pane->panel = 'stack2';
    $pane->type = 'views_panes';
    $pane->subtype = 'kle_lonks_boks-panel_pane_1';
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
    $pane->uuid = '37c7960e-3b1d-43c2-bd37-515f3c312eab';
    $display->content['new-37c7960e-3b1d-43c2-bd37-515f3c312eab'] = $pane;
    $display->panels['stack2'][1] = 'new-37c7960e-3b1d-43c2-bd37-515f3c312eab';
    $pane = new stdClass();
    $pane->pid = 'new-ae8d6be4-0546-4d67-800c-8a737ae2d686';
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
    $pane->uuid = 'ae8d6be4-0546-4d67-800c-8a737ae2d686';
    $display->content['new-ae8d6be4-0546-4d67-800c-8a737ae2d686'] = $pane;
    $display->panels['stack3'][0] = 'new-ae8d6be4-0546-4d67-800c-8a737ae2d686';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c7faf280-184a-406d-b182-fff8ff11d7b2';
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
  $display->uuid = '432db4b0-8e1e-41bb-b4d1-e68aaebe54d2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-293ed1e9-34fd-4f14-928a-8113397a0e1c';
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
    $pane->uuid = '293ed1e9-34fd-4f14-928a-8113397a0e1c';
    $display->content['new-293ed1e9-34fd-4f14-928a-8113397a0e1c'] = $pane;
    $display->panels['left'][0] = 'new-293ed1e9-34fd-4f14-928a-8113397a0e1c';
    $pane = new stdClass();
    $pane->pid = 'new-2ea0e93e-100e-4587-9729-248af0a50a67';
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
    $pane->uuid = '2ea0e93e-100e-4587-9729-248af0a50a67';
    $display->content['new-2ea0e93e-100e-4587-9729-248af0a50a67'] = $pane;
    $display->panels['left'][1] = 'new-2ea0e93e-100e-4587-9729-248af0a50a67';
    $pane = new stdClass();
    $pane->pid = 'new-5398d1d0-fb80-4818-a4f1-0bb426cf288a';
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
    $pane->uuid = '5398d1d0-fb80-4818-a4f1-0bb426cf288a';
    $display->content['new-5398d1d0-fb80-4818-a4f1-0bb426cf288a'] = $pane;
    $display->panels['left'][2] = 'new-5398d1d0-fb80-4818-a4f1-0bb426cf288a';
    $pane = new stdClass();
    $pane->pid = 'new-fa41e9c3-9a9a-4bbb-b703-68a59559e406';
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
    $pane->uuid = 'fa41e9c3-9a9a-4bbb-b703-68a59559e406';
    $display->content['new-fa41e9c3-9a9a-4bbb-b703-68a59559e406'] = $pane;
    $display->panels['left'][3] = 'new-fa41e9c3-9a9a-4bbb-b703-68a59559e406';
    $pane = new stdClass();
    $pane->pid = 'new-eb7183bc-ef37-47e2-a8cc-ef5488ebbab5';
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
    $pane->uuid = 'eb7183bc-ef37-47e2-a8cc-ef5488ebbab5';
    $display->content['new-eb7183bc-ef37-47e2-a8cc-ef5488ebbab5'] = $pane;
    $display->panels['right'][0] = 'new-eb7183bc-ef37-47e2-a8cc-ef5488ebbab5';
    $pane = new stdClass();
    $pane->pid = 'new-4bd7aec1-9304-45ef-9871-748475c57274';
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
    $pane->uuid = '4bd7aec1-9304-45ef-9871-748475c57274';
    $display->content['new-4bd7aec1-9304-45ef-9871-748475c57274'] = $pane;
    $display->panels['right'][1] = 'new-4bd7aec1-9304-45ef-9871-748475c57274';
    $pane = new stdClass();
    $pane->pid = 'new-9c1f7b73-8482-41ca-b4da-3f1b3ebbeb83';
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
    $pane->uuid = '9c1f7b73-8482-41ca-b4da-3f1b3ebbeb83';
    $display->content['new-9c1f7b73-8482-41ca-b4da-3f1b3ebbeb83'] = $pane;
    $display->panels['right'][2] = 'new-9c1f7b73-8482-41ca-b4da-3f1b3ebbeb83';
    $pane = new stdClass();
    $pane->pid = 'new-e64c84af-3297-4429-9076-d1556e5bce80';
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
			<li class="leaf first"><a href="/search/news?f[0]=im_field_site_structure%3A4" rel="nofollow">Borger</a></li>
			<li class="leaf"><a href="/search/news?f[0]=im_field_site_structure%3A5" rel="nofollow">Erhverv</a></li>
			<li class="leaf"><a href="/search/news?f[0]=im_field_site_structure%3A6" rel="nofollow">Politik</a></li>
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
    $pane->uuid = 'e64c84af-3297-4429-9076-d1556e5bce80';
    $display->content['new-e64c84af-3297-4429-9076-d1556e5bce80'] = $pane;
    $display->panels['top'][0] = 'new-e64c84af-3297-4429-9076-d1556e5bce80';
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
  $display->uuid = '6ced6b30-0b95-4f9d-9e32-435e14b0c2d9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-df6b614c-a417-4a59-abea-e8da51ebb29f';
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
    $pane->uuid = 'df6b614c-a417-4a59-abea-e8da51ebb29f';
    $display->content['new-df6b614c-a417-4a59-abea-e8da51ebb29f'] = $pane;
    $display->panels['left'][0] = 'new-df6b614c-a417-4a59-abea-e8da51ebb29f';
    $pane = new stdClass();
    $pane->pid = 'new-ab0ba85a-1e2e-4cd5-8570-3c84c461a36c';
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
    $pane->uuid = 'ab0ba85a-1e2e-4cd5-8570-3c84c461a36c';
    $display->content['new-ab0ba85a-1e2e-4cd5-8570-3c84c461a36c'] = $pane;
    $display->panels['left'][1] = 'new-ab0ba85a-1e2e-4cd5-8570-3c84c461a36c';
    $pane = new stdClass();
    $pane->pid = 'new-cdc5145d-d42c-4a99-988f-e631168ea1bd';
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
    $pane->uuid = 'cdc5145d-d42c-4a99-988f-e631168ea1bd';
    $display->content['new-cdc5145d-d42c-4a99-988f-e631168ea1bd'] = $pane;
    $display->panels['left'][2] = 'new-cdc5145d-d42c-4a99-988f-e631168ea1bd';
    $pane = new stdClass();
    $pane->pid = 'new-5a09d95c-75d2-456b-8f89-3433f87ce952';
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
    $pane->uuid = '5a09d95c-75d2-456b-8f89-3433f87ce952';
    $display->content['new-5a09d95c-75d2-456b-8f89-3433f87ce952'] = $pane;
    $display->panels['left'][3] = 'new-5a09d95c-75d2-456b-8f89-3433f87ce952';
    $pane = new stdClass();
    $pane->pid = 'new-c3abaa06-0a6c-49ec-bdb8-46b95a0266ad';
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
    $pane->uuid = 'c3abaa06-0a6c-49ec-bdb8-46b95a0266ad';
    $display->content['new-c3abaa06-0a6c-49ec-bdb8-46b95a0266ad'] = $pane;
    $display->panels['right'][0] = 'new-c3abaa06-0a6c-49ec-bdb8-46b95a0266ad';
    $pane = new stdClass();
    $pane->pid = 'new-3745487c-9a78-47cd-8804-92daef584cc6';
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
    $pane->uuid = '3745487c-9a78-47cd-8804-92daef584cc6';
    $display->content['new-3745487c-9a78-47cd-8804-92daef584cc6'] = $pane;
    $display->panels['right'][1] = 'new-3745487c-9a78-47cd-8804-92daef584cc6';
    $pane = new stdClass();
    $pane->pid = 'new-56f63785-75f0-4792-b24a-c28b50a16ef8';
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
    $pane->uuid = '56f63785-75f0-4792-b24a-c28b50a16ef8';
    $display->content['new-56f63785-75f0-4792-b24a-c28b50a16ef8'] = $pane;
    $display->panels['right'][2] = 'new-56f63785-75f0-4792-b24a-c28b50a16ef8';
    $pane = new stdClass();
    $pane->pid = 'new-4d48537f-de0c-49e0-af52-5246590ad808';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="header">Nyheder og presse<div class="relative-container"><div class="filter-container"><ul class="facetapi-date-range facetapi-facet-changed facetapi-processed" id="facetapi-facet-apachesolrlocalhost-block-changed"><li><span class="facet-date-label">Sorter efter:</span></li><li class="leaf first"><a href="/search/news/?f[0]=im_field_site_structure%3A4" rel="nofollow">Borger</a></li><li class="leaf"><a href="/search/news/?f[0]=im_field_site_structure%3A5" rel="nofollow">Erhverv</a></li><li class="leaf"><a href="/search/news/?f[0]=im_field_site_structure%3A6" rel="nofollow">Politik</a></li></ul><ul class="facetapi-date-range facetapi-facet-changed facetapi-processed" id="facetapi-facet-apachesolrlocalhost-block-changed"><li><span class="facet-date-label">Tidspunkt:</span></li><li class="leaf first"><a href="/search/news/?f[0]=ds_changed%3Apast_24_hours" rel="nofollow">Sidste 24 timer</a></li><li class="leaf"><a href="/search/news/?f[0]=ds_changed%3Apast_hour" rel="nofollow">Sidste time</a></li><li class="leaf"><a href="/search/news/?f[0]=ds_changed%3Apast_month" rel="nofollow">Sidste måned</a></li><li class="leaf"><a href="/search/news/?f[0]=ds_changed%3Apast_week" rel="nofollow">Sidste uge</a></li><li class="leaf last"><a href="/search/news/?f[0]=ds_changed%3Apast_year" rel="nofollow">Sidste år</a></li></ul></div></div></div><p>&nbsp;</p>',
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
    $pane->uuid = '4d48537f-de0c-49e0-af52-5246590ad808';
    $display->content['new-4d48537f-de0c-49e0-af52-5246590ad808'] = $pane;
    $display->panels['top'][0] = 'new-4d48537f-de0c-49e0-af52-5246590ad808';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_news'] = $page;

  return $pages;

}
