<?php
/**
 * @file
 * advisor_files.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function advisor_files_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-advisor_file-field_adv'
  $field_instances['node-advisor_file-field_adv'] = array(
    'bundle' => 'advisor_file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'user_reference',
        'settings' => array(),
        'type' => 'user_reference_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_adv',
    'label' => 'Advisor',
    'required' => 1,
    'settings' => array(
      'nodeaccess_userreference' => array(
        'all' => array(
          'view' => 0,
        ),
        'all_published' => 0,
        'author' => array(
          'delete' => 'delete',
          'update' => 'update',
          'view' => 'view',
        ),
        'author_published' => 0,
        'create' => array(
          'advisor_file' => 0,
          'case_study' => 0,
          'executive' => 0,
          'forum' => 0,
          'home_page' => 0,
          'job' => 0,
          'news' => 0,
          'page' => 0,
          'resource' => 0,
          'staff' => 0,
          'support_staff' => 0,
          'testimonial' => 0,
          'viewpoint' => 0,
          'webform' => 0,
        ),
        'priority' => 0,
        'referenced' => array(
          'delete' => 0,
          'deny_delete' => 0,
          'deny_update' => 0,
          'deny_view' => 0,
          'update' => 0,
          'view' => 'view',
        ),
        'referenced_published' => 0,
        'unused' => 1,
        'views' => array(
          'view' => '',
          'view_args' => '',
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-advisor_file-field_file'
  $field_instances['node-advisor_file-field_file'] = array(
    'bundle' => 'advisor_file',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_file',
    'label' => 'File',
    'required' => 1,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'advisor-files',
      'file_extensions' => 'pdf doc docx ppt xls xlsx pptx pub jpg jpeg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Advisor');
  t('File');

  return $field_instances;
}
