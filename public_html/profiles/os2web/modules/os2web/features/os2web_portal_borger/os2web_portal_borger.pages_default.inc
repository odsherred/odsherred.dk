<?php
/**
 * @file
 * os2web_portal_borger.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2web_portal_borger_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context_5';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Borger Portalforside',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'portal-borger portal-side',
    'css_id' => 'panel-borger',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '1',
            1 => array(
              4 => '4',
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
      'top_left' => NULL,
      'top_center' => NULL,
      'top_right' => NULL,
      'middle_left' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'aae5d6ed-b3f9-4981-a010-85a86c43675f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f79c66e1-2f3a-4eab-95b0-eb85889580b4';
    $pane->panel = 'lead';
    $pane->type = 'views';
    $pane->subtype = 'borgerservices';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '9',
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
      'css_id' => 'pop-borgerservices',
      'css_class' => 'grid-6 alpha',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f79c66e1-2f3a-4eab-95b0-eb85889580b4';
    $display->content['new-f79c66e1-2f3a-4eab-95b0-eb85889580b4'] = $pane;
    $display->panels['lead'][0] = 'new-f79c66e1-2f3a-4eab-95b0-eb85889580b4';
    $pane = new stdClass();
    $pane->pid = 'new-31dc8d21-958d-4f9c-a185-cc88ecea3297';
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
      'args' => '4',
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
    $pane->uuid = '31dc8d21-958d-4f9c-a185-cc88ecea3297';
    $display->content['new-31dc8d21-958d-4f9c-a185-cc88ecea3297'] = $pane;
    $display->panels['lead'][1] = 'new-31dc8d21-958d-4f9c-a185-cc88ecea3297';
    $pane = new stdClass();
    $pane->pid = 'new-59972225-bf30-4c47-8578-11b473f0b9f0';
    $pane->panel = 'middle_center';
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
      'css_class' => 'grid-6',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '59972225-bf30-4c47-8578-11b473f0b9f0';
    $display->content['new-59972225-bf30-4c47-8578-11b473f0b9f0'] = $pane;
    $display->panels['middle_center'][0] = 'new-59972225-bf30-4c47-8578-11b473f0b9f0';
    $pane = new stdClass();
    $pane->pid = 'new-ec832dd7-d57d-42b8-bc50-a64674d78a97';
    $pane->panel = 'middle_center';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '',
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
      'css_class' => 'grid-6',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ec832dd7-d57d-42b8-bc50-a64674d78a97';
    $display->content['new-ec832dd7-d57d-42b8-bc50-a64674d78a97'] = $pane;
    $display->panels['middle_center'][1] = 'new-ec832dd7-d57d-42b8-bc50-a64674d78a97';
    $pane = new stdClass();
    $pane->pid = 'new-d5c482fd-d9e5-46c6-865e-bc57d404960b';
    $pane->panel = 'middle_center';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotboxe-panel_pane_3';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd5c482fd-d9e5-46c6-865e-bc57d404960b';
    $display->content['new-d5c482fd-d9e5-46c6-865e-bc57d404960b'] = $pane;
    $display->panels['middle_center'][2] = 'new-d5c482fd-d9e5-46c6-865e-bc57d404960b';
    $pane = new stdClass();
    $pane->pid = 'new-87f9bd96-ce9a-421b-bb4a-4b7ceddea25c';
    $pane->panel = 'middle_right';
    $pane->type = 'views';
    $pane->subtype = 'kulturnaut_events_lister';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'blok_kulturnaut_indholdsside',
      'override_title' => 1,
      'override_title_text' => 'DET SKER',
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
    $pane->uuid = '87f9bd96-ce9a-421b-bb4a-4b7ceddea25c';
    $display->content['new-87f9bd96-ce9a-421b-bb4a-4b7ceddea25c'] = $pane;
    $display->panels['middle_right'][0] = 'new-87f9bd96-ce9a-421b-bb4a-4b7ceddea25c';
    $pane = new stdClass();
    $pane->pid = 'new-bf35eb39-f800-42db-84af-58b9ce8a0543';
    $pane->panel = 'middle_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'kontaktblok-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '',
      ),
      'override_title' => 0,
      'override_title_text' => 'Kontakt',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bf35eb39-f800-42db-84af-58b9ce8a0543';
    $display->content['new-bf35eb39-f800-42db-84af-58b9ce8a0543'] = $pane;
    $display->panels['middle_right'][1] = 'new-bf35eb39-f800-42db-84af-58b9ce8a0543';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context_5'] = $handler;

  return $export;
}
