<?php
/**
 * @file
 * ds_view_modes.agency_membership.inc
 */

$api = '2.0.0';

$data = $ds_view_mode = new stdClass();
$ds_view_mode->api_version = 1;
$ds_view_mode->view_mode = 'agency_membership';
$ds_view_mode->label = 'Agency Membership';
$ds_view_mode->entities = array(
  'node' => 'node',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
