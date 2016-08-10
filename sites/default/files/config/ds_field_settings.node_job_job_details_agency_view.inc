<?php
/**
 * @file
 * ds_field_settings.node_job_job_details_agency_view.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'node|job|job_details_agency_view';
$ds_fieldsetting->entity_type = 'node';
$ds_fieldsetting->bundle = 'job';
$ds_fieldsetting->view_mode = 'job_details_agency_view';
$ds_fieldsetting->settings = array(
  'apply_here' => array(
    'weight' => '44',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'pay' => array(
    'weight' => '31',
    'label' => 'above',
    'format' => 'default',
  ),
  'published_status' => array(
    'weight' => '0',
    'label' => 'hidden',
    'format' => 'default',
  ),
  'title' => array(
    'weight' => '44',
    'label' => 'above',
    'format' => 'default',
    'formatter_settings' => array(
      'link' => '0',
      'wrapper' => 'h4',
      'class' => '',
      'field_formatter_label' => '',
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
