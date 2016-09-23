<?php
/**
 * @file
 * os2web_grund_paneler.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2web_grund_paneler_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '.block.block-webform {background-image:url(/profiles/os2web/themes/odsherredweb/css/img/c-bg.png); padding: 15px;}',
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
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'os2web_base_contentpage' => 'os2web_base_contentpage',
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
  $display->uuid = '6d03531c-082a-4b49-b840-f1d748aacbce';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7c4596ba-d85b-4afb-a0c7-fc6439ff7127';
    $pane->panel = 'stack1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Udskriv',
      'title' => '',
      'body' => '<a href="/print/%node:nid" target="_blank" title="Udskriv">Udskriv</a>',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7c4596ba-d85b-4afb-a0c7-fc6439ff7127';
    $display->content['new-7c4596ba-d85b-4afb-a0c7-fc6439ff7127'] = $pane;
    $display->panels['stack1'][0] = 'new-7c4596ba-d85b-4afb-a0c7-fc6439ff7127';
    $pane = new stdClass();
    $pane->pid = 'new-a066e4d8-4a93-4a98-9a8a-14b507ecbb4a';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a066e4d8-4a93-4a98-9a8a-14b507ecbb4a';
    $display->content['new-a066e4d8-4a93-4a98-9a8a-14b507ecbb4a'] = $pane;
    $display->panels['stack1'][1] = 'new-a066e4d8-4a93-4a98-9a8a-14b507ecbb4a';
    $pane = new stdClass();
    $pane->pid = 'new-31a79f0a-ac38-49f7-bd18-b1cbfe33f718';
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
      'css_class' => 'sidetitel',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '31a79f0a-ac38-49f7-bd18-b1cbfe33f718';
    $display->content['new-31a79f0a-ac38-49f7-bd18-b1cbfe33f718'] = $pane;
    $display->panels['stack1'][2] = 'new-31a79f0a-ac38-49f7-bd18-b1cbfe33f718';
    $pane = new stdClass();
    $pane->pid = 'new-c29f1b9a-403d-4fa8-b8b7-893149c6708a';
    $pane->panel = 'stack1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_alternativt_billede';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '316x237',
        'image_link' => '',
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
      'css_class' => 'float-right',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c29f1b9a-403d-4fa8-b8b7-893149c6708a';
    $display->content['new-c29f1b9a-403d-4fa8-b8b7-893149c6708a'] = $pane;
    $display->panels['stack1'][3] = 'new-c29f1b9a-403d-4fa8-b8b7-893149c6708a';
    $pane = new stdClass();
    $pane->pid = 'new-73876ca7-2fec-4eab-9f8d-431c8ef752ac';
    $pane->panel = 'stack1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_base_field_summary';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '73876ca7-2fec-4eab-9f8d-431c8ef752ac';
    $display->content['new-73876ca7-2fec-4eab-9f8d-431c8ef752ac'] = $pane;
    $display->panels['stack1'][4] = 'new-73876ca7-2fec-4eab-9f8d-431c8ef752ac';
    $pane = new stdClass();
    $pane->pid = 'new-153fcd2e-abfd-456f-a552-c26142b943b5';
    $pane->panel = 'stack1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_borger_dk_image';
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
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '153fcd2e-abfd-456f-a552-c26142b943b5';
    $display->content['new-153fcd2e-abfd-456f-a552-c26142b943b5'] = $pane;
    $display->panels['stack1'][5] = 'new-153fcd2e-abfd-456f-a552-c26142b943b5';
    $pane = new stdClass();
    $pane->pid = 'new-ebb2a631-8e40-48d3-9fa9-68ff5d8be69d';
    $pane->panel = 'stack2';
    $pane->type = 'views';
    $pane->subtype = 'selvbetjening';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_6',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Vil du',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ebb2a631-8e40-48d3-9fa9-68ff5d8be69d';
    $display->content['new-ebb2a631-8e40-48d3-9fa9-68ff5d8be69d'] = $pane;
    $display->panels['stack2'][0] = 'new-ebb2a631-8e40-48d3-9fa9-68ff5d8be69d';
    $pane = new stdClass();
    $pane->pid = 'new-17273a06-9333-4a0f-b69a-2938f76ae254';
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
      'override_title_text' => 'Hent...',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '17273a06-9333-4a0f-b69a-2938f76ae254';
    $display->content['new-17273a06-9333-4a0f-b69a-2938f76ae254'] = $pane;
    $display->panels['stack2'][1] = 'new-17273a06-9333-4a0f-b69a-2938f76ae254';
    $pane = new stdClass();
    $pane->pid = 'new-4230a8df-5cbc-4149-9aaf-8c4e47290750';
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
      'override_title_text' => 'Relaterede sider...',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4230a8df-5cbc-4149-9aaf-8c4e47290750';
    $display->content['new-4230a8df-5cbc-4149-9aaf-8c4e47290750'] = $pane;
    $display->panels['stack2'][2] = 'new-4230a8df-5cbc-4149-9aaf-8c4e47290750';
    $pane = new stdClass();
    $pane->pid = 'new-da8e44d1-fcea-44a6-ac6a-cc03147a2804';
    $pane->panel = 'stack3';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'da8e44d1-fcea-44a6-ac6a-cc03147a2804';
    $display->content['new-da8e44d1-fcea-44a6-ac6a-cc03147a2804'] = $pane;
    $display->panels['stack3'][0] = 'new-da8e44d1-fcea-44a6-ac6a-cc03147a2804';
    $pane = new stdClass();
    $pane->pid = 'new-85a9e50f-ae30-47ac-b8cb-0a5aaef840f7';
    $pane->panel = 'stack4';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_14';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%node:nid',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-spotbox',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '85a9e50f-ae30-47ac-b8cb-0a5aaef840f7';
    $display->content['new-85a9e50f-ae30-47ac-b8cb-0a5aaef840f7'] = $pane;
    $display->panels['stack4'][0] = 'new-85a9e50f-ae30-47ac-b8cb-0a5aaef840f7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-31a79f0a-ac38-49f7-bd18-b1cbfe33f718';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Nyhed',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'os2web_base_news' => 'os2web_base_news',
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
  $display->layout = 'balk_node';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'lead' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'middle_top' => NULL,
      'middle_center' => NULL,
      'middle_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '85ac4b3a-31fb-422b-a595-f7a64c6df596';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ce8b62a3-54cc-4154-acec-ca1f0583e1e1';
    $pane->panel = 'middle_center';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ce8b62a3-54cc-4154-acec-ca1f0583e1e1';
    $display->content['new-ce8b62a3-54cc-4154-acec-ca1f0583e1e1'] = $pane;
    $display->panels['middle_center'][0] = 'new-ce8b62a3-54cc-4154-acec-ca1f0583e1e1';
    $pane = new stdClass();
    $pane->pid = 'new-32e61d53-df90-409f-b87b-ab3ffc3439fb';
    $pane->panel = 'middle_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_additional_info';
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
    $pane->uuid = '32e61d53-df90-409f-b87b-ab3ffc3439fb';
    $display->content['new-32e61d53-df90-409f-b87b-ab3ffc3439fb'] = $pane;
    $display->panels['middle_right'][0] = 'new-32e61d53-df90-409f-b87b-ab3ffc3439fb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'uden relateret indhold',
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
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'os2web_base_iframe' => 'os2web_base_iframe',
              'webform' => 'webform',
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
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3a554df8-c71c-432d-bcd9-bac25dcf9c3b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9502f43f-67b5-470f-8af2-b4a2a5b4f7c9';
    $pane->panel = 'stack1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Udskriv',
      'title' => '',
      'body' => '<a href="/print/%node:nid" target="_blank" title="Udskriv">Udskriv</a>',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9502f43f-67b5-470f-8af2-b4a2a5b4f7c9';
    $display->content['new-9502f43f-67b5-470f-8af2-b4a2a5b4f7c9'] = $pane;
    $display->panels['stack1'][0] = 'new-9502f43f-67b5-470f-8af2-b4a2a5b4f7c9';
    $pane = new stdClass();
    $pane->pid = 'new-7ba26a2c-2eda-42bb-a858-e29a327c635d';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7ba26a2c-2eda-42bb-a858-e29a327c635d';
    $display->content['new-7ba26a2c-2eda-42bb-a858-e29a327c635d'] = $pane;
    $display->panels['stack1'][1] = 'new-7ba26a2c-2eda-42bb-a858-e29a327c635d';
    $pane = new stdClass();
    $pane->pid = 'new-6a874dd7-eff2-4b5a-9c0a-fcdd3b668264';
    $pane->panel = 'stack1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_base_field_text';
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
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6a874dd7-eff2-4b5a-9c0a-fcdd3b668264';
    $display->content['new-6a874dd7-eff2-4b5a-9c0a-fcdd3b668264'] = $pane;
    $display->panels['stack1'][2] = 'new-6a874dd7-eff2-4b5a-9c0a-fcdd3b668264';
    $pane = new stdClass();
    $pane->pid = 'new-c48af435-6e09-4929-bc65-8a219a7d61ee';
    $pane->panel = 'stack2';
    $pane->type = 'views';
    $pane->subtype = 'selvbetjening';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_6',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Se mere her hvis du skal...',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c48af435-6e09-4929-bc65-8a219a7d61ee';
    $display->content['new-c48af435-6e09-4929-bc65-8a219a7d61ee'] = $pane;
    $display->panels['stack2'][0] = 'new-c48af435-6e09-4929-bc65-8a219a7d61ee';
    $pane = new stdClass();
    $pane->pid = 'new-eea18f7b-9a2c-42ec-93b7-39b5ecbaa1ef';
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
      'override_title_text' => 'Hent...',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'eea18f7b-9a2c-42ec-93b7-39b5ecbaa1ef';
    $display->content['new-eea18f7b-9a2c-42ec-93b7-39b5ecbaa1ef'] = $pane;
    $display->panels['stack2'][1] = 'new-eea18f7b-9a2c-42ec-93b7-39b5ecbaa1ef';
    $pane = new stdClass();
    $pane->pid = 'new-109fc443-59a1-45a3-a42c-6bcdedce875a';
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
      'override_title_text' => 'Relaterede sider...',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '109fc443-59a1-45a3-a42c-6bcdedce875a';
    $display->content['new-109fc443-59a1-45a3-a42c-6bcdedce875a'] = $pane;
    $display->panels['stack2'][2] = 'new-109fc443-59a1-45a3-a42c-6bcdedce875a';
    $pane = new stdClass();
    $pane->pid = 'new-a6c91baf-5bfa-4ae1-bcbc-6f9b6420dadb';
    $pane->panel = 'stack3';
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
      'override_title' => 1,
      'override_title_text' => '',
      'links' => 1,
      'no_extras' => 0,
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a6c91baf-5bfa-4ae1-bcbc-6f9b6420dadb';
    $display->content['new-a6c91baf-5bfa-4ae1-bcbc-6f9b6420dadb'] = $pane;
    $display->panels['stack3'][0] = 'new-a6c91baf-5bfa-4ae1-bcbc-6f9b6420dadb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_6';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Sektionsforsider',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Ordforråd',
        'keyword' => 'taxonomy_vocabulary',
        'name' => 'entity:taxonomy_vocabulary',
        'entity_id' => '1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'vids' => array(
              1 => '1',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:sektionsforside';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right_top' => NULL,
      'right_middle' => NULL,
      'right_bottom' => NULL,
      'center' => NULL,
      'top' => NULL,
      'bund' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bedc4e9c-dac3-481c-bcad-e49802fd1681';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-61171a32-f5e3-488c-9d64-b454a7b5a842';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'aktuelt-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-18 alpha',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '61171a32-f5e3-488c-9d64-b454a7b5a842';
    $display->content['new-61171a32-f5e3-488c-9d64-b454a7b5a842'] = $pane;
    $display->panels['top'][0] = 'new-61171a32-f5e3-488c-9d64-b454a7b5a842';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_7';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Sektionsforside',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'sektionsforside',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Portalkategori',
        'keyword' => 'taxonomy_vocabulary_2',
        'name' => 'entity_from_schema:vid-taxonomy_term-taxonomy_vocabulary',
        'context' => 'argument_term_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '1',
            1 => array(
              5 => '5',
              6 => '6',
              4 => '4',
            ),
            2 => array(),
            3 => array(),
            11 => array(),
            4 => array(),
            14 => array(),
            5 => array(),
            6 => array(),
            7 => array(),
            9 => array(),
            8 => array(),
            12 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'balk_node';
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
      'center' => NULL,
      'right_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b8c8c3db-e46b-4633-a78d-fafe953869cf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1ed458e6-e240-4225-91ec-bc656522363d';
    $pane->panel = 'lead';
    $pane->type = 'views';
    $pane->subtype = 'os2web_base_panels_view_rotating';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-6 alpha omega',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1ed458e6-e240-4225-91ec-bc656522363d';
    $display->content['new-1ed458e6-e240-4225-91ec-bc656522363d'] = $pane;
    $display->panels['lead'][0] = 'new-1ed458e6-e240-4225-91ec-bc656522363d';
    $pane = new stdClass();
    $pane->pid = 'new-925cd27a-69a6-429f-add8-cbbf1972104a';
    $pane->panel = 'lead';
    $pane->type = 'views';
    $pane->subtype = 'selvbetjening';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_4',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-3 omega',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '925cd27a-69a6-429f-add8-cbbf1972104a';
    $display->content['new-925cd27a-69a6-429f-add8-cbbf1972104a'] = $pane;
    $display->panels['lead'][1] = 'new-925cd27a-69a6-429f-add8-cbbf1972104a';
    $pane = new stdClass();
    $pane->pid = 'new-0b848c6e-759f-426b-8b41-1b2a3c049262';
    $pane->panel = 'middle_top';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_base_panels_view_newslist-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-6 alpha',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0b848c6e-759f-426b-8b41-1b2a3c049262';
    $display->content['new-0b848c6e-759f-426b-8b41-1b2a3c049262'] = $pane;
    $display->panels['middle_top'][0] = 'new-0b848c6e-759f-426b-8b41-1b2a3c049262';
    $pane = new stdClass();
    $pane->pid = 'new-e4f33fcd-0f81-4b93-abb0-e94debd499c1';
    $pane->panel = 'middle_top';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-3 alpha omega',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e4f33fcd-0f81-4b93-abb0-e94debd499c1';
    $display->content['new-e4f33fcd-0f81-4b93-abb0-e94debd499c1'] = $pane;
    $display->panels['middle_top'][1] = 'new-e4f33fcd-0f81-4b93-abb0-e94debd499c1';
    $pane = new stdClass();
    $pane->pid = 'new-79a4688b-e2b0-4aac-9d5f-6c0c7b4cb28a';
    $pane->panel = 'middle_top';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_8';
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
    $pane->uuid = '79a4688b-e2b0-4aac-9d5f-6c0c7b4cb28a';
    $display->content['new-79a4688b-e2b0-4aac-9d5f-6c0c7b4cb28a'] = $pane;
    $display->panels['middle_top'][2] = 'new-79a4688b-e2b0-4aac-9d5f-6c0c7b4cb28a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_7'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function os2web_grund_paneler_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage';
  $page->task = 'page';
  $page->admin_title = 'Frontpage';
  $page->admin_description = 'Frontpage';
  $page->path = 'home';
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
  $handler->name = 'page_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Frontpage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'forside',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible:forside';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'lead' => NULL,
      'top_left' => NULL,
      'top_center' => NULL,
      'top_right' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'right_' => NULL,
      'left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '591aa616-a93e-4179-9e08-6c5deb66a8ef';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8be8d036-3db8-4ed6-9fa9-ad3a2cc5ca9e';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '2539,2538',
      ),
      'items_per_page' => '2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-3 alpha',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8be8d036-3db8-4ed6-9fa9-ad3a2cc5ca9e';
    $display->content['new-8be8d036-3db8-4ed6-9fa9-ad3a2cc5ca9e'] = $pane;
    $display->panels['center'][0] = 'new-8be8d036-3db8-4ed6-9fa9-ad3a2cc5ca9e';
    $pane = new stdClass();
    $pane->pid = 'new-0e885d04-30ef-4817-bea9-9ab2f76ca6a9';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-3 alpha omega',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0e885d04-30ef-4817-bea9-9ab2f76ca6a9';
    $display->content['new-0e885d04-30ef-4817-bea9-9ab2f76ca6a9'] = $pane;
    $display->panels['center'][1] = 'new-0e885d04-30ef-4817-bea9-9ab2f76ca6a9';
    $pane = new stdClass();
    $pane->pid = 'new-9b3c6695-cc80-4984-a6af-e6592612a2de';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '3397',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-6 omega',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9b3c6695-cc80-4984-a6af-e6592612a2de';
    $display->content['new-9b3c6695-cc80-4984-a6af-e6592612a2de'] = $pane;
    $display->panels['center'][2] = 'new-9b3c6695-cc80-4984-a6af-e6592612a2de';
    $pane = new stdClass();
    $pane->pid = 'new-1c91ea54-c1b4-44ef-b89e-ac75ddf8680e';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'offset' => '2',
      'arguments' => array(
        'nid' => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-6 omega alpha',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1c91ea54-c1b4-44ef-b89e-ac75ddf8680e';
    $display->content['new-1c91ea54-c1b4-44ef-b89e-ac75ddf8680e'] = $pane;
    $display->panels['center'][3] = 'new-1c91ea54-c1b4-44ef-b89e-ac75ddf8680e';
    $pane = new stdClass();
    $pane->pid = 'new-8f37a300-f232-4296-b109-64392631c15b';
    $pane->panel = 'center';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-8 alpha omega',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '8f37a300-f232-4296-b109-64392631c15b';
    $display->content['new-8f37a300-f232-4296-b109-64392631c15b'] = $pane;
    $display->panels['center'][4] = 'new-8f37a300-f232-4296-b109-64392631c15b';
    $pane = new stdClass();
    $pane->pid = 'new-cb6b5b76-fbee-4a94-a3e8-a5dea5308117';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'aktuelt-panel_pane_4';
    $pane->shown = FALSE;
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
    $pane->uuid = 'cb6b5b76-fbee-4a94-a3e8-a5dea5308117';
    $display->content['new-cb6b5b76-fbee-4a94-a3e8-a5dea5308117'] = $pane;
    $display->panels['left'][0] = 'new-cb6b5b76-fbee-4a94-a3e8-a5dea5308117';
    $pane = new stdClass();
    $pane->pid = 'new-8d438a44-2f4d-4947-b152-83af4afe16d5';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'os2web_base_panels_view_rotating';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '?field_rotating_page_value=borger&promote=1',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-8 alpha omega',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8d438a44-2f4d-4947-b152-83af4afe16d5';
    $display->content['new-8d438a44-2f4d-4947-b152-83af4afe16d5'] = $pane;
    $display->panels['left'][1] = 'new-8d438a44-2f4d-4947-b152-83af4afe16d5';
    $pane = new stdClass();
    $pane->pid = 'new-e67aff94-6aa4-4561-9d61-d9064df283f3';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'os2web_base_panels_view_newslist';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'Aktuelt',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-4 alpha omega',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e67aff94-6aa4-4561-9d61-d9064df283f3';
    $display->content['new-e67aff94-6aa4-4561-9d61-d9064df283f3'] = $pane;
    $display->panels['left'][2] = 'new-e67aff94-6aa4-4561-9d61-d9064df283f3';
    $pane = new stdClass();
    $pane->pid = 'new-787a0f22-05a9-4210-86ce-7cad4dec57b8';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'kulturnaut_events_lister';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '2',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 1,
      'args' => '',
      'url' => 'http://www.djurslive.dk',
      'display' => 'blok_kulturnaut_forside',
      'override_title' => 1,
      'override_title_text' => 'Det sker',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-4 omega alpha os2web_base_panels_view_newslist-panel',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '787a0f22-05a9-4210-86ce-7cad4dec57b8';
    $display->content['new-787a0f22-05a9-4210-86ce-7cad4dec57b8'] = $pane;
    $display->panels['left'][3] = 'new-787a0f22-05a9-4210-86ce-7cad4dec57b8';
    $pane = new stdClass();
    $pane->pid = 'new-5ed3e7db-4c3b-4f68-80e8-539622eec670';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'aktuelt-panel_pane_3';
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
    $pane->uuid = '5ed3e7db-4c3b-4f68-80e8-539622eec670';
    $display->content['new-5ed3e7db-4c3b-4f68-80e8-539622eec670'] = $pane;
    $display->panels['left'][4] = 'new-5ed3e7db-4c3b-4f68-80e8-539622eec670';
    $pane = new stdClass();
    $pane->pid = 'new-7ef60482-7695-45dc-8ead-078a37995291';
    $pane->panel = 'right_';
    $pane->type = 'views';
    $pane->subtype = 'selvbetjening';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => 'selvbetjening',
      'display' => 'sb_block_forside',
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
    $pane->uuid = '7ef60482-7695-45dc-8ead-078a37995291';
    $display->content['new-7ef60482-7695-45dc-8ead-078a37995291'] = $pane;
    $display->panels['right_'][0] = 'new-7ef60482-7695-45dc-8ead-078a37995291';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage'] = $page;

  return $pages;

}
