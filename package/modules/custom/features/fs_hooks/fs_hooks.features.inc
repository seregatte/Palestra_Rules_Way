<?php
/**
 * @file
 * fs_hooks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fs_hooks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
