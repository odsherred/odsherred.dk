<?php
/**
 * @file
 * os2web_selvbetjeningslinks.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function os2web_selvbetjeningslinks_taxonomy_default_vocabularies() {
  return array(
    'os2web_selfservice_structure' => array(
      'name' => 'OS2web selfservice structure',
      'machine_name' => 'os2web_selfservice_structure',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
