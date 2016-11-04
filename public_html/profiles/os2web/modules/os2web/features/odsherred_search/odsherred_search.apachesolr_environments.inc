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
        'last_changed' => '1478180158',
        'last_entity_id' => '897059',
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
    'apachesolr_index_updated' => 1478239201,
    'apachesolr_last_optimize' => 1478152801,
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '0:0',
    'apachesolr_search_promote_boost' => '0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'arp_case' => '0',
      'arp_document' => '0',
      'os2web_frontend_background_img' => '0',
      'os2web_borger_dk_article' => '21.0',
      'borger_dk_permalink' => '0',
      'os2web_citizenservices_service' => '0',
      'os2web_meetings_bullet' => '0',
      'os2web_meetings_bullet_attach' => '0',
      'files' => '0',
      'esdh_dokument' => '0',
      'esdh_sag' => '0',
      'os2web_base_gallery' => '0',
      'right_column' => '0',
      'os2web_base_contentpage' => '13.0',
      'institution' => '0',
      'os2web_kulturnaut_knactivity' => '0',
      'local_plan' => '0',
      'media' => '0',
      'meeting' => '0',
      'os2web_meeting_search_status' => '0',
      'os2web_base_news' => '0',
      'os2web_ofir_job' => '0',
      'panel' => '0',
      'person' => '0',
      'hoering' => '0',
      'politician' => '0',
      'referat' => '0',
      'os2web_sections_page' => '0',
      'os2web_base_selfservice_link' => '0',
      'speaker_paper' => '0',
      'os2web_spotbox_box' => '0',
      'subsites_og_sites' => '0',
      'tema' => '0',
      'webform' => '13.0',
      'os2web_base_iframe' => '8.0',
    ),
    'field_bias' => array(
      'bs_field_os2web_base_field_hidli' => '0',
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
      'ds_field_os2web_base_field_rotat' => '0',
      'ds_field_os2web_base_field_rotat_end' => '0',
      'ds_field_udloebsdato' => '0',
      'ds_last_comment_or_change' => '0',
      'entity_id' => '0',
      'entity_type' => '0',
      'hash' => '0',
      'id' => '0',
      'im_field_newstype' => '0',
      'im_field_os2web_base_field_edi_t' => '0',
      'im_field_os2web_base_field_kle_r' => '0',
      'im_field_os2web_base_field_organ' => '0',
      'im_field_os2web_base_field_promo' => '0',
      'im_field_os2web_base_field_selfs' => '0',
      'im_field_os2web_base_field_spotb' => '0',
      'im_field_os2web_base_field_struc' => '0',
      'im_vid_1' => '0',
      'im_vid_11' => '0',
      'im_vid_18' => '0',
      'im_vid_4' => '0',
      'im_vid_5' => '0',
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
      'sm_vid_Stikord' => '0',
      'sort_label' => '0',
      'sort_language' => '0',
      'sort_name' => '0',
      'sort_name_formatted' => '0',
      'spell' => '0',
      'ss_language' => '0',
      'ss_name' => '0',
      'ss_name_formatted' => '0',
      'tags_a' => '1.0',
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
      0 => 'os2web_base_contentpage',
      1 => 'os2web_base_news',
      2 => 'os2web_borger_dk_article',
      3 => 'webform',
    ),
  );
  $export['localhost'] = $environment;

  return $export;
}
