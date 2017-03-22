<?php
/**
 * @file
 * ds_field_settings.node_message_default.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'node|message|default';
$ds_fieldsetting->entity_type = 'node';
$ds_fieldsetting->bundle = 'message';
$ds_fieldsetting->view_mode = 'default';
$ds_fieldsetting->settings = array(
  'links' => array(
    'weight' => '3',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'comments' => array(
    'weight' => '4',
    'label' => 'hidden',
    'format' => 'default',
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
