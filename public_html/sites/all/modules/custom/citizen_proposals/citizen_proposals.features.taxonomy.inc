<?php
/**
 * @file
 * citizen_proposals.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function citizen_proposals_taxonomy_default_vocabularies() {
  return array(
    'borgerdrevne_forslag_afvisningsgrunde' => array(
      'name' => 'Borgerdrevne forslag afvisningsgrunde',
      'machine_name' => 'borgerdrevne_forslag_afvisningsgrunde',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
