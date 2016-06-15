<?php
/**
 * @file
 * The file that redirects to the correct search page
 */
function _inline_ajax_search_post() {
  if (module_exists('luceneapi') && module_exists('luceneapi_node') && variable_get('inline_ajax_use_lucene', 0) == 1) {
    $p = 'search/luceneapi_node/' . inline_ajax_search_string_format($_POST['inline_ajax_search']);
  }
  else {
    $p = 'search/node/' . $_POST['inline_ajax_search'];
  }
  drupal_goto($p);
}