<?php
/**
 * @file
 * ds_field_settings.node_message_full.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'node|message|full';
$ds_fieldsetting->entity_type = 'node';
$ds_fieldsetting->bundle = 'message';
$ds_fieldsetting->view_mode = 'full';
$ds_fieldsetting->settings = array(
  'from' => array(
    'weight' => '3',
    'label' => 'above',
    'format' => 'default',
  ),
  'profile_name' => array(
    'weight' => '4',
    'label' => 'above',
    'format' => 'default',
  ),
  'sent_date' => array(
    'weight' => '6',
    'label' => 'above',
    'format' => 'default',
  ),
  'comments' => array(
    'weight' => '1',
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
