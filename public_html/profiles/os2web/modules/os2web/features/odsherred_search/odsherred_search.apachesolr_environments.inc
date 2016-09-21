<?php
/**
 * @file
 * odsherred_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function odsherred_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'localhost';
  $environment->name = 'odsherreddk';
  $environment->url = 'http://localhost:8983/solr/odsherreddk';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(
      'feedback' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'fieldable_panels_pane' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'node' => array(
        'last_changed' => '1474313011',
        'last_entity_id' => '896948',
      ),
      'redirect' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'file' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_term' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_vocabulary' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'user' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'wysiwyg_profile' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'rules_config' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
    ),
    'apachesolr_index_updated' => 1474340401,
    'apachesolr_last_optimize' => 1474279202,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'baggrund',
      1 => 'contentpage',
      2 => 'os2web_base_iframe',
      3 => 'news',
      4 => 'os2web_borger_dk_article',
      5 => 'sektionsside',
      6 => 'webform',
    ),
  );
  $export['localhost'] = $environment;

  return $export;
}
