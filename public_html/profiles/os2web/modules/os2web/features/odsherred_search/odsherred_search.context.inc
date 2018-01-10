<?php
/**
 * @file
 * odsherred_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function odsherred_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'odsherred_search';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search*' => 'search*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-47b76bc015f8f4593045cf225fc6a647' => array(
          'module' => 'views',
          'delta' => '47b76bc015f8f4593045cf225fc6a647',
          'region' => 'content',
          'weight' => '-999',
        ),
        'facetapi-nwgWQnBrOf1Z0mjkL2E0XYs35viV9fN0' => array(
          'module' => 'facetapi',
          'delta' => 'nwgWQnBrOf1Z0mjkL2E0XYs35viV9fN0',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['odsherred_search'] = $context;

  return $export;
}
