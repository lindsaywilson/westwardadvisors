<?php
/**
 * @file
 * client_files.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function client_files_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function client_files_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function client_files_node_info() {
  $items = array(
    'client_file' => array(
      'name' => t('Client File'),
      'base' => 'node_content',
      'description' => t('A file to be assign to a specific Client.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
