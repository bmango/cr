<?php
/**
 * @file
 * ds_field_settings.node_job_full.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'node|job|full';
$ds_fieldsetting->entity_type = 'node';
$ds_fieldsetting->bundle = 'job';
$ds_fieldsetting->view_mode = 'full';
$ds_fieldsetting->settings = array(
  'pay' => array(
    'weight' => '10',
    'label' => 'above',
    'format' => 'default',
  ),
  'title' => array(
    'weight' => '3',
    'label' => 'above',
    'format' => 'default',
    'formatter_settings' => array(
      'link' => '0',
      'wrapper' => '',
      'class' => '',
      'empty_fields_handler' => '',
      'empty_fields_emptyfieldtext_empty_text' => '',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
