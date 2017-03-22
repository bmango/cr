<?php
/**
 * @file
 * views_view.legal_users.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'legal_users';
$view->description = '';
$view->tag = '';
$view->base_table = 'users';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Accepted';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer Terms and Conditions';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 50;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['grouping'] = '';
$handler->display->display_options['style_options']['columns'] = array(
  'name' => 'name',
  'version' => 'version',
  'language_1' => 'language_1',
  'revision' => 'revision',
  'accepted' => 'accepted',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'name' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'version' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'language_1' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'revision' => array(
    'sortable' => 1,
    'separator' => '',
  ),
  'accepted' => array(
    'sortable' => 1,
    'separator' => '',
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
$handler->display->display_options['style_options']['order'] = 'desc';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['text']['id'] = 'area';
$handler->display->display_options['empty']['text']['table'] = 'views';
$handler->display->display_options['empty']['text']['field'] = 'area';
$handler->display->display_options['empty']['text']['content'] = 'No users have accepted Terms & Conditions yet.';
$handler->display->display_options['empty']['text']['format'] = '1';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'User';
/* Field: Legal: Version */
$handler->display->display_options['fields']['version']['id'] = 'version';
$handler->display->display_options['fields']['version']['table'] = 'legal_accepted';
$handler->display->display_options['fields']['version']['field'] = 'version';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['language_1']['id'] = 'language_1';
$handler->display->display_options['fields']['language_1']['table'] = 'legal_accepted';
$handler->display->display_options['fields']['language_1']['field'] = 'language';
$handler->display->display_options['fields']['language_1']['label'] = 'Language';
/* Field: Legal: Revision */
$handler->display->display_options['fields']['revision']['id'] = 'revision';
$handler->display->display_options['fields']['revision']['table'] = 'legal_accepted';
$handler->display->display_options['fields']['revision']['field'] = 'revision';
/* Field: Legal: Time Accepted */
$handler->display->display_options['fields']['accepted']['id'] = 'accepted';
$handler->display->display_options['fields']['accepted']['table'] = 'legal_accepted';
$handler->display->display_options['fields']['accepted']['field'] = 'accepted';
/* Sort criterion: User: Uid */
$handler->display->display_options['sorts']['uid']['id'] = 'uid';
$handler->display->display_options['sorts']['uid']['table'] = 'users';
$handler->display->display_options['sorts']['uid']['field'] = 'uid';
$handler->display->display_options['sorts']['uid']['order'] = 'DESC';
/* Sort criterion: Legal: Version */
$handler->display->display_options['sorts']['version']['id'] = 'version';
$handler->display->display_options['sorts']['version']['table'] = 'legal_accepted';
$handler->display->display_options['sorts']['version']['field'] = 'version';
$handler->display->display_options['sorts']['version']['order'] = 'DESC';
/* Sort criterion: Broken/missing handler */
$handler->display->display_options['sorts']['language']['id'] = 'language';
$handler->display->display_options['sorts']['language']['table'] = 'legal_accepted';
$handler->display->display_options['sorts']['language']['field'] = 'language';
/* Sort criterion: Legal: Revision */
$handler->display->display_options['sorts']['revision']['id'] = 'revision';
$handler->display->display_options['sorts']['revision']['table'] = 'legal_accepted';
$handler->display->display_options['sorts']['revision']['field'] = 'revision';
/* Filter criterion: Legal: Version */
$handler->display->display_options['filters']['version']['id'] = 'version';
$handler->display->display_options['filters']['version']['table'] = 'legal_accepted';
$handler->display->display_options['filters']['version']['field'] = 'version';
$handler->display->display_options['filters']['version']['operator'] = 'not empty';
$handler->display->display_options['filters']['version']['group'] = '0';
$handler->display->display_options['filters']['version']['expose']['label'] = 'Accepted';
$handler->display->display_options['filters']['version']['expose']['operator'] = 'version_op';
$handler->display->display_options['filters']['version']['expose']['identifier'] = 'accepted';
$handler->display->display_options['filters']['version']['expose']['remember'] = TRUE;

/* Display: Users */
$handler = $view->new_display('page', 'Users', 'page_1');
$handler->display->display_options['path'] = 'admin/config/people/legal/users';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Accepted';
$handler->display->display_options['menu']['description'] = 'Accepted';
$handler->display->display_options['menu']['weight'] = '5';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
);
