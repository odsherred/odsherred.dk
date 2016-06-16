<?php
/**
 * @file
 * odsherred_web.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function odsherred_web_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'forside_mini_borger';
  $mini->category = '';
  $mini->admin_title = 'Forside - Mini - Borger';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'os2web_2col-1-3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'col1' => NULL,
      'col2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a6f80b82-fa76-4e0b-bc5f-62f33d0e5c17';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6a6ce142-b18b-4de4-8888-db7932bfd6ed';
    $pane->panel = 'col1';
    $pane->type = 'views_panes';
    $pane->subtype = 'aktuelt-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => '4',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6a6ce142-b18b-4de4-8888-db7932bfd6ed';
    $display->content['new-6a6ce142-b18b-4de4-8888-db7932bfd6ed'] = $pane;
    $display->panels['col1'][0] = 'new-6a6ce142-b18b-4de4-8888-db7932bfd6ed';
    $pane = new stdClass();
    $pane->pid = 'new-8af1bbbe-37ed-4dc8-a194-fd18575ff675';
    $pane->panel = 'col2';
    $pane->type = 'views_panes';
    $pane->subtype = 'aktuelt-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => '4',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8af1bbbe-37ed-4dc8-a194-fd18575ff675';
    $display->content['new-8af1bbbe-37ed-4dc8-a194-fd18575ff675'] = $pane;
    $display->panels['col2'][0] = 'new-8af1bbbe-37ed-4dc8-a194-fd18575ff675';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6a6ce142-b18b-4de4-8888-db7932bfd6ed';
  $mini->display = $display;
  $export['forside_mini_borger'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'forside_mini_borger_muligheder';
  $mini->category = '';
  $mini->admin_title = 'Forside - Mini - Borger - Muligheder';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '044189af-026f-4fd6-85da-57f54ae3df57';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-90b946c7-e11e-4e23-ab94-7197fdf5788f';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'til borger',
      'title' => '<none>',
      'body' => '<p><a href="/borger">Gå til Borger-sider</a></p>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'gaatilforside',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '90b946c7-e11e-4e23-ab94-7197fdf5788f';
    $display->content['new-90b946c7-e11e-4e23-ab94-7197fdf5788f'] = $pane;
    $display->panels['left'][0] = 'new-90b946c7-e11e-4e23-ab94-7197fdf5788f';
    $pane = new stdClass();
    $pane->pid = 'new-5abbc241-29c6-4834-9fb1-0304d0e8407e';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sider under Borger',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5abbc241-29c6-4834-9fb1-0304d0e8407e';
    $display->content['new-5abbc241-29c6-4834-9fb1-0304d0e8407e'] = $pane;
    $display->panels['left'][1] = 'new-5abbc241-29c6-4834-9fb1-0304d0e8407e';
    $pane = new stdClass();
    $pane->pid = 'new-143970ae-03ff-4183-8aff-06591cfd20e5';
    $pane->panel = 'middle';
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
      'args' => 'Borger',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => 'Hvis du vil...',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '143970ae-03ff-4183-8aff-06591cfd20e5';
    $display->content['new-143970ae-03ff-4183-8aff-06591cfd20e5'] = $pane;
    $display->panels['middle'][0] = 'new-143970ae-03ff-4183-8aff-06591cfd20e5';
    $pane = new stdClass();
    $pane->pid = 'new-76ca3358-c746-467a-97bb-3ee1377f3804';
    $pane->panel = 'right';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-megadd--borger-oss';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'menu-megadd--borger-oss',
      'parent_mlid' => 'menu-megadd--borger-oss:0',
      'title_link' => 0,
      'admin_title' => 'Ofte stillede spørgsmål...',
      'level' => '1',
      'follow' => 0,
      'depth' => 0,
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => 'Svar parat',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '76ca3358-c746-467a-97bb-3ee1377f3804';
    $display->content['new-76ca3358-c746-467a-97bb-3ee1377f3804'] = $pane;
    $display->panels['right'][0] = 'new-76ca3358-c746-467a-97bb-3ee1377f3804';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-5abbc241-29c6-4834-9fb1-0304d0e8407e';
  $mini->display = $display;
  $export['forside_mini_borger_muligheder'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'forside_mini_erhverv';
  $mini->category = '';
  $mini->admin_title = 'Forside - Mini - Erhverv';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'os2web_2col-1-3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'col1' => NULL,
      'col2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '36c94f74-2891-43e1-a316-fceae800369c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7c337214-f5a3-4f4a-a21a-add0fa6c0a9b';
    $pane->panel = 'col1';
    $pane->type = 'views_panes';
    $pane->subtype = 'aktuelt-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => '5',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7c337214-f5a3-4f4a-a21a-add0fa6c0a9b';
    $display->content['new-7c337214-f5a3-4f4a-a21a-add0fa6c0a9b'] = $pane;
    $display->panels['col1'][0] = 'new-7c337214-f5a3-4f4a-a21a-add0fa6c0a9b';
    $pane = new stdClass();
    $pane->pid = 'new-aa604afa-28e5-46d3-a00b-06d273abc02d';
    $pane->panel = 'col2';
    $pane->type = 'views_panes';
    $pane->subtype = 'aktuelt-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => '5',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aa604afa-28e5-46d3-a00b-06d273abc02d';
    $display->content['new-aa604afa-28e5-46d3-a00b-06d273abc02d'] = $pane;
    $display->panels['col2'][0] = 'new-aa604afa-28e5-46d3-a00b-06d273abc02d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7c337214-f5a3-4f4a-a21a-add0fa6c0a9b';
  $mini->display = $display;
  $export['forside_mini_erhverv'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'forside_mini_erhverv_muligheder';
  $mini->category = '';
  $mini->admin_title = 'Forside - Mini - Erhverv - Muligheder';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '00f54375-9d03-41ef-aab5-61c0277d7063';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-360394fc-e7ad-4e9a-ada0-9df3fb007e5a';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Gå til forside',
      'title' => '<none>',
      'body' => '<p><a href="/erhverv">Gå til Erhvervs-sider</a></p>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'gaatilforside',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '360394fc-e7ad-4e9a-ada0-9df3fb007e5a';
    $display->content['new-360394fc-e7ad-4e9a-ada0-9df3fb007e5a'] = $pane;
    $display->panels['left'][0] = 'new-360394fc-e7ad-4e9a-ada0-9df3fb007e5a';
    $pane = new stdClass();
    $pane->pid = 'new-a668bd77-5875-4d06-94b6-6a8556ee7d0d';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sider under Erhverv',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a668bd77-5875-4d06-94b6-6a8556ee7d0d';
    $display->content['new-a668bd77-5875-4d06-94b6-6a8556ee7d0d'] = $pane;
    $display->panels['left'][1] = 'new-a668bd77-5875-4d06-94b6-6a8556ee7d0d';
    $pane = new stdClass();
    $pane->pid = 'new-b45fc7f0-152a-460d-a92e-187926ebd487';
    $pane->panel = 'middle';
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
      'args' => 'Erhverv',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => 'Hvis du vil...',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b45fc7f0-152a-460d-a92e-187926ebd487';
    $display->content['new-b45fc7f0-152a-460d-a92e-187926ebd487'] = $pane;
    $display->panels['middle'][0] = 'new-b45fc7f0-152a-460d-a92e-187926ebd487';
    $pane = new stdClass();
    $pane->pid = 'new-d784e629-9031-411f-ac1b-7e235865e969';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'nyheder_udbud-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'I udbud lige nu..',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd784e629-9031-411f-ac1b-7e235865e969';
    $display->content['new-d784e629-9031-411f-ac1b-7e235865e969'] = $pane;
    $display->panels['right'][0] = 'new-d784e629-9031-411f-ac1b-7e235865e969';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['forside_mini_erhverv_muligheder'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'forside_mini_politik';
  $mini->category = '';
  $mini->admin_title = 'Forside - Mini - Politik';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'os2web_2col-1-3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'col1' => NULL,
      'col2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6d4f5975-f384-4395-9f62-7665c63dc8da';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-87afdad3-3b1b-41e0-b554-be0c9c5503ce';
    $pane->panel = 'col1';
    $pane->type = 'views_panes';
    $pane->subtype = 'aktuelt-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => '6',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '87afdad3-3b1b-41e0-b554-be0c9c5503ce';
    $display->content['new-87afdad3-3b1b-41e0-b554-be0c9c5503ce'] = $pane;
    $display->panels['col1'][0] = 'new-87afdad3-3b1b-41e0-b554-be0c9c5503ce';
    $pane = new stdClass();
    $pane->pid = 'new-33626e50-e418-4a8a-b43b-6c50c76fad74';
    $pane->panel = 'col2';
    $pane->type = 'views_panes';
    $pane->subtype = 'aktuelt-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => '6',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '33626e50-e418-4a8a-b43b-6c50c76fad74';
    $display->content['new-33626e50-e418-4a8a-b43b-6c50c76fad74'] = $pane;
    $display->panels['col2'][0] = 'new-33626e50-e418-4a8a-b43b-6c50c76fad74';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-87afdad3-3b1b-41e0-b554-be0c9c5503ce';
  $mini->display = $display;
  $export['forside_mini_politik'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'forside_mini_politik_muligheder';
  $mini->category = '';
  $mini->admin_title = 'Forside - Mini - Politik - Muligheder';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0ebfd0fd-2acb-4cfb-b8f9-99e5f770344c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-07ad3c99-84e3-43c3-afc0-62317209f3ca';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Gå til forside',
      'title' => '<none>',
      'body' => '<p><a href="/politik">Gå til Politik-sider</a></p>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'gaatilforside',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '07ad3c99-84e3-43c3-afc0-62317209f3ca';
    $display->content['new-07ad3c99-84e3-43c3-afc0-62317209f3ca'] = $pane;
    $display->panels['left'][0] = 'new-07ad3c99-84e3-43c3-afc0-62317209f3ca';
    $pane = new stdClass();
    $pane->pid = 'new-36cfca07-b9fc-436b-9416-0d33119646b5';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sider under Politik',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '36cfca07-b9fc-436b-9416-0d33119646b5';
    $display->content['new-36cfca07-b9fc-436b-9416-0d33119646b5'] = $pane;
    $display->panels['left'][1] = 'new-36cfca07-b9fc-436b-9416-0d33119646b5';
    $pane = new stdClass();
    $pane->pid = 'new-550eaa66-0233-43fe-91c2-4d9fafd2a4b5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'nyheder_moedekalender-panel_pane_1';
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
    $pane->uuid = '550eaa66-0233-43fe-91c2-4d9fafd2a4b5';
    $display->content['new-550eaa66-0233-43fe-91c2-4d9fafd2a4b5'] = $pane;
    $display->panels['middle'][0] = 'new-550eaa66-0233-43fe-91c2-4d9fafd2a4b5';
    $pane = new stdClass();
    $pane->pid = 'new-8e2f24e8-b812-41bb-a56c-0f005f937eaa';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_hearings_view_hearing-panel_pane_1';
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
    $pane->uuid = '8e2f24e8-b812-41bb-a56c-0f005f937eaa';
    $display->content['new-8e2f24e8-b812-41bb-a56c-0f005f937eaa'] = $pane;
    $display->panels['right'][0] = 'new-8e2f24e8-b812-41bb-a56c-0f005f937eaa';
    $pane = new stdClass();
    $pane->pid = 'new-ca4b755c-4893-47aa-8469-5d1d3f013a70';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotbox_megadd-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ca4b755c-4893-47aa-8469-5d1d3f013a70';
    $display->content['new-ca4b755c-4893-47aa-8469-5d1d3f013a70'] = $pane;
    $display->panels['right'][1] = 'new-ca4b755c-4893-47aa-8469-5d1d3f013a70';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['forside_mini_politik_muligheder'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'forside_minipanel';
  $mini->category = '';
  $mini->admin_title = 'Forside minipanel';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'os2web_3stack';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'stack1' => NULL,
      'stack2' => NULL,
      'stack3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f2516e9c-cca3-4d6a-8fbc-2641ad79ba29';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d9392fc4-17bb-47e1-9899-d8abeb970259';
    $pane->panel = 'stack1';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-borger';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<a href="borger">Borger</a>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'toggle',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd9392fc4-17bb-47e1-9899-d8abeb970259';
    $display->content['new-d9392fc4-17bb-47e1-9899-d8abeb970259'] = $pane;
    $display->panels['stack1'][0] = 'new-d9392fc4-17bb-47e1-9899-d8abeb970259';
    $pane = new stdClass();
    $pane->pid = 'new-c8aea846-1431-4968-9a30-075ec53cb6e9';
    $pane->panel = 'stack2';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-erhverv';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<a href="erhverv">Erhverv</a>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'toggle',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c8aea846-1431-4968-9a30-075ec53cb6e9';
    $display->content['new-c8aea846-1431-4968-9a30-075ec53cb6e9'] = $pane;
    $display->panels['stack2'][0] = 'new-c8aea846-1431-4968-9a30-075ec53cb6e9';
    $pane = new stdClass();
    $pane->pid = 'new-3c2a4fa3-79a8-4d1e-bc30-56a507f7f0fe';
    $pane->panel = 'stack3';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-politik';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<a href="politik">Politik</a>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'toggle',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3c2a4fa3-79a8-4d1e-bc30-56a507f7f0fe';
    $display->content['new-3c2a4fa3-79a8-4d1e-bc30-56a507f7f0fe'] = $pane;
    $display->panels['stack3'][0] = 'new-3c2a4fa3-79a8-4d1e-bc30-56a507f7f0fe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['forside_minipanel'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'odsherred_borger';
  $mini->category = 'Odsherred';
  $mini->admin_title = 'Odsherred - Megadd - Borger';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'os2web_4kol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_' => NULL,
      'left' => NULL,
      'kol1' => NULL,
      'kol2' => NULL,
      'kol3' => NULL,
      'kol4' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '33c032d6-0ab3-40dd-b8b5-31b2bff7dd23';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-87f5d058-5e31-42dd-a883-5f8abeae8790';
    $pane->panel = 'kol1';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sider under Borger',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '87f5d058-5e31-42dd-a883-5f8abeae8790';
    $display->content['new-87f5d058-5e31-42dd-a883-5f8abeae8790'] = $pane;
    $display->panels['kol1'][0] = 'new-87f5d058-5e31-42dd-a883-5f8abeae8790';
    $pane = new stdClass();
    $pane->pid = 'new-5038d086-1aac-4e61-9a04-7d0e1c9c2c6f';
    $pane->panel = 'kol2';
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
      'override_title_text' => 'Hvis du vil...',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5038d086-1aac-4e61-9a04-7d0e1c9c2c6f';
    $display->content['new-5038d086-1aac-4e61-9a04-7d0e1c9c2c6f'] = $pane;
    $display->panels['kol2'][0] = 'new-5038d086-1aac-4e61-9a04-7d0e1c9c2c6f';
    $pane = new stdClass();
    $pane->pid = 'new-de9d1d61-2407-4805-acac-4960eaa08314';
    $pane->panel = 'kol3';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-megadd--borger-oss';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'menu-megadd--borger-oss',
      'parent_mlid' => 'menu-megadd--borger-oss:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'expanded' => 0,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => 'Ofte stillede spørgsmål',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'de9d1d61-2407-4805-acac-4960eaa08314';
    $display->content['new-de9d1d61-2407-4805-acac-4960eaa08314'] = $pane;
    $display->panels['kol3'][0] = 'new-de9d1d61-2407-4805-acac-4960eaa08314';
    $pane = new stdClass();
    $pane->pid = 'new-7c3650df-421d-4f72-ab98-8f313a871301';
    $pane->panel = 'kol4';
    $pane->type = 'block';
    $pane->subtype = 'searchcloud_block-searchcloud_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Populære emner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'searchcloud-borger',
      'css_class' => 'borger searchcloudblok',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7c3650df-421d-4f72-ab98-8f313a871301';
    $display->content['new-7c3650df-421d-4f72-ab98-8f313a871301'] = $pane;
    $display->panels['kol4'][0] = 'new-7c3650df-421d-4f72-ab98-8f313a871301';
    $pane = new stdClass();
    $pane->pid = 'new-1d992093-1e69-484c-83ba-7732272d101b';
    $pane->panel = 'kol4';
    $pane->type = 'views_panes';
    $pane->subtype = 'megadd_news-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => 'Borger',
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
    $pane->uuid = '1d992093-1e69-484c-83ba-7732272d101b';
    $display->content['new-1d992093-1e69-484c-83ba-7732272d101b'] = $pane;
    $display->panels['kol4'][1] = 'new-1d992093-1e69-484c-83ba-7732272d101b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['odsherred_borger'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'odsherred_erhverv';
  $mini->category = 'Odsherred';
  $mini->admin_title = 'Odsherred - Megadd - Erhverv';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'os2web_4kol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_' => NULL,
      'left' => NULL,
      'kol1' => NULL,
      'kol2' => NULL,
      'kol3' => NULL,
      'kol4' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7e57873b-5619-4acd-9644-46dd768ab6e1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0cbe6f66-6862-489d-b3a8-ecc52e921c87';
    $pane->panel = 'kol1';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sider under Erhverv',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0cbe6f66-6862-489d-b3a8-ecc52e921c87';
    $display->content['new-0cbe6f66-6862-489d-b3a8-ecc52e921c87'] = $pane;
    $display->panels['kol1'][0] = 'new-0cbe6f66-6862-489d-b3a8-ecc52e921c87';
    $pane = new stdClass();
    $pane->pid = 'new-40b36878-994c-48a0-94bf-8a1ddceaed6b';
    $pane->panel = 'kol2';
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
      'args' => 'erhverv',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => 'Hvis du vil...',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '40b36878-994c-48a0-94bf-8a1ddceaed6b';
    $display->content['new-40b36878-994c-48a0-94bf-8a1ddceaed6b'] = $pane;
    $display->panels['kol2'][0] = 'new-40b36878-994c-48a0-94bf-8a1ddceaed6b';
    $pane = new stdClass();
    $pane->pid = 'new-286470bf-c1e2-4890-98a3-a5e3cc18e387';
    $pane->panel = 'kol3';
    $pane->type = 'views_panes';
    $pane->subtype = 'nyheder_udbud-panel_pane_1';
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
    $pane->uuid = '286470bf-c1e2-4890-98a3-a5e3cc18e387';
    $display->content['new-286470bf-c1e2-4890-98a3-a5e3cc18e387'] = $pane;
    $display->panels['kol3'][0] = 'new-286470bf-c1e2-4890-98a3-a5e3cc18e387';
    $pane = new stdClass();
    $pane->pid = 'new-7455507e-5acf-4ddc-84a1-eb7b6ebd68e4';
    $pane->panel = 'kol3';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotbox_megadd-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '893131',
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
    $pane->uuid = '7455507e-5acf-4ddc-84a1-eb7b6ebd68e4';
    $display->content['new-7455507e-5acf-4ddc-84a1-eb7b6ebd68e4'] = $pane;
    $display->panels['kol3'][1] = 'new-7455507e-5acf-4ddc-84a1-eb7b6ebd68e4';
    $pane = new stdClass();
    $pane->pid = 'new-b62f8c90-debb-4f0d-8e1f-609eb51b2e5d';
    $pane->panel = 'kol4';
    $pane->type = 'block';
    $pane->subtype = 'searchcloud_block-searchcloud_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Populære emner',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'searchcloud-erhverv',
      'css_class' => 'erhverv searchcloudblok',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b62f8c90-debb-4f0d-8e1f-609eb51b2e5d';
    $display->content['new-b62f8c90-debb-4f0d-8e1f-609eb51b2e5d'] = $pane;
    $display->panels['kol4'][0] = 'new-b62f8c90-debb-4f0d-8e1f-609eb51b2e5d';
    $pane = new stdClass();
    $pane->pid = 'new-494c90d1-ac40-4972-9777-69cbf27d8847';
    $pane->panel = 'kol4';
    $pane->type = 'views_panes';
    $pane->subtype = 'megadd_news-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => 'Erhverv',
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
    $pane->uuid = '494c90d1-ac40-4972-9777-69cbf27d8847';
    $display->content['new-494c90d1-ac40-4972-9777-69cbf27d8847'] = $pane;
    $display->panels['kol4'][1] = 'new-494c90d1-ac40-4972-9777-69cbf27d8847';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['odsherred_erhverv'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'odsherred_politik';
  $mini->category = 'Odsherred';
  $mini->admin_title = 'Odsherred - Megadd - Politik';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'os2web_4kol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_' => NULL,
      'left' => NULL,
      'kol1' => NULL,
      'kol2' => NULL,
      'kol3' => NULL,
      'kol4' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '91354ea5-fe25-4ba2-8e75-b1fae1b721c6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-061aef2f-1a5c-4e89-9b0e-2517cd18679d';
    $pane->panel = 'kol1';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Sider under Politik',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '061aef2f-1a5c-4e89-9b0e-2517cd18679d';
    $display->content['new-061aef2f-1a5c-4e89-9b0e-2517cd18679d'] = $pane;
    $display->panels['kol1'][0] = 'new-061aef2f-1a5c-4e89-9b0e-2517cd18679d';
    $pane = new stdClass();
    $pane->pid = 'new-c0a8a33a-8a4e-484a-a2b8-baeebf3262ad';
    $pane->panel = 'kol2';
    $pane->type = 'views_panes';
    $pane->subtype = 'nyheder_moedekalender-panel_pane_1';
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
    $pane->uuid = 'c0a8a33a-8a4e-484a-a2b8-baeebf3262ad';
    $display->content['new-c0a8a33a-8a4e-484a-a2b8-baeebf3262ad'] = $pane;
    $display->panels['kol2'][0] = 'new-c0a8a33a-8a4e-484a-a2b8-baeebf3262ad';
    $pane = new stdClass();
    $pane->pid = 'new-7c4af264-bcd7-433c-96fe-00af4a168fff';
    $pane->panel = 'kol2';
    $pane->type = 'views_panes';
    $pane->subtype = 'nyheder_moedekalender-panel_pane_2';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7c4af264-bcd7-433c-96fe-00af4a168fff';
    $display->content['new-7c4af264-bcd7-433c-96fe-00af4a168fff'] = $pane;
    $display->panels['kol2'][1] = 'new-7c4af264-bcd7-433c-96fe-00af4a168fff';
    $pane = new stdClass();
    $pane->pid = 'new-d6520d5a-1351-46bc-a648-96dc126ada70';
    $pane->panel = 'kol3';
    $pane->type = 'views_panes';
    $pane->subtype = 'os2web_hearings_view_hearing-panel_pane_1';
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
    $pane->uuid = 'd6520d5a-1351-46bc-a648-96dc126ada70';
    $display->content['new-d6520d5a-1351-46bc-a648-96dc126ada70'] = $pane;
    $display->panels['kol3'][0] = 'new-d6520d5a-1351-46bc-a648-96dc126ada70';
    $pane = new stdClass();
    $pane->pid = 'new-42847750-2651-412e-8a13-0f93648e16c0';
    $pane->panel = 'kol3';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotbox_megadd-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '893829',
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
    $pane->uuid = '42847750-2651-412e-8a13-0f93648e16c0';
    $display->content['new-42847750-2651-412e-8a13-0f93648e16c0'] = $pane;
    $display->panels['kol3'][1] = 'new-42847750-2651-412e-8a13-0f93648e16c0';
    $pane = new stdClass();
    $pane->pid = 'new-4550ef07-84a4-4902-a0cc-173e351521c3';
    $pane->panel = 'kol4';
    $pane->type = 'views_panes';
    $pane->subtype = 'spotbox_megadd-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '893849',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4550ef07-84a4-4902-a0cc-173e351521c3';
    $display->content['new-4550ef07-84a4-4902-a0cc-173e351521c3'] = $pane;
    $display->panels['kol4'][0] = 'new-4550ef07-84a4-4902-a0cc-173e351521c3';
    $pane = new stdClass();
    $pane->pid = 'new-748a116f-562f-4b0f-91af-68ee1e78a944';
    $pane->panel = 'kol4';
    $pane->type = 'views_panes';
    $pane->subtype = 'megadd_news-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_os2web_base_field_struct_tid' => 'Politik',
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
    $pane->uuid = '748a116f-562f-4b0f-91af-68ee1e78a944';
    $display->content['new-748a116f-562f-4b0f-91af-68ee1e78a944'] = $pane;
    $display->panels['kol4'][1] = 'new-748a116f-562f-4b0f-91af-68ee1e78a944';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['odsherred_politik'] = $mini;

  return $export;
}
