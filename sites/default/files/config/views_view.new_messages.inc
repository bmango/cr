<?php
/**
 * @file
 * views_view.new_messages.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'new_messages';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'New Messages';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'New Messages';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: COUNT(Content: Title) */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['group_type'] = 'count';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = 'You have [title] new/updated messages.';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['title']['empty_zero'] = TRUE;
/* Contextual filter: Content: To (field_to) */
$handler->display->display_options['arguments']['field_to_target_id']['id'] = 'field_to_target_id';
$handler->display->display_options['arguments']['field_to_target_id']['table'] = 'field_data_field_to';
$handler->display->display_options['arguments']['field_to_target_id']['field'] = 'field_to_target_id';
$handler->display->display_options['arguments']['field_to_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_to_target_id']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['field_to_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_to_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_to_target_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['field_to_target_id']['specify_validation'] = TRUE;
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
  'message' => 'message',
);
/* Filter criterion: Content: Has new content */
$handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['filters']['timestamp']['table'] = 'history';
$handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
);
