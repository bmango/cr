<?php
/**
 * @file
 * views_view.employer_job_for_rules.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'employer_job_for_rules';
$view->description = 'Fetch Employer Job Entity for Rules';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Employer Job for Rules';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
/* Field: File Usage: Entity ID */
$handler->display->display_options['fields']['id']['id'] = 'id';
$handler->display->display_options['fields']['id']['table'] = 'file_usage';
$handler->display->display_options['fields']['id']['field'] = 'id';
/* Field: Content: Author uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'node';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
/* Contextual filter: Content: Author uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'node';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'job' => 'job',
);

/* Display: Get Employer Job */
$handler = $view->new_display('views_rules', 'Get Employer Job', 'views_rules_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['rules_parameter'] = array(
  'uid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Author uid',
    'name' => 'uid',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'nid' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'node',
    'label' => 'Nid',
    'name' => 'nid',
  ),
  'id' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Entity ID',
    'name' => 'entity_id',
  ),
  'uid' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Author uid',
    'name' => 'uid',
  ),
);

/* Display: Get Agency Jobs */
$handler = $view->new_display('views_rules', 'Get Agency Jobs', 'views_rules_2');
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['rules_parameter'] = array(
  'uid' => array(
    'enabled' => 1,
    'type' => 'integer',
    'label' => 'Author uid',
    'name' => 'uid',
  ),
);
$handler->display->display_options['rules_variables'] = array(
  'nid' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'node',
    'label' => 'Nid',
    'name' => 'nid',
  ),
  'id' => array(
    'enabled' => 1,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Entity ID',
    'name' => 'entity_id',
  ),
  'uid' => array(
    'enabled' => 0,
    'rendered' => 0,
    'type' => 'integer',
    'label' => 'Author uid',
    'name' => 'uid',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
);
