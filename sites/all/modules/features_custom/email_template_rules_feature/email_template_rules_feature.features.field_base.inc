<?php
/**
 * @file
 * email_template_rules_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function email_template_rules_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_email_template'
  $field_bases['field_email_template'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email_template',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'Confirmation of Client Amendment Agreement',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
