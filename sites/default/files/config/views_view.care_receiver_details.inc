<?php
/**
 * @file
 * views_view.care_receiver_details.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'care_receiver_details';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Care Receiver Details';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Care Receiver Details';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<h3>Additional Care Receiver Details</h3>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Relationship: User: Profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
$handler->display->display_options['relationships']['profile']['required'] = TRUE;
$handler->display->display_options['relationships']['profile']['bundle_types'] = array(
  'carer_employer' => 'carer_employer',
);
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
/* Field: Content: Author uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'node';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['fields']['uid']['exclude'] = TRUE;
/* Field: Profile: Profile ID */
$handler->display->display_options['fields']['pid']['id'] = 'pid';
$handler->display->display_options['fields']['pid']['table'] = 'profile';
$handler->display->display_options['fields']['pid']['field'] = 'pid';
$handler->display->display_options['fields']['pid']['relationship'] = 'profile';
$handler->display->display_options['fields']['pid']['exclude'] = TRUE;
/* Field: Profile: Gender */
$handler->display->display_options['fields']['field_gender_cr']['id'] = 'field_gender_cr';
$handler->display->display_options['fields']['field_gender_cr']['table'] = 'field_data_field_gender_cr';
$handler->display->display_options['fields']['field_gender_cr']['field'] = 'field_gender_cr';
$handler->display->display_options['fields']['field_gender_cr']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_gender_cr']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_date_of_birth']['id'] = 'field_date_of_birth';
$handler->display->display_options['fields']['field_date_of_birth']['table'] = 'field_data_field_date_of_birth';
$handler->display->display_options['fields']['field_date_of_birth']['field'] = 'field_date_of_birth';
$handler->display->display_options['fields']['field_date_of_birth']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_date_of_birth']['label'] = 'Date of Birth';
/* Field: Profile: Living Arrangements */
$handler->display->display_options['fields']['field_living_arrangements']['id'] = 'field_living_arrangements';
$handler->display->display_options['fields']['field_living_arrangements']['table'] = 'field_data_field_living_arrangements';
$handler->display->display_options['fields']['field_living_arrangements']['field'] = 'field_living_arrangements';
$handler->display->display_options['fields']['field_living_arrangements']['relationship'] = 'profile';
/* Field: Profile: Wheelchair user */
$handler->display->display_options['fields']['field_wheelchair_user']['id'] = 'field_wheelchair_user';
$handler->display->display_options['fields']['field_wheelchair_user']['table'] = 'field_data_field_wheelchair_user';
$handler->display->display_options['fields']['field_wheelchair_user']['field'] = 'field_wheelchair_user';
$handler->display->display_options['fields']['field_wheelchair_user']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_wheelchair_user']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Profile: Alcohol Drinking Habits */
$handler->display->display_options['fields']['field_alcohol']['id'] = 'field_alcohol';
$handler->display->display_options['fields']['field_alcohol']['table'] = 'field_data_field_alcohol';
$handler->display->display_options['fields']['field_alcohol']['field'] = 'field_alcohol';
$handler->display->display_options['fields']['field_alcohol']['relationship'] = 'profile';
/* Field: Profile: Pets */
$handler->display->display_options['fields']['field_pets']['id'] = 'field_pets';
$handler->display->display_options['fields']['field_pets']['table'] = 'field_data_field_pets';
$handler->display->display_options['fields']['field_pets']['field'] = 'field_pets';
$handler->display->display_options['fields']['field_pets']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_pets']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Profile: Diet */
$handler->display->display_options['fields']['field_diet']['id'] = 'field_diet';
$handler->display->display_options['fields']['field_diet']['table'] = 'field_data_field_diet';
$handler->display->display_options['fields']['field_diet']['field'] = 'field_diet';
$handler->display->display_options['fields']['field_diet']['relationship'] = 'profile';
/* Field: Profile: Smoker */
$handler->display->display_options['fields']['field_smoker']['id'] = 'field_smoker';
$handler->display->display_options['fields']['field_smoker']['table'] = 'field_data_field_smoker';
$handler->display->display_options['fields']['field_smoker']['field'] = 'field_smoker';
$handler->display->display_options['fields']['field_smoker']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_smoker']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Profile: Allergies */
$handler->display->display_options['fields']['field_allergies']['id'] = 'field_allergies';
$handler->display->display_options['fields']['field_allergies']['table'] = 'field_data_field_allergies';
$handler->display->display_options['fields']['field_allergies']['field'] = 'field_allergies';
$handler->display->display_options['fields']['field_allergies']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_allergies']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Care Receiver Details */
$handler = $view->new_display('entity_view', 'Care Receiver Details', 'entity_view_1');
$handler->display->display_options['entity_type'] = 'node';
$handler->display->display_options['bundles'] = array(
  0 => 'job',
);
$handler->display->display_options['show_title'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'list',
  3 => 'text',
);
