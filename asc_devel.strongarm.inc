<?php
/**
 * @file
 * asc_devel.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function asc_devel_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'performance_detail';
  $strongarm->value = '1';
  $export['performance_detail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'performance_query';
  $strongarm->value = '1';
  $export['performance_query'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'performance_summary_apc';
  $strongarm->value = 0;
  $export['performance_summary_apc'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'performance_summary_db';
  $strongarm->value = '1';
  $export['performance_summary_db'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'performance_summary_memcache';
  $strongarm->value = 0;
  $export['performance_summary_memcache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'performance_summary_zend';
  $strongarm->value = 0;
  $export['performance_summary_zend'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'performance_threshold_accesses';
  $strongarm->value = '0';
  $export['performance_threshold_accesses'] = $strongarm;

  return $export;
}
