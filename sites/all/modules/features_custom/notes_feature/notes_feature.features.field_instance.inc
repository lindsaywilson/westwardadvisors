<?php
/**
 * @file
 * notes_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function notes_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-news_notes-body'
  $field_instances['node-news_notes-body'] = array(
    'bundle' => 'news_notes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-news_notes-field_visible_to_advisors'
  $field_instances['node-news_notes-field_visible_to_advisors'] = array(
    'bundle' => 'news_notes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the advisors who can see this note.',
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
    'field_name' => 'field_visible_to_advisors',
    'label' => 'Visible to Advisors',
    'required' => 0,
    'settings' => array(
      'nodeaccess_userreference' => array(
        'all' => array(
          'view' => 0,
        ),
        'all_published' => 0,
        'author' => array(
          'delete' => 0,
          'update' => 0,
          'view' => 0,
        ),
        'author_published' => 0,
        'create' => array(
          'advisor_file' => 0,
          'case_study' => 0,
          'client_file' => 0,
          'executive' => 0,
          'forum' => 0,
          'home_page' => 0,
          'hot_topic' => 0,
          'job' => 0,
          'news' => 0,
          'news_notes' => 0,
          'page' => 0,
          'resource' => 0,
          'staff' => 0,
          'support_staff' => 0,
          'testimonial' => 0,
          'video' => 0,
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
          'view' => 0,
        ),
        'referenced_published' => 0,
        'unused' => 0,
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

  // Exported field_instance: 'node-news_notes-field_visible_to_clients'
  $field_instances['node-news_notes-field_visible_to_clients'] = array(
    'bundle' => 'news_notes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the clients can see this note',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'user_reference',
        'settings' => array(),
        'type' => 'user_reference_default',
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
    'field_name' => 'field_visible_to_clients',
    'label' => 'Visible to Clients',
    'required' => 0,
    'settings' => array(
      'nodeaccess_userreference' => array(
        'all' => array(
          'view' => 0,
        ),
        'all_published' => 0,
        'author' => array(
          'delete' => 0,
          'update' => 0,
          'view' => 0,
        ),
        'author_published' => 0,
        'create' => array(
          'advisor_file' => 0,
          'case_study' => 0,
          'client_file' => 0,
          'executive' => 0,
          'forum' => 0,
          'home_page' => 0,
          'hot_topic' => 0,
          'job' => 0,
          'news' => 0,
          'news_notes' => 0,
          'page' => 0,
          'resource' => 0,
          'staff' => 0,
          'support_staff' => 0,
          'testimonial' => 0,
          'video' => 0,
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
          'view' => 0,
        ),
        'referenced_published' => 0,
        'unused' => 0,
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
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Choose the advisors who can see this note.');
  t('Choose the clients can see this note');
  t('Visible to Advisors');
  t('Visible to Clients');

  return $field_instances;
}
