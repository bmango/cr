<?php
/**
 * @file
 * views_view.agency_memberships.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'agency_memberships';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Agency Memberships';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Agency Memberships';
$handler->display->display_options['css_class'] = 'agency-memberships';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = '[field_license_category]';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = 'If you already have a current membership, your new membership will begin when your current one expires.';
$handler->display->display_options['header']['area']['format'] = 'full_html';
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['field_product_product_id']['id'] = 'field_product_product_id';
$handler->display->display_options['relationships']['field_product_product_id']['table'] = 'field_data_field_product';
$handler->display->display_options['relationships']['field_product_product_id']['field'] = 'field_product_product_id';
$handler->display->display_options['relationships']['field_product_product_id']['label'] = 'Product';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_license_category']['id'] = 'field_license_category';
$handler->display->display_options['fields']['field_license_category']['table'] = 'field_data_field_license_category';
$handler->display->display_options['fields']['field_license_category']['field'] = 'field_license_category';
$handler->display->display_options['fields']['field_license_category']['label'] = '';
$handler->display->display_options['fields']['field_license_category']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_license_category']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['settings'] = array(
  'field_formatter_label' => '',
);
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_product']['id'] = 'field_product';
$handler->display->display_options['fields']['field_product']['table'] = 'field_data_field_product';
$handler->display->display_options['fields']['field_product']['field'] = 'field_product';
$handler->display->display_options['fields']['field_product']['label'] = '';
$handler->display->display_options['fields']['field_product']['element_label_colon'] = FALSE;
/* Sort criterion: Broken/missing handler */
$handler->display->display_options['sorts']['field_license_category_tid']['id'] = 'field_license_category_tid';
$handler->display->display_options['sorts']['field_license_category_tid']['table'] = 'field_data_field_license_category';
$handler->display->display_options['sorts']['field_license_category_tid']['field'] = 'field_license_category_tid';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'product_display' => 'product_display',
);
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['operator'] = 'between';
$handler->display->display_options['filters']['nid']['value']['min'] = '106';
$handler->display->display_options['filters']['nid']['value']['max'] = '120';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = '[field_license_category]';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'agency_membership';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'product_display' => 'product_display',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['operator'] = 'between';
$handler->display->display_options['filters']['nid']['value']['min'] = '106';
$handler->display->display_options['filters']['nid']['value']['max'] = '120';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'product_display' => 'product_display',
);
$handler->display->display_options['filters']['type']['group'] = 1;
$handler->display->display_options['path'] = 'agency-memberships-2';

/* Display: Fields Block */
$handler = $view->new_display('block', 'Fields Block', 'block_2');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'text',
);
