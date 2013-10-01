<?php
/**
 * @file
 * advisor_files.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function advisor_files_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function advisor_files_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function advisor_files_node_info() {
  $items = array(
    'advisor_file' => array(
      'name' => t('Advisor File'),
      'base' => 'node_content',
      'description' => t('A file to be assign to a specific Advisor.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
