<?php
/**
 * @file
 * staff_feature.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function staff_feature_block_class_features_default_class() {
  return array(
    'views:staff-block' => array(
      'module' => 'views',
      'delta' => 'staff-block',
      'css_classes' => 'block-staff-directory',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function staff_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function staff_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function staff_feature_node_info() {
  $items = array(
    'staff' => array(
      'name' => t('Staff'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
