<?php
/**
 * @file
 * nyheder.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nyheder_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bilag|node|news|form';
  $field_group->group_name = 'group_bilag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news_tabs';
  $field_group->data = array(
    'label' => 'Bilag / Filer',
    'weight' => '9',
    'children' => array(
      0 => 'field_mediafile',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_bilag|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_billeder|node|news|form';
  $field_group->group_name = 'group_billeder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news_tabs';
  $field_group->data = array(
    'label' => 'Billeder',
    'weight' => '7',
    'children' => array(
      0 => 'field_lead_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-billeder field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_billeder|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dato|node|news|form';
  $field_group->group_name = 'group_dato';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news_tabs';
  $field_group->data = array(
    'label' => 'Dato',
    'weight' => '8',
    'children' => array(
      0 => 'field_newstypedato',
      1 => 'field_udloebsdato',
      2 => 'scheduler_settings',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Dato',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-dato field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_dato|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emneord|node|news|form';
  $field_group->group_name = 'group_emneord';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news_tabs';
  $field_group->data = array(
    'label' => 'Emneord',
    'weight' => '10',
    'children' => array(
      0 => 'field_termref_kle',
      1 => 'field_organization',
      2 => 'field_editortags',
      3 => 'field_termref_sted',
      4 => 'field_politics',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_emneord|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indstillinger|node|news|form';
  $field_group->group_name = 'group_indstillinger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news_tabs';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '11',
    'children' => array(
      0 => 'field_promoteto',
      1 => 'field_side_baggrungsbillede',
      2 => 'field_skjul_relaterede_links',
      3 => 'path',
      4 => 'redirect',
      5 => 'group_hidden',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_indstillinger|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_tabs|node|news|form';
  $field_group->group_name = 'group_news_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Nyhed',
    'weight' => '2',
    'children' => array(
      0 => 'group_tekst',
      1 => 'group_bilag',
      2 => 'group_billeder',
      3 => 'group_dato',
      4 => 'group_emneord',
      5 => 'group_indstillinger',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Nyhed',
      'instance_settings' => array(
        'classes' => ' group-news-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_news_tabs|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tekst|node|news|form';
  $field_group->group_name = 'group_tekst';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_news_tabs';
  $field_group->data = array(
    'label' => 'Tekst',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_resume_long',
      2 => 'field_site_structure',
      3 => 'field_newstype',
      4 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_tekst|node|news|form'] = $field_group;

  return $export;
}
