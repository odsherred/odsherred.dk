<?php

/**
 * Generates list of indices from the active cluster.
 * @return string
 */
function bellcom_elasticsearch_synonyms_indices() {
  $rows = array();
  foreach (bellcom_elastic_search_get_used_indices() as $row) {
    $rows[] = array(
      $row,
      l(t('Set up synonyms'), "admin/config/search/synonyms_index/$row")
    );
  }

  $header = array(t('Name'), t('Synonyms'));
  $output = theme('table', array('header' => $header, 'rows' => $rows));
  $output .= theme('pager');

  return $output;
}

/**
 * Single index edit page
 *
 * @param $form
 * @param $form_state
 * @param $index_name
 * @return mixed
 */
function bellcom_elasticsearch_synonyms_index($form, &$form_state, $index_name) {
  drupal_set_title(drupal_get_title() . ' ' . $index_name);

  $used_indices = bellcom_elastic_search_get_used_indices();
  if (!isset($used_indices[$index_name])) {
    $form[] = array(
      '#markup' => t('This index is either read-only or not enabled for that installation')
    );
    return $form;
  }

  //normal form
  $form['index'] = array(
    '#type' => 'hidden',
    '#value' => $index_name,
  );

  $form['cluster'] = array(
    '#type' => 'hidden',
    '#value' => elasticsearch_connector_get_default_connector(),
  );

  $form['active'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use elasticsearch enhancements'),
    '#description' => t('includes synonyms, default stopwords, terms weight and phrase catcher')
  );

  $form['synonyms'] = array(
    '#title' => t('Synonyms'),
    '#type' => 'textarea',
    '#description' => t('One synomym group per line, look at %link for help in formatting', array('%link' => 'https://www.elastic.co/guide/en/elasticsearch/guide/current/synonym-formats.html')),
    '#states' => array(
      'visible' => array(
        ':input[name="active"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['file_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Synonyms file path'),
    '#description' => t('File with filename "synonyms.txt" will be saved in this path. Must be writtable'),
    '#field_suffix' => '/' . $index_name . '_synonyms.txt',
  );

  $form['duplicate_plain_list'] = array(
    '#type' => 'checkbox',
    '#title' => t('Save directly into the index settings'),
    '#description' => t('Additionally save save the list directly into the index settings')
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  $result = db_select('bellcom_elasticsearch_synonyms_indices', 'n')
    ->fields('n')
    ->condition('index_name', $index_name)
    ->execute()
    ->fetchAssoc();

  if ($result) {
    $form['active']['#default_value'] = $result['active'];
    $form['file_path']['#default_value'] = $result['file_path'];

    $synonyms = file_get_contents($result['file_path'] . '/' . $index_name . '_synonyms.txt', FILE_USE_INCLUDE_PATH);
    $form['synonyms']['#default_value'] = $synonyms;
    $form['duplicate_plain_list']['#default_value'] = $result['duplicate_plain_list'];
  }

  return $form;
}

/**
 * Form submit function, saves the values, creates the synonyms text file and adds this file to the index settings.
 *
 * @param $form
 * @param $form_state
 */
function bellcom_elasticsearch_synonyms_index_submit($form, &$form_state) {
  module_load_include('inc', 'bellcom_elasticsearch', 'includes/bellcom_elasticsearch.api.index');

  try {
    $cluster_name = $form_state['values']['cluster'];
    $cluster_loaded = elasticsearch_connector_cluster_load($cluster_name);
    if ($cluster_loaded) {
      $client = elasticsearch_connector_load_library($cluster_loaded);
      $index_name = $form_state['values']['index'];

      $used_indices = bellcom_elastic_search_get_used_indices();
      if (!isset($used_indices[$index_name])) {
        drupal_set_message(('This index is either read-only or not enabled for that installation'), 'warning');
        return;
      }

      if ($form_state['values']['active']) {
        //saving file
        $data = $form_state['values']['synonyms'];
        $duplicate_plain_list = $form_state['values']['duplicate_plain_list'];
        $path = $form_state['values']['file_path'];
        $file_uri = _bellcom_elasticsearch_save_synonyms_file($index_name, $data, $path);

        try {
          bellcom_elasticsearch_api_index_close($client, $index_name);
          if ($file_uri) {
            bellcom_elasticsearch_api_add_analyzer_as_file($client, $index_name, drupal_realpath($file_uri));
          }
          if ($duplicate_plain_list) {
            bellcom_elasticsearch_api_add_analyzer_as_plaintext($client, $index_name, $data);
          }
          bellcom_elasticsearch_api_index_open($client, $index_name);
        } catch (Exception $e) {
          drupal_set_message(t('Error while updating index: ') . $e->getMessage(), 'warning');
          watchdog('bellcom_elasticsearch', $e->getMessage(), WATCHDOG_WARNING);
          bellcom_elasticsearch_api_index_open($client, $index_name);
        }
      } else {
        try {
          bellcom_elasticsearch_api_index_close($client, $index_name);
          bellcom_elasticsearch_api_add_analyzer_as_file($client, $index_name, '');
          bellcom_elasticsearch_api_index_open($client, $index_name);
        } catch (Exception $e) {
          drupal_set_message(t('Error while updating index: ') . $e->getMessage(), 'warning');
          watchdog('bellcom_elasticsearch', $e->getMessage(), WATCHDOG_WARNING);
          bellcom_elasticsearch_api_index_open($client, $index_name);
        }
      }

      //updating database value
      $result = db_select('bellcom_elasticsearch_synonyms_indices', 'n')
        ->fields('n')
        ->condition('index_name', $index_name)
        ->execute()
        ->fetchAssoc();

      if (!$result) {
        db_insert('bellcom_elasticsearch_synonyms_indices')
          ->fields(array(
            'index_name' => $index_name,
            'cluster' => $cluster_name,
            'active' => $form_state['values']['active'],
            'file_path' => $form_state['values']['file_path'],
            'duplicate_plain_list' => $form_state['values']['duplicate_plain_list'],
          ))
          ->execute();
      } else {
        db_update('bellcom_elasticsearch_synonyms_indices')
          ->fields(array(
            'active' => $form_state['values']['active'],
            'file_path' => $form_state['values']['file_path'],
            'duplicate_plain_list' => $form_state['values']['duplicate_plain_list'],
          ))
          ->condition('index_name', $index_name)
          ->condition('cluster', $cluster_name)
          ->execute();
      }

      drupal_set_message('Index is updated');
    }
  } catch (Exception $e) {
    drupal_set_message(t('Could not update synonyms: ') . $e->getMessage(), 'warning');
    watchdog('bellcom_elasticsearch', $e->getMessage(), WATCHDOG_WARNING);
  }
}

/**
 * Function that saved the synonyms path.
 * File name is generated like index_name_synonyms.txt
 *
 * If the path is not existing, drupal will attempt to create it.
 *
 * @param $data
 * @param $path
 * @return string
 */
function _bellcom_elasticsearch_save_synonyms_file($index_name, $data, $path) {
  if (substr($path, -1) !== '/') {
    $path .= '/';
  }

  if (file_prepare_directory($path, FILE_CREATE_DIRECTORY)) {
    $file_uri = $path . $index_name . '_synonyms.txt';
    file_save_data($data, $file_uri, FILE_EXISTS_REPLACE);

    return $file_uri;
  }
}

/**
 * Tells if synonyms are active for the selected index.
 *
 * @return true or false
 */
function bellcom_elasticsearch_synonyms_active($index_name) {
  $result = db_select('bellcom_elasticsearch_synonyms_indices', 'n')
    ->fields('n')
    ->condition('index_name', $index_name)
    ->execute()
    ->fetchAssoc();

  if ($result) {
    return $result['active'];
  }

  return false;
}
