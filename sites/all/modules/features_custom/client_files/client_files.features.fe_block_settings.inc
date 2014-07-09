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

  $export['views-client_files-admin'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'client_files-admin',
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
        'weight' => -29,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-ec14599093fbfcc64b2617d3e41cf5e6'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ec14599093fbfcc64b2617d3e41cf5e6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/494',
    'roles' => array(
      'administrator' => 3,
      'client' => 5,
    ),
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
        'weight' => -30,
      ),
    ),
    'title' => 'Your Files',
    'visibility' => 1,
  );

  return $export;
}
