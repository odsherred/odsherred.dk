<?php
/**
 * @file
 * os2web_portal_politik_og_planer.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2web_portal_politik_og_planer_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_4';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'Politik og planer',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'portal-politik-og-planer portal-side',
    'css_id' => 'panel-politikogplaner',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Ordforråd fra Ord i ordforråd (på taxonomy_term_data.vocabulary)',
        'keyword' => 'taxonomy_vocabulary',
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
              6 => '6',
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
  $display->uuid = 'd2cdaf3e-0768-42d2-b052-9158a586440b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-790bec8d-23e4-496e-b6e6-33e760732a01';
    $pane->panel = 'middle_center';
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
      'css_class' => 'grid-6',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '790bec8d-23e4-496e-b6e6-33e760732a01';
    $display->content['new-790bec8d-23e4-496e-b6e6-33e760732a01'] = $pane;
    $display->panels['middle_center'][0] = 'new-790bec8d-23e4-496e-b6e6-33e760732a01';
    $pane = new stdClass();
    $pane->pid = 'new-cc7b555d-135d-4c75-938e-00f615ac9095';
    $pane->panel = 'middle_center';
    $pane->type = 'block';
    $pane->subtype = 'os2web_meeting_views-meeting-search-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Søg i dagsordner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-6',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cc7b555d-135d-4c75-938e-00f615ac9095';
    $display->content['new-cc7b555d-135d-4c75-938e-00f615ac9095'] = $pane;
    $display->panels['middle_center'][1] = 'new-cc7b555d-135d-4c75-938e-00f615ac9095';
    $pane = new stdClass();
    $pane->pid = 'new-c3a98a10-d3bc-4bbf-81c7-4f4a4ee92160';
    $pane->panel = 'middle_center';
    $pane->type = 'views';
    $pane->subtype = 'planer_i_hoering';
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
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c3a98a10-d3bc-4bbf-81c7-4f4a4ee92160';
    $display->content['new-c3a98a10-d3bc-4bbf-81c7-4f4a4ee92160'] = $pane;
    $display->panels['middle_center'][2] = 'new-c3a98a10-d3bc-4bbf-81c7-4f4a4ee92160';
    $pane = new stdClass();
    $pane->pid = 'new-60ff6a5b-7690-4093-9196-f64e1bb278f6';
    $pane->panel = 'middle_center';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_5';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-6 alpha omega',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '60ff6a5b-7690-4093-9196-f64e1bb278f6';
    $display->content['new-60ff6a5b-7690-4093-9196-f64e1bb278f6'] = $pane;
    $display->panels['middle_center'][3] = 'new-60ff6a5b-7690-4093-9196-f64e1bb278f6';
    $pane = new stdClass();
    $pane->pid = 'new-3cec4245-92f9-4fef-be5a-0b2c85e70934';
    $pane->panel = 'middle_center';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_3';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3cec4245-92f9-4fef-be5a-0b2c85e70934';
    $display->content['new-3cec4245-92f9-4fef-be5a-0b2c85e70934'] = $pane;
    $display->panels['middle_center'][4] = 'new-3cec4245-92f9-4fef-be5a-0b2c85e70934';
    $pane = new stdClass();
    $pane->pid = 'new-b9175c93-0602-4a97-ade5-a976e3770866';
    $pane->panel = 'middle_center';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-6',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'b9175c93-0602-4a97-ade5-a976e3770866';
    $display->content['new-b9175c93-0602-4a97-ade5-a976e3770866'] = $pane;
    $display->panels['middle_center'][5] = 'new-b9175c93-0602-4a97-ade5-a976e3770866';
    $pane = new stdClass();
    $pane->pid = 'new-aa90e206-7c50-4351-8526-f6d37c012909';
    $pane->panel = 'middle_right';
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
      'args' => '6',
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
      'css_class' => 'grid-3',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aa90e206-7c50-4351-8526-f6d37c012909';
    $display->content['new-aa90e206-7c50-4351-8526-f6d37c012909'] = $pane;
    $display->panels['middle_right'][0] = 'new-aa90e206-7c50-4351-8526-f6d37c012909';
    $pane = new stdClass();
    $pane->pid = 'new-6412a0b0-9134-40dd-bd75-b3b4bc4284c9';
    $pane->panel = 'middle_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_2';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '1',
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
      'css_class' => 'grid-3 alpha omega',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6412a0b0-9134-40dd-bd75-b3b4bc4284c9';
    $display->content['new-6412a0b0-9134-40dd-bd75-b3b4bc4284c9'] = $pane;
    $display->panels['middle_right'][1] = 'new-6412a0b0-9134-40dd-bd75-b3b4bc4284c9';
    $pane = new stdClass();
    $pane->pid = 'new-e5ecd41e-9183-4ed2-956f-d9d7ea1e05a8';
    $pane->panel = 'middle_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_1';
    $pane->shown = FALSE;
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
    $pane->uuid = 'e5ecd41e-9183-4ed2-956f-d9d7ea1e05a8';
    $display->content['new-e5ecd41e-9183-4ed2-956f-d9d7ea1e05a8'] = $pane;
    $display->panels['middle_right'][2] = 'new-e5ecd41e-9183-4ed2-956f-d9d7ea1e05a8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_4'] = $handler;

  return $export;
}
