<?php
/**
 * @file
 * os2web_webform_downloads.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function os2web_webform_downloads_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-webform-body'
  $field_instances['node-webform-body'] = array(
    'bundle' => 'webform',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'related_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Tekst inden formular',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'blokindhold' => 'blokindhold',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'full_html_iframe' => 0,
          'php_code' => 0,
          'plain_text' => 'plain_text',
          'raw' => 0,
          'standard' => 'standard',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'blokindhold' => array(
              'weight' => -7,
            ),
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -9,
            ),
            'full_html_iframe' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'raw' => array(
              'weight' => 0,
            ),
            'standard' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-webform-field_editortags'
  $field_instances['node-webform-field_editortags'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'related_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_editortags',
    'label' => 'Stikord',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-webform-field_organization'
  $field_instances['node-webform-field_organization'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'related_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_organization',
    'label' => 'Organisation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-webform-field_resume_long'
  $field_instances['node-webform-field_resume_long'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'related_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_resume_long',
    'label' => 'Introtekst',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'blokindhold' => 'blokindhold',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'full_html_iframe' => 'full_html_iframe',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'raw' => 'raw',
          'standard' => 'standard',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'blokindhold' => array(
              'weight' => -7,
            ),
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -9,
            ),
            'full_html_iframe' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'raw' => array(
              'weight' => 0,
            ),
            'standard' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-webform-field_os2web_base_field_struct'
  $field_instances['node-webform-field_os2web_base_field_struct'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'related_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_os2web_base_field_struct',
    'label' => 'Portalkategori',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-webform-field_tekst_efter_formular'
  $field_instances['node-webform-field_tekst_efter_formular'] = array(
    'bundle' => 'webform',
    'default_value' => array(
      0 => array(
        'value' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'related_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tekst_efter_formular',
    'label' => 'Tekst efter formular',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'blokindhold' => 0,
          'filtered_html' => 'filtered_html',
          'full_html' => 0,
          'full_html_iframe' => 0,
          'php_code' => 0,
          'plain_text' => 0,
          'raw' => 0,
          'standard' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'blokindhold' => array(
              'weight' => -7,
            ),
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -9,
            ),
            'full_html_iframe' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'raw' => array(
              'weight' => 0,
            ),
            'standard' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-webform-field_termref_kle'
  $field_instances['node-webform-field_termref_kle'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'related_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_termref_kle',
    'label' => 'KLE',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-webform-field_termref_sofd'
  $field_instances['node-webform-field_termref_sofd'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'related_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_termref_sofd',
    'label' => 'Søgeord SOFD',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-webform-field_termref_sted'
  $field_instances['node-webform-field_termref_sted'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'related_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_termref_sted',
    'label' => 'Egenavne / stednavne',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-webform-field_webform_attachment'
  $field_instances['node-webform-field_webform_attachment'] = array(
    'bundle' => 'webform',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'related_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_webform_attachment',
    'label' => 'Webform attachment',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt zip doc docx pdf png jpg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'plupload' => 0,
            'reference' => 'reference',
            'remote' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'copy',
            'path' => 'file_attach',
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Egenavne / stednavne');
  t('Introtekst');
  t('KLE');
  t('Organisation');
  t('Portalkategori');
  t('Stikord');
  t('Søgeord SOFD');
  t('Tekst efter formular');
  t('Tekst inden formular');
  t('Webform attachment');

  return $field_instances;
}
