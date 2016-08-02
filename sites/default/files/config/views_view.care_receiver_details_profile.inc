<?php
/**
 * @file
 * views_view.care_receiver_details_profile.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'care_receiver_details_profile';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'profile';
$view->human_name = 'Care Receiver Details';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'employer_details_carer_';
/* Field: Profile: Profile ID */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'profile';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
/* Contextual filter: Profile: Profile ID */
$handler->display->display_options['arguments']['pid']['id'] = 'pid';
$handler->display->display_options['arguments']['pid']['table'] = 'profile';
$handler->display->display_options['arguments']['pid']['field'] = 'pid';
$handler->display->display_options['arguments']['pid']['default_action'] = 'default';
$handler->display->display_options['arguments']['pid']['default_argument_type'] = 'php';
$handler->display->display_options['arguments']['pid']['default_argument_options']['code'] = 'if (arg(0) == \'node\') {
  $nid = arg(1);
  $node = node_load($nid);
  dpm($node);
  $user = $node->uid;
  $profile = profile2_load_by_user($user);
  dpm($profile);
  return $profile[\'carer_employer\']->pid;
} else {
  return 0;
}';
$handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Profile: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'profile';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'carer_employer' => 'carer_employer',
);

/* Display: EVA Field */
$handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
$handler->display->display_options['entity_type'] = 'node';
$handler->display->display_options['bundles'] = array(
  0 => 'job',
);
$handler->display->display_options['argument_mode'] = 'token';
$handler->display->display_options['default_argument'] = '[node:author:profile-carer-employer:pid]';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'profile2',
);
