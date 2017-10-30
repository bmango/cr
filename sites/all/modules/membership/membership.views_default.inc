<?php
/**
 * @file
 * membership.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function membership_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'employer_membership';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Employer Membership';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Employer Membership';
  $handler->display->display_options['css_class'] = 'employer-membership';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_membership_product_id']['id'] = 'field_membership_product_id';
  $handler->display->display_options['relationships']['field_membership_product_id']['table'] = 'field_data_field_membership';
  $handler->display->display_options['relationships']['field_membership_product_id']['field'] = 'field_membership_product_id';
  $handler->display->display_options['relationships']['field_membership_product_id']['label'] = 'Products';
  $handler->display->display_options['relationships']['field_membership_product_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Commerce Product: License duration */
  $handler->display->display_options['fields']['commerce_license_duration']['id'] = 'commerce_license_duration';
  $handler->display->display_options['fields']['commerce_license_duration']['table'] = 'field_data_commerce_license_duration';
  $handler->display->display_options['fields']['commerce_license_duration']['field'] = 'commerce_license_duration';
  $handler->display->display_options['fields']['commerce_license_duration']['relationship'] = 'field_membership_product_id';
  $handler->display->display_options['fields']['commerce_license_duration']['label'] = '';
  $handler->display->display_options['fields']['commerce_license_duration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_license_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_license_duration']['type'] = 'commerce_license_duration';
  $handler->display->display_options['fields']['commerce_license_duration']['settings'] = array(
    'field_formatter_label' => '',
  );
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_membership_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
    'field_formatter_label' => '',
  );
  /* Field: Content: Membership */
  $handler->display->display_options['fields']['field_membership']['id'] = 'field_membership';
  $handler->display->display_options['fields']['field_membership']['table'] = 'field_data_field_membership';
  $handler->display->display_options['fields']['field_membership']['field'] = 'field_membership';
  $handler->display->display_options['fields']['field_membership']['label'] = '';
  $handler->display->display_options['fields']['field_membership']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_membership']['settings'] = array(
    'show_quantity' => 0,
    'default_quantity' => '1',
    'combine' => 1,
    'show_single_product_attributes' => 0,
    'line_item_type' => 'product',
    'field_formatter_label' => '',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'membership' => 'membership',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'employer-membership';
  $export['employer_membership'] = $view;

  return $export;
}
