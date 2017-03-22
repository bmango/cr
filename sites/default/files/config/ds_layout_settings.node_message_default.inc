<?php
/**
 * @file
 * ds_layout_settings.node_message_default.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'node|message|default';
$ds_layout->entity_type = 'node';
$ds_layout->bundle = 'message';
$ds_layout->view_mode = 'default';
$ds_layout->layout = 'ds_1col_wrapper';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'field_to',
      1 => 'field_description',
      2 => 'field_attachment',
      3 => 'links',
      4 => 'comments',
    ),
  ),
  'fields' => array(
    'field_to' => 'ds_content',
    'field_description' => 'ds_content',
    'field_attachment' => 'ds_content',
    'links' => 'ds_content',
    'comments' => 'ds_content',
  ),
  'classes' => array(
    'layout_class' => array(
      '' => '',
    ),
  ),
  'wrappers' => array(
    'ds_content' => 'div',
  ),
  'layout_wrapper' => 'div',
  'layout_attributes' => '',
  'layout_attributes_merge' => 1,
  'layout_link_attribute' => '',
  'layout_link_custom' => '',
  'layout_disable_css' => FALSE,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
