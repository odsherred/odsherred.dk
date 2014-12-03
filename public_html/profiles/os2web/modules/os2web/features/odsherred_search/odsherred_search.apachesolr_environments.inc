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
        'last_changed' => '1414763696',
        'last_entity_id' => '895645',
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
    'apachesolr_index_updated' => 1414764629,
    'apachesolr_last_optimize' => 1414681201,
    'apachesolr_read_only' => '0',
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '4:200.0',
    'apachesolr_search_promote_boost' => '0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'arp_case' => '0',
      'arp_document' => '0',
      'andre_sider' => '0',
      'baggrund' => '0',
      'rotating_image' => '0',
      'os2web_borger_dk_article' => '0',
      'borger_dk_permalink' => '0',
      'borgerservices' => '0',
      'bullet_point' => '0',
      'bullet_point_attachment' => '0',
      'files' => '0',
      'esdh_dokument' => '0',
      'esdh_sag' => '0',
      'galleri' => '0',
      'right_column' => '0',
      'contentpage' => '0',
      'institution' => '0',
      'kontaktblok' => '0',
      'knactivity' => '0',
      'local_plan' => '0',
      'media' => '0',
      'meeting' => '0',
      'os2web_meeting_search_status' => '0',
      'news' => '0',
      'ofir_job' => '0',
      'panel' => '0',
      'person' => '0',
      'hoering' => '0',
      'politician' => '0',
      'politikker' => '0',
      'referat' => '0',
      'sektionsside' => '0',
      'selvbetjeningslinks' => '0',
      'speaker_paper' => '0',
      'spotbox' => '0',
      'subsites_og_sites' => '0',
      'tema' => '0',
      'webform' => '0',
      'iframe_selvbetjeningsl_sning_mm' => '0',
    ),
    'field_bias' => array(
      'bs_field_skjul_relaterede_links' => '0',
      'bs_promote' => '0',
      'bs_status' => '0',
      'bs_sticky' => '0',
      'bs_translate' => '0',
      'bundle' => '0',
      'bundle_name' => '0',
      'content' => '1.0',
      'ds_changed' => '0',
      'ds_created' => '0',
      'ds_field_newstypedato' => '0',
      'ds_field_rotate_publish' => '0',
      'ds_field_rotate_publish_end' => '0',
      'ds_field_udloebsdato' => '0',
      'ds_last_comment_or_change' => '0',
      'entity_id' => '0',
      'entity_type' => '0',
      'hash' => '0',
      'id' => '0',
      'im_field_editortags' => '0',
      'im_field_indholdsside_spotboxe' => '0',
      'im_field_newstype' => '0',
      'im_field_noderef_selvbtjn' => '0',
      'im_field_organization' => '0',
      'im_field_politics' => '0',
      'im_field_promoteto' => '0',
      'im_field_site_structure' => '0',
      'im_field_termref_kle' => '0',
      'im_vid_1' => '0',
      'im_vid_11' => '0',
      'im_vid_18' => '0',
      'im_vid_4' => '0',
      'im_vid_5' => '0',
      'im_vid_6' => '0',
      'im_vid_8' => '0',
      'is_tnid' => '0',
      'is_uid' => '0',
      'is_weight' => '0',
      'label' => '5.0',
      'path' => '0',
      'path_alias' => '0',
      'site' => '0',
      'sm_vid_Forfrem_til' => '0',
      'sm_vid_KLE' => '0',
      'sm_vid_Nyhedstype' => '0',
      'sm_vid_Organisation' => '0',
      'sm_vid_Overordnet_placering_og_sitestruktur' => '0',
      'sm_vid_Politik' => '0',
      'sm_vid_Stikord' => '0',
      'sort_label' => '0',
      'sort_language' => '0',
      'sort_name' => '0',
      'sort_name_formatted' => '0',
      'spell' => '0',
      'ss_language' => '0',
      'ss_name' => '0',
      'ss_name_formatted' => '0',
      'tags_a' => '0',
      'tags_h1' => '5.0',
      'tags_h2_h3' => '3.0',
      'tags_h4_h5_h6' => '2.0',
      'tags_inline' => '1.0',
      'taxonomy_names' => '2.0',
      'tid' => '0',
      'timestamp' => '0',
      'tm_vid_11_names' => '0',
      'tm_vid_18_names' => '0',
      'tm_vid_1_names' => '0',
      'tm_vid_4_names' => '0',
      'tm_vid_5_names' => '0',
      'tm_vid_6_names' => '0',
      'tm_vid_8_names' => '0',
      'tos_content_extra' => '0.1',
      'tos_name' => '3.0',
      'tos_name_formatted' => '0',
      'ts_comments' => '0.5',
      'url' => '0',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'contentpage',
      1 => 'iframe_selvbetjeningsl_sning_mm',
      2 => 'news',
      3 => 'os2web_borger_dk_article',
      4 => 'webform',
    ),
  );
  $export['localhost'] = $environment;

  return $export;
}
