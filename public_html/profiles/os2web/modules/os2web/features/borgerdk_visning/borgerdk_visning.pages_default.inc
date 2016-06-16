<?php
/**
 * @file
 * borgerdk_visning.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function borgerdk_visning_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_8';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Borger.dk',
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
              'os2web_borger_dk_article' => 'os2web_borger_dk_article',
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
  $display->uuid = '0a0df6e7-ac63-4948-98df-f0313ed4108a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc61b891-fa47-4e1f-9b06-590820ec81f2';
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
    $pane->uuid = 'dc61b891-fa47-4e1f-9b06-590820ec81f2';
    $display->content['new-dc61b891-fa47-4e1f-9b06-590820ec81f2'] = $pane;
    $display->panels['stack1'][0] = 'new-dc61b891-fa47-4e1f-9b06-590820ec81f2';
    $pane = new stdClass();
    $pane->pid = 'new-bdfb166e-54e1-4d73-a04a-9f697c2fe8c6';
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
    $pane->uuid = 'bdfb166e-54e1-4d73-a04a-9f697c2fe8c6';
    $display->content['new-bdfb166e-54e1-4d73-a04a-9f697c2fe8c6'] = $pane;
    $display->panels['stack1'][1] = 'new-bdfb166e-54e1-4d73-a04a-9f697c2fe8c6';
    $pane = new stdClass();
    $pane->pid = 'new-08b8292c-4356-4336-8c38-e09b89cf6640';
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
    $pane->uuid = '08b8292c-4356-4336-8c38-e09b89cf6640';
    $display->content['new-08b8292c-4356-4336-8c38-e09b89cf6640'] = $pane;
    $display->panels['stack1'][2] = 'new-08b8292c-4356-4336-8c38-e09b89cf6640';
    $pane = new stdClass();
    $pane->pid = 'new-2e416c8d-13d2-4f9f-8338-70e0d152534f';
    $pane->panel = 'stack1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_borger_dk_header';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '2e416c8d-13d2-4f9f-8338-70e0d152534f';
    $display->content['new-2e416c8d-13d2-4f9f-8338-70e0d152534f'] = $pane;
    $display->panels['stack1'][3] = 'new-2e416c8d-13d2-4f9f-8338-70e0d152534f';
    $pane = new stdClass();
    $pane->pid = 'new-450fb578-62de-4d16-9a0c-bd2b71cacc26';
    $pane->panel = 'stack1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_billede';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'borger_dk_image',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '450fb578-62de-4d16-9a0c-bd2b71cacc26';
    $display->content['new-450fb578-62de-4d16-9a0c-bd2b71cacc26'] = $pane;
    $display->panels['stack1'][4] = 'new-450fb578-62de-4d16-9a0c-bd2b71cacc26';
    $pane = new stdClass();
    $pane->pid = 'new-cf305ef2-00a4-4bb7-bcda-8111046c58e5';
    $pane->panel = 'stack2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_borger_dk_selfservi';
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
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cf305ef2-00a4-4bb7-bcda-8111046c58e5';
    $display->content['new-cf305ef2-00a4-4bb7-bcda-8111046c58e5'] = $pane;
    $display->panels['stack2'][0] = 'new-cf305ef2-00a4-4bb7-bcda-8111046c58e5';
    $pane = new stdClass();
    $pane->pid = 'new-a5f946cb-95da-47a8-b21b-2f30b1571be1';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a5f946cb-95da-47a8-b21b-2f30b1571be1';
    $display->content['new-a5f946cb-95da-47a8-b21b-2f30b1571be1'] = $pane;
    $display->panels['stack2'][1] = 'new-a5f946cb-95da-47a8-b21b-2f30b1571be1';
    $pane = new stdClass();
    $pane->pid = 'new-19e7c982-d205-4103-8856-c92fe8722990';
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
    $pane->uuid = '19e7c982-d205-4103-8856-c92fe8722990';
    $display->content['new-19e7c982-d205-4103-8856-c92fe8722990'] = $pane;
    $display->panels['stack3'][0] = 'new-19e7c982-d205-4103-8856-c92fe8722990';
    $pane = new stdClass();
    $pane->pid = 'new-8ef2256f-e52a-4f22-82a0-65612c1d206a';
    $pane->panel = 'stack3';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_borger_dk_legislati';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8ef2256f-e52a-4f22-82a0-65612c1d206a';
    $display->content['new-8ef2256f-e52a-4f22-82a0-65612c1d206a'] = $pane;
    $display->panels['stack3'][1] = 'new-8ef2256f-e52a-4f22-82a0-65612c1d206a';
    $pane = new stdClass();
    $pane->pid = 'new-a6d6fc9e-bf11-4e5b-b9ff-27012fbac166';
    $pane->panel = 'stack4';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_borger_dk_shortlist';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a6d6fc9e-bf11-4e5b-b9ff-27012fbac166';
    $display->content['new-a6d6fc9e-bf11-4e5b-b9ff-27012fbac166'] = $pane;
    $display->panels['stack4'][0] = 'new-a6d6fc9e-bf11-4e5b-b9ff-27012fbac166';
    $pane = new stdClass();
    $pane->pid = 'new-c87403dc-1f59-45ec-9b5a-ae3e0247eadd';
    $pane->panel = 'stack4';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_os2web_borger_dk_recommend';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c87403dc-1f59-45ec-9b5a-ae3e0247eadd';
    $display->content['new-c87403dc-1f59-45ec-9b5a-ae3e0247eadd'] = $pane;
    $display->panels['stack4'][1] = 'new-c87403dc-1f59-45ec-9b5a-ae3e0247eadd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-08b8292c-4356-4336-8c38-e09b89cf6640';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_8'] = $handler;

  return $export;
}
