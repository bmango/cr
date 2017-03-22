<?php
/**
 * @file
 * views_view.profile_location_list.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'profile_location_list';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Profile Location List';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Profile Location List';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: User: Profile */
$handler->display->display_options['relationships']['profile']['id'] = 'profile';
$handler->display->display_options['relationships']['profile']['table'] = 'users';
$handler->display->display_options['relationships']['profile']['field'] = 'profile';
$handler->display->display_options['relationships']['profile']['required'] = TRUE;
$handler->display->display_options['relationships']['profile']['bundle_types'] = array(
  'carer' => 'carer',
);
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
/* Field: Field: Address - Postal code */
$handler->display->display_options['fields']['field_address_postal_code']['id'] = 'field_address_postal_code';
$handler->display->display_options['fields']['field_address_postal_code']['table'] = 'field_data_field_address';
$handler->display->display_options['fields']['field_address_postal_code']['field'] = 'field_address_postal_code';
$handler->display->display_options['fields']['field_address_postal_code']['relationship'] = 'profile';
/* Field: Field: Geofield */
$handler->display->display_options['fields']['field_geofield']['id'] = 'field_geofield';
$handler->display->display_options['fields']['field_geofield']['table'] = 'field_data_field_geofield';
$handler->display->display_options['fields']['field_geofield']['field'] = 'field_geofield';
$handler->display->display_options['fields']['field_geofield']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_geofield']['click_sort_column'] = 'geom';
$handler->display->display_options['fields']['field_geofield']['type'] = 'geofield_latlon';
$handler->display->display_options['fields']['field_geofield']['settings'] = array(
  'data' => 'full',
  'format' => 'decimal_degrees',
  'labels' => 1,
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Field: District */
$handler->display->display_options['fields']['field_district']['id'] = 'field_district';
$handler->display->display_options['fields']['field_district']['table'] = 'field_data_field_district';
$handler->display->display_options['fields']['field_district']['field'] = 'field_district';
$handler->display->display_options['fields']['field_district']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_district']['type'] = 'field_hidden_text_plain';
$handler->display->display_options['fields']['field_district']['settings'] = array(
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Sort criterion: User: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'users';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Field: Geofield (field_geofield:lat) */
$handler->display->display_options['filters']['field_geofield_lat']['id'] = 'field_geofield_lat';
$handler->display->display_options['filters']['field_geofield_lat']['table'] = 'field_data_field_geofield';
$handler->display->display_options['filters']['field_geofield_lat']['field'] = 'field_geofield_lat';
$handler->display->display_options['filters']['field_geofield_lat']['relationship'] = 'profile';
$handler->display->display_options['filters']['field_geofield_lat']['operator'] = 'not empty';
$handler->display->display_options['filters']['field_geofield_lat']['group'] = 1;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'profile-location-list';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
  2 => 'geofield',
  3 => 'field_hidden',
);
