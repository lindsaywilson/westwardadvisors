<?php
/**
 * @file
 * client_files.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function client_files_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-client_files-client_files'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'client_files-client_files',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'westward' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'westward',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-clients-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'clients-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'advisor-pathway/dashboard',
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
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
