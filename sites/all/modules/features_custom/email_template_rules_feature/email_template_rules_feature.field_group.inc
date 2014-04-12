<?php
/**
 * @file
 * email_template_rules_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function email_template_rules_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_email_templates|node|client_file|form';
  $field_group->group_name = 'group_email_templates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'client_file';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Email Templates',
    'weight' => '10',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_email_templates|node|client_file|form'] = $field_group;

  return $export;
}
