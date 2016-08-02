<?php
/**
 * @file
 * views_view.order_locations.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'order_locations';
$view->description = '';
$view->tag = 'IP Geolocation Views and Maps';
$view->base_table = 'commerce_order';
$view->human_name = 'Order Locations';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Order Locations';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  2 => '2',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'ip_geoloc_map';
/* Field: IP geolocations: IP address */
$handler->display->display_options['fields']['ip_address']['id'] = 'ip_address';
$handler->display->display_options['fields']['ip_address']['table'] = 'ip_geoloc';
$handler->display->display_options['fields']['ip_address']['field'] = 'ip_address';
$handler->display->display_options['fields']['ip_address']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['ip_address']['alter']['text'] = 'IP: [ip_address]';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['order_number']['id'] = 'order_number';
$handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
$handler->display->display_options['fields']['order_number']['field'] = 'order_number';
$handler->display->display_options['fields']['order_number']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['order_number']['alter']['text'] = 'Order #[order_number]';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'commerce_order';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['created']['alter']['text'] = 'Order placed: [created]';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'commerce_order';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['state']['alter']['text'] = 'Order state: [state]';
/* Field: IP geolocations: Address */
$handler->display->display_options['fields']['formatted_address']['id'] = 'formatted_address';
$handler->display->display_options['fields']['formatted_address']['table'] = 'ip_geoloc';
$handler->display->display_options['fields']['formatted_address']['field'] = 'formatted_address';
$handler->display->display_options['fields']['formatted_address']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['formatted_address']['alter']['text'] = 'Address:
    [formatted_address]';
/* Field: IP geolocations: Latitude */
$handler->display->display_options['fields']['latitude']['id'] = 'latitude';
$handler->display->display_options['fields']['latitude']['table'] = 'ip_geoloc';
$handler->display->display_options['fields']['latitude']['field'] = 'latitude';
/* Field: IP geolocations: Longitude */
$handler->display->display_options['fields']['longitude']['id'] = 'longitude';
$handler->display->display_options['fields']['longitude']['table'] = 'ip_geoloc';
$handler->display->display_options['fields']['longitude']['field'] = 'longitude';
/* Sort criterion: Broken/missing handler */
$handler->display->display_options['sorts']['order_id']['id'] = 'order_id';
$handler->display->display_options['sorts']['order_id']['table'] = 'commerce_order';
$handler->display->display_options['sorts']['order_id']['field'] = 'order_id';
$handler->display->display_options['sorts']['order_id']['order'] = 'DESC';
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'commerce_order';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['value'] = array(
  'canceled' => 'canceled',
  'cart' => 'cart',
  'checkout' => 'checkout',
  'pending' => 'pending',
  'completed' => 'completed',
);
$handler->display->display_options['filters']['state']['exposed'] = TRUE;
$handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['label'] = 'Order state';
$handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
/* Filter criterion: IP geolocations: Country */
$handler->display->display_options['filters']['country']['id'] = 'country';
$handler->display->display_options['filters']['country']['table'] = 'ip_geoloc';
$handler->display->display_options['filters']['country']['field'] = 'country';
$handler->display->display_options['filters']['country']['exposed'] = TRUE;
$handler->display->display_options['filters']['country']['expose']['operator_id'] = 'country_op';
$handler->display->display_options['filters']['country']['expose']['label'] = 'Country';
$handler->display->display_options['filters']['country']['expose']['operator'] = 'country_op';
$handler->display->display_options['filters']['country']['expose']['identifier'] = 'country';
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['created']['id'] = 'created';
$handler->display->display_options['filters']['created']['table'] = 'commerce_order';
$handler->display->display_options['filters']['created']['field'] = 'created';
$handler->display->display_options['filters']['created']['operator'] = 'between';
$handler->display->display_options['filters']['created']['value'] = array(
  'type' => 'offset',
);
$handler->display->display_options['filters']['created']['exposed'] = TRUE;
$handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['label'] = 'Order placed between';
$handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
$handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'order-locations';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => '',
);
