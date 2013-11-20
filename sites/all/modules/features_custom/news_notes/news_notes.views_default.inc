<?php
/**
 * @file
 * news_notes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function news_notes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_notes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News & Notes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News & Notes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
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
    'news_notes' => 'news_notes',
  );

  /* Display: All Advisors */
  $handler = $view->new_display('block', 'All Advisors', 'all_advisors');
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
    'news_notes' => 'news_notes',
  );
  /* Filter criterion: Content: Visible to Advisors (field_visible_to_advisor) */
  $handler->display->display_options['filters']['field_visible_to_advisor_value']['id'] = 'field_visible_to_advisor_value';
  $handler->display->display_options['filters']['field_visible_to_advisor_value']['table'] = 'field_data_field_visible_to_advisor';
  $handler->display->display_options['filters']['field_visible_to_advisor_value']['field'] = 'field_visible_to_advisor_value';
  $handler->display->display_options['filters']['field_visible_to_advisor_value']['value'] = array(
    1 => '1',
  );

  /* Display: All Clients */
  $handler = $view->new_display('block', 'All Clients', 'all_clients');
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
    'news_notes' => 'news_notes',
  );
  /* Filter criterion: Content: Visible to Clients (field_visible_to_client) */
  $handler->display->display_options['filters']['field_visible_to_client_value']['id'] = 'field_visible_to_client_value';
  $handler->display->display_options['filters']['field_visible_to_client_value']['table'] = 'field_data_field_visible_to_client';
  $handler->display->display_options['filters']['field_visible_to_client_value']['field'] = 'field_visible_to_client_value';
  $handler->display->display_options['filters']['field_visible_to_client_value']['value'] = array(
    1 => '1',
  );

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Visible to specific users (field_visible_to_specific_users) */
  $handler->display->display_options['arguments']['field_visible_to_specific_users_uid']['id'] = 'field_visible_to_specific_users_uid';
  $handler->display->display_options['arguments']['field_visible_to_specific_users_uid']['table'] = 'field_data_field_visible_to_specific_users';
  $handler->display->display_options['arguments']['field_visible_to_specific_users_uid']['field'] = 'field_visible_to_specific_users_uid';
  $handler->display->display_options['arguments']['field_visible_to_specific_users_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_visible_to_specific_users_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_visible_to_specific_users_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_visible_to_specific_users_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_visible_to_specific_users_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_visible_to_specific_users_uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_visible_to_specific_users_uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_visible_to_specific_users_uid']['validate_options']['type'] = 'either';
  $handler->display->display_options['arguments']['field_visible_to_specific_users_uid']['validate_options']['restrict_roles'] = TRUE;
  $handler->display->display_options['arguments']['field_visible_to_specific_users_uid']['validate_options']['roles'] = array(
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['displays'] = array(
    'all_advisors' => 'all_advisors',
    'all_clients' => 'all_clients',
    'default' => 0,
  );
  $export['news_notes'] = $view;

  return $export;
}
