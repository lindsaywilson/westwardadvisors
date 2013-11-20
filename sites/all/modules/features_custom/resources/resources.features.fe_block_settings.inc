<?php
/**
 * @file
 * resources.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function resources_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-resources-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'resources-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/19
node/498',
    'roles' => array(
      'administrator' => 3,
      'advisor' => 4,
      'client' => 5,
      'staff' => 6,
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
        'weight' => -31,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-resources-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'resources-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'advisor-pathway/resources',
    'roles' => array(
      'administrator' => 3,
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
        'weight' => -21,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
