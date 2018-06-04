<?php
/**
 * @file
 * citizen_proposals.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function citizen_proposals_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__side';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Side',
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
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'side',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '153fcd2e-abfd-456f-a552-c26142b943b5';
    $display->content['new-153fcd2e-abfd-456f-a552-c26142b943b5'] = $pane;
    $display->panels['stack1'][3] = 'new-153fcd2e-abfd-456f-a552-c26142b943b5';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c29f1b9a-403d-4fa8-b8b7-893149c6708a';
    $display->content['new-c29f1b9a-403d-4fa8-b8b7-893149c6708a'] = $pane;
    $display->panels['stack1'][4] = 'new-c29f1b9a-403d-4fa8-b8b7-893149c6708a';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '73876ca7-2fec-4eab-9f8d-431c8ef752ac';
    $display->content['new-73876ca7-2fec-4eab-9f8d-431c8ef752ac'] = $pane;
    $display->panels['stack1'][5] = 'new-73876ca7-2fec-4eab-9f8d-431c8ef752ac';
    $pane = new stdClass();
    $pane->pid = 'new-018fb728-7b2f-47aa-92ce-671730cde251';
    $pane->panel = 'stack1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contentpage_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '316x237',
        'image_link' => '',
        'file_view_mode' => 'default',
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '018fb728-7b2f-47aa-92ce-671730cde251';
    $display->content['new-018fb728-7b2f-47aa-92ce-671730cde251'] = $pane;
    $display->panels['stack1'][6] = 'new-018fb728-7b2f-47aa-92ce-671730cde251';
    $pane = new stdClass();
    $pane->pid = 'new-ebb2a631-8e40-48d3-9fa9-68ff5d8be69d';
    $pane->panel = 'stack2';
    $pane->type = 'views';
    $pane->subtype = 'selvbetjening';
    $pane->shown = FALSE;
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
    $pane->pid = 'new-1f6845e0-7c3e-4629-bb7d-76af1cbb826f';
    $pane->panel = 'stack2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_base_field_media';
    $pane->shown = FALSE;
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
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1f6845e0-7c3e-4629-bb7d-76af1cbb826f';
    $display->content['new-1f6845e0-7c3e-4629-bb7d-76af1cbb826f'] = $pane;
    $display->panels['stack2'][1] = 'new-1f6845e0-7c3e-4629-bb7d-76af1cbb826f';
    $pane = new stdClass();
    $pane->pid = 'new-4230a8df-5cbc-4149-9aaf-8c4e47290750';
    $pane->panel = 'stack2';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_base_panels_view_kle_link-panel_pane_1';
    $pane->shown = FALSE;
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
    $pane->shown = FALSE;
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
    $pane = new stdClass();
    $pane->pid = 'new-583e7470-d67c-49b8-a2b3-a2ea69afdc1f';
    $pane->panel = 'stack4';
    $pane->type = 'citizen_proposals';
    $pane->subtype = 'citizen_proposals';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '583e7470-d67c-49b8-a2b3-a2ea69afdc1f';
    $display->content['new-583e7470-d67c-49b8-a2b3-a2ea69afdc1f'] = $pane;
    $display->panels['stack4'][1] = 'new-583e7470-d67c-49b8-a2b3-a2ea69afdc1f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-31a79f0a-ac38-49f7-bd18-b1cbfe33f718';
  $handler->conf['display'] = $display;
  $export['node_view__side'] = $handler;

  return $export;
}
