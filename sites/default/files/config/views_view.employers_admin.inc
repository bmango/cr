<?php
/**
 * @file
 * views_view.employers_admin.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'employers_admin';
$view->description = '';
$view->tag = 'admin';
$view->base_table = 'profile';
$view->human_name = 'Admin Employers ';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Employers List';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'pid' => 'pid',
  'created' => 'created',
  'field_first_name_em' => 'field_first_name_em',
  'field_last_name_em' => 'field_last_name_em',
  'field_title_em' => 'field_title_em',
  'url' => 'url',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'pid' => array(
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
  'field_title_em' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'url' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Profile: User uid */
$handler->display->display_options['relationships']['user']['id'] = 'user';
$handler->display->display_options['relationships']['user']['table'] = 'profile';
$handler->display->display_options['relationships']['user']['field'] = 'user';
/* Field: Profile: URL */
$handler->display->display_options['fields']['url']['id'] = 'url';
$handler->display->display_options['fields']['url']['table'] = 'views_entity_profile2';
$handler->display->display_options['fields']['url']['field'] = 'url';
$handler->display->display_options['fields']['url']['exclude'] = TRUE;
$handler->display->display_options['fields']['url']['link_to_entity'] = 0;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'user';
$handler->display->display_options['fields']['name']['label'] = 'User';
/* Field: Field: First Name */
$handler->display->display_options['fields']['field_first_name_em']['id'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['table'] = 'field_data_field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['field'] = 'field_first_name_em';
$handler->display->display_options['fields']['field_first_name_em']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_first_name_em']['alter']['path'] = '[url]';
$handler->display->display_options['fields']['field_first_name_em']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Field: Last Name */
$handler->display->display_options['fields']['field_last_name_em']['id'] = 'field_last_name_em';
$handler->display->display_options['fields']['field_last_name_em']['table'] = 'field_data_field_last_name_em';
$handler->display->display_options['fields']['field_last_name_em']['field'] = 'field_last_name_em';
$handler->display->display_options['fields']['field_last_name_em']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Profile: Date created */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'profile';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Created';
$handler->display->display_options['fields']['created']['date_format'] = 'uk_date';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Profile: Profile ID */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'profile';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
/* Field: Profile: User uid */
$handler->display->display_options['fields']['user']['id'] = 'user';
$handler->display->display_options['fields']['user']['table'] = 'profile';
$handler->display->display_options['fields']['user']['field'] = 'user';
/* Field: Profile: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'profile';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Filter criterion: Profile: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'profile';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'employer' => 'employer',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/employers';

/* Display: Agencies */
$handler = $view->new_display('page', 'Agencies', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Agency List';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Profile: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'profile';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'agency' => 'agency',
);
$handler->display->display_options['path'] = 'admin/agencies';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'profile2',
  2 => 'text',
);
