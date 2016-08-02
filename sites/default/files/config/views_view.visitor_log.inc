<?php
/**
 * @file
 * views_view.visitor_log.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'visitor_log';
$view->description = 'Shows IP and street addresses of recent visitors with visit counts and maps.';
$view->tag = 'IP Geolocation Views and Maps';
$view->base_table = 'accesslog';
$view->human_name = 'Visitor log';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Visitor log';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  2 => '2',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Chronological';
$handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Reverse chronological';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['grouping'] = 'country';
$handler->display->display_options['style_options']['columns'] = array(
  'hostname_1' => 'hostname_1',
  'hostname' => 'hostname',
  'timestamp_1' => 'timestamp_1',
  'timestamp' => 'timestamp',
  'latitude' => 'latitude',
  'longitude' => 'longitude',
  'formatted_address' => 'formatted_address',
  'php' => 'php',
  'country' => 'country',
);
$handler->display->display_options['style_options']['default'] = 'timestamp';
$handler->display->display_options['style_options']['info'] = array(
  'hostname_1' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'hostname' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
  ),
  'timestamp_1' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
  ),
  'timestamp' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
  ),
  'latitude' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'longitude' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'formatted_address' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'php' => array(
    'align' => '',
    'separator' => '',
  ),
  'country' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
);
$handler->display->display_options['style_options']['order'] = 'desc';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'No results text';
$handler->display->display_options['empty']['area']['content'] = '    No IP geolocation data found.

            Either the core <strong>Statistics</strong> module is not enabled or there is no data in the <strong>access log</strong>.
            Please visit the <a href="/admin/config/system/ip_geoloc">Configuration >> IP Geolocation</a> page for more diagnostics.';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['hostname_1']['id'] = 'hostname_1';
$handler->display->display_options['fields']['hostname_1']['table'] = 'accesslog';
$handler->display->display_options['fields']['hostname_1']['field'] = 'hostname';
$handler->display->display_options['fields']['hostname_1']['label'] = 'IP address';
$handler->display->display_options['fields']['hostname_1']['hide_alter_empty'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['hostname']['id'] = 'hostname';
$handler->display->display_options['fields']['hostname']['table'] = 'accesslog';
$handler->display->display_options['fields']['hostname']['field'] = 'hostname';
$handler->display->display_options['fields']['hostname']['group_type'] = 'count';
$handler->display->display_options['fields']['hostname']['label'] = 'No. visits';
$handler->display->display_options['fields']['hostname']['hide_alter_empty'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
$handler->display->display_options['fields']['timestamp_1']['table'] = 'accesslog';
$handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp_1']['group_type'] = 'min';
$handler->display->display_options['fields']['timestamp_1']['label'] = 'First visited';
$handler->display->display_options['fields']['timestamp_1']['hide_alter_empty'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'accesslog';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['group_type'] = 'max';
$handler->display->display_options['fields']['timestamp']['label'] = 'Last visited';
$handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = FALSE;
/* Field: IP geolocations: Latitude */
$handler->display->display_options['fields']['latitude']['id'] = 'latitude';
$handler->display->display_options['fields']['latitude']['table'] = 'ip_geoloc';
$handler->display->display_options['fields']['latitude']['field'] = 'latitude';
$handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
$handler->display->display_options['fields']['latitude']['hide_alter_empty'] = FALSE;
/* Field: IP geolocations: Longitude */
$handler->display->display_options['fields']['longitude']['id'] = 'longitude';
$handler->display->display_options['fields']['longitude']['table'] = 'ip_geoloc';
$handler->display->display_options['fields']['longitude']['field'] = 'longitude';
$handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
$handler->display->display_options['fields']['longitude']['hide_alter_empty'] = FALSE;
/* Field: IP geolocations: Address */
$handler->display->display_options['fields']['formatted_address']['id'] = 'formatted_address';
$handler->display->display_options['fields']['formatted_address']['table'] = 'ip_geoloc';
$handler->display->display_options['fields']['formatted_address']['field'] = 'formatted_address';
$handler->display->display_options['fields']['formatted_address']['hide_alter_empty'] = FALSE;
/* Field: IP geolocations: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'ip_geoloc';
$handler->display->display_options['fields']['country']['field'] = 'country';
$handler->display->display_options['fields']['country']['exclude'] = TRUE;
$handler->display->display_options['fields']['country']['hide_alter_empty'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = 'Map';
$handler->display->display_options['fields']['php']['hide_alter_empty'] = FALSE;
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['filters']['timestamp']['table'] = 'accesslog';
$handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['filters']['timestamp']['ui_name'] = 'Date range';
$handler->display->display_options['filters']['timestamp']['operator'] = 'between';
$handler->display->display_options['filters']['timestamp']['value'] = array(
  'min' => '-6 months',
  'max' => 'now',
  'type' => 'offset',
);
$handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
$handler->display->display_options['filters']['timestamp']['expose']['operator_id'] = 'timestamp_op';
$handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Date range between';
$handler->display->display_options['filters']['timestamp']['expose']['operator'] = 'timestamp_op';
$handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
$handler->display->display_options['filters']['timestamp']['expose']['remember'] = TRUE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'visitor-log';
$handler->display->display_options['menu']['title'] = 'Visitor log';
$handler->display->display_options['menu']['description'] = 'Shows IP and street addresses of recent visitors with visit counts and maps.';
$handler->display->display_options['menu']['weight'] = '0';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->display->display_options['block_description'] = 'Visitor log';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => '',
);
