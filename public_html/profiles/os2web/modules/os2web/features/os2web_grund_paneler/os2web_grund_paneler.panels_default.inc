<?php
/**
 * @file
 * os2web_grund_paneler.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function os2web_grund_paneler_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'andre_kommunale_websites';
  $mini->category = '';
  $mini->admin_title = 'Andre kommunale websites';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a82b801a-3f00-4acf-baee-89e44aa3f32d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0bd7e14c-1339-4cd7-82dd-ecd98207a8f4';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'nice_menus-1';
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
    $pane->uuid = '0bd7e14c-1339-4cd7-82dd-ecd98207a8f4';
    $display->content['new-0bd7e14c-1339-4cd7-82dd-ecd98207a8f4'] = $pane;
    $display->panels['middle'][0] = 'new-0bd7e14c-1339-4cd7-82dd-ecd98207a8f4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['andre_kommunale_websites'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer_menuer';
  $mini->category = '';
  $mini->admin_title = 'Footer menuer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ef4358c2-5b49-4359-9094-03db1755d10d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f32d2e1a-5a08-46d5-992e-cb4ec24699cf';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = 'f32d2e1a-5a08-46d5-992e-cb4ec24699cf';
    $display->content['new-f32d2e1a-5a08-46d5-992e-cb4ec24699cf'] = $pane;
    $display->panels['middle'][0] = 'new-f32d2e1a-5a08-46d5-992e-cb4ec24699cf';
    $pane = new stdClass();
    $pane->pid = 'new-a29e70bb-5cf1-499b-ad71-84f852535c12';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-3',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a29e70bb-5cf1-499b-ad71-84f852535c12';
    $display->content['new-a29e70bb-5cf1-499b-ad71-84f852535c12'] = $pane;
    $display->panels['middle'][1] = 'new-a29e70bb-5cf1-499b-ad71-84f852535c12';
    $pane = new stdClass();
    $pane->pid = 'new-b84640a1-70c7-437b-b9bc-871f0263b2f3';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b84640a1-70c7-437b-b9bc-871f0263b2f3';
    $display->content['new-b84640a1-70c7-437b-b9bc-871f0263b2f3'] = $pane;
    $display->panels['middle'][2] = 'new-b84640a1-70c7-437b-b9bc-871f0263b2f3';
    $pane = new stdClass();
    $pane->pid = 'new-5bbcbadc-b89c-4d37-8ddb-438724d5165a';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-20';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5bbcbadc-b89c-4d37-8ddb-438724d5165a';
    $display->content['new-5bbcbadc-b89c-4d37-8ddb-438724d5165a'] = $pane;
    $display->panels['middle'][3] = 'new-5bbcbadc-b89c-4d37-8ddb-438724d5165a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a29e70bb-5cf1-499b-ad71-84f852535c12';
  $mini->display = $display;
  $export['footer_menuer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'mega_menu_borger';
  $mini->category = '';
  $mini->admin_title = 'Mega Menu Borger';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_6_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '16bc8846-71b8-422e-bda5-f1e4f141c4f3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b95bf5fc-6d0b-4750-adb1-abae63542d1e';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-8';
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
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b95bf5fc-6d0b-4750-adb1-abae63542d1e';
    $display->content['new-b95bf5fc-6d0b-4750-adb1-abae63542d1e'] = $pane;
    $display->panels['left'][0] = 'new-b95bf5fc-6d0b-4750-adb1-abae63542d1e';
    $pane = new stdClass();
    $pane->pid = 'new-b5563f08-57bf-4085-a861-d8db46fd8d24';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'megadd_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => 'borger',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-3 alpha omega aktuelle-emner',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b5563f08-57bf-4085-a861-d8db46fd8d24';
    $display->content['new-b5563f08-57bf-4085-a861-d8db46fd8d24'] = $pane;
    $display->panels['right'][0] = 'new-b5563f08-57bf-4085-a861-d8db46fd8d24';
    $pane = new stdClass();
    $pane->pid = 'new-325b6845-16e2-45cf-a68c-d530468ee2c2';
    $pane->panel = 'right';
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
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => 'borger',
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
      'css_id' => 'selvbetjening-borger',
      'css_class' => 'grid-3 alpha omega selvbetjening-mega-width',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '325b6845-16e2-45cf-a68c-d530468ee2c2';
    $display->content['new-325b6845-16e2-45cf-a68c-d530468ee2c2'] = $pane;
    $display->panels['right'][1] = 'new-325b6845-16e2-45cf-a68c-d530468ee2c2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['mega_menu_borger'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'mega_menu_erhverv';
  $mini->category = '';
  $mini->admin_title = 'Mega Menu Erhverv';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_24_twocol_12_12';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '21a1c5c3-47a3-4a1d-b9ae-d25547ce0a9f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9cfd6e62-008d-4dcd-bbd4-f7f4f202ff1c';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-9';
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
    $pane->uuid = '9cfd6e62-008d-4dcd-bbd4-f7f4f202ff1c';
    $display->content['new-9cfd6e62-008d-4dcd-bbd4-f7f4f202ff1c'] = $pane;
    $display->panels['left'][0] = 'new-9cfd6e62-008d-4dcd-bbd4-f7f4f202ff1c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['mega_menu_erhverv'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'mega_menu_for_erhverv';
  $mini->category = '';
  $mini->admin_title = 'Mega Menu Erhverv';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_6_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8e5a7b38-254a-4e60-9753-f62ccf2d42d2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a003c3fc-6acf-407f-aae7-ee79d4698576';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-8';
    $pane->shown = FALSE;
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
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a003c3fc-6acf-407f-aae7-ee79d4698576';
    $display->content['new-a003c3fc-6acf-407f-aae7-ee79d4698576'] = $pane;
    $display->panels['left'][0] = 'new-a003c3fc-6acf-407f-aae7-ee79d4698576';
    $pane = new stdClass();
    $pane->pid = 'new-355b70cc-eef9-46ab-a235-b3ea58e6c61a';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-9';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '355b70cc-eef9-46ab-a235-b3ea58e6c61a';
    $display->content['new-355b70cc-eef9-46ab-a235-b3ea58e6c61a'] = $pane;
    $display->panels['left'][1] = 'new-355b70cc-eef9-46ab-a235-b3ea58e6c61a';
    $pane = new stdClass();
    $pane->pid = 'new-0c3323df-f3d7-4f23-88d1-ee30cb9d5ce3';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'megadd_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => 'erhverv',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-3 alpha omega aktuelle-emner',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0c3323df-f3d7-4f23-88d1-ee30cb9d5ce3';
    $display->content['new-0c3323df-f3d7-4f23-88d1-ee30cb9d5ce3'] = $pane;
    $display->panels['right'][0] = 'new-0c3323df-f3d7-4f23-88d1-ee30cb9d5ce3';
    $pane = new stdClass();
    $pane->pid = 'new-95ce7db5-d8b7-4b9b-a010-63b030bb55a3';
    $pane->panel = 'right';
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
      'css_id' => 'selvbetjening-erhverv',
      'css_class' => 'grid-3 alpha omega selvbetjening-mega-width',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '95ce7db5-d8b7-4b9b-a010-63b030bb55a3';
    $display->content['new-95ce7db5-d8b7-4b9b-a010-63b030bb55a3'] = $pane;
    $display->panels['right'][1] = 'new-95ce7db5-d8b7-4b9b-a010-63b030bb55a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['mega_menu_for_erhverv'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'mega_menu_for_politik_og_planer';
  $mini->category = '';
  $mini->admin_title = 'Mega Menu Politik og planer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_6_6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '60051afc-3818-4eae-8bf0-093fe41ed0df';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-81887363-e9f3-4bf4-876f-2af1d9e0c8d3';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-8';
    $pane->shown = FALSE;
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
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '81887363-e9f3-4bf4-876f-2af1d9e0c8d3';
    $display->content['new-81887363-e9f3-4bf4-876f-2af1d9e0c8d3'] = $pane;
    $display->panels['left'][0] = 'new-81887363-e9f3-4bf4-876f-2af1d9e0c8d3';
    $pane = new stdClass();
    $pane->pid = 'new-371f6e54-41aa-470e-a225-69aa83272516';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-10';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '371f6e54-41aa-470e-a225-69aa83272516';
    $display->content['new-371f6e54-41aa-470e-a225-69aa83272516'] = $pane;
    $display->panels['left'][1] = 'new-371f6e54-41aa-470e-a225-69aa83272516';
    $pane = new stdClass();
    $pane->pid = 'new-15a9bfb0-93b5-42e3-a121-6bce33cfd8f2';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'megadd_news-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => 'politik & planer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grid-3 alpha omega aktuelle-emner',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '15a9bfb0-93b5-42e3-a121-6bce33cfd8f2';
    $display->content['new-15a9bfb0-93b5-42e3-a121-6bce33cfd8f2'] = $pane;
    $display->panels['right'][0] = 'new-15a9bfb0-93b5-42e3-a121-6bce33cfd8f2';
    $pane = new stdClass();
    $pane->pid = 'new-e2a8e78e-397e-4e09-bb6c-925adbc3864d';
    $pane->panel = 'right';
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
      'args' => 'politik & planer',
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
      'css_id' => 'selvbetjening-politik',
      'css_class' => 'grid-3 alpha omega selvbetjening-mega-width',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e2a8e78e-397e-4e09-bb6c-925adbc3864d';
    $display->content['new-e2a8e78e-397e-4e09-bb6c-925adbc3864d'] = $pane;
    $display->panels['right'][1] = 'new-e2a8e78e-397e-4e09-bb6c-925adbc3864d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['mega_menu_for_politik_og_planer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'mega_menu_politikogplaner';
  $mini->category = '';
  $mini->admin_title = 'Mega Menu Politik og planer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'omega_24_twocol_12_12';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4ef66eda-973d-4467-899d-9d8d9cada2d3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-84af3489-9d87-4500-af59-dfb9e6c60202';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-10';
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
    $pane->uuid = '84af3489-9d87-4500-af59-dfb9e6c60202';
    $display->content['new-84af3489-9d87-4500-af59-dfb9e6c60202'] = $pane;
    $display->panels['left'][0] = 'new-84af3489-9d87-4500-af59-dfb9e6c60202';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['mega_menu_politikogplaner'] = $mini;

  return $export;
}
