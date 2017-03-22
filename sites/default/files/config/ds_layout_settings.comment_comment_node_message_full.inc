<?php
/**
 * @file
 * ds_layout_settings.comment_comment_node_message_full.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'comment|comment_node_message|full';
$ds_layout->entity_type = 'comment';
$ds_layout->bundle = 'comment_node_message';
$ds_layout->view_mode = 'full';
$ds_layout->layout = 'ds_1col_wrapper';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'comment_body',
      1 => 'field_attachment',
      2 => 'sent',
    ),
  ),
  'fields' => array(
    'comment_body' => 'ds_content',
    'field_attachment' => 'ds_content',
    'sent' => 'ds_content',
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
