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

  /* Display: Client Files -  Advisor */
  $handler = $view->new_display('block', 'Client Files -  Advisor', 'client_files');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_stage',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'created_1',
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = '0';
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
  $handler->display->display_options['fields']['field_file_1']['id'] = 'field_file_1';
  $handler->display->display_options['fields']['field_file_1']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file_1']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file_1']['label'] = '';
  $handler->display->display_options['fields']['field_file_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file_1']['alter']['text'] = '<span class="save"><a href="[field_file_1]" class="client_file">Save File</a></span>';
  $handler->display->display_options['fields']['field_file_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file_1']['type'] = 'file_force_file_url_plain';
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_file']['id'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['label'] = '';
  $handler->display->display_options['fields']['field_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file']['alter']['text'] = 'Added: [created] - <a class="client_file" target="_blank" href="[field_file]" >[title]</a>
<span class="dash">[field_file-description]</span>
<strong>[field_progress]</strong>
[field_file_1]';
  $handler->display->display_options['fields']['field_file']['element_type'] = '0';
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['text'] = '[created_1] Correspondence';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'Y';
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
    'client_file' => 'client_file',
  );
  /* Filter criterion: Content: Visible to Advisors (field_visible_to_advisor) */
  $handler->display->display_options['filters']['field_visible_to_advisor_value']['id'] = 'field_visible_to_advisor_value';
  $handler->display->display_options['filters']['field_visible_to_advisor_value']['table'] = 'field_data_field_visible_to_advisor';
  $handler->display->display_options['filters']['field_visible_to_advisor_value']['field'] = 'field_visible_to_advisor_value';
  $handler->display->display_options['filters']['field_visible_to_advisor_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_visible_to_advisor_value']['value'] = array(
    0 => '0',
  );

  /* Display: Client Files -  Client */
  $handler = $view->new_display('block', 'Client Files -  Client', 'client_files_client');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[field_stage-value]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You currently have no files assigned to you';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = '0';
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
  $handler->display->display_options['fields']['field_file_1']['id'] = 'field_file_1';
  $handler->display->display_options['fields']['field_file_1']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file_1']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file_1']['label'] = '';
  $handler->display->display_options['fields']['field_file_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file_1']['alter']['text'] = '<span class="save"><a href="[field_file_1]" class="client_file">Save File</a></span>';
  $handler->display->display_options['fields']['field_file_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file_1']['type'] = 'file_force_file_url_plain';
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_file']['id'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['label'] = '';
  $handler->display->display_options['fields']['field_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file']['alter']['text'] = 'Added: [created] - <a class="client_file" href="[field_file]" >[title]</a>
<span>[field_file-description]</span>
[field_file_1]';
  $handler->display->display_options['fields']['field_file']['element_type'] = '0';
  $handler->display->display_options['fields']['field_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file']['type'] = 'file_force_file_url_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit File';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Client (field_client) */
  $handler->display->display_options['arguments']['field_client_uid']['id'] = 'field_client_uid';
  $handler->display->display_options['arguments']['field_client_uid']['table'] = 'field_data_field_client';
  $handler->display->display_options['arguments']['field_client_uid']['field'] = 'field_client_uid';
  $handler->display->display_options['arguments']['field_client_uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_client_uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_client_uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_client_uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_client_uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_client_uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_client_uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_client_uid']['validate_options']['restrict_roles'] = TRUE;
  $handler->display->display_options['arguments']['field_client_uid']['validate_options']['roles'] = array(
    5 => '5',
  );
  $handler->display->display_options['arguments']['field_client_uid']['validate']['fail'] = 'empty';
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
    'client_file' => 'client_file',
  );
  /* Filter criterion: Content: Visible to Clients (field_visible_to_client) */
  $handler->display->display_options['filters']['field_visible_to_client_value']['id'] = 'field_visible_to_client_value';
  $handler->display->display_options['filters']['field_visible_to_client_value']['table'] = 'field_data_field_visible_to_client';
  $handler->display->display_options['filters']['field_visible_to_client_value']['field'] = 'field_visible_to_client_value';
  $handler->display->display_options['filters']['field_visible_to_client_value']['value'] = array(
    1 => '1',
  );

  /* Display: Client Files -  Admin */
  $handler = $view->new_display('block', 'Client Files -  Admin', 'admin');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_stage',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'created_1',
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
  $handler->display->display_options['fields']['field_file']['alter']['text'] = 'Added: [created] - <a class="client_file" href="[field_file]" >[title]</a>
<span>[field_file-description]</span>
<strong>[field_progress]</strong>';
  $handler->display->display_options['fields']['field_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file']['type'] = 'file_force_file_url_plain';
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['text'] = '[created_1] Correspondence';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'Y';
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
    7 => '7',
    6 => '6',
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

  /* Display: Client Files - Admin */
  $handler = $view->new_display('page', 'Client Files - Admin', 'admin');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Client Files';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Advisor */
  $handler->display->display_options['fields']['field_advisor']['id'] = 'field_advisor';
  $handler->display->display_options['fields']['field_advisor']['table'] = 'field_data_field_advisor';
  $handler->display->display_options['fields']['field_advisor']['field'] = 'field_advisor';
  $handler->display->display_options['fields']['field_advisor']['label'] = '';
  $handler->display->display_options['fields']['field_advisor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_advisor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advisor']['type'] = 'user_reference_plain';
  $handler->display->display_options['fields']['field_advisor']['delta_offset'] = '0';
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
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '<h2 class="user-toggle"><a href="#">[field_last_name], [field_first_name] <span class="advisor">Advisors: [field_advisor] </span></a></h2>';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['element_type'] = '0';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['path'] = 'client-files';

  /* Display: Advisors Files - Admin */
  $handler = $view->new_display('page', 'Advisors Files - Admin', 'advisor_files');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Advisors Files';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '<h2 class="advisor-toggle"><a href="#">[field_last_name], [field_first_name]</a></h2>';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['element_type'] = '0';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit Advisor';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['path'] = 'advisor-files';
  $export['clients'] = $view;

  return $export;
}
