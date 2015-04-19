<?php
/**
 * @file
 * os2web_kommuneinfo.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_kommuneinfo_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_kommuneinfolang';
  $strongarm->value = 'l  \\d. d. F Y - H.i';
  $export['date_format_kommuneinfolang'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_odsherredtid';
  $strongarm->value = 'j. F Y - H.i';
  $export['date_format_odsherredtid'] = $strongarm;

  return $export;
}
