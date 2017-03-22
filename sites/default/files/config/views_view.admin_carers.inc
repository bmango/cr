<?php
/**
 * @file
 * views_view.admin_carers.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'admin_carers';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Admin Carers';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Admin Carers';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'name' => 'name',
  'field_first_name_em' => 'field_first_name_em',
  'field_last_name_em' => 'field_last_name_em',
  'field_profile_active' => 'field_profile_active',
  'status' => 'status',
  'created' => 'created',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_first_name_em' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_last_name_em' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_profile_active' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'status' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: User: Profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['bundle_types'] = array(
  'carer' => 'carer',
);
/* Field: Profile: User uid */
$handler->display->display_options['fields']['user']['id'] = 'user';
$handler->display->display_options['fields']['user']['table'] = 'profile';
$handler->display->display_options['fields']['user']['field'] = 'user';
$handler->display->display_options['fields']['user']['relationship'] = 'profile';
$handler->display->display_options['fields']['user']['exclude'] = TRUE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'User';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = 'Link';
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['path'] = 'profile-carer/[user]';
/* Field: Field: First Name */
$handler->display->display_options['fields']['field_first_name_em']['id'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['table'] = 'field_data_field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['field'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_first_name_em']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Field: Last Name */
$handler->display->display_options['fields']['field_last_name_em']['id'] = 'field_last_name_em';
$handler->display->display_options['fields']['field_last_name_em']['table'] = 'field_data_field_last_name_em';
$handler->display->display_options['fields']['field_last_name_em']['field'] = 'field_last_name_em';
$handler->display->display_options['fields']['field_last_name_em']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_last_name_em']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Profile: Profile */
$handler->display->display_options['fields']['field_profile_active']['id'] = 'field_profile_active';
$handler->display->display_options['fields']['field_profile_active']['table'] = 'field_data_field_profile_active';
$handler->display->display_options['fields']['field_profile_active']['field'] = 'field_profile_active';
$handler->display->display_options['fields']['field_profile_active']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_profile_active']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: User: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'users';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
/* Field: User: Created date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'users';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Created';
$handler->display->display_options['fields']['created']['date_format'] = 'custom';
$handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Profile: Profile ID */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'profile';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
$handler->display->display_options['fields']['pid']['relationship'] = 'profile';
$handler->display->display_options['fields']['pid']['exclude'] = TRUE;
/* Sort criterion: User: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'users';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Profile: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'profile';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'profile';
$handler->display->display_options['filters']['type']['value'] = array(
  'carer' => 'carer',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/carers';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['path'] = 'test-carers-admin';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
  2 => 'text',
  3 => 'list',
);
