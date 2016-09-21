<?php
/**
 * @file
 * os2web_indholdstyper.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2web_indholdstyper_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Indholdsside',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '.panels-flexible-node_edit-inside { padding: 10px}',
    'contexts' => array(
      0 => array(
        'identifier' => 'Redigeringsformular',
        'keyword' => 'node_add',
        'name' => 'node_add_form',
        'type' => 'contentpage',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'os2web_base_contentpage' => 'os2web_base_contentpage',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:node_edit';
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
      'venstre' => NULL,
      'h__jre' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2f6a302d-38e0-4be7-92ad-999a4b5c6fec';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4eebc32e-531f-4591-8714-3cb8d995d208';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '4eebc32e-531f-4591-8714-3cb8d995d208';
    $display->content['new-4eebc32e-531f-4591-8714-3cb8d995d208'] = $pane;
    $display->panels['center'][0] = 'new-4eebc32e-531f-4591-8714-3cb8d995d208';
    $pane = new stdClass();
    $pane->pid = 'new-22ad9c06-9fb5-4f97-a2ae-8dfbc6493c2a';
    $pane->panel = 'center';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
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
    $pane->uuid = '22ad9c06-9fb5-4f97-a2ae-8dfbc6493c2a';
    $display->content['new-22ad9c06-9fb5-4f97-a2ae-8dfbc6493c2a'] = $pane;
    $display->panels['center'][1] = 'new-22ad9c06-9fb5-4f97-a2ae-8dfbc6493c2a';
    $pane = new stdClass();
    $pane->pid = 'new-22919ec0-f1c0-4b5e-b015-f385dbe78f4b';
    $pane->panel = 'h__jre';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '22919ec0-f1c0-4b5e-b015-f385dbe78f4b';
    $display->content['new-22919ec0-f1c0-4b5e-b015-f385dbe78f4b'] = $pane;
    $display->panels['h__jre'][0] = 'new-22919ec0-f1c0-4b5e-b015-f385dbe78f4b';
    $pane = new stdClass();
    $pane->pid = 'new-b970deae-3a0f-4fe8-9be6-638e245dcc58';
    $pane->panel = 'h__jre';
    $pane->type = 'node_form_publishing';
    $pane->subtype = 'node_form_publishing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
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
    $pane->uuid = 'b970deae-3a0f-4fe8-9be6-638e245dcc58';
    $display->content['new-b970deae-3a0f-4fe8-9be6-638e245dcc58'] = $pane;
    $display->panels['h__jre'][1] = 'new-b970deae-3a0f-4fe8-9be6-638e245dcc58';
    $pane = new stdClass();
    $pane->pid = 'new-b04e7274-3478-4c6b-9a80-fd08ff56a1be';
    $pane->panel = 'venstre';
    $pane->type = 'node_form_title';
    $pane->subtype = 'node_form_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'b04e7274-3478-4c6b-9a80-fd08ff56a1be';
    $display->content['new-b04e7274-3478-4c6b-9a80-fd08ff56a1be'] = $pane;
    $display->panels['venstre'][0] = 'new-b04e7274-3478-4c6b-9a80-fd08ff56a1be';
    $pane = new stdClass();
    $pane->pid = 'new-48393ea7-72e8-4b80-aabe-4ddf41238801';
    $pane->panel = 'venstre';
    $pane->type = 'node_form_path';
    $pane->subtype = 'node_form_path';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
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
    $pane->uuid = '48393ea7-72e8-4b80-aabe-4ddf41238801';
    $display->content['new-48393ea7-72e8-4b80-aabe-4ddf41238801'] = $pane;
    $display->panels['venstre'][1] = 'new-48393ea7-72e8-4b80-aabe-4ddf41238801';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  return $export;
}
