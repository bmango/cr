<?php
/**
 * @file
 * ds_layout_settings.ds_views_carers_profiles_page_fields_default.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'ds_views|carers_profiles-page-fields|default';
$ds_layout->entity_type = 'ds_views';
$ds_layout->bundle = 'carers_profiles-page-fields';
$ds_layout->view_mode = 'default';
$ds_layout->layout = 'ds_2col';
$ds_layout->settings = array(
  'regions' => array(
    'left' => array(
      0 => 'pid',
    ),
    'right' => array(
      1 => 'field_address_country',
    ),
  ),
  'fields' => array(
    'pid' => 'left',
    'field_address_country' => 'right',
  ),
  'classes' => array(
    'layout_class' => array(
      '' => '',
    ),
  ),
  'wrappers' => array(
    'left' => 'div',
    'right' => 'div',
  ),
  'layout_wrapper' => 'div',
  'layout_attributes' => '',
  'layout_attributes_merge' => 1,
  'layout_link_attribute' => '',
  'layout_link_custom' => '',
  'layout_disable_css' => 0,
  'hide_page_title' => '0',
  'page_option_title' => '',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
