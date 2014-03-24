<?php
/**
 * @file
 * advisors_list_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function advisors_list_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'advisors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Advisors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Your Advisors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p><em>Please let us know if there have been any changes or if others should have access to your client files. </em></p>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Field: User: Advisor */
  $handler->display->display_options['fields']['field_advisor']['id'] = 'field_advisor';
  $handler->display->display_options['fields']['field_advisor']['table'] = 'field_data_field_advisor';
  $handler->display->display_options['fields']['field_advisor']['field'] = 'field_advisor';
  $handler->display->display_options['fields']['field_advisor']['label'] = '';
  $handler->display->display_options['fields']['field_advisor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advisor']['type'] = 'user_reference_uid';
  $handler->display->display_options['fields']['field_advisor']['settings'] = array(
    'user_reference_view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_advisor']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_advisor']['multi_type'] = 'ol';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['advisors'] = $view;

  return $export;
}
