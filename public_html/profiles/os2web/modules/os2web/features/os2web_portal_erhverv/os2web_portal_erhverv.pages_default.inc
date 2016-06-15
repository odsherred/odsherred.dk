<?php
/**
 * @file
 * os2web_portal_erhverv.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2web_portal_erhverv_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_3';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'Ervherv Portalforside',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'portal-erhverv portal-side',
    'css_id' => 'panel-erhverv',
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
            ),
            2 => array(),
            3 => array(),
            4 => array(),
            5 => array(),
            6 => array(),
            7 => array(),
            8 => array(),
            9 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'os2web_portal';
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
  $display->uuid = '46c0bc14-4841-4360-99c8-503c33752134';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9bb672aa-3745-495e-886e-dc99eea639e3';
    $pane->panel = 'lead';
    $pane->type = 'views';
    $pane->subtype = 'rotating_image_view';
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
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => 'erhverv',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9bb672aa-3745-495e-886e-dc99eea639e3';
    $display->content['new-9bb672aa-3745-495e-886e-dc99eea639e3'] = $pane;
    $display->panels['lead'][0] = 'new-9bb672aa-3745-495e-886e-dc99eea639e3';
    $pane = new stdClass();
    $pane->pid = 'new-95da6176-068a-450f-94c9-97ba9263e3bb';
    $pane->panel = 'lead';
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
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '5',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 1,
      'override_title_text' => '',
      'context' => array(
        0 => '',
      ),
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
    $pane->uuid = '95da6176-068a-450f-94c9-97ba9263e3bb';
    $display->content['new-95da6176-068a-450f-94c9-97ba9263e3bb'] = $pane;
    $display->panels['lead'][1] = 'new-95da6176-068a-450f-94c9-97ba9263e3bb';
    $pane = new stdClass();
    $pane->pid = 'new-fd879a38-d4aa-4a1c-aa91-db64a5dce5ff';
    $pane->panel = 'middle_top';
    $pane->type = 'views_panes';
    $pane->subtype = 'newslist-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '',
      'override_title' => 1,
      'override_title_text' => 'Aktuelt',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-6 alpha ',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fd879a38-d4aa-4a1c-aa91-db64a5dce5ff';
    $display->content['new-fd879a38-d4aa-4a1c-aa91-db64a5dce5ff'] = $pane;
    $display->panels['middle_top'][0] = 'new-fd879a38-d4aa-4a1c-aa91-db64a5dce5ff';
    $pane = new stdClass();
    $pane->pid = 'new-c1a96a8b-5188-457d-aa36-4a09127b970f';
    $pane->panel = 'middle_top';
    $pane->type = 'block';
    $pane->subtype = 'block-8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Erhvervsrådgivning',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-3  omega erhvervsraadgiver',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c1a96a8b-5188-457d-aa36-4a09127b970f';
    $display->content['new-c1a96a8b-5188-457d-aa36-4a09127b970f'] = $pane;
    $display->panels['middle_top'][1] = 'new-c1a96a8b-5188-457d-aa36-4a09127b970f';
    $pane = new stdClass();
    $pane->pid = 'new-b8ed1899-e835-4ee8-a8ee-578881dc47a7';
    $pane->panel = 'middle_top';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-6 alpha ',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b8ed1899-e835-4ee8-a8ee-578881dc47a7';
    $display->content['new-b8ed1899-e835-4ee8-a8ee-578881dc47a7'] = $pane;
    $display->panels['middle_top'][2] = 'new-b8ed1899-e835-4ee8-a8ee-578881dc47a7';
    $pane = new stdClass();
    $pane->pid = 'new-0c51e6f4-cf96-4aad-a858-13d8395cf526';
    $pane->panel = 'middle_top';
    $pane->type = 'block';
    $pane->subtype = 'block-7';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Links',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-3 omega links-erhverv',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0c51e6f4-cf96-4aad-a858-13d8395cf526';
    $display->content['new-0c51e6f4-cf96-4aad-a858-13d8395cf526'] = $pane;
    $display->panels['middle_top'][3] = 'new-0c51e6f4-cf96-4aad-a858-13d8395cf526';
    $pane = new stdClass();
    $pane->pid = 'new-e6d685a3-4bf1-4326-9804-8dc2c5adee59';
    $pane->panel = 'middle_top';
    $pane->type = 'block';
    $pane->subtype = 'block-9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Links',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-3 omega links-erhverv',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e6d685a3-4bf1-4326-9804-8dc2c5adee59';
    $display->content['new-e6d685a3-4bf1-4326-9804-8dc2c5adee59'] = $pane;
    $display->panels['middle_top'][4] = 'new-e6d685a3-4bf1-4326-9804-8dc2c5adee59';
    $pane = new stdClass();
    $pane->pid = 'new-b6bdb557-279f-4256-9705-9b423946a35b';
    $pane->panel = 'middle_top';
    $pane->type = 'views';
    $pane->subtype = 'kle_lonks_boks';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '7',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => 'erhverv',
      'url' => '',
      'display' => 'kle_links_boks',
      'context' => array(
        0 => '',
        1 => '',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'b6bdb557-279f-4256-9705-9b423946a35b';
    $display->content['new-b6bdb557-279f-4256-9705-9b423946a35b'] = $pane;
    $display->panels['middle_top'][5] = 'new-b6bdb557-279f-4256-9705-9b423946a35b';
    $pane = new stdClass();
    $pane->pid = 'new-997bf495-1002-446f-9162-908f5d12f414';
    $pane->panel = 'middle_top';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '3335,57654,15929',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-9 alpha omega',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '997bf495-1002-446f-9162-908f5d12f414';
    $display->content['new-997bf495-1002-446f-9162-908f5d12f414'] = $pane;
    $display->panels['middle_top'][6] = 'new-997bf495-1002-446f-9162-908f5d12f414';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_3'] = $handler;

  return $export;
}
