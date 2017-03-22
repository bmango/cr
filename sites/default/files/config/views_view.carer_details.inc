<?php
/**
 * @file
 * views_view.carer_details.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'carer_details';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'profile';
$view->human_name = 'Carer Details';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Carer Details';
$handler->display->display_options['css_class'] = 'carer-profile';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Footer: Entity: Rendered entity */
$handler->display->display_options['footer']['entity']['id'] = 'entity';
$handler->display->display_options['footer']['entity']['table'] = 'entity__global';
$handler->display->display_options['footer']['entity']['field'] = 'entity';
$handler->display->display_options['footer']['entity']['entity_type'] = 'profile2';
$handler->display->display_options['footer']['entity']['entity_id'] = '%1';
$handler->display->display_options['footer']['entity']['view_mode'] = 'carer_details_employer';
$handler->display->display_options['footer']['entity']['bypass_access'] = 1;
/* Field: Profile: Profile ID */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'profile';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
/* Field: Profile: User uid */
$handler->display->display_options['fields']['user']['id'] = 'user';
$handler->display->display_options['fields']['user']['table'] = 'profile';
$handler->display->display_options['fields']['user']['field'] = 'user';
/* Contextual filter: Profile: Profile ID */
$handler->display->display_options['arguments']['pid']['id'] = 'pid';
$handler->display->display_options['arguments']['pid']['table'] = 'profile';
$handler->display->display_options['arguments']['pid']['field'] = 'pid';
$handler->display->display_options['arguments']['pid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Profile: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'profile';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'carer' => 'carer',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'carer-details';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'profile2',
);
