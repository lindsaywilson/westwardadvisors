<?php
/**
 * @file
 * client_files.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function client_files_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'client_files';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Client Files';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_stage',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = '[field_stage-value]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no files assigned to this client';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'm_d_y';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Stage */
  $handler->display->display_options['fields']['field_stage']['id'] = 'field_stage';
  $handler->display->display_options['fields']['field_stage']['table'] = 'field_data_field_stage';
  $handler->display->display_options['fields']['field_stage']['field'] = 'field_stage';
  $handler->display->display_options['fields']['field_stage']['label'] = '';
  $handler->display->display_options['fields']['field_stage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_stage']['alter']['text'] = '<div class="[field_stage-value]">[field_stage]</div>';
  $handler->display->display_options['fields']['field_stage']['element_label_colon'] = FALSE;
  /* Field: Content: Progress */
  $handler->display->display_options['fields']['field_progress']['id'] = 'field_progress';
  $handler->display->display_options['fields']['field_progress']['table'] = 'field_data_field_progress';
  $handler->display->display_options['fields']['field_progress']['field'] = 'field_progress';
  $handler->display->display_options['fields']['field_progress']['label'] = '';
  $handler->display->display_options['fields']['field_progress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_progress']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_file']['id'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['label'] = '';
  $handler->display->display_options['fields']['field_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file']['alter']['text'] = 'Added: [created] - <a class="client_file" href="[field_file]" >[title]</a>
<span>[field_file-description]</span>
<strong>[field_progress]</strong>';
  $handler->display->display_options['fields']['field_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file']['type'] = 'file_url_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit File';
  /* Sort criterion: Content: Stage (field_stage) */
  $handler->display->display_options['sorts']['field_stage_value']['id'] = 'field_stage_value';
  $handler->display->display_options['sorts']['field_stage_value']['table'] = 'field_data_field_stage';
  $handler->display->display_options['sorts']['field_stage_value']['field'] = 'field_stage_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Client (field_client) */
  $handler->display->display_options['arguments']['field_client_uid']['id'] = 'field_client_uid';
  $handler->display->display_options['arguments']['field_client_uid']['table'] = 'field_data_field_client';
  $handler->display->display_options['arguments']['field_client_uid']['field'] = 'field_client_uid';
  $handler->display->display_options['arguments']['field_client_uid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_client_uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_client_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_client_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_client_uid']['summary_options']['items_per_page'] = '25';
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
    'client_file' => 'client_file',
  );

  /* Display: Client Files */
  $handler = $view->new_display('block', 'Client Files', 'client_files');

  /* Display: Admin */
  $handler = $view->new_display('page', 'Admin', 'admin');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Client Files';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_client',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = '[field_stage-value]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Client */
  $handler->display->display_options['fields']['field_client']['id'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['table'] = 'field_data_field_client';
  $handler->display->display_options['fields']['field_client']['field'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['label'] = '';
  $handler->display->display_options['fields']['field_client']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_client']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'm_d_y';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Stage */
  $handler->display->display_options['fields']['field_stage']['id'] = 'field_stage';
  $handler->display->display_options['fields']['field_stage']['table'] = 'field_data_field_stage';
  $handler->display->display_options['fields']['field_stage']['field'] = 'field_stage';
  $handler->display->display_options['fields']['field_stage']['label'] = '';
  $handler->display->display_options['fields']['field_stage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_stage']['alter']['text'] = '<div class="[field_stage-value]">[field_stage]</div>';
  $handler->display->display_options['fields']['field_stage']['element_label_colon'] = FALSE;
  /* Field: Content: Progress */
  $handler->display->display_options['fields']['field_progress']['id'] = 'field_progress';
  $handler->display->display_options['fields']['field_progress']['table'] = 'field_data_field_progress';
  $handler->display->display_options['fields']['field_progress']['field'] = 'field_progress';
  $handler->display->display_options['fields']['field_progress']['label'] = '';
  $handler->display->display_options['fields']['field_progress']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_progress']['element_label_colon'] = FALSE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_file']['id'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['label'] = '';
  $handler->display->display_options['fields']['field_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file']['alter']['text'] = 'Added: [created] - <a class="client_file" href="[field_file]">[title]</a>
<span>[field_file-description]</span>
<strong>[field_progress]</strong>';
  $handler->display->display_options['fields']['field_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file']['type'] = 'file_url_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit File';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'client-files';
  $export['client_files'] = $view;

  $view = new view();
  $view->name = 'clients';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Clients';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Clients';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You currently have no clients assigned to you.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '<h2 class="user-toggle"><a href="#">[field_last_name], [field_first_name]</a></h2>';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['element_type'] = '0';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Client Files */
  $handler->display->display_options['fields']['field_client_files']['id'] = 'field_client_files';
  $handler->display->display_options['fields']['field_client_files']['table'] = 'field_data_field_client_files';
  $handler->display->display_options['fields']['field_client_files']['field'] = 'field_client_files';
  $handler->display->display_options['fields']['field_client_files']['label'] = '';
  $handler->display->display_options['fields']['field_client_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_client_files']['click_sort_column'] = 'vname';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Client';
  /* Sort criterion: User: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Contextual filter: User: Advisor (field_advisor) */
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
  $handler->display->display_options['arguments']['field_advisor_uid']['validate_options']['restrict_roles'] = TRUE;
  $handler->display->display_options['arguments']['field_advisor_uid']['validate_options']['roles'] = array(
    4 => '4',
  );
  $handler->display->display_options['arguments']['field_advisor_uid']['validate']['fail'] = 'empty';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['clients'] = $view;

  return $export;
}
