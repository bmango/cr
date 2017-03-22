<?php
/**
 * @file
 * ds_view_modes.carer_details_employer.inc
 */

$api = '2.0.0';

$data = $ds_view_mode = new stdClass();
$ds_view_mode->api_version = 1;
$ds_view_mode->view_mode = 'carer_details_employer';
$ds_view_mode->label = 'Carer Details (employer)';
$ds_view_mode->entities = array(
  'profile2' => 'profile2',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
