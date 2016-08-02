<?php
/**
 * @file
 * views_view.messages.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'messages';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Messages';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Messages';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '15';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'field_first_name_em' => 'field_first_name_em',
  'field_first_name_em_1' => 'field_first_name_em_1',
  'field_surname_initial_1' => 'field_surname_initial_1',
  'field_company' => 'field_company',
  'field_surname_initial' => 'field_surname_initial',
  'view_node' => 'view_node',
  'new_comments' => 'new_comments',
  'timestamp' => 'timestamp',
  'created' => 'created',
  'title_1' => 'title_1',
  'uid_1' => 'uid_1',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_first_name_em' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_first_name_em_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_surname_initial_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_company' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_surname_initial' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'view_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'new_comments' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'timestamp' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'uid_1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['bootstrap_styles'] = array(
  'striped' => 0,
  'bordered' => 0,
  'hover' => 0,
  'condensed' => 0,
);
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'You have no messages.';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
/* Relationship: Users */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['ui_name'] = 'Users';
$handler->display->display_options['relationships']['uid']['label'] = 'users';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Relationship: User: Profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
$handler->display->display_options['relationships']['profile']['required'] = TRUE;
/* Relationship: Job */
$handler->display->display_options['relationships']['uid_representative']['id'] = 'uid_representative';
$handler->display->display_options['relationships']['uid_representative']['table'] = 'users';
$handler->display->display_options['relationships']['uid_representative']['field'] = 'uid_representative';
$handler->display->display_options['relationships']['uid_representative']['relationship'] = 'uid';
$handler->display->display_options['relationships']['uid_representative']['ui_name'] = 'Job';
$handler->display->display_options['relationships']['uid_representative']['subquery_sort'] = 'node.nid';
$handler->display->display_options['relationships']['uid_representative']['subquery_regenerate'] = TRUE;
$handler->display->display_options['relationships']['uid_representative']['subquery_view'] = 'messages_subquery';
$handler->display->display_options['relationships']['uid_representative']['subquery_namespace'] = '';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Has new content */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'history';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Sent';
$handler->display->display_options['fields']['created']['date_format'] = 'medium';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Field: First Name */
$handler->display->display_options['fields']['field_first_name_em']['id'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['table'] = 'field_data_field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['field'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_first_name_em']['label'] = '';
$handler->display->display_options['fields']['field_first_name_em']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_first_name_em']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_first_name_em']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Field: Surname Initial */
$handler->display->display_options['fields']['field_surname_initial']['id'] = 'field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['table'] = 'field_data_field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['field'] = 'field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_surname_initial']['label'] = 'From';
$handler->display->display_options['fields']['field_surname_initial']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_surname_initial']['alter']['text'] = '[field_first_name_em] [field_surname_initial]';
$handler->display->display_options['fields']['field_surname_initial']['type'] = 'field_hidden_text_plain';
$handler->display->display_options['fields']['field_surname_initial']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Sort criterion: Content: Updated/commented date */
$handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
$handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
$handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
$handler->display->display_options['sorts']['last_updated']['order'] = 'DESC';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: To (field_to) */
$handler->display->display_options['arguments']['field_to_target_id']['id'] = 'field_to_target_id';
$handler->display->display_options['arguments']['field_to_target_id']['table'] = 'field_data_field_to';
$handler->display->display_options['arguments']['field_to_target_id']['field'] = 'field_to_target_id';
$handler->display->display_options['arguments']['field_to_target_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['field_to_target_id']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['field_to_target_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['field_to_target_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['field_to_target_id']['summary_options']['items_per_page'] = '25';
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
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Messages */
$handler = $view->new_display('page', 'Messages', 'page_4');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'My Messages';
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Users */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['ui_name'] = 'Users';
$handler->display->display_options['relationships']['uid']['label'] = 'users';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Relationship: User: Profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
$handler->display->display_options['relationships']['profile']['required'] = TRUE;
/* Relationship: Job */
$handler->display->display_options['relationships']['uid_representative']['id'] = 'uid_representative';
$handler->display->display_options['relationships']['uid_representative']['table'] = 'users';
$handler->display->display_options['relationships']['uid_representative']['field'] = 'uid_representative';
$handler->display->display_options['relationships']['uid_representative']['relationship'] = 'uid';
$handler->display->display_options['relationships']['uid_representative']['ui_name'] = 'Job';
$handler->display->display_options['relationships']['uid_representative']['subquery_sort'] = 'node.nid';
$handler->display->display_options['relationships']['uid_representative']['subquery_regenerate'] = TRUE;
$handler->display->display_options['relationships']['uid_representative']['subquery_view'] = 'messages_subquery';
$handler->display->display_options['relationships']['uid_representative']['subquery_namespace'] = '';
/* Relationship: user_to */
$handler->display->display_options['relationships']['field_to_target_id']['id'] = 'field_to_target_id';
$handler->display->display_options['relationships']['field_to_target_id']['table'] = 'field_data_field_to';
$handler->display->display_options['relationships']['field_to_target_id']['field'] = 'field_to_target_id';
$handler->display->display_options['relationships']['field_to_target_id']['ui_name'] = 'user_to';
$handler->display->display_options['relationships']['field_to_target_id']['label'] = 'user_to';
$handler->display->display_options['relationships']['field_to_target_id']['required'] = TRUE;
/* Relationship: Profile_to */
$handler->display->display_options['relationships']['profile_1']['id'] = 'profile_1';
$handler->display->display_options['relationships']['profile_1']['table'] = 'users';
$handler->display->display_options['relationships']['profile_1']['field'] = 'profile';
$handler->display->display_options['relationships']['profile_1']['relationship'] = 'field_to_target_id';
$handler->display->display_options['relationships']['profile_1']['ui_name'] = 'Profile_to';
$handler->display->display_options['relationships']['profile_1']['label'] = 'Profile_to';
$handler->display->display_options['relationships']['profile_1']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Field: First Name */
$handler->display->display_options['fields']['field_first_name_em']['id'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['table'] = 'field_data_field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['field'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_first_name_em']['label'] = '';
$handler->display->display_options['fields']['field_first_name_em']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_first_name_em']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_first_name_em']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Field: First Name */
$handler->display->display_options['fields']['field_first_name_em_1']['id'] = 'field_first_name_em_1';
$handler->display->display_options['fields']['field_first_name_em_1']['table'] = 'field_data_field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em_1']['field'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em_1']['relationship'] = 'profile_1';
$handler->display->display_options['fields']['field_first_name_em_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_first_name_em_1']['settings'] = array(
  'field_formatter_label' => '',
);
/* Field: To */
$handler->display->display_options['fields']['field_surname_initial_1']['id'] = 'field_surname_initial_1';
$handler->display->display_options['fields']['field_surname_initial_1']['table'] = 'field_data_field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial_1']['field'] = 'field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial_1']['relationship'] = 'profile_1';
$handler->display->display_options['fields']['field_surname_initial_1']['ui_name'] = 'To';
$handler->display->display_options['fields']['field_surname_initial_1']['label'] = 'To';
$handler->display->display_options['fields']['field_surname_initial_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_surname_initial_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_surname_initial_1']['alter']['text'] = '[field_first_name_em_1] [field_surname_initial_1]';
$handler->display->display_options['fields']['field_surname_initial_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_surname_initial_1']['type'] = 'field_hidden_text_plain';
$handler->display->display_options['fields']['field_surname_initial_1']['settings'] = array(
  'field_formatter_label' => '',
);
/* Field: Field: Company */
$handler->display->display_options['fields']['field_company']['id'] = 'field_company';
$handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
$handler->display->display_options['fields']['field_company']['field'] = 'field_company';
$handler->display->display_options['fields']['field_company']['relationship'] = 'profile_1';
$handler->display->display_options['fields']['field_company']['label'] = 'To';
$handler->display->display_options['fields']['field_company']['empty'] = '[field_surname_initial_1]';
$handler->display->display_options['fields']['field_company']['settings'] = array(
  'field_formatter_label' => '',
);
/* Field: Field: Surname Initial */
$handler->display->display_options['fields']['field_surname_initial']['id'] = 'field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['table'] = 'field_data_field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['field'] = 'field_surname_initial';
$handler->display->display_options['fields']['field_surname_initial']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_surname_initial']['label'] = 'From';
$handler->display->display_options['fields']['field_surname_initial']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_surname_initial']['alter']['text'] = '[field_first_name_em] [field_surname_initial]';
$handler->display->display_options['fields']['field_surname_initial']['type'] = 'field_hidden_text_plain';
$handler->display->display_options['fields']['field_surname_initial']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Content: Link */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_node']['text'] = 'View message';
/* Field: Content: New comments */
$handler->display->display_options['fields']['new_comments']['id'] = 'new_comments';
$handler->display->display_options['fields']['new_comments']['table'] = 'node';
$handler->display->display_options['fields']['new_comments']['field'] = 'new_comments';
$handler->display->display_options['fields']['new_comments']['label'] = '';
$handler->display->display_options['fields']['new_comments']['exclude'] = TRUE;
$handler->display->display_options['fields']['new_comments']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['new_comments']['alter']['text'] = '<span class="marker label label-primary">new</span>';
$handler->display->display_options['fields']['new_comments']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['new_comments']['hide_empty'] = TRUE;
/* Field: Content: Has new content */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'history';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['label'] = '';
$handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['timestamp']['empty'] = '[new_comments]';
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Sent';
$handler->display->display_options['fields']['created']['date_format'] = 'medium';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Content: Title */
$handler->display->display_options['fields']['title_1']['id'] = 'title_1';
$handler->display->display_options['fields']['title_1']['table'] = 'node';
$handler->display->display_options['fields']['title_1']['field'] = 'title';
$handler->display->display_options['fields']['title_1']['relationship'] = 'uid_representative';
$handler->display->display_options['fields']['title_1']['label'] = '';
$handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title_1']['alter']['text'] = 'View job details';
$handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
/* Field: Content: Author uid */
$handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
$handler->display->display_options['fields']['uid_1']['table'] = 'node';
$handler->display->display_options['fields']['uid_1']['field'] = 'uid';
$handler->display->display_options['fields']['uid_1']['exclude'] = TRUE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
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
$handler->display->display_options['arguments']['field_to_target_id']['validate']['fail'] = 'access denied';
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['uid']['validate']['fail'] = 'access denied';
$handler->display->display_options['path'] = 'messages';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'text',
  3 => 'field_hidden',
);
