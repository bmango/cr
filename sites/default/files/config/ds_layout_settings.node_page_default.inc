<?php
/**
 * @file
 * ds_layout_settings.node_page_default.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'node|page|default';
$ds_layout->entity_type = 'node';
$ds_layout->bundle = 'page';
$ds_layout->view_mode = 'default';
$ds_layout->layout = 'bootstrap_12';
$ds_layout->settings = array(
  'regions' => array(
    'central' => array(
      0 => 'body',
      1 => 'field_image',
    ),
  ),
  'fields' => array(
    'body' => 'central',
    'field_image' => 'central',
  ),
  'classes' => array(
    'layout_class' => array(
      '' => '',
    ),
  ),
  'wrappers' => array(
    'central' => 'div',
  ),
  'layout_wrapper' => 'div',
  'layout_attributes' => '',
  'layout_attributes_merge' => 1,
  'layout_link_attribute' => '',
  'layout_link_custom' => '',
  'layout_disable_css' => FALSE,
  'hide_page_title' => '0',
  'page_option_title' => '',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
