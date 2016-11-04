<?php
/**
 * @file
 * os2web_menuer_og_blokke.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function os2web_menuer_og_blokke_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_borger:taxonomy/term/4
  $menu_links['main-menu_borger:taxonomy/term/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Borger',
    'options' => array(
      'minipanel' => 'odsherred_borger',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '.region-menu',
          'type' => 'absolute',
          'container' => '',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
          'adjust' => array(
            'x' => 0,
            'y' => 0,
          ),
        ),
        'show' => array(
          'delay' => 0,
          'when' => array(
            'event' => 'click',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'hide' => array(
          'delay' => 500,
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'style' => array(
          'tip' => 'none',
          'name' => 'cmstheme',
          'width' => array(
            'min' => 940,
            'max' => 940,
          ),
          'border' => array(
            'width' => 0,
            'color' => '#fff',
            'radius' => 0,
          ),
        ),
        'mlid' => 782,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_borger:taxonomy/term/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_erhverv:taxonomy/term/5
  $menu_links['main-menu_erhverv:taxonomy/term/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Erhverv',
    'options' => array(
      'minipanel' => 'odsherred_erhverv',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '.region-menu',
          'type' => 'absolute',
          'container' => '',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
          'adjust' => array(
            'x' => 0,
            'y' => 0,
          ),
        ),
        'show' => array(
          'delay' => 0,
          'when' => array(
            'event' => 'click',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'hide' => array(
          'delay' => 500,
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'style' => array(
          'tip' => 'none',
          'name' => 'cmstheme',
          'width' => array(
            'min' => 940,
            'max' => 940,
          ),
          'border' => array(
            'width' => 0,
            'color' => '#fff',
            'radius' => 0,
          ),
        ),
        'mlid' => 783,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_erhverv:taxonomy/term/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_politik:taxonomy/term/6
  $menu_links['main-menu_politik:taxonomy/term/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Politik',
    'options' => array(
      'minipanel' => 'odsherred_politik',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '.region-menu',
          'type' => 'absolute',
          'container' => '',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
          'adjust' => array(
            'x' => 0,
            'y' => 0,
          ),
        ),
        'show' => array(
          'delay' => 0,
          'when' => array(
            'event' => 'click',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'hide' => array(
          'delay' => 500,
          'effect' => array(
            'type' => 'false',
            'length' => 0,
          ),
        ),
        'style' => array(
          'tip' => 'none',
          'name' => 'cmstheme',
          'width' => array(
            'min' => 940,
            'max' => 940,
          ),
          'border' => array(
            'width' => 0,
            'color' => '#fff',
            'radius' => 0,
          ),
        ),
        'mlid' => 784,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_politik:taxonomy/term/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-indholdsmenu_borger:taxonomy/term/4
  $menu_links['menu-indholdsmenu_borger:taxonomy/term/4'] = array(
    'menu_name' => 'menu-indholdsmenu',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Borger',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => 'Se alle punkter under Borger',
      ),
      'identifier' => 'menu-indholdsmenu_borger:taxonomy/term/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );
  // Exported menu link: menu-indholdsmenu_erhverv:taxonomy/term/5
  $menu_links['menu-indholdsmenu_erhverv:taxonomy/term/5'] = array(
    'menu_name' => 'menu-indholdsmenu',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Erhverv',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => 'Se alle punkter under Erhverv',
      ),
      'identifier' => 'menu-indholdsmenu_erhverv:taxonomy/term/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 0,
  );
  // Exported menu link: menu-top-menu_log-ud:user/logout
  $menu_links['menu-top-menu_log-ud:user/logout'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log ud',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(),
      'identifier' => 'menu-top-menu_log-ud:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-top-menu_ls-hjt:http://www.adgangforalle.dk/
  $menu_links['menu-top-menu_ls-hjt:http://www.adgangforalle.dk/'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'http://www.adgangforalle.dk/',
    'router_path' => '',
    'link_title' => 'Læs højt',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(),
      'identifier' => 'menu-top-menu_ls-hjt:http://www.adgangforalle.dk/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Borger');
  t('Erhverv');
  t('Log ud');
  t('Læs højt');
  t('Politik');

  return $menu_links;
}
