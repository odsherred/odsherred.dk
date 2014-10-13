<?php
/**
 * @file
 * os2web_kommuneinfo.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function os2web_kommuneinfo_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'kommuneinformationer';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'kommuneinformation' => 'kommuneinformation',
        'kommuneinformation:page' => 'kommuneinformation:page',
        'kommuneinformation:page_1' => 'kommuneinformation:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-kommuneinformationer' => array(
          'module' => 'menu',
          'delta' => 'menu-kommuneinformationer',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'breadcrumb' => 'nyheder',
  );
  $context->condition_mode = 0;
  $export['kommuneinformationer'] = $context;

  return $export;
}
