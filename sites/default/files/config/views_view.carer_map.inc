<?php
/**
 * @file
 * views_view.carer_map.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'carer_map';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'Carer Map';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Carer Map';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'access user profiles';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['style_plugin'] = 'ip_geoloc_map';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => '',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['ip_geoloc_views_plugin_latitude'] = array(
  'field_geofield' => 'field_geofield',
);
$handler->display->display_options['style_options']['ip_geoloc_views_plugin_longitude'] = 'field_geofield_1';
$handler->display->display_options['style_options']['differentiator']['differentiator_field'] = 'users_name';
$handler->display->display_options['style_options']['default_marker_color'] = 'blue';
$handler->display->display_options['style_options']['center_option'] = '1';
$handler->display->display_options['style_options']['gps_roles'] = array(
  1 => '1',
  2 => '2',
  4 => 0,
  7 => 0,
  5 => 0,
  6 => 0,
  3 => 0,
);
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
/* Field: Field: Geofield */
$handler->display->display_options['fields']['field_geofield']['id'] = 'field_geofield';
$handler->display->display_options['fields']['field_geofield']['table'] = 'field_data_field_geofield';
$handler->display->display_options['fields']['field_geofield']['field'] = 'field_geofield';
$handler->display->display_options['fields']['field_geofield']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_geofield']['label'] = 'Geofield lat';
$handler->display->display_options['fields']['field_geofield']['click_sort_column'] = 'geom';
$handler->display->display_options['fields']['field_geofield']['type'] = 'geofield_lat';
$handler->display->display_options['fields']['field_geofield']['settings'] = array(
  'data' => 'full',
  'format' => 'decimal_degrees',
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Field: Field: Geofield */
$handler->display->display_options['fields']['field_geofield_1']['id'] = 'field_geofield_1';
$handler->display->display_options['fields']['field_geofield_1']['table'] = 'field_data_field_geofield';
$handler->display->display_options['fields']['field_geofield_1']['field'] = 'field_geofield';
$handler->display->display_options['fields']['field_geofield_1']['relationship'] = 'profile';
$handler->display->display_options['fields']['field_geofield_1']['label'] = 'Geofield long';
$handler->display->display_options['fields']['field_geofield_1']['click_sort_column'] = 'geom';
$handler->display->display_options['fields']['field_geofield_1']['type'] = 'geofield_lon';
$handler->display->display_options['fields']['field_geofield_1']['settings'] = array(
  'data' => 'full',
  'format' => 'decimal_degrees',
  'empty_fields_handler' => '',
  'empty_fields_emptyfieldtext_empty_text' => '',
);
/* Sort criterion: User: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'users';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'carer-map';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'user',
  2 => 'geofield',
);
