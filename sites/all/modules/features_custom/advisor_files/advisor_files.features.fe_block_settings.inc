<?php
/**
 * @file
 * advisor_files.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function advisor_files_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-advisor_files-files'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'advisor_files-files',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/15',
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
        'weight' => -25,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
