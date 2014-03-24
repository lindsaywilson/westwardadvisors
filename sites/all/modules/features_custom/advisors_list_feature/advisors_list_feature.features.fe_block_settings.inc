<?php
/**
 * @file
 * advisors_list_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function advisors_list_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-advisors-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'advisors-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/494',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'westward' => array(
        'region' => 'content_bottom',
        'status' => 1,
        'theme' => 'westward',
        'weight' => -35,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
