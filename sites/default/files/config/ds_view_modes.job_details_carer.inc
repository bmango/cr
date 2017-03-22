<?php
/**
 * @file
 * ds_view_modes.job_details_carer.inc
 */

$api = '2.0.0';

$data = $ds_view_mode = new stdClass();
$ds_view_mode->api_version = 1;
$ds_view_mode->view_mode = 'job_details_carer';
$ds_view_mode->label = 'Job Details Carer';
$ds_view_mode->entities = array(
  'node' => 'node',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
