<?php
/**
 * @file
 * views_view.map_leaflet_of_visitor_locations.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'map_leaflet_of_visitor_locations';
$view->description = 'Map of recent visitors to this site with zoom and cluster features.';
$view->tag = 'IP Geolocation Views and Maps';
$view->base_table = 'accesslog';
$view->human_name = 'Map (Leaflet) of recent visitors';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Locations of recent visitors';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  2 => '2',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2000';
$handler->display->display_options['pager']['options']['offset'] = '0';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'accesslog';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['group_type'] = 'max';
$handler->display->display_options['fields']['timestamp']['label'] = 'Last visit';
$handler->display->display_options['fields']['timestamp']['exclude'] = TRUE;
/* Field: IP geolocations: IP address */
$handler->display->display_options['fields']['ip_address']['id'] = 'ip_address';
$handler->display->display_options['fields']['ip_address']['table'] = 'ip_geoloc';
$handler->display->display_options['fields']['ip_address']['field'] = 'ip_address';
$handler->display->display_options['fields']['ip_address']['label'] = 'IP';
$handler->display->display_options['fields']['ip_address']['exclude'] = TRUE;
/* Field: IP geolocations: Address */
$handler->display->display_options['fields']['formatted_address']['id'] = 'formatted_address';
$handler->display->display_options['fields']['formatted_address']['table'] = 'ip_geoloc';
$handler->display->display_options['fields']['formatted_address']['field'] = 'formatted_address';
$handler->display->display_options['fields']['formatted_address']['label'] = '';
$handler->display->display_options['fields']['formatted_address']['element_label_colon'] = FALSE;
/* Field: IP geolocations: Latitude */
$handler->display->display_options['fields']['latitude']['id'] = 'latitude';
$handler->display->display_options['fields']['latitude']['table'] = 'ip_geoloc';
$handler->display->display_options['fields']['latitude']['field'] = 'latitude';
$handler->display->display_options['fields']['latitude']['label'] = '';
$handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
$handler->display->display_options['fields']['latitude']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['latitude']['separator'] = '';
/* Field: IP geolocations: Longitude */
$handler->display->display_options['fields']['longitude']['id'] = 'longitude';
$handler->display->display_options['fields']['longitude']['table'] = 'ip_geoloc';
$handler->display->display_options['fields']['longitude']['field'] = 'longitude';
$handler->display->display_options['fields']['longitude']['label'] = '';
$handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
$handler->display->display_options['fields']['longitude']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['longitude']['separator'] = '';
/* Sort criterion: Broken/missing handler */
$handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['table'] = 'accesslog';
$handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['sorts']['timestamp']['group_type'] = 'max';
$handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => '',
);
