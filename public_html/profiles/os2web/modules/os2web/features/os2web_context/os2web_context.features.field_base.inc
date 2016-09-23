<?php
/**
 * @file
 * os2web_context.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function os2web_context_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_agenda'
  $field_bases['field_agenda'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_agenda',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_area'
  $field_bases['field_area'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_area',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'bydel',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'content_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_billede'
  $field_bases['field_billede'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_billede',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_file'
  $field_bases['field_file'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 1,
      'display_field' => 1,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_meeting_date'
  $field_bases['field_meeting_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_meeting_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'enddate' => 0,
      'enddate_required' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'repeat' => 0,
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_meetingtype1'
  $field_bases['field_meetingtype1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_meetingtype1',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'r_d_og_n_vn',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'content_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_meetingtype2'
  $field_bases['field_meetingtype2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_meetingtype2',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'grupper_og_udvalg',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'content_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_os2web_base_field_hidlinks'
  $field_bases['field_os2web_base_field_hidlinks'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_base_field_hidlinks',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 0,
        1 => 1,
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_os2web_base_field_media'
  $field_bases['field_os2web_base_field_media'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_base_field_media',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_os2web_base_field_selfserv'
  $field_bases['field_os2web_base_field_selfserv'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_base_field_selfserv',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'andre_sider' => 0,
        'arp_case' => 0,
        'arp_document' => 0,
        'baggrund' => 0,
        'borger_dk_article' => 0,
        'borger_dk_permalink' => 0,
        'borgerservices' => 0,
        'bullet_point' => 0,
        'bullet_point_attachment' => 0,
        'contentpage' => 0,
        'esdh_dokument' => 0,
        'esdh_sag' => 0,
        'files' => 0,
        'galleri' => 0,
        'hoering' => 0,
        'iframe_selvbetjeningsl_sning_mm' => 0,
        'institution' => 0,
        'knactivity' => 0,
        'kontaktblok' => 0,
        'local_plan' => 0,
        'media' => 0,
        'meeting' => 0,
        'news' => 0,
        'ofir_job' => 0,
        'os2web_meeting_search_status' => 0,
        'panel' => 0,
        'person' => 0,
        'politician' => 0,
        'referat' => 0,
        'right_column' => 0,
        'rotating_image' => 0,
        'sektionsside' => 0,
        'selvbetjeningslinks' => 'selvbetjeningslinks',
        'speaker_paper' => 0,
        'spotbox' => 0,
        'subsites_og_sites' => 0,
        'tema' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => 'references_1',
        'view_name' => 'selvbetjening',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_os2web_base_field_sourceid'
  $field_bases['field_os2web_base_field_sourceid'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_base_field_sourceid',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_os2web_base_field_spotbox'
  $field_bases['field_os2web_base_field_spotbox'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_base_field_spotbox',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'andre_sider' => 0,
        'arp_case' => 0,
        'arp_document' => 0,
        'baggrund' => 0,
        'borger_dk_permalink' => 0,
        'borgerservices' => 0,
        'bullet_point' => 0,
        'bullet_point_attachment' => 0,
        'contentpage' => 0,
        'esdh_dokument' => 0,
        'esdh_sag' => 0,
        'files' => 0,
        'galleri' => 0,
        'hoering' => 0,
        'iframe_selvbetjeningsl_sning_mm' => 0,
        'institution' => 0,
        'knactivity' => 0,
        'kontaktblok' => 0,
        'local_plan' => 0,
        'media' => 0,
        'meeting' => 0,
        'news' => 0,
        'ofir_job' => 0,
        'os2web_borger_dk_article' => 0,
        'os2web_meeting_search_status' => 0,
        'panel' => 0,
        'person' => 0,
        'politician' => 0,
        'referat' => 0,
        'right_column' => 0,
        'rotating_image' => 0,
        'sektionsside' => 0,
        'selvbetjeningslinks' => 0,
        'speaker_paper' => 0,
        'spotbox' => 'spotbox',
        'subsites_og_sites' => 0,
        'tema' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => 'references_1',
        'view_name' => 'spotbox_referenceliste',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_os2web_borger_dk_borgerurl'
  $field_bases['field_os2web_borger_dk_borgerurl'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_borger_dk_borgerurl',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_os2web_borger_dk_byline'
  $field_bases['field_os2web_borger_dk_byline'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_borger_dk_byline',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_os2web_borger_dk_formterm'
  $field_bases['field_os2web_borger_dk_formterm'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_borger_dk_formterm',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'os2web_borger_dk_form_menu',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'content_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_os2web_borger_dk_header'
  $field_bases['field_os2web_borger_dk_header'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_borger_dk_header',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_os2web_borger_dk_image'
  $field_bases['field_os2web_borger_dk_image'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_borger_dk_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_os2web_borger_dk_legislati'
  $field_bases['field_os2web_borger_dk_legislati'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_borger_dk_legislati',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_os2web_borger_dk_pagetitle'
  $field_bases['field_os2web_borger_dk_pagetitle'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_borger_dk_pagetitle',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_os2web_borger_dk_post_text'
  $field_bases['field_os2web_borger_dk_post_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_borger_dk_post_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_os2web_borger_dk_pre_text'
  $field_bases['field_os2web_borger_dk_pre_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_borger_dk_pre_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_os2web_borger_dk_recommend'
  $field_bases['field_os2web_borger_dk_recommend'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_borger_dk_recommend',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_os2web_borger_dk_selfservi'
  $field_bases['field_os2web_borger_dk_selfservi'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_borger_dk_selfservi',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_os2web_borger_dk_shortlist'
  $field_bases['field_os2web_borger_dk_shortlist'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_os2web_borger_dk_shortlist',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_plan_id'
  $field_bases['field_plan_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_plan_id',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_related_person'
  $field_bases['field_related_person'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_person',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'activity' => 0,
        'borger_dk_permalink' => 0,
        'contentpage' => 0,
        'files' => 0,
        'forum' => 0,
        'iframe_selvbetjeningsl_sning_mm' => 0,
        'institution' => 0,
        'local_plan' => 0,
        'media' => 0,
        'news' => 0,
        'person' => 'person',
        'politician' => 0,
        'referat' => 0,
        'right_column' => 0,
        'tema' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  return $field_bases;
}
