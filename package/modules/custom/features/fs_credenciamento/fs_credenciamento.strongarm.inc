<?php
/**
 * @file
 * fs_credenciamento.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fs_credenciamento_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Rules Way - Credenciamento';
  $export['site_name'] = $strongarm;

  return $export;
}
