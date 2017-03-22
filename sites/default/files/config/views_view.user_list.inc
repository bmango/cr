<?php
/**
 * @file
 * views_view.user_list.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'user_list';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'User list';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'User list';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
$handler->display->display_options['style_options']['columns'] = array(
  'name' => 'name',
  'title' => 'title',
  'type' => 'type',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'type' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
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
/* Relationship: User: Representative node */
$handler->display->display_options['relationships']['uid_representative']['id'] = 'uid_representative';
$handler->display->display_options['relationships']['uid_representative']['table'] = 'users';
$handler->display->display_options['relationships']['uid_representative']['field'] = 'uid_representative';
$handler->display->display_options['relationships']['uid_representative']['subquery_sort'] = 'node.nid';
$handler->display->display_options['relationships']['uid_representative']['subquery_regenerate'] = TRUE;
$handler->display->display_options['relationships']['uid_representative']['subquery_view'] = '';
$handler->display->display_options['relationships']['uid_representative']['subquery_namespace'] = '';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'uid_representative';
/* Sort criterion: User: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'users';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: User: Roles */
$handler->display->display_options['filters']['rid']['id'] = 'rid';
$handler->display->display_options['filters']['rid']['table'] = 'users_roles';
$handler->display->display_options['filters']['rid']['field'] = 'rid';
$handler->display->display_options['filters']['rid']['value'] = array(
  4 => '4',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'user-list';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
);
