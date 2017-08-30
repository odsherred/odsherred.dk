<?php

/**
 * @file
 * Search API data alteration callback.
 */

class SearchApiAttachmentsInlineFilesAlterSettings extends SearchApiAttachmentsAlterSettings {

  /**
   * {@inheritdoc}
   */
  public function alterItems(array &$items) {
    foreach ($items as &$item) {
      //adding check for multi-type index
      if ($item->node) {
        $node = &$item->node;
      } else {
        $node = &$item;
      }

      //if the that is not node or node is malformed
      if (!$node->nid) {
        continue;
      }

      $files = $this->fetch_inline_files($node);

      foreach ($files as $file) {
        if ($this->isFileIndexable($file, $item)) {
          if (isset($item->bellcom_elasticsearch_inline_files)) {
            $item->bellcom_elasticsearch_inline_files .= ' ' . $this->getFileContent($file);
          }
          else {
            $item->bellcom_elasticsearch_inline_files = $this->getFileContent($file);
          }
        }
      }
    }
  }

  /**
   * {@inheritdoc}
   */
  public function configurationForm() {
    $parent_form = parent::configurationForm();
    unset($parent_form['number_indexed']);
    unset($parent_form['max_file_size']);
    unset($parent_form['excluded_private']);

    $parent_form['fields_extract'] = array(
      '#type' => 'textfield',
      '#title' => t('List of fields to extract the file reference from'),
      '#default_value' => isset($this->options['fields_extract']) ? $this->options['fields_extract'] : 'body[value]',
      '#size' => 80,
      '#description' => t('The list of fields, which can contain the inline file references.'),
    );

    return $parent_form;
  }

  /**
   * {@inheritdoc}
   */
  public function propertyInfo() {
    $ret = array();

    $ret['bellcom_elasticsearch_inline_files'] = array(
      'label' => 'Bellcom elasticsearch inline files',
      'description' => 'Bellcom Elasticsearch inline files content',
      'type' => 'text',
    );

    return $ret;
  }

  /**
   * Aggregator function, scans through the node fields and delegated the extractions of the file mentionings.
   *
   * @param $node
   * @return array of files
   */
  private function fetch_inline_files($node) {
    $files = array();

    foreach (explode(' ', $this->options['fields_extract']) as $field_meta) {
      preg_match_all('/(\S*)\[(\S*)\]/', $field_meta, $matches, PREG_SET_ORDER);

      foreach($matches as $match) {
        $field_name = $match[1];
        $field_value = $match[2];

        $field_data = field_get_items('node', $node, $field_name);

        if (is_array($field_data)) {
          foreach($field_data as $field) {
            $files = array_merge($files, $this->fetch_inline_files_regex_href($field[$field_value]));
            $files = array_merge($files, $this->fetch_inline_files_regex_media_fid($field[$field_value]));
          }
        }
      }
    }

    return $files;
  }

  /**
   * Extracts the file mentioning based on http:// reference
   *
   * @param $text
   * @return array of files
   */
  private function fetch_inline_files_regex_href($text) {
    $files = array();

    //<a href="/sites/all/files/filename.txt">filename.txt</a>
    preg_match_all('/href=[\'"]([^\>\'"]*)[\'"]/', $text, $matches, PREG_SET_ORDER);

    foreach ($matches as $match) {
      // Determine if the file is local. Absolute URL could be local.
      // Beginning double slashes is implicit for the current page's protocol, but just apply http.
      if (substr($match[1], 0, 2) == '//') {
        $url = 'http:' . $match[1];
      }
      elseif (substr($match[1], 0, 1) == '/') {
        $url = $GLOBALS['base_root'] . $match[1];
      }
      else {
        $url = $match[1];
      }

      $parse = parse_url($url);

      // Get absolute URL to the file location.
      $path_files = file_create_url('public://');

      if (isset($parse['host']) and $parse['host'] == $_SERVER['HTTP_HOST']) {
        $uri = 'public://' . str_replace($path_files, '', $url);

        // Convert back things (such as %20 back to a space).
        $uri = urldecode($uri);

        if (file_exists($uri)) {
          $file = db_select('file_managed', 'f')
            ->fields('f')
            ->condition('uri', $uri)
            ->execute()
            ->fetchAssoc();

          if ($file) {
            $files[] = $file;
          }
        }
      }
    }

    return $files;
  }

  /**
   * Extracts the file mentioning based on media (fid) reference
   *
   * @param $text
   * @return array of files
   */
  private function fetch_inline_files_regex_media_fid($text) {
    $files = array();

    //[[{"fid":"1","view_mode":"default","type":"media","link_text":"pjecen","attributes":{"class":"file media-element file-default"}}]]
    preg_match_all('/\[\[\{"fid":"([\d]+)".*\}\]\]/', $text, $matches, PREG_SET_ORDER);

    foreach ($matches as $match) {
      $file = db_select('file_managed', 'f')
        ->fields('f')
        ->condition('fid', $match[1])
        ->execute()
        ->fetchAssoc();

      if ($file) {
        $files[] = $file;
      }
    }

    return $files;
  }
}
