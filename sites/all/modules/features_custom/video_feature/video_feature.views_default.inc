<?php
/**
 * @file
 * video_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function video_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: URL to video */
  $handler->display->display_options['fields']['field_url_to_video']['id'] = 'field_url_to_video';
  $handler->display->display_options['fields']['field_url_to_video']['table'] = 'field_data_field_url_to_video';
  $handler->display->display_options['fields']['field_url_to_video']['field'] = 'field_url_to_video';
  $handler->display->display_options['fields']['field_url_to_video']['label'] = '';
  $handler->display->display_options['fields']['field_url_to_video']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_url_to_video']['element_type'] = '0';
  $handler->display->display_options['fields']['field_url_to_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_to_video']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_url_to_video']['element_default_classes'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_video']['separator'] = ',';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Video';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: Advisors */
  $handler = $view->new_display('block', 'Advisors', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Content: Visible to Advisor (field_visible_to_advisor) */
  $handler->display->display_options['filters']['field_visible_to_advisor_value']['id'] = 'field_visible_to_advisor_value';
  $handler->display->display_options['filters']['field_visible_to_advisor_value']['table'] = 'field_data_field_visible_to_advisor';
  $handler->display->display_options['filters']['field_visible_to_advisor_value']['field'] = 'field_visible_to_advisor_value';
  $handler->display->display_options['filters']['field_visible_to_advisor_value']['value'] = array(
    1 => '1',
  );

  /* Display: Client */
  $handler = $view->new_display('block', 'Client', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Content: Visible to Client (field_visible_to_client) */
  $handler->display->display_options['filters']['field_visible_to_client_value']['id'] = 'field_visible_to_client_value';
  $handler->display->display_options['filters']['field_visible_to_client_value']['table'] = 'field_data_field_visible_to_client';
  $handler->display->display_options['filters']['field_visible_to_client_value']['field'] = 'field_visible_to_client_value';
  $handler->display->display_options['filters']['field_visible_to_client_value']['value'] = array(
    1 => '1',
  );

  /* Display: Specific - Client */
  $handler = $view->new_display('block', 'Specific - Client', 'specific_client');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Videos';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Visible to Clients (field_visible_to_clients) */
  $handler->display->display_options['arguments']['field_visible_to_clients_uid']['id'] = 'field_visible_to_clients_uid';
  $handler->display->display_options['arguments']['field_visible_to_clients_uid']['table'] = 'field_data_field_visible_to_clients';
  $handler->display->display_options['arguments']['field_visible_to_clients_uid']['field'] = 'field_visible_to_clients_uid';
  $handler->display->display_options['arguments']['field_visible_to_clients_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_visible_to_clients_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_visible_to_clients_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_visible_to_clients_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_visible_to_clients_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_visible_to_clients_uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_visible_to_clients_uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_visible_to_clients_uid']['validate_options']['restrict_roles'] = TRUE;
  $handler->display->display_options['arguments']['field_visible_to_clients_uid']['validate_options']['roles'] = array(
    5 => '5',
  );

  /* Display: Specific - Advisor */
  $handler = $view->new_display('block', 'Specific - Advisor', 'specific_advisor');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Videos';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: Advisor (field_advisor) */
  $handler->display->display_options['arguments']['field_advisor_uid']['id'] = 'field_advisor_uid';
  $handler->display->display_options['arguments']['field_advisor_uid']['table'] = 'field_data_field_advisor';
  $handler->display->display_options['arguments']['field_advisor_uid']['field'] = 'field_advisor_uid';
  $handler->display->display_options['arguments']['field_advisor_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_advisor_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_advisor_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_advisor_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_advisor_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_advisor_uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_advisor_uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_advisor_uid']['validate_options']['type'] = 'either';
  $handler->display->display_options['arguments']['field_advisor_uid']['validate_options']['restrict_roles'] = TRUE;
  $handler->display->display_options['arguments']['field_advisor_uid']['validate_options']['roles'] = array(
    4 => '4',
  );
  $export['videos'] = $view;

  return $export;
}
