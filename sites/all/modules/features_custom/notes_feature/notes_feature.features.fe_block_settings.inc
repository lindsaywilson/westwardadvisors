<?php
/**
 * @file
 * notes_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function notes_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-news_notes-advisors'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_notes-advisors',
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
        'weight' => -26,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-news_notes-clients'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_notes-clients',
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
        'weight' => -25,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
