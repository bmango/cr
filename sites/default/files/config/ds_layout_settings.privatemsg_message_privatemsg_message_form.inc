<?php
/**
 * @file
 * ds_layout_settings.privatemsg_message_privatemsg_message_form.inc
 */

$api = '2.0.0';

$data = $ds_layout = new stdClass();
$ds_layout->api_version = 1;
$ds_layout->id = 'privatemsg_message|privatemsg_message|form';
$ds_layout->entity_type = 'privatemsg_message';
$ds_layout->bundle = 'privatemsg_message';
$ds_layout->view_mode = 'form';
$ds_layout->layout = 'ds_1col_wrapper';
$ds_layout->settings = array(
  'regions' => array(
    'ds_content' => array(
      0 => 'subject',
      1 => 'body',
      2 => 'token',
    ),
    'hidden' => array(
      3 => 'recipient',
      4 => '_add_existing_field',
    ),
  ),
  'fields' => array(
    'subject' => 'ds_content',
    'body' => 'ds_content',
    'token' => 'ds_content',
    'recipient' => 'hidden',
    '_add_existing_field' => 'hidden',
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
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
