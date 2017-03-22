<?php
/**
 * @file
 * ds_field_settings.profile2_agency_agency.inc
 */

$api = '2.0.0';

$data = $ds_fieldsetting = new stdClass();
$ds_fieldsetting->api_version = 1;
$ds_fieldsetting->id = 'profile2|agency|agency';
$ds_fieldsetting->entity_type = 'profile2';
$ds_fieldsetting->bundle = 'agency';
$ds_fieldsetting->view_mode = 'agency';
$ds_fieldsetting->settings = array(
  'agency_membership_status' => array(
    'weight' => '0',
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
