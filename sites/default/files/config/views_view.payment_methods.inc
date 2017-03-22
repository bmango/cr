<?php
/**
 * @file
 * views_view.payment_methods.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'payment_methods';
$view->description = '';
$view->tag = 'payment';
$view->base_table = 'payment_method';
$view->human_name = 'Payment methods';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Payment methods';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'payment.payment_method.view.any';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['row_class'] = 'payment-method-[enabled_machine_name]';
$handler->display->display_options['style_options']['columns'] = array(
  'pmid' => 'pmid',
  'title_specific' => 'title_specific',
  'controller_title' => 'controller_title',
  'name' => 'name',
  'operations' => 'operations',
  'enabled_machine_name' => 'enabled_machine_name',
);
$handler->display->display_options['style_options']['default'] = 'title_specific';
$handler->display->display_options['style_options']['info'] = array(
  'pmid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title_specific' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'controller_title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'enabled_machine_name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['empty_table'] = TRUE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['content'] = 'There are no payment methods yet.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Relationship: Payment method: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'payment_method';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Field: Payment method: Payment method ID */
$handler->display->display_options['fields']['pmid']['id'] = 'pmid';
$handler->display->display_options['fields']['pmid']['table'] = 'payment_method';
$handler->display->display_options['fields']['pmid']['field'] = 'pmid';
$handler->display->display_options['fields']['pmid']['label'] = '';
$handler->display->display_options['fields']['pmid']['exclude'] = TRUE;
$handler->display->display_options['fields']['pmid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['pmid']['hide_alter_empty'] = FALSE;
/* Field: Payment method: Title (specific) */
$handler->display->display_options['fields']['title_specific']['id'] = 'title_specific';
$handler->display->display_options['fields']['title_specific']['table'] = 'payment_method';
$handler->display->display_options['fields']['title_specific']['field'] = 'title_specific';
$handler->display->display_options['fields']['title_specific']['label'] = 'Title';
$handler->display->display_options['fields']['title_specific']['hide_alter_empty'] = FALSE;
/* Field: Payment method: Payment method type title */
$handler->display->display_options['fields']['controller_title']['id'] = 'controller_title';
$handler->display->display_options['fields']['controller_title']['table'] = 'payment_method';
$handler->display->display_options['fields']['controller_title']['field'] = 'controller_title';
$handler->display->display_options['fields']['controller_title']['label'] = 'Type';
$handler->display->display_options['fields']['controller_title']['empty'] = 'Unavailable';
$handler->display->display_options['fields']['controller_title']['hide_alter_empty'] = FALSE;
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Owner';
/* Field: Payment method: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'payment_method';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['fields']['operations']['hide_alter_empty'] = FALSE;
/* Field: Payment method: Enabled (machine name) */
$handler->display->display_options['fields']['enabled_machine_name']['id'] = 'enabled_machine_name';
$handler->display->display_options['fields']['enabled_machine_name']['table'] = 'payment_method';
$handler->display->display_options['fields']['enabled_machine_name']['field'] = 'enabled_machine_name';
$handler->display->display_options['fields']['enabled_machine_name']['exclude'] = TRUE;
/* Sort criterion: Payment method: Title (specific) */
$handler->display->display_options['sorts']['title_specific']['id'] = 'title_specific';
$handler->display->display_options['sorts']['title_specific']['table'] = 'payment_method';
$handler->display->display_options['sorts']['title_specific']['field'] = 'title_specific';

/* Display: Administration page */
$handler = $view->new_display('page', 'Administration page', 'administration_page');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['path'] = 'admin/config/services/payment/method';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Payment methods';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'management';
$handler->display->display_options['tab_options']['type'] = 'normal';
$handler->display->display_options['tab_options']['title'] = 'Payment';
$handler->display->display_options['tab_options']['weight'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'payment',
);
