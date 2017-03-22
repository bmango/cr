<?php
/**
 * @file
 * views_view.visitor_log_lite.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'visitor_log_lite';
$view->description = 'Shows IP and street addresses of recent visitors.';
$view->tag = 'IP Geolocation Views and Maps';
$view->base_table = 'accesslog';
$view->human_name = 'Visitor log (lite)';
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
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'hostname_1' => 'hostname_1',
  'timestamp' => 'timestamp',
  'formatted_address' => 'formatted_address',
);
$handler->display->display_options['style_options']['default'] = 'timestamp';
$handler->display->display_options['style_options']['info'] = array(
  'hostname_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
  ),
  'timestamp' => array(
    'sortable' => 0,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
  ),
  'formatted_address' => array(
    'sortable' => 0,
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
$handler->display->display_options['empty']['area']['content'] = ' No IP geolocation data found.

          Either the core <strong>Statistics</strong> module is not enabled or there is no data in the <strong>access log</strong>.
          Please visit the <a href="/admin/config/system/ip_geoloc">Configuration >> IP Geolocation</a> page for more diagnostics.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Field: Global: View result counter */
$handler->display->display_options['fields']['counter']['id'] = 'counter';
$handler->display->display_options['fields']['counter']['table'] = 'views';
$handler->display->display_options['fields']['counter']['field'] = 'counter';
$handler->display->display_options['fields']['counter']['label'] = '#';
$handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['counter']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['counter']['counter_start'] = '1';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['hostname_1']['id'] = 'hostname_1';
$handler->display->display_options['fields']['hostname_1']['table'] = 'accesslog';
$handler->display->display_options['fields']['hostname_1']['field'] = 'hostname';
$handler->display->display_options['fields']['hostname_1']['label'] = 'IP address';
$handler->display->display_options['fields']['hostname_1']['hide_alter_empty'] = FALSE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['table'] = 'accesslog';
$handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
$handler->display->display_options['fields']['timestamp']['group_type'] = 'max';
$handler->display->display_options['fields']['timestamp']['label'] = 'Last visited';
$handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = FALSE;
/* Field: IP geolocations: Address */
$handler->display->display_options['fields']['formatted_address']['id'] = 'formatted_address';
$handler->display->display_options['fields']['formatted_address']['table'] = 'ip_geoloc';
$handler->display->display_options['fields']['formatted_address']['field'] = 'formatted_address';
$handler->display->display_options['fields']['formatted_address']['hide_alter_empty'] = FALSE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'visitor-log-lite';
$handler->display->display_options['menu']['title'] = 'Visitor log';
$handler->display->display_options['menu']['description'] = 'Shows IP and street addresses of recent visitors.';
$handler->display->display_options['menu']['weight'] = '0';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->display->display_options['block_description'] = 'Visitor log (lite)';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => '',
);
