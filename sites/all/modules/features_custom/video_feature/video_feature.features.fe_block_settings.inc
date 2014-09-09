<?php
/**
 * @file
 * video_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function video_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-videos-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'videos-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/471',
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
        'weight' => -38,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-videos-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'videos-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/828',
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
        'weight' => -37,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-videos-specific_advisor'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'videos-specific_advisor',
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
        'weight' => -14,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-videos-specific_client'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'videos-specific_client',
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
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
