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
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['odsherred_search'] = $context;

  return $export;
}
