<?php

define("DATE_FORMAT", variable_get('date_format_os2web_base_date_only', 'd-m-Y'));


function bellcom_elasticsearch_kle_settings_page(){
  drupal_add_library('system', 'ui.datepicker');
  drupal_add_js(array('bellcom_elasticsearch' => array(
    'dateFormat' => bellcom_elasticsearch_get_js_date_format()
  )), 'setting');
  drupal_add_js(drupal_get_path('module', 'bellcom_elasticsearch') .'/js/bellcom_elasticsearch.js', 'file');

  return views_embed_view("bellcom_elasticsearch_kle_terms");
}

function bellcom_elasticsearch_term_fields($form, $form_state) {

  $form['bellcom_elasticsearch_term_field_names'] = array(
    '#type' => 'textfield',
    '#description' => t('User "," to seperate term reference field machine names'),
    '#default_value' => variable_get('bellcom_elasticsearch_term_field_names', 'field_os2web_borger_dk_kle,field_os2web_base_field_kle_ref'),
    '#size' => 100,
  );

  return system_settings_form($form);
}
function bellcom_elasticsearch_kle_settings_page_weight_form($tid){
  $kle = bellcom_elasticsearch_get_kle_by_tid($tid);

  if ($kle) {
    $weight = $kle->weight;
    if ($kle->from_date){
      $from_date = date_create_from_format('Y-m-d H:i:s', $kle->from_date);
      $from_date = date(DATE_FORMAT, date_timestamp_get($from_date));
    }
    if ($kle->until_date){
      $until_date = date_create_from_format('Y-m-d H:i:s', $kle->until_date);
      $until_date = date(DATE_FORMAT, date_timestamp_get($until_date));
    }
  } else {
    $weight = 1;
    $from_date = '';
    $until_date = '';
  }

  $html = '<div class="row_kle">
  <input type="hidden" class="tid_id" value="' . $tid . '" >
  From&nbsp;&nbsp;&nbsp;
  <input type="text" class="form-text datepicker from locked" size="10" value="' . $from_date . '" disabled>
  Until&nbsp;&nbsp;&nbsp;
  <input type="text" class="form-text datepicker until locked" size="10" value="' . $until_date . '" disabled>
  Weight&nbsp;&nbsp;&nbsp;
  <input type="text" class="weight form-text locked" size="5" value="' . $weight . '" disabled>&nbsp;&nbsp;&nbsp;
  <a class="edit-link" href="#">Edit</a>
  <a class="submit-link" style="display: none;" href="#">Submit</a><span class="submitted" style="display: none;">OK</span>
  </div>';
  print $html;
}

function bellcom_elasticsearch_update_kle($tid, $weight, $from, $until){
  $fields = array('weight' => $weight);

  if ($from && $from != 0){
    $from_date = date_create_from_format(DATE_FORMAT, $from);
    if (is_object($from_date))
    $fields['from_date'] = date("Y-m-d 0:0:0", date_timestamp_get($from_date));
  } else
  $fields['from_date'] = null;

  if ($until && $until != 0){
    $until_date = date_create_from_format(DATE_FORMAT, $until);
    if (is_object($until_date))
    $fields['until_date'] = date("Y-m-d 23:59:59", date_timestamp_get($until_date));
  } else
  $fields['until_date'] = null;

  if (bellcom_elasticsearch_get_kle_by_tid($tid)) { //not found, means that it was neven added
    $rowCount = db_update('bellcom_elasticsearch_kle')
    ->fields($fields)
    ->condition('tid', $tid)
    ->execute();
  } else {
    $fields['tid'] = $tid;
    $rowCount = db_insert('bellcom_elasticsearch_kle')
    ->fields($fields)
    ->execute();
  }
}

function bellcom_elasticsearch_get_kle_by_tid($tid){
  $kle = db_select('bellcom_elasticsearch_kle', 'i')
  ->fields('i')
  ->condition('tid', $tid)
  ->execute()
  ->fetchAll();

  return array_pop($kle);
}

function bellcom_elasticsearch_terms_term_removed($vocabulary_name) {
  $allowed_vocs = array();
  if ($cached = cache_get('bellcom_elasticsearch_terms_allows_vocs')) {
    $allowed_vocs = $cached->data;
  }
  else {
    $term_fields = variable_get('bellcom_elasticsearch_term_field_names');
    $fields = explode(',', $term_fields);

    foreach ($fields as $field) {
      $field_info = field_info_field($field);
      if (isset($field_info['settings']['allowed_values'])) {
        $allowed_vocs[] = $field_info['settings']['allowed_values'][0]['vocabulary'];
      }
    }
    cache_set('bellcom_elasticsearch_terms_allows_vocs', $allowed_vocs, 'cache', CACHE_TEMPORARY);
  }

  if (!in_array($vocabulary_name, $allowed_vocs)) {
    return TRUE;
  }
  return FALSE;
}

function bellcom_elasticsearch_phrase_catcher_settings_page(){
  drupal_add_library('system', 'ui.datepicker');
  drupal_add_js(array('bellcom_elasticsearch' => array(
    'dateFormat' => bellcom_elasticsearch_get_js_date_format()
  )), 'setting');
  drupal_add_js(drupal_get_path('module', 'bellcom_elasticsearch') .'/js/bellcom_elasticsearch.js', 'file');

  $html = '';

  //add form
  $form = drupal_get_form('bellcom_elasticsearch_phrase_catcher_form');
  $html .= drupal_render($form);

  //display table
  $header = array(
    array(
      'data' => t('Phrase'),
      'field' => 't.phrase',
    ),
    array(
      'data' => t('Exclusive'),
      'field' => 't.exclusive',
    ),
    array(
      'data' => t('Nid'),
      'field' => 't.nid',
    ),
    array(
      'data' => t('From'),
      'field' => 't.from_date',
    ),
    array(
      'data' => t('Until'),
      'field' => 't.until_date',
    ),
    array(
      'data' => t('Weight'),
      'field' => 't.weight',
    ),
  );

  $query = db_select('bellcom_elasticsearch_phrase_catcher', 't')->extend('TableSort');
  $query->fields('t');

  $result = $query->orderByHeader($header)->execute();

  $rows = array();
  foreach ($result as $row) {
    $from_date = '';
    $until_date = '';
    if ($row->from_date){
      $from_date = date_create_from_format('Y-m-d H:i:s', $row->from_date);
      $from_date = date(DATE_FORMAT, date_timestamp_get($from_date));
    }
    if ($row->until_date){
      $until_date = date_create_from_format('Y-m-d H:i:s', $row->until_date);
      $until_date = date(DATE_FORMAT, date_timestamp_get($until_date));
    }
    $exclusive = $row->exclusive ? 'checked' : '';

    $data = array();
    $data[] = '<span class="display-field display-phrase">' . $row->phrase . '</span><input type="text" value="' . $row->phrase . '" class="form-text edit-field phrase" style="display: none;">';
    $data[] = '<input type="checkbox" class="display-input exclusive" disabled ' . $exclusive  . '>';
    $data[] = '<span class="display-field display-nid">' . $row->nid . '</span><input type="text" value="' . $row->nid . '" class="form-text edit-field nid" style="display: none;">';
    $data[] = '<span class="display-field display-from">' . $from_date . '</span><input type="text" value="' . $from_date . '" class="form-text edit-field from datepicker" style="display: none;">';
    $data[] = '<span class="display-field display-until">' . $until_date . '</span><input type="text" value="' . $until_date . '" class="form-text edit-field until datepicker" style="display: none;">';
    $data[] = '<span class="display-field display-weight">' . $row->weight . '</span><input type="text" value="' . $row->weight . '" class="form-text edit-field weight" style="display: none;">';
    $data[] .= '<a href="#" class="edit-link">Edit</a><a class="submit-link" style="display: none;" href="#">Submit</a><span class="submitted" style="display: none;">OK</span>';
    $rows[] = array('data' => $data, 'class' => array('row_phrase'), 'data-id' => array($row->id));
  }

  $header[] = array('data' => 'Edit');

  // Build the table for the nice output.
  $build['tablesort_table'] = array(
    '#theme' => 'table',
    '#header' => $header,
    '#rows' => $rows,
  );
  $html .= drupal_render($build);

  return $html;
}

function bellcom_elasticsearch_phrase_catcher_form($form, &$form_state){
  // Provide a text field.
  $form['phrase'] = array(
    '#title' => t('New phrase'),
    '#type' => 'textfield',
    '#required' => TRUE,
  );

  // Provide a submit button.
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Add phrase',
  );

  return $form;
}

function bellcom_elasticsearch_phrase_catcher_form_submit($form, $form_state){
  $rowCount = db_insert('bellcom_elasticsearch_phrase_catcher')
  ->fields(array(
    'phrase' => $form_state['values']['phrase']
  ))
  ->execute();
}

function bellcom_elasticsearch_update_phrase($id){
  $fields = array(
    'phrase' => $_GET['phrase'],
    'exclusive' => ($_GET['exclusive'] === 'true')? 1 : 0,
    'nid' => $_GET['nid'],
    'weight' => $_GET['weight']
  );

  $from = $_GET['from'];
  if ($from && $from != 0){
    $from_date = date_create_from_format(DATE_FORMAT, $from);
    if (is_object($from_date))
    $fields['from_date'] = date("Y-m-d 0:0:0", date_timestamp_get($from_date));
  } else
  $fields['from_date'] = null;

  $until = $_GET['until'];
  if ($until && $until != 0){
    $until_date = date_create_from_format(DATE_FORMAT, $until);
    if (is_object($until_date))
    $fields['until_date'] = date("Y-m-d 23:59:59", date_timestamp_get($until_date));
  } else
  $fields['until_date'] = null;

  db_update('bellcom_elasticsearch_phrase_catcher')
  ->fields($fields)
  ->condition('id', $id)
  ->execute();
}

function bellcom_elasticsearch_get_js_date_format(){
    $SYMBOLS_MATCHING = array(
      // Day
      'd' => 'dd',
      'D' => 'D',
      'j' => 'd',
      'l' => 'DD',
      'N' => '',
      'S' => '',
      'w' => '',
      'z' => 'o',
      // Week
      'W' => '',
      // Month
      'F' => 'MM',
      'm' => 'mm',
      'M' => 'M',
      'n' => 'm',
      't' => '',
      // Year
      'L' => '',
      'o' => '',
      'Y' => 'yy',
      'y' => 'y',
      // Time
      'a' => '',
      'A' => '',
      'B' => '',
      'g' => '',
      'G' => '',
      'h' => '',
      'H' => '',
      'i' => '',
      's' => '',
      'u' => ''
    );
    $jqueryui_format = "";
    $escaping = false;
    $php_format = DATE_FORMAT;
    for($i = 0; $i < strlen($php_format); $i++)
    {
      $char = $php_format[$i];
      if($char === '\\') // PHP date format escaping character
      {
        $i++;
        if($escaping) $jqueryui_format .= $php_format[$i];
        else $jqueryui_format .= '\'' . $php_format[$i];
        $escaping = true;
      }
      else
      {
        if($escaping) { $jqueryui_format .= "'"; $escaping = false; }
        if(isset($SYMBOLS_MATCHING[$char]))
        $jqueryui_format .= $SYMBOLS_MATCHING[$char];
        else
        $jqueryui_format .= $char;
      }
    }
    return $jqueryui_format;
  }
