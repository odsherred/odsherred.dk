<?php
/**
 * @file
 * odsherred_web.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function odsherred_web_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_8';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Odsherred - Portalside',
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
  $display->layout = 'os2web_portal';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'lead' => NULL,
      'middle_top' => NULL,
      'middle_center' => NULL,
      'middle_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '1376ac86-c181-4b57-ae20-d4bb97f5d790';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0f23c263-106f-4f6e-a948-21e858fdafb3';
    $pane->panel = 'lead';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_base_panels_view_newslist-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '0',
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
    $pane->uuid = '0f23c263-106f-4f6e-a948-21e858fdafb3';
    $display->content['new-0f23c263-106f-4f6e-a948-21e858fdafb3'] = $pane;
    $display->panels['lead'][0] = 'new-0f23c263-106f-4f6e-a948-21e858fdafb3';
    $pane = new stdClass();
    $pane->pid = 'new-ca4c205b-d759-4122-823a-1ebe622e28db';
    $pane->panel = 'middle_top';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_13';
    $pane->shown = TRUE;
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'alpha omega',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ca4c205b-d759-4122-823a-1ebe622e28db';
    $display->content['new-ca4c205b-d759-4122-823a-1ebe622e28db'] = $pane;
    $display->panels['middle_top'][0] = 'new-ca4c205b-d759-4122-823a-1ebe622e28db';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_8'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function odsherred_web_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'odsherred_forside';
  $page->task = 'page';
  $page->admin_title = 'Odsherred Forside';
  $page->admin_description = '';
  $page->path = 'odherred-forside';
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
  $handler->name = 'page_odsherred_forside_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'odsherred_forside';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'os2web_forside-5-7';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_' => NULL,
      'left' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f37b5079-1ed7-46d8-943e-03e0bd4dc268';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-004c2bdf-d2ba-4790-aa03-757ec234b47e';
    $pane->panel = 'top_left';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '004c2bdf-d2ba-4790-aa03-757ec234b47e';
    $display->content['new-004c2bdf-d2ba-4790-aa03-757ec234b47e'] = $pane;
    $display->panels['top_left'][0] = 'new-004c2bdf-d2ba-4790-aa03-757ec234b47e';
    $pane = new stdClass();
    $pane->pid = 'new-75af05dd-c3ca-4990-9769-55ef6cb78a92';
    $pane->panel = 'top_right';
    $pane->type = 'panels_mini';
    $pane->subtype = 'forside_minipanel';
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
      'css_class' => 'megamini',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '75af05dd-c3ca-4990-9769-55ef6cb78a92';
    $display->content['new-75af05dd-c3ca-4990-9769-55ef6cb78a92'] = $pane;
    $display->panels['top_right'][0] = 'new-75af05dd-c3ca-4990-9769-55ef6cb78a92';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['odsherred_forside'] = $page;

  return $pages;

}
