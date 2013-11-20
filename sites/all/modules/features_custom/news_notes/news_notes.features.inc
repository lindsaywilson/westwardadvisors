<?php
/**
 * @file
 * news_notes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news_notes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function news_notes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function news_notes_node_info() {
  $items = array(
    'news_notes' => array(
      'name' => t('News & Notes'),
      'base' => 'node_content',
      'description' => t('To add notes to the advisor/client dashboards'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
