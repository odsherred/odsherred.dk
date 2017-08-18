<?php

/**
 * @file
 * Search API data alteration callback.
 */
class SearchApiAttachmentsMultiIndexFilesAlterSettings extends SearchApiAttachmentsAlterSettings {

  /**
   * {@inheritdoc}
   */
  public function alterItems(array &$items) {
    foreach ($items as &$item) {
      //adding check for multi-type index
      if ($item->node) {
        $node = & $item->node;
      }
      else {
        $node = & $item;
      }

      //if the that is not node or node is malformed
      if (!$node->nid) {
        continue;
      }

      foreach (explode(' ', $this->options['fields_extract']) as $field_name) {
        if (isset($node->{$field_name}) && is_array($node->{$field_name}['und'])) {
          $file = $node->{$field_name}['und'][0];

          if ($this->isFileIndexable($file, $item)) {
            $item->bellcom_elasticsearch_multi_index_files = $this->getFileContent($file);
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
      '#default_value' => isset($this->options['fields_extract']) ? $this->options['fields_extract'] : 'field_os2search_file_ref',
      '#size' => 80,
      '#description' => t('The list of fields, which can contain the file references.'),
    );

    return $parent_form;
  }

  /**
   * {@inheritdoc}
   */
  public function propertyInfo() {
    $ret = array();

    $ret['bellcom_elasticsearch_multi_index_files'] = array(
      'label' => 'Bellcom elasticsearch multi index files',
      'description' => 'Bellcom Elasticsearch multi index files content',
      'type' => 'text',
    );

    return $ret;
  }
}
