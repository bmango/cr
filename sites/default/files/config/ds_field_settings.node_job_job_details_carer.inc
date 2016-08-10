<?php
/**
 * @file
 * ds_field_settings.node_job_job_details_carer.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'node|job|job_details_carer';
$ds_fieldsetting->entity_type = 'node';
$ds_fieldsetting->bundle = 'job';
$ds_fieldsetting->view_mode = 'job_details_carer';
$ds_fieldsetting->settings = array(
  'carer_favourite_links' => array(
    'weight' => '0',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'contact_name' => array(
    'weight' => '37',
    'label' => 'above',
    'format' => 'default',
  ),
  'pay' => array(
    'weight' => '42',
    'label' => 'above',
    'format' => 'default',
  ),
  'send_message' => array(
    'weight' => '50',
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
