<?php
/**
 * @file
 * The file that holds the function that does the search
 */
function _inline_ajax_search($str) {
  $uselucene = module_exists('luceneapi') && module_exists('luceneapi_node') && variable_get('inline_ajax_use_lucene', 0) == 1 ? TRUE : FALSE;
  $lucene_searcher = variable_get('inline_ajax_lucene_searcher', '');
  $str = inline_ajax_search_string_format($str);
  $snippet = variable_get('inline_ajax_search_snippet', 0);
  $types = array();
  $nr = variable_get('inline_ajax_search_count', 10);
  if (count($types) > 0) {
    $str .= ' type:';
    foreach ($types as $type) {
      if (!empty($type)) {
        $str .= $type . ',';
      }
    }
  }
  if ($uselucene && $lucene_searcher != '') {
    $searcher = new LuceneapiSearcher($lucene_searcher);

    $query = $searcher->newQuery()
      ->addFilter('keys', $str, $searcher)
      ->setLimit($nr);

    // Iterates over results, builds item.
    $results = array();
    foreach ($searcher->search($query) as $hit) {
      $results[] = $searcher->buildResult($hit);
    }
  }
  else {
    $results = inline_ajax_search_search_execute($str);
  }
  $count = count($results);
  if ($count > 0) {
    $n = 0;
    foreach ($results as $result) {
      if ($n < $nr) {
        switch ($snippet) {
          case 0: // show only title
            $ret .= '<div class="searchresult"><h3>' . l($result['title'], $result['link']) . '</h3>';
            break;
          case 1: // show title and snippet
            $ret .= '<div class="searchresult"><h3>' . l($result['title'], $result['link']) . '</h3>';
            $ret .= '<span>' . $result['snippet'] . '</span>';
            break;
          case 2: // show teaser
            // intval() beacause of result from Lucene.
            $nid = intval($result['node']->nid);
            $node = node_view(node_load(array('nid' => $nid)), "teaser");
            $ret .= '<div class="searchresult">' . render($node);
            break;
      }
        $ret .= '</div>';
        $n++;
      }
    }
    if ($count > $nr && variable_get('inline_ajax_show_more', 0) == 1) {
      if ($uselucene) {
        $p = 'search/luceneapi_node/' . $str;
      }
      else {
        $p = 'search/node/' . $str;
      }
      $ret .= '<div class="moreresults">' . l(t('Found') . ' ' . $count . ' ' . t('results. ') . t('Show more >>'), $p) . '</div>';
    }
  }
  else {
    $ret = '<div class="searchresult noresults">' . t('No results were found. Try with a different term.') . '</div>';
  }

  return drupal_json_output(array('answer' => $ret));
}