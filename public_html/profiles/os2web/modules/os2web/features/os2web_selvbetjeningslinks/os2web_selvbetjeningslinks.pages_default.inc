<?php
/**
 * @file
 * os2web_selvbetjeningslinks.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function os2web_selvbetjeningslinks_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'selvbetjening';
  $page->task = 'page';
  $page->admin_title = 'Selvbetjening';
  $page->admin_description = '';
  $page->path = 'selvbetjeninger';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_selvbetjening__panel';
  $handler->task = 'page';
  $handler->subtask = 'selvbetjening';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-node',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'odsherred_3stack';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_' => NULL,
      'left' => NULL,
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
  $display->title = 'Selvbetjeninger';
  $display->uuid = '7e98bdbd-da74-4d8c-9786-f671bfedd671';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-138a5dd1-76e0-427a-a884-fb28299de159';
    $pane->panel = 'stack3';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_selfservice_links_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane->uuid = '138a5dd1-76e0-427a-a884-fb28299de159';
    $display->content['new-138a5dd1-76e0-427a-a884-fb28299de159'] = $pane;
    $display->panels['stack3'][0] = 'new-138a5dd1-76e0-427a-a884-fb28299de159';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-138a5dd1-76e0-427a-a884-fb28299de159';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['selvbetjening'] = $page;

  return $pages;

}
