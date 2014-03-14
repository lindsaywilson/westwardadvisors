<?php
/**
 * @file
 * staff_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function staff_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-staff-block'] = array(
    'cache' => -1,
    'css_class' => 'block-staff-directory',
    'custom' => 0,
    'delta' => 'staff-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/44',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'westward' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'westward',
        'weight' => -25,
      ),
    ),
    'title' => 'Staff Directory',
    'visibility' => 1,
  );

  $export['views-staff-order'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'staff-order',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'contact',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'westward',
        'weight' => -22,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
