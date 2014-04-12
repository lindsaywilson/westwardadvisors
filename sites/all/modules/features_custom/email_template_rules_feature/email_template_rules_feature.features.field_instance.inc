<?php
/**
 * @file
 * email_template_rules_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function email_template_rules_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-client_file-field_email_template'
  $field_instances['node-client_file-field_email_template'] = array(
    'bundle' => 'client_file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email_template',
    'label' => 'Email Template',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Email Template');

  return $field_instances;
}
